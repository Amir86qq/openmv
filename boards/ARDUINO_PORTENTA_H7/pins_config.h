/*
 * This file is part of the OpenMV project.
 *
 * Copyright (c) 2013-2024 Ibrahim Abdelkader <iabdalkader@openmv.io>
 * Copyright (c) 2013-2024 Kwabena W. Agyeman <kwagyeman@openmv.io>
 *
 * This work is licensed under the MIT license, see the file LICENSE for details.
 *
 * Pin definitions for custom STM32H743IIT6 board.
 */

// Camera DCMI Pins
OMV_GPIO_DEFINE(A, 4,  AF13, DCMI) // HSYNC
OMV_GPIO_DEFINE(A, 6,  AF13, DCMI) // PIXCLK
OMV_GPIO_DEFINE(A, 8,  AF1,  TIM1) // MCLK (Camera Clock)
OMV_GPIO_DEFINE(C, 6,  AF13, DCMI) // D0
OMV_GPIO_DEFINE(C, 7,  AF13, DCMI) // D1
OMV_GPIO_DEFINE(C, 8,  AF13, DCMI) // D2
OMV_GPIO_DEFINE(C, 9,  AF13, DCMI) // D3
OMV_GPIO_DEFINE(E, 4,  AF13, DCMI) // D4
OMV_GPIO_DEFINE(D, 3,  AF13, DCMI) // D5
OMV_GPIO_DEFINE(E, 5,  AF13, DCMI) // D6
OMV_GPIO_DEFINE(E, 6,  AF13, DCMI) // D7
OMV_GPIO_DEFINE(G, 9,  AF13, DCMI) // VSYNC

// Camera Control Pins
OMV_GPIO_DEFINE(E, 2,  NONE, GPIO) // RESET
OMV_GPIO_DEFINE(E, 3,  NONE, GPIO) // PWDN (Power Down)

// SPI3 (Used for SD Card)
OMV_GPIO_DEFINE(B, 3,  AF6,  SPI3) // SCK
OMV_GPIO_DEFINE(B, 4,  AF6,  SPI3) // MISO
OMV_GPIO_DEFINE(B, 5,  AF6,  SPI3) // MOSI
OMV_GPIO_DEFINE(I, 2,  NONE, GPIO) // CS1 (SD Card Chip Select)

// I2C1 (For Camera SCCB)
OMV_GPIO_DEFINE(B, 6,  AF4,  I2C1) // SCL_1
OMV_GPIO_DEFINE(B, 7,  AF4,  I2C1) // SDA_1

// I2C2 (For sensors/expansion)
OMV_GPIO_DEFINE(H, 4,  AF4,  I2C2) // SCL_2
OMV_GPIO_DEFINE(H, 5,  AF4,  I2C2) // SDA_2

// Misc GPIOs and LED
OMV_GPIO_DEFINE(I, 7,  NONE, GPIO) // LED (Active from schematic)
OMV_GPIO_DEFINE(B, 8,  NONE, GPIO) // GPIO
OMV_GPIO_DEFINE(G, 13, NONE, GPIO) // GPIO
OMV_GPIO_DEFINE(I, 4,  NONE, GPIO) // GPIO
OMV_GPIO_DEFINE(I, 5,  NONE, GPIO) // GPIO
OMV_GPIO_DEFINE(I, 6,  NONE, GPIO) // GPIO
OMV_GPIO_DEFINE(I, 8,  NONE, GPIO) // GPIO
