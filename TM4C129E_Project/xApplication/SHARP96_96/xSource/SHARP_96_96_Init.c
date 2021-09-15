/**
 *
 * @file SHARP_96_96_Init.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 10 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication/SHARP96_96/xHeader/SHARP_96_96_Init.h>
#include <xApplication/SHARP96_96/xHeader/SHARP_96_96_PowerControl.h>
#include <xApplication/SHARP96_96/xHeader/SHARP_96_96_Enable.h>
#include <xApplication/SHARP96_96/xHeader/SHARP_96_96_ChipSelect.h>

#include <xDriver_MCU/xDriver_MCU.h>
#include <xApplication_MCU/xApplication_MCU.h>

#define SHARP_96_96_SSI (SSI_enMODULE_3)

uint8_t DisplayBuffer[96UL][96UL/8UL];

static uint8_t Sharp_96_96_u8Reverse(uint8_t u8Row);

void SHARP_96_96__vInitDisplay(void)
{
    const SSI_CONTROL_TypeDef pstControlConfigReg =
    {
        SSI_enLOOPBACK_DIS,
        SSI_enEOT_FIFO,
        SSI_enDIRECTION_TX,
        SSI_enMODE_LEGACY,
        SSI_enFSSHOLD_DIS,
        {SSI_enLINE_ENA},
        {SSI_enLINE_DIS},
        SSI_enLINE_DIS,
        SSI_enLINE_DIS,
        SSI_enLINE_ENA,
        SSI_enLINE_DIS
    };

    SSI_FRAME_CONTROL_TypeDef pstFrameControlConfigReg =
    {
        SSI_enFORMAT_FREESCALE,
        SSI_enCLOCK_PHASE_FIRST,
        SSI_enCLOCK_POLARITY_LOW,
        SSI_enLENGTH_8BITS,
    };
    const SSI_LINE_TypeDef pstLineConfigReg =
    {
        {SSI_enLINE_SELECT_ALT},
        {SSI_enLINE_SELECT_PRIMARY},
        SSI_enLINE_SELECT_PRIMARY,
        SSI_enLINE_SELECT_PRIMARY,
        SSI_enLINE_SELECT_ALT,
        SSI_enLINE_SELECT_PRIMARY
    };
    SHARP_96_96__vInitPowerControl();
    SHARP_96_96__vInitEnable();
    SHARP_96_96__vInitChipSelect();

    // Provide power to LCD
    SHARP_96_96__vPowerOn();

    // Turn on DISP
    SHARP_96_96__vEnable();

    // Configure LCD_SPI_CS_PIN as output pin
    SHARP_96_96__vDisableChipSelect();

    SSI__vSetEnable(SHARP_96_96_SSI, SSI_enENABLE_STOP);
    SSI__vSetClockConfig(SHARP_96_96_SSI, SSI_enCLOCK_SYSCLK);
    SSI__enSetConfig(SHARP_96_96_SSI, SSI_enMS_MASTER, &pstControlConfigReg, &pstFrameControlConfigReg, 500000UL, &pstLineConfigReg);
    SSI__vSetEnable(SHARP_96_96_SSI, SSI_enENABLE_START);
    SSI__vSetHighSpeed(SHARP_96_96_SSI, SSI_enHIGHSPEED_ENA);


    SHARP_96_96__vEnableChipSelect();
    for(uint32_t u32Cant = 0UL; u32Cant< 20000UL;u32Cant++);
    SSI__u32SetData(SHARP_96_96_SSI, 0x20UL);
    SSI__u32SetData(SHARP_96_96_SSI, 0x00UL);
    for(uint32_t u32Cant = 0UL; u32Cant< 20000UL;u32Cant++);
    SHARP_96_96__vDisableChipSelect();
    for(uint32_t u32Cant = 0UL; u32Cant< 20000UL;u32Cant++);


    SHARP_96_96__vEnableChipSelect();
    for(uint32_t u32Cant = 0UL; u32Cant< 20000UL;u32Cant++);
    SSI__u32SetData(SHARP_96_96_SSI, 0x80UL);
    for(uint8_t u8Row = 0U; u8Row< 96U ;u8Row++)
    {
        uint8_t u8AGRow = Sharp_96_96_u8Reverse((u8Row + 1U));
        SSI__u32SetData(SHARP_96_96_SSI, u8AGRow);
        for(uint8_t u8Column = 0U; u8Column< (96U/16U) ;u8Column++)
        {
            SSI__u32SetData(SHARP_96_96_SSI, 0xFFU);
        }
        for(uint8_t u8Column = (96U/16U); u8Column< (96U/8U) ;u8Column++)
        {
            SSI__u32SetData(SHARP_96_96_SSI, 0x00U);
        }
        SSI__u32SetData(SHARP_96_96_SSI, 0x00UL);
    }
    SSI__u32SetData(SHARP_96_96_SSI, 0x00UL);
    for(uint32_t u32Cant = 0UL; u32Cant< 20000UL;u32Cant++);
    SHARP_96_96__vDisableChipSelect();
    for(uint32_t u32Cant = 0UL; u32Cant< 20000UL;u32Cant++);

    SHARP_96_96__vEnableChipSelect();
    for(uint32_t u32Cant = 0UL; u32Cant< 20000UL;u32Cant++);
    SSI__u32SetData(SHARP_96_96_SSI, 0x00UL);
    SSI__u32SetData(SHARP_96_96_SSI, 0x00UL);
    for(uint32_t u32Cant = 0UL; u32Cant< 20000UL;u32Cant++);
    SHARP_96_96__vDisableChipSelect();


}

const uint8_t Sharp_96_96_u8ReverseData[] =
{
    0x0, 0x8, 0x4, 0xC, 0x2, 0xA, 0x6, 0xE,
    0x1, 0x9, 0x5, 0xD, 0x3, 0xB, 0x7, 0xF
};

static uint8_t Sharp_96_96_u8Reverse(uint8_t u8Row)
{
  uint8_t u8Result = 0U;

  u8Result  = Sharp_96_96_u8ReverseData[u8Row & 0xF]<<4;
  u8Result |= Sharp_96_96_u8ReverseData[(u8Row & 0xF0)>>4];
  return u8Result;
}

