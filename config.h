// Copyright 2023   (@CrossfireX)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define SERIAL_PIO_USE_PIO1
#define SERIAL_USART_TX_PIN GP0
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U

#define EE_HANDS
// #define MASTER_LEFT
// #define MASTER_RIGHT

#define MATRIX_ROWS 8 // Rows are doubled-up.
#define MATRIX_COLS 5
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
