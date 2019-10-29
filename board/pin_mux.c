/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v6.0
processor: MKL16Z64xxx4
package_id: MKL16Z64VLH4
mcu_data: ksdk2_0
processor_version: 6.0.0
pin_labels:
- {pin_num: '35', pin_signal: ADC0_SE8/TSI0_CH0/PTB0/LLWU_P5/I2C0_SCL/TPM1_CH0, label: LED, identifier: LED_BACKLIGHT}
- {pin_num: '1', pin_signal: PTE0/SPI1_MISO/UART1_TX/RTC_CLKOUT/CMP0_OUT/I2C1_SDA, label: TX-SW (Radio Module)}
- {pin_num: '2', pin_signal: PTE1/SPI1_MOSI/UART1_RX/SPI1_MISO/I2C1_SCL, label: RX-SW (Radio Module)}
- {pin_num: '7', pin_signal: ADC0_DP2/ADC0_SE2/PTE18/SPI0_MOSI/I2C0_SDA/SPI0_MISO, label: LCD-D0}
- {pin_num: '8', pin_signal: ADC0_DM2/ADC0_SE6a/PTE19/SPI0_MISO/I2C0_SCL/SPI0_MOSI, label: LCD-D1}
- {pin_num: '9', pin_signal: ADC0_DP0/ADC0_SE0/PTE20/TPM1_CH0/UART0_TX, label: LCD-D2}
- {pin_num: '10', pin_signal: ADC0_DM0/ADC0_SE4a/PTE21/TPM1_CH1/UART0_RX, label: LCD-D3}
- {pin_num: '11', pin_signal: ADC0_DP3/ADC0_SE3/PTE22/TPM2_CH0/UART2_TX, label: Ch5 VrA}
- {pin_num: '12', pin_signal: ADC0_DM3/ADC0_SE7a/PTE23/TPM2_CH1/UART2_RX, label: Ch6 VrB}
- {pin_num: '17', pin_signal: CMP0_IN5/ADC0_SE4b/PTE29/TPM0_CH2/TPM_CLKIN0, label: Battery Voltage}
- {pin_num: '18', pin_signal: DAC0_OUT/ADC0_SE23/CMP0_IN4/PTE30/TPM0_CH3/TPM_CLKIN1, label: LCD-RO}
- {pin_num: '19', pin_signal: PTE31/TPM0_CH4, label: LCD-RW}
- {pin_num: '20', pin_signal: PTE24/TPM0_CH0/I2C0_SCL, label: SCL}
- {pin_num: '21', pin_signal: PTE25/TPM0_CH1/I2C0_SDA, label: SDA}
- {pin_num: '22', pin_signal: TSI0_CH1/PTA0/TPM0_CH5/SWD_CLK, label: SWD-CLK}
- {pin_num: '24', pin_signal: TSI0_CH3/PTA2/UART0_TX/TPM2_CH1, label: PPM-IN, identifier: PPM_IN}
- {pin_num: '23', pin_signal: TSI0_CH2/PTA1/UART0_RX/TPM2_CH0, label: PPM-OUT, identifier: PPM_OUT}
- {pin_num: '25', pin_signal: TSI0_CH4/PTA3/I2C1_SCL/TPM0_CH0/SWD_DIO, label: SWD-DIO}
- {pin_num: '28', pin_signal: PTA12/TPM1_CH0/I2S0_TXD0, label: Buzzer, identifier: Buzzer}
- {pin_num: '27', pin_signal: PTA5/TPM0_CH2/I2S0_TX_BCLK, label: Bind, identifier: Bind}
- {pin_num: '26', pin_signal: TSI0_CH5/PTA4/I2C1_SDA/TPM0_CH1/NMI_b, label: LCD-CS}
- {pin_num: '29', pin_signal: PTA13/TPM1_CH1/I2S0_TX_FS, label: LCD-RS}
- {pin_num: '32', pin_signal: EXTAL0/PTA18/UART1_RX/TPM_CLKIN0, label: Crystal}
- {pin_num: '33', pin_signal: XTAL0/PTA19/UART1_TX/TPM_CLKIN1/LPTMR0_ALT1, label: Crystal}
- {pin_num: '31', pin_signal: VSS43, label: GND}
- {pin_num: '30', pin_signal: VDD42, label: +3.3V}
- {pin_num: '34', pin_signal: PTA20/RESET_b, label: RESET}
- {pin_num: '36', pin_signal: ADC0_SE9/TSI0_CH6/PTB1/I2C0_SDA/TPM1_CH1, label: Buttons R1, identifier: BUTTON_R1}
- {pin_num: '37', pin_signal: ADC0_SE12/TSI0_CH7/PTB2/I2C0_SCL/TPM2_CH0, label: Buttons R2, identifier: BUTTON_R2}
- {pin_num: '38', pin_signal: ADC0_SE13/TSI0_CH8/PTB3/I2C0_SDA/TPM2_CH1, label: Buttons R3, identifier: BUTTON_R3}
- {pin_num: '39', pin_signal: TSI0_CH9/PTB16/SPI1_MOSI/UART0_RX/TPM_CLKIN0/SPI1_MISO, label: Buttons L1, identifier: BUTTON_L1}
- {pin_num: '40', pin_signal: TSI0_CH10/PTB17/SPI1_MISO/UART0_TX/TPM_CLKIN1/SPI1_MOSI, label: Buttons L2, identifier: BUTTON_L2}
- {pin_num: '41', pin_signal: TSI0_CH11/PTB18/TPM2_CH0/I2S0_TX_BCLK, label: Buttons L3, identifier: BUTTON_L3}
- {pin_num: '42', pin_signal: TSI0_CH12/PTB19/TPM2_CH1/I2S0_TX_FS, label: Buttons L4, identifier: BUTTON_L4}
- {pin_num: '43', pin_signal: ADC0_SE14/TSI0_CH13/PTC0/EXTRG_IN/CMP0_OUT/I2S0_TXD0, label: SwC}
- {pin_num: '44', pin_signal: ADC0_SE15/TSI0_CH14/PTC1/LLWU_P6/RTC_CLKIN/I2C1_SCL/TPM0_CH0/I2S0_TXD0, label: SwB}
- {pin_num: '45', pin_signal: ADC0_SE11/TSI0_CH15/PTC2/I2C1_SDA/TPM0_CH1/I2S0_TX_FS, label: Ch4 Yaw}
- {pin_num: '46', pin_signal: PTC3/LLWU_P7/UART1_RX/TPM0_CH2/CLKOUT/I2S0_TX_BCLK, label: 'RF1 or RFI (Radio Module '}
- {pin_num: '47', pin_signal: VSS63, label: GND}
- {pin_num: '48', pin_signal: VDD64, label: +3.3V}
- {pin_num: '49', pin_signal: PTC4/LLWU_P8/SPI0_PCS0/UART1_TX/TPM0_CH3/I2S0_MCLK, label: SCS (Radio Module), identifier: SOFT_SPI_CS}
- {pin_num: '50', pin_signal: PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/I2S0_RXD0/CMP0_OUT, label: SCK (Radio Module), identifier: SOFT_SPI_SCK}
- {pin_num: '51', pin_signal: CMP0_IN0/PTC6/LLWU_P10/SPI0_MOSI/EXTRG_IN/I2S0_RX_BCLK/SPI0_MISO/I2S0_MCLK, label: SDIO (Radio Module), identifier: SOFT_SPI_MOSI}
- {pin_num: '52', pin_signal: CMP0_IN1/PTC7/SPI0_MISO/I2S0_RX_FS/SPI0_MOSI, label: RF0 or RFO (Radio Module PA Output)}
- {pin_num: '53', pin_signal: CMP0_IN2/PTC8/I2C0_SCL/TPM0_CH4/I2S0_MCLK, label: LCD-D4}
- {pin_num: '54', pin_signal: CMP0_IN3/PTC9/I2C0_SDA/TPM0_CH5/I2S0_RX_BCLK, label: LCD-D5}
- {pin_num: '55', pin_signal: PTC10/I2C1_SCL/I2S0_RX_FS, label: LCD-D6}
- {pin_num: '56', pin_signal: PTC11/I2C1_SDA/I2S0_RXD0, label: LCD-D7}
- {pin_num: '57', pin_signal: PTD0/SPI0_PCS0/TPM0_CH0, label: SwA, identifier: SwA}
- {pin_num: '58', pin_signal: ADC0_SE5b/PTD1/SPI0_SCK/TPM0_CH1, label: Ch3 Throttle}
- {pin_num: '60', pin_signal: PTD3/SPI0_MISO/UART2_TX/TPM0_CH3/SPI0_MOSI, label: GIO1 (Radio Module), identifier: SOFT_SPI_MISO}
- {pin_num: '5', pin_signal: ADC0_DP1/ADC0_SE1/PTE16/SPI0_PCS0/UART2_TX/TPM_CLKIN0, label: TX}
- {pin_num: '6', pin_signal: ADC0_DM1/ADC0_SE5a/PTE17/SPI0_SCK/UART2_RX/TPM_CLKIN1/LPTMR0_ALT3, label: RX}
- {pin_num: '59', pin_signal: PTD2/SPI0_MOSI/UART2_RX/TPM0_CH2/SPI0_MISO, label: 'spare? (unmarked test pad)', identifier: SPARE}
- {pin_num: '61', pin_signal: PTD4/LLWU_P14/SPI1_PCS0/UART2_RX/TPM0_CH4, label: SwD, identifier: SwD}
- {pin_num: '62', pin_signal: ADC0_SE6b/PTD5/SPI1_SCK/UART2_TX/TPM0_CH5, label: Ch2 Pitch}
- {pin_num: '63', pin_signal: ADC0_SE7b/PTD6/LLWU_P15/SPI1_MOSI/UART0_RX/SPI1_MISO, label: Ch1 Roll}
- {pin_num: '64', pin_signal: PTD7/SPI1_MISO/UART0_TX/SPI1_MOSI, label: LCD-RST}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '5', peripheral: UART2, signal: TX, pin_signal: ADC0_DP1/ADC0_SE1/PTE16/SPI0_PCS0/UART2_TX/TPM_CLKIN0}
  - {pin_num: '6', peripheral: UART2, signal: RX, pin_signal: ADC0_DM1/ADC0_SE5a/PTE17/SPI0_SCK/UART2_RX/TPM_CLKIN1/LPTMR0_ALT3}
  - {pin_num: '7', peripheral: GPIOE, signal: 'GPIO, 18', pin_signal: ADC0_DP2/ADC0_SE2/PTE18/SPI0_MOSI/I2C0_SDA/SPI0_MISO}
  - {pin_num: '1', peripheral: UART1, signal: TX, pin_signal: PTE0/SPI1_MISO/UART1_TX/RTC_CLKOUT/CMP0_OUT/I2C1_SDA}
  - {pin_num: '2', peripheral: UART1, signal: RX, pin_signal: PTE1/SPI1_MOSI/UART1_RX/SPI1_MISO/I2C1_SCL}
  - {pin_num: '8', peripheral: GPIOE, signal: 'GPIO, 19', pin_signal: ADC0_DM2/ADC0_SE6a/PTE19/SPI0_MISO/I2C0_SCL/SPI0_MOSI}
  - {pin_num: '9', peripheral: GPIOE, signal: 'GPIO, 20', pin_signal: ADC0_DP0/ADC0_SE0/PTE20/TPM1_CH0/UART0_TX}
  - {pin_num: '10', peripheral: GPIOE, signal: 'GPIO, 21', pin_signal: ADC0_DM0/ADC0_SE4a/PTE21/TPM1_CH1/UART0_RX}
  - {pin_num: '11', peripheral: ADC0, signal: 'SE, 3', pin_signal: ADC0_DP3/ADC0_SE3/PTE22/TPM2_CH0/UART2_TX}
  - {pin_num: '12', peripheral: ADC0, signal: 'SE, 7a', pin_signal: ADC0_DM3/ADC0_SE7a/PTE23/TPM2_CH1/UART2_RX}
  - {pin_num: '17', peripheral: ADC0, signal: 'SE, 4b', pin_signal: CMP0_IN5/ADC0_SE4b/PTE29/TPM0_CH2/TPM_CLKIN0}
  - {pin_num: '33', peripheral: OSC0, signal: XTAL0, pin_signal: XTAL0/PTA19/UART1_TX/TPM_CLKIN1/LPTMR0_ALT1}
  - {pin_num: '32', peripheral: OSC0, signal: EXTAL0, pin_signal: EXTAL0/PTA18/UART1_RX/TPM_CLKIN0}
  - {pin_num: '20', peripheral: I2C0, signal: SCL, pin_signal: PTE24/TPM0_CH0/I2C0_SCL}
  - {pin_num: '21', peripheral: I2C0, signal: SDA, pin_signal: PTE25/TPM0_CH1/I2C0_SDA}
  - {pin_num: '22', peripheral: SWD, signal: CLK, pin_signal: TSI0_CH1/PTA0/TPM0_CH5/SWD_CLK}
  - {pin_num: '25', peripheral: SWD, signal: DIO, pin_signal: TSI0_CH4/PTA3/I2C1_SCL/TPM0_CH0/SWD_DIO}
  - {pin_num: '34', peripheral: RCM, signal: RESET, pin_signal: PTA20/RESET_b}
  - {pin_num: '35', peripheral: GPIOB, signal: 'GPIO, 0', pin_signal: ADC0_SE8/TSI0_CH0/PTB0/LLWU_P5/I2C0_SCL/TPM1_CH0}
  - {pin_num: '36', peripheral: GPIOB, signal: 'GPIO, 1', pin_signal: ADC0_SE9/TSI0_CH6/PTB1/I2C0_SDA/TPM1_CH1}
  - {pin_num: '37', peripheral: GPIOB, signal: 'GPIO, 2', pin_signal: ADC0_SE12/TSI0_CH7/PTB2/I2C0_SCL/TPM2_CH0}
  - {pin_num: '38', peripheral: GPIOB, signal: 'GPIO, 3', pin_signal: ADC0_SE13/TSI0_CH8/PTB3/I2C0_SDA/TPM2_CH1}
  - {pin_num: '39', peripheral: GPIOB, signal: 'GPIO, 16', pin_signal: TSI0_CH9/PTB16/SPI1_MOSI/UART0_RX/TPM_CLKIN0/SPI1_MISO}
  - {pin_num: '40', peripheral: GPIOB, signal: 'GPIO, 17', pin_signal: TSI0_CH10/PTB17/SPI1_MISO/UART0_TX/TPM_CLKIN1/SPI1_MOSI}
  - {pin_num: '41', peripheral: GPIOB, signal: 'GPIO, 18', pin_signal: TSI0_CH11/PTB18/TPM2_CH0/I2S0_TX_BCLK}
  - {pin_num: '42', peripheral: GPIOB, signal: 'GPIO, 19', pin_signal: TSI0_CH12/PTB19/TPM2_CH1/I2S0_TX_FS}
  - {pin_num: '43', peripheral: ADC0, signal: 'SE, 14', pin_signal: ADC0_SE14/TSI0_CH13/PTC0/EXTRG_IN/CMP0_OUT/I2S0_TXD0}
  - {pin_num: '44', peripheral: ADC0, signal: 'SE, 15', pin_signal: ADC0_SE15/TSI0_CH14/PTC1/LLWU_P6/RTC_CLKIN/I2C1_SCL/TPM0_CH0/I2S0_TXD0}
  - {pin_num: '45', peripheral: ADC0, signal: 'SE, 11', pin_signal: ADC0_SE11/TSI0_CH15/PTC2/I2C1_SDA/TPM0_CH1/I2S0_TX_FS}
  - {pin_num: '49', peripheral: SPI0, signal: PCS0, pin_signal: PTC4/LLWU_P8/SPI0_PCS0/UART1_TX/TPM0_CH3/I2S0_MCLK}
  - {pin_num: '50', peripheral: SPI0, signal: SCK, pin_signal: PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/I2S0_RXD0/CMP0_OUT}
  - {pin_num: '51', peripheral: SPI0, signal: MOSI, pin_signal: CMP0_IN0/PTC6/LLWU_P10/SPI0_MOSI/EXTRG_IN/I2S0_RX_BCLK/SPI0_MISO/I2S0_MCLK}
  - {pin_num: '53', peripheral: GPIOC, signal: 'GPIO, 8', pin_signal: CMP0_IN2/PTC8/I2C0_SCL/TPM0_CH4/I2S0_MCLK}
  - {pin_num: '54', peripheral: GPIOC, signal: 'GPIO, 9', pin_signal: CMP0_IN3/PTC9/I2C0_SDA/TPM0_CH5/I2S0_RX_BCLK}
  - {pin_num: '55', peripheral: GPIOC, signal: 'GPIO, 10', pin_signal: PTC10/I2C1_SCL/I2S0_RX_FS}
  - {pin_num: '56', peripheral: GPIOC, signal: 'GPIO, 11', pin_signal: PTC11/I2C1_SDA/I2S0_RXD0}
  - {pin_num: '57', peripheral: GPIOD, signal: 'GPIO, 0', pin_signal: PTD0/SPI0_PCS0/TPM0_CH0}
  - {pin_num: '58', peripheral: ADC0, signal: 'SE, 5b', pin_signal: ADC0_SE5b/PTD1/SPI0_SCK/TPM0_CH1}
  - {pin_num: '62', peripheral: ADC0, signal: 'SE, 6b', pin_signal: ADC0_SE6b/PTD5/SPI1_SCK/UART2_TX/TPM0_CH5}
  - {pin_num: '63', peripheral: ADC0, signal: 'SE, 7b', pin_signal: ADC0_SE7b/PTD6/LLWU_P15/SPI1_MOSI/UART0_RX/SPI1_MISO}
  - {pin_num: '26', peripheral: GPIOA, signal: 'GPIO, 4', pin_signal: TSI0_CH5/PTA4/I2C1_SDA/TPM0_CH1/NMI_b}
  - {pin_num: '19', peripheral: GPIOE, signal: 'GPIO, 31', pin_signal: PTE31/TPM0_CH4}
  - {pin_num: '18', peripheral: GPIOE, signal: 'GPIO, 30', pin_signal: DAC0_OUT/ADC0_SE23/CMP0_IN4/PTE30/TPM0_CH3/TPM_CLKIN1}
  - {pin_num: '29', peripheral: GPIOA, signal: 'GPIO, 13', pin_signal: PTA13/TPM1_CH1/I2S0_TX_FS}
  - {pin_num: '64', peripheral: GPIOD, signal: 'GPIO, 7', pin_signal: PTD7/SPI1_MISO/UART0_TX/SPI1_MOSI}
  - {pin_num: '61', peripheral: GPIOD, signal: 'GPIO, 4', pin_signal: PTD4/LLWU_P14/SPI1_PCS0/UART2_RX/TPM0_CH4}
  - {pin_num: '60', peripheral: SPI0, signal: MISO, pin_signal: PTD3/SPI0_MISO/UART2_TX/TPM0_CH3/SPI0_MOSI}
  - {pin_num: '27', peripheral: GPIOA, signal: 'GPIO, 5', pin_signal: PTA5/TPM0_CH2/I2S0_TX_BCLK}
  - {pin_num: '28', peripheral: GPIOA, signal: 'GPIO, 12', pin_signal: PTA12/TPM1_CH0/I2S0_TXD0}
  - {pin_num: '59', peripheral: GPIOD, signal: 'GPIO, 2', pin_signal: PTD2/SPI0_MOSI/UART2_RX/TPM0_CH2/SPI0_MISO}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* Port A Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortA);
    /* Port B Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortB);
    /* Port C Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortC);
    /* Port D Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortD);
    /* Port E Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortE);

    /* PORTA0 (pin 22) is configured as SWD_CLK */
    PORT_SetPinMux(PORTA, 0U, kPORT_MuxAlt7);

    /* PORTA12 (pin 28) is configured as PTA12 */
    PORT_SetPinMux(BOARD_INITPINS_Buzzer_PORT, BOARD_INITPINS_Buzzer_PIN, kPORT_MuxAsGpio);

    /* PORTA13 (pin 29) is configured as PTA13 */
    PORT_SetPinMux(PORTA, 13U, kPORT_MuxAsGpio);

    /* PORTA18 (pin 32) is configured as EXTAL0 */
    PORT_SetPinMux(PORTA, 18U, kPORT_PinDisabledOrAnalog);

    /* PORTA19 (pin 33) is configured as XTAL0 */
    PORT_SetPinMux(PORTA, 19U, kPORT_PinDisabledOrAnalog);

    /* PORTA20 (pin 34) is configured as RESET_b */
    PORT_SetPinMux(PORTA, 20U, kPORT_MuxAlt7);

    /* PORTA3 (pin 25) is configured as SWD_DIO */
    PORT_SetPinMux(PORTA, 3U, kPORT_MuxAlt7);

    /* PORTA4 (pin 26) is configured as PTA4 */
    PORT_SetPinMux(PORTA, 4U, kPORT_MuxAsGpio);

    /* PORTA5 (pin 27) is configured as PTA5 */
    PORT_SetPinMux(BOARD_INITPINS_Bind_PORT, BOARD_INITPINS_Bind_PIN, kPORT_MuxAsGpio);

    /* PORTB0 (pin 35) is configured as PTB0 */
    PORT_SetPinMux(BOARD_INITPINS_LED_BACKLIGHT_PORT, BOARD_INITPINS_LED_BACKLIGHT_PIN, kPORT_MuxAsGpio);

    /* PORTB1 (pin 36) is configured as PTB1 */
    PORT_SetPinMux(BOARD_INITPINS_BUTTON_R1_PORT, BOARD_INITPINS_BUTTON_R1_PIN, kPORT_MuxAsGpio);

    /* PORTB16 (pin 39) is configured as PTB16 */
    PORT_SetPinMux(BOARD_INITPINS_BUTTON_L1_PORT, BOARD_INITPINS_BUTTON_L1_PIN, kPORT_MuxAsGpio);

    /* PORTB17 (pin 40) is configured as PTB17 */
    PORT_SetPinMux(BOARD_INITPINS_BUTTON_L2_PORT, BOARD_INITPINS_BUTTON_L2_PIN, kPORT_MuxAsGpio);

    /* PORTB18 (pin 41) is configured as PTB18 */
    PORT_SetPinMux(BOARD_INITPINS_BUTTON_L3_PORT, BOARD_INITPINS_BUTTON_L3_PIN, kPORT_MuxAsGpio);

    /* PORTB19 (pin 42) is configured as PTB19 */
    PORT_SetPinMux(BOARD_INITPINS_BUTTON_L4_PORT, BOARD_INITPINS_BUTTON_L4_PIN, kPORT_MuxAsGpio);

    /* PORTB2 (pin 37) is configured as PTB2 */
    PORT_SetPinMux(BOARD_INITPINS_BUTTON_R2_PORT, BOARD_INITPINS_BUTTON_R2_PIN, kPORT_MuxAsGpio);

    /* PORTB3 (pin 38) is configured as PTB3 */
    PORT_SetPinMux(BOARD_INITPINS_BUTTON_R3_PORT, BOARD_INITPINS_BUTTON_R3_PIN, kPORT_MuxAsGpio);

    /* PORTC0 (pin 43) is configured as ADC0_SE14 */
    PORT_SetPinMux(PORTC, 0U, kPORT_PinDisabledOrAnalog);

    /* PORTC1 (pin 44) is configured as ADC0_SE15 */
    PORT_SetPinMux(PORTC, 1U, kPORT_PinDisabledOrAnalog);

    /* PORTC10 (pin 55) is configured as PTC10 */
    PORT_SetPinMux(PORTC, 10U, kPORT_MuxAsGpio);

    /* PORTC11 (pin 56) is configured as PTC11 */
    PORT_SetPinMux(PORTC, 11U, kPORT_MuxAsGpio);

    /* PORTC2 (pin 45) is configured as ADC0_SE11 */
    PORT_SetPinMux(PORTC, 2U, kPORT_PinDisabledOrAnalog);

    /* PORTC4 (pin 49) is configured as SPI0_PCS0 */
    PORT_SetPinMux(BOARD_INITPINS_SOFT_SPI_CS_PORT, BOARD_INITPINS_SOFT_SPI_CS_PIN, kPORT_MuxAlt2);

    /* PORTC5 (pin 50) is configured as SPI0_SCK */
    PORT_SetPinMux(BOARD_INITPINS_SOFT_SPI_SCK_PORT, BOARD_INITPINS_SOFT_SPI_SCK_PIN, kPORT_MuxAlt2);

    /* PORTC6 (pin 51) is configured as SPI0_MOSI */
    PORT_SetPinMux(BOARD_INITPINS_SOFT_SPI_MOSI_PORT, BOARD_INITPINS_SOFT_SPI_MOSI_PIN, kPORT_MuxAlt2);

    /* PORTC8 (pin 53) is configured as PTC8 */
    PORT_SetPinMux(PORTC, 8U, kPORT_MuxAsGpio);

    /* PORTC9 (pin 54) is configured as PTC9 */
    PORT_SetPinMux(PORTC, 9U, kPORT_MuxAsGpio);

    /* PORTD0 (pin 57) is configured as PTD0 */
    PORT_SetPinMux(BOARD_INITPINS_SwA_PORT, BOARD_INITPINS_SwA_PIN, kPORT_MuxAsGpio);

    /* PORTD1 (pin 58) is configured as ADC0_SE5b */
    PORT_SetPinMux(PORTD, 1U, kPORT_PinDisabledOrAnalog);

    /* PORTD2 (pin 59) is configured as PTD2 */
    PORT_SetPinMux(BOARD_INITPINS_SPARE_PORT, BOARD_INITPINS_SPARE_PIN, kPORT_MuxAsGpio);

    /* PORTD3 (pin 60) is configured as SPI0_MISO */
    PORT_SetPinMux(BOARD_INITPINS_SOFT_SPI_MISO_PORT, BOARD_INITPINS_SOFT_SPI_MISO_PIN, kPORT_MuxAlt2);

    /* PORTD4 (pin 61) is configured as PTD4 */
    PORT_SetPinMux(BOARD_INITPINS_SwD_PORT, BOARD_INITPINS_SwD_PIN, kPORT_MuxAsGpio);

    /* PORTD5 (pin 62) is configured as ADC0_SE6b */
    PORT_SetPinMux(PORTD, 5U, kPORT_PinDisabledOrAnalog);

    /* PORTD6 (pin 63) is configured as ADC0_SE7b */
    PORT_SetPinMux(PORTD, 6U, kPORT_PinDisabledOrAnalog);

    /* PORTD7 (pin 64) is configured as PTD7 */
    PORT_SetPinMux(PORTD, 7U, kPORT_MuxAsGpio);

    /* PORTE0 (pin 1) is configured as UART1_TX */
    PORT_SetPinMux(PORTE, 0U, kPORT_MuxAlt3);

    /* PORTE1 (pin 2) is configured as UART1_RX */
    PORT_SetPinMux(PORTE, 1U, kPORT_MuxAlt3);

    /* PORTE16 (pin 5) is configured as UART2_TX */
    PORT_SetPinMux(PORTE, 16U, kPORT_MuxAlt3);

    /* PORTE17 (pin 6) is configured as UART2_RX */
    PORT_SetPinMux(PORTE, 17U, kPORT_MuxAlt3);

    /* PORTE18 (pin 7) is configured as PTE18 */
    PORT_SetPinMux(PORTE, 18U, kPORT_MuxAsGpio);

    /* PORTE19 (pin 8) is configured as PTE19 */
    PORT_SetPinMux(PORTE, 19U, kPORT_MuxAsGpio);

    /* PORTE20 (pin 9) is configured as PTE20 */
    PORT_SetPinMux(PORTE, 20U, kPORT_MuxAsGpio);

    /* PORTE21 (pin 10) is configured as PTE21 */
    PORT_SetPinMux(PORTE, 21U, kPORT_MuxAsGpio);

    /* PORTE22 (pin 11) is configured as ADC0_SE3 */
    PORT_SetPinMux(PORTE, 22U, kPORT_PinDisabledOrAnalog);

    /* PORTE23 (pin 12) is configured as ADC0_SE7a */
    PORT_SetPinMux(PORTE, 23U, kPORT_PinDisabledOrAnalog);

    /* PORTE24 (pin 20) is configured as I2C0_SCL */
    PORT_SetPinMux(PORTE, 24U, kPORT_MuxAlt5);

    /* PORTE25 (pin 21) is configured as I2C0_SDA */
    PORT_SetPinMux(PORTE, 25U, kPORT_MuxAlt5);

    /* PORTE29 (pin 17) is configured as ADC0_SE4b */
    PORT_SetPinMux(PORTE, 29U, kPORT_PinDisabledOrAnalog);

    /* PORTE30 (pin 18) is configured as PTE30 */
    PORT_SetPinMux(PORTE, 30U, kPORT_MuxAsGpio);

    /* PORTE31 (pin 19) is configured as PTE31 */
    PORT_SetPinMux(PORTE, 31U, kPORT_MuxAsGpio);

    SIM->SOPT5 = ((SIM->SOPT5 &
                   /* Mask bits to zero which are setting */
                   (~(SIM_SOPT5_UART1TXSRC_MASK | SIM_SOPT5_UART1RXSRC_MASK)))

                  /* UART1 Transmit Data Source Select: UART1_TX pin. */
                  | SIM_SOPT5_UART1TXSRC(SOPT5_UART1TXSRC_UART_TX)

                  /* UART1 Receive Data Source Select: UART1_RX pin. */
                  | SIM_SOPT5_UART1RXSRC(SOPT5_UART1RXSRC_UART_RX));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
