/*
 * Copyright (c) 2012, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// File: ecspi1_iomux_config.c

/* ------------------------------------------------------------------------------
 * <auto-generated>
 *     This code was generated by a tool.
 *     Runtime Version:3.4.0.0
 *
 *     Changes to this file may cause incorrect behavior and will be lost if
 *     the code is regenerated.
 * </auto-generated>
 * ------------------------------------------------------------------------------
*/

#include "iomux_config.h"
#include "registers/regsiomuxc.h"

// Function to configure IOMUXC for ecspi1 module.
void ecspi1_iomux_config(void)
{
    // Config ecspi1.ECSPI1_MISO to pad ECSPI1_MISO(M19)
    // HW_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_MISO_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MISO_WR(0x000110B0);
    // HW_IOMUXC_ECSPI1_MISO_SELECT_INPUT_WR(0x00000000);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_ECSPI1_MISO(0x020E0068)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: ecspi1 signal: ECSPI1_MISO
    //     ALT1 (1) - Select instance: audmux signal: AUD4_TXFS
    //     ALT2 (2) - Select instance: uart5 signal: UART5_RTS_B
    //     ALT3 (3) - Select instance: epdc signal: EPDC_BDR0
    //     ALT4 (4) - Select instance: usdhc2 signal: SD2_WP
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO10
    HW_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_MISO_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_MISO_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_MISO_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MISO(0x020E0358)
    //   LVE [22] - Low Voltage Enable Field Reset: DISABLED
    //     DISABLED (0) - High Voltage
    //     ENABLED (1) - Low Voltage
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PD
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MISO_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MISO_LVE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MISO_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MISO_PUS_V(100K_OHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MISO_PUE_V(KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MISO_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MISO_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MISO_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MISO_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MISO_SRE_V(SLOW));
    // Pad ECSPI1_MISO is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_ECSPI1_MISO_SELECT_INPUT(0x020E0684)
    //   DAISY [0] - MUX Mode Select Field Reset: ECSPI1_MISO_ALT0
    //               Selecting Pads Involved in Daisy Chain.
    //     ECSPI1_MISO_ALT0 (0) - Select signal ecspi1 ECSPI1_MISO as input from pad ECSPI1_MISO(ALT0).
    //     LCD_DATA01_ALT1 (1) - Select signal ecspi1 ECSPI1_MISO as input from pad LCD_DATA01(ALT1).
    HW_IOMUXC_ECSPI1_MISO_SELECT_INPUT_WR(
            BF_IOMUXC_ECSPI1_MISO_SELECT_INPUT_DAISY_V(ECSPI1_MISO_ALT0));

    // Config ecspi1.ECSPI1_MOSI to pad ECSPI1_MOSI(N20)
    // HW_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_MOSI_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MOSI_WR(0x000110B0);
    // HW_IOMUXC_ECSPI1_MOSI_SELECT_INPUT_WR(0x00000000);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_ECSPI1_MOSI(0x020E006C)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: ecspi1 signal: ECSPI1_MOSI
    //     ALT1 (1) - Select instance: audmux signal: AUD4_TXC
    //     ALT2 (2) - Select instance: uart5 signal: UART5_TX_DATA
    //     ALT3 (3) - Select instance: epdc signal: EPDC_VCOM1
    //     ALT4 (4) - Select instance: usdhc2 signal: SD2_VSELECT
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO09
    HW_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_MOSI_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_MOSI_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_MOSI_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MOSI(0x020E035C)
    //   LVE [22] - Low Voltage Enable Field Reset: DISABLED
    //     DISABLED (0) - High Voltage
    //     ENABLED (1) - Low Voltage
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PD
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MOSI_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MOSI_LVE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MOSI_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MOSI_PUS_V(100K_OHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MOSI_PUE_V(KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MOSI_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MOSI_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MOSI_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MOSI_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_MOSI_SRE_V(SLOW));
    // Pad ECSPI1_MOSI is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_ECSPI1_MOSI_SELECT_INPUT(0x020E0688)
    //   DAISY [0] - MUX Mode Select Field Reset: ECSPI1_MOSI_ALT0
    //               Selecting Pads Involved in Daisy Chain.
    //     ECSPI1_MOSI_ALT0 (0) - Select signal ecspi1 ECSPI1_MOSI as input from pad ECSPI1_MOSI(ALT0).
    //     LCD_DATA00_ALT1 (1) - Select signal ecspi1 ECSPI1_MOSI as input from pad LCD_DATA00(ALT1).
    HW_IOMUXC_ECSPI1_MOSI_SELECT_INPUT_WR(
            BF_IOMUXC_ECSPI1_MOSI_SELECT_INPUT_DAISY_V(ECSPI1_MOSI_ALT0));

    // Config ecspi1.ECSPI1_SCLK to pad ECSPI1_SCLK(N19)
    // HW_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_SCLK_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK_WR(0x000110B0);
    // HW_IOMUXC_ECSPI1_CSPI_CLK_IN_SELECT_INPUT_WR(0x00000000);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_ECSPI1_SCLK(0x020E0070)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: ecspi1 signal: ECSPI1_SCLK
    //     ALT1 (1) - Select instance: audmux signal: AUD4_TXD
    //     ALT2 (2) - Select instance: uart5 signal: UART5_RX_DATA
    //     ALT3 (3) - Select instance: epdc signal: EPDC_VCOM0
    //     ALT4 (4) - Select instance: usdhc2 signal: SD2_RESET
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO08
    //     ALT6 (6) - Select instance: usb signal: USB_OTG2_OC
    HW_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_SCLK_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_SCLK_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_SCLK_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK(0x020E0360)
    //   LVE [22] - Low Voltage Enable Field Reset: DISABLED
    //     DISABLED (0) - High Voltage
    //     ENABLED (1) - Low Voltage
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PD
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK_LVE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK_PUS_V(100K_OHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK_PUE_V(KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SCLK_SRE_V(SLOW));
    // Pad ECSPI1_SCLK is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_ECSPI1_CSPI_CLK_IN_SELECT_INPUT(0x020E067C)
    //   DAISY [0] - MUX Mode Select Field Reset: ECSPI1_SCLK_ALT0
    //               Selecting Pads Involved in Daisy Chain.
    //     ECSPI1_SCLK_ALT0 (0) - Select signal ecspi1 ECSPI1_SCLK as input from pad ECSPI1_SCLK(ALT0).
    //     LCD_DATA03_ALT1 (1) - Select signal ecspi1 ECSPI1_SCLK as input from pad LCD_DATA03(ALT1).
    HW_IOMUXC_ECSPI1_CSPI_CLK_IN_SELECT_INPUT_WR(
            BF_IOMUXC_ECSPI1_CSPI_CLK_IN_SELECT_INPUT_DAISY_V(ECSPI1_SCLK_ALT0));

    // Config ecspi1.ECSPI1_SS0 to pad ECSPI1_SS0(M21)
    // HW_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_SS0_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0_WR(0x000110B0);
    // HW_IOMUXC_ECSPI1_SS0_SELECT_INPUT_WR(0x00000000);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_ECSPI1_SS0(0x020E0074)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: ecspi1 signal: ECSPI1_SS0
    //     ALT1 (1) - Select instance: audmux signal: AUD4_RXD
    //     ALT2 (2) - Select instance: uart5 signal: UART5_CTS_B
    //     ALT3 (3) - Select instance: epdc signal: EPDC_BDR1
    //     ALT4 (4) - Select instance: usdhc2 signal: SD2_CD_B
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO11
    //     ALT6 (6) - Select instance: usb signal: USB_OTG2_PWR
    HW_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_SS0_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_SS0_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_ECSPI1_SS0_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0(0x020E0364)
    //   LVE [22] - Low Voltage Enable Field Reset: DISABLED
    //     DISABLED (0) - High Voltage
    //     ENABLED (1) - Low Voltage
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PD
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0_LVE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0_PUS_V(100K_OHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0_PUE_V(KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_ECSPI1_SS0_SRE_V(SLOW));
    // Pad ECSPI1_SS0 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_ECSPI1_SS0_SELECT_INPUT(0x020E068C)
    //   DAISY [0] - MUX Mode Select Field Reset: ECSPI1_SS0_ALT0
    //               Selecting Pads Involved in Daisy Chain.
    //     ECSPI1_SS0_ALT0 (0) - Select signal ecspi1 ECSPI1_SS0 as input from pad ECSPI1_SS0(ALT0).
    //     LCD_DATA02_ALT1 (1) - Select signal ecspi1 ECSPI1_SS0 as input from pad LCD_DATA02(ALT1).
    HW_IOMUXC_ECSPI1_SS0_SELECT_INPUT_WR(
            BF_IOMUXC_ECSPI1_SS0_SELECT_INPUT_DAISY_V(ECSPI1_SS0_ALT0));
}