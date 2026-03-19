// Copyright 2024 m1cha3l
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// -------------------------------------------------------------------------
// I2C – OLED SSD1306 128×32 on XIAO RP2040 D4 (GP6 SDA) / D5 (GP7 SCL)
// GP6 and GP7 are wired to RP2040's I2C1 peripheral.
// -------------------------------------------------------------------------
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7

// OLED display size (128 × 32 = 0.91")
#define OLED_DISPLAY_128X32

// -------------------------------------------------------------------------
// RGB Matrix – 4 × SK6812MINI-E (one per switch, WS2812-compatible, GRB)
// -------------------------------------------------------------------------
#define RGB_MATRIX_LED_COUNT 4

// SK6812 uses GRB byte order (same as WS2812)
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_GRB

// Cap brightness to protect the LEDs and keep USB current draw low
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150

// Default to a gentle breathing effect on first boot
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_BREATHING

// -------------------------------------------------------------------------
// Encoder
// -------------------------------------------------------------------------
#define ENCODER_RESOLUTION 4
