// Copyright 2023   (@CrossfireX)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define SERIAL_PIO_USE_PIO1
#define SERIAL_USART_TX_PIN GP0
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define EE_HANDS

#define MATRIX_ROWS 8 // Rows are doubled-up.
#define MATRIX_COLS 5
//If your board has a different pinout, first determine the GP or GPIO number of the pins, and use that instead of GP12/13 in config.h for SDA_PIN and SCL_PIN. 
//Then, determine whether they are on I2C peripheral 0 or 1 according to the pinout of the RP2040, and set the appropriate USE_I2C line to TRUE and the other to FALSE in mcuconf.h.
//QMK numbers the I2C peripherals differently when it comes to defining the I2C_DRIVER so add 1 (I2C0 is I2CD1 and I2C1 is I2CD2). 
//This way, you can use any appropriate pair of pins that are capable of I2C on the RP2040.
#define OLED_DISPLAY_128X64
#define OLED_TIMEOUT 60000
// #define OLED_SCROLL_TIMEOUT 0
// #define OLED_BRIGHTNESS 120

#define I2C_DRIVER I2CD2
#define I2C1_SDA_PIN GP26
#define I2C1_SCL_PIN GP27

// #define ENCODERS_PAD_A { GP4 }
// #define ENCODERS_PAD_B { GP3 }
// #define ENCODER_RESOLUTION 4