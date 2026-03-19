// Copyright 2024 m1cha3l
// SPDX-License-Identifier: GPL-2.0-or-later

#include "m1cha3l_s_pad.h"

#ifdef RGB_MATRIX_ENABLE
#    include "rgb_matrix.h"

/*
 * LED index → key matrix position and physical (x, y) location.
 *
 * The four SK6812MINI-E LEDs sit under the four MX switches in a single row.
 * The encoder push-button (matrix col 4) has no LED (NO_LED).
 *
 * Physical coordinate space: x ∈ [0, 224], y ∈ [0, 64].
 * Four evenly-spaced keys across the full width give x = 0, 75, 149, 224.
 */
led_config_t g_led_config = {
    {
        /* Key matrix → LED index (row 0, cols 0-4) */
        {0, 1, 2, 3, NO_LED}
    },
    {
        /* Physical LED positions (x, y) */
        {  0, 32},
        { 75, 32},
        {149, 32},
        {224, 32}
    },
    {
        /* LED flags – all LEDs are under keyswitches */
        LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT
    }
};
#endif
