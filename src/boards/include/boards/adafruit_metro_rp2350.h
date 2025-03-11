/*
 * Copyright (c) 2025 Tyeth Gundry for Adafruit Industries
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

// -----------------------------------------------------
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
// -----------------------------------------------------

// This header may be included by other board headers as "boards/adafruit_metro_rp2350.h"

// pico_cmake_set PICO_PLATFORM=rp2350

#ifndef _BOARDS_ADAFRUIT_METRO_RP2350_NOPSRAM_H
#define _BOARDS_ADAFRUIT_METRO_RP2350_NOPSRAM_H

// On some samples, the xosc can take longer to stabilize than is usual
#ifndef PICO_XOSC_STARTUP_DELAY_MULTIPLIER
#define PICO_XOSC_STARTUP_DELAY_MULTIPLIER 64
#endif

// For board detection
#define ADAFRUIT_METRO_RP2350
#define ADAFRUIT_METRO_RP2350_NOPSRAM
#define ADAFRUIT_METRO_RP2350_16MB_NOPSRAM

// --- RP2350 VARIANT ---
#define PICO_RP2350B 1

// --- "Boot0" button (check if defines correct - from macropad + assumed) ---
#ifndef ADAFRUIT_METRO_BOOT0_PIN
#define ADAFRUIT_METRO_BOOT0_PIN 24
#endif
#ifndef PICO_DEFAULT_BUTTON
#define PICO_DEFAULT_BUTTON 24
#endif


// --- UART ---
#ifndef PICO_DEFAULT_UART
#define PICO_DEFAULT_UART 0
#endif
#ifndef PICO_DEFAULT_UART_TX_PIN
#define PICO_DEFAULT_UART_TX_PIN 0
#endif
#ifndef PICO_DEFAULT_UART_RX_PIN
#define PICO_DEFAULT_UART_RX_PIN 1
#endif

// --- LED ---
#ifndef PICO_DEFAULT_LED_PIN
#define PICO_DEFAULT_LED_PIN 23
#endif

#ifndef PICO_DEFAULT_WS2812_PIN
#define PICO_DEFAULT_WS2812_PIN 25
#endif

// --- I2C ---
#ifndef PICO_DEFAULT_I2C
#define PICO_DEFAULT_I2C 1
#endif
#ifndef PICO_DEFAULT_I2C_SDA_PIN
#define PICO_DEFAULT_I2C_SDA_PIN 20
#endif
#ifndef PICO_DEFAULT_I2C_SCL_PIN
#define PICO_DEFAULT_I2C_SCL_PIN 21
#endif

// --- SPI ---
// // SDIO
// #define PIN_SD_CLK       (34u)
// #define PIN_SD_CMD_MOSI  (35u)
// #define PIN_SD_DAT0_MISO (36u)
// #define PIN_SD_DAT1      (37u)
// #define PIN_SD_DAT2      (38u)
// #define PIN_SD_DAT3_CS   (39u)
// #define PIN_SD_DETECT    (40u)
// // SPI  SDCARD
// #define __SPI0_DEVICE   spi1
// #define PIN_SPI1_MISO  (36u)
// #define PIN_SPI1_MOSI  (35u)
// #define PIN_SPI1_SCK   (34u)
// #define PIN_SPI1_SS    (39u)

// #define __SPI1_DEVICE   spi0
// #define PIN_SPI0_MISO  (28u)
// #define PIN_SPI0_MOSI  (31u)
// #define PIN_SPI0_SCK   (30u)
// #define PIN_SPI0_SS    (29u)

// // USB host connector
// #define PIN_USB_HOST_DP (32u)
// #define PIN_USB_HOST_DM (33u)
// #define PIN_5V_EN       (29u)
// #define PIN_5V_EN_STATE (1u)

#ifndef PICO_DEFAULT_SPI
#define PICO_DEFAULT_SPI 0
#endif
#ifndef PICO_DEFAULT_SPI_SCK_PIN
#define PICO_DEFAULT_SPI_SCK_PIN 30
#endif
#ifndef PICO_DEFAULT_SPI_TX_PIN
#define PICO_DEFAULT_SPI_TX_PIN 31
#endif
#ifndef PICO_DEFAULT_SPI_RX_PIN
#define PICO_DEFAULT_SPI_RX_PIN 28
#endif

// --- FLASH ---

#ifndef PICO_FLASH_SPI_CLKDIV
#define PICO_FLASH_SPI_CLKDIV 2
#endif

// pico_cmake_set_default PICO_FLASH_SIZE_BYTES = (16 * 1024 * 1024)
#ifndef PICO_FLASH_SIZE_BYTES
#define PICO_FLASH_SIZE_BYTES (16 * 1024 * 1024)
#endif

// --- MISSING BITS ---
// // PSRAM
// #define RP2350_PSRAM_CS         (47u)
// #define RP2350_PSRAM_MAX_SCK_HZ (109*1000*1000)

// // DVI connector
// #define PIN_CKN (15u)
// #define PIN_CKP (14u)
// #define PIN_D0N (19u)
// #define PIN_D0P (18u)
// #define PIN_D1N (17u)
// #define PIN_D1P (16u)
// #define PIN_D2N (13u)
// #define PIN_D2P (12u)


// --- Unknown replacement bits ---
// // pico_cmake_set_default PICO_RP2350_A2_SUPPORTED = 1
// #ifndef PICO_RP2350_A2_SUPPORTED
// #define PICO_RP2350_A2_SUPPORTED 1
// #endif

#endif
