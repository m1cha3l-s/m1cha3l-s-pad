// Copyright 2024 m1cha3l
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

/*
 * m1cha3l's pad – default keymap
 *
 * Physical layout (left to right):
 *   [K1] [K2] [K3] [K4] [ENC]
 *
 * Layer 0 – Base:
 *   K1  = Play/Pause   (KC_MPLY)
 *   K2  = Mute         (KC_MUTE)
 *   K3  = Copy         (Ctrl+C)
 *   K4  = Paste        (Ctrl+V)
 *   ENC = Toggle Fn Layer (TG(FN))
 *   Encoder CW  = Volume Up
 *   Encoder CCW = Volume Down
 *
 * Layer 1 – Fn (hold ENC to access via MO, or tap to toggle with TG):
 *   K1  = RGB mode previous
 *   K2  = RGB mode next
 *   K3  = RGB brightness down
 *   K4  = RGB brightness up
 *   ENC = (transparent)
 *   Encoder CW  = Hue +
 *   Encoder CCW = Hue −
 */

enum layers {
    BASE = 0,
    FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        KC_MPLY,    KC_MUTE,    LCTL(KC_C), LCTL(KC_V), TG(FN)
    ),
    [FN] = LAYOUT(
        RGB_RMOD,   RGB_MOD,    RGB_VAD,    RGB_VAI,    TG(FN)
    ),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [FN]   = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI)  },
};
#endif

#ifdef OLED_ENABLE
/*
 * OLED display – 128×32 SSD1306
 *
 * Top line:    keyboard name
 * Bottom line: active layer name
 */
bool oled_task_user(void) {
    oled_write_P(PSTR("m1cha3l's pad\n"), false);

    switch (get_highest_layer(layer_state)) {
        case BASE:
            oled_write_P(PSTR("Layer: Base"), false);
            break;
        case FN:
            oled_write_P(PSTR("Layer: Fn  "), false);
            break;
        default:
            oled_write_P(PSTR("Layer: ???  "), false);
            break;
    }

    return false;
}
#endif
