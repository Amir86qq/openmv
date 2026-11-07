#ifndef MICROPY_INCLUDED_STM32H7XX_HAL_CONF_H
#define MICROPY_INCLUDED_STM32H7XX_HAL_CONF_H

// --- SDRAM Configuration ---
#define MICROPY_HW_SDRAM_SIZE                  (32 * 1024 * 1024) // 32MB
#define MICROPY_HW_SDRAM_STARTUP_TEST          (1) 

// --- SDRAM Timing (for 100MHz Clock) ---
#define MICROPY_HW_SDRAM_TIMING_TMRD           (2)
#define MICROPY_HW_SDRAM_TIMING_TXSR           (7)
#define MICROPY_HW_SDRAM_TIMING_TRAS           (5)
#define MICROPY_HW_SDRAM_TIMING_TRC            (7)
#define MICROPY_HW_SDRAM_TIMING_TWR            (2)
#define MICROPY_HW_SDRAM_TIMING_TRP            (2)
#define MICROPY_HW_SDRAM_TIMING_TRCD           (2)

#define MICROPY_HW_SDRAM_REFRESH_COUNT         (0x0603)
#define MICROPY_HW_SDRAM_CAS_LATENCY           (3)
#define MICROPY_HW_SDRAM_WIDTH                 (16)
#define MICROPY_HW_SDRAM_BANKS                 (4)
#define MICROPY_HW_SDRAM_ROW_BITS              (13)
#define MICROPY_HW_SDRAM_COL_BITS              (9)

// --- FMC Pins ---
// 
#define MICROPY_HW_FMC_SDCKE0                  (pin_C3)
#define MICROPY_HW_FMC_SDNE0                   (pin_C2)
#define MICROPY_HW_FMC_SDCLK                   (pin_F10)
#define MICROPY_HW_FMC_SDNRAS                  (pin_F11)
#define MICROPY_HW_FMC_SDNCAS                  (pin_G15)
#define MICROPY_HW_FMC_SDNWE                   (pin_H5)
#define MICROPY_HW_FMC_BA0                     (pin_G4)
#define MICROPY_HW_FMC_BA1                     (pin_G5)
#define MICROPY_HW_FMC_A0                      (pin_F14)
#define MICROPY_HW_FMC_A1                      (pin_F15)
#define MICROPY_HW_FMC_A2                      (pin_G0)
#define MICROPY_HW_FMC_A3                      (pin_G1)
#define MICROPY_HW_FMC_A4                      (pin_G2)
#define MICROPY_HW_FMC_A5                      (pin_H2)
#define MICROPY_HW_FMC_A6                      (pin_H3)
#define MICROPY_HW_FMC_A7                      (pin_H8)
#define MICROPY_HW_FMC_A8                      (pin_H9)
#define MICROPY_HW_FMC_A9                      (pin_H10)
#define MICROPY_HW_FMC_A10                     (pin_H11)
#define MICROPY_HW_FMC_A11                     (pin_H12)
#define MICROPY_HW_FMC_A12                     (pin_H13)
#define MICROPY_HW_FMC_D0                      (pin_D14)
#define MICROPY_HW_FMC_D1                      (pin_D15)
#define MICROPY_HW_FMC_D2                      (pin_D0)
#define MICROPY_HW_FMC_D3                      (pin_D1)
#define MICROPY_HW_FMC_D4                      (pin_E7)
#define MICROPY_HW_FMC_D5                      (pin_E8)
#define MICROPY_HW_FMC_D6                      (pin_E9)
#define MICROPY_HW_FMC_D7                      (pin_E10)
#define MICROPY_HW_FMC_D8                      (pin_E11)
#define MICROPY_HW_FMC_D9                      (pin_E12)
#define MICROPY_HW_FMC_D10                     (pin_E13)
#define MICROPY_HW_FMC_D11                     (pin_E14)
#define MICROPY_HW_FMC_D12                     (pin_E15)
#define MICROPY_HW_FMC_D13                     (pin_D8)
#define MICROPY_HW_FMC_D14                     (pin_D9)
#define MICROPY_HW_FMC_D15                     (pin_D10)
#define MICROPY_HW_FMC_NBL0                    (pin_E0)
#define MICROPY_HW_FMC_NBL1                    (pin_E1)

#endif
