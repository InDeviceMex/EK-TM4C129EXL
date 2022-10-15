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

uint8_t DisplayBuffer[128UL][128UL/8UL];

static uint8_t Sharp_96_96_u8Reverse(uint8_t u8Row);

void SHARP_96_96__vInitDisplay(void)
{
    const SSI_CONTROL_t pstControlConfigReg =
    {
        SSI_enLOOPBACK_DIS,
        SSI_enEOT_FIFO,
        SSI_enDIRECTION_TX,
        SSI_enMODE_LEGACY,
        SSI_enSTATE_DIS,
        {SSI_enSTATE_ENA},
        {SSI_enSTATE_DIS},
        SSI_enSTATE_DIS,
        SSI_enSTATE_DIS,
        SSI_enSTATE_ENA,
        SSI_enSTATE_DIS
    };

    SSI_FRAME_CONTROL_t pstFrameControlConfigReg =
    {
        SSI_enFORMAT_FREESCALE,
        SSI_enPHASE_FIRST,
        SSI_enPOLARITY_LOW,
        SSI_enLENGTH_8BITS,
    };
    const SSI_LINE_t pstLineConfigReg =
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

    /* Provide power to LCD */
    SHARP_96_96__vPowerOn();

    /* Turn on DISP */
    SHARP_96_96__vDisable();

    /* Configure LCD_SPI_CS_PIN as output pin */
    SHARP_96_96__vDisableChipSelect();

    SSI__vSetEnable(SHARP_96_96_SSI, SSI_enSTATE_DIS);
    SSI__vSetClockConfig(SHARP_96_96_SSI, SSI_enCLOCK_SYSCLK);
    SSI__enSetConfig(SHARP_96_96_SSI, SSI_enMS_MASTER, &pstControlConfigReg, &pstFrameControlConfigReg, 500000UL, &pstLineConfigReg);
    SSI__vSetEnable(SHARP_96_96_SSI, SSI_enSTATE_ENA);
    SSI__vSetHighSpeed(SHARP_96_96_SSI, SSI_enSTATE_ENA);


    SHARP_96_96__vEnableChipSelect();
    for(UBase_t uxCant = 0UL; uxCant< 20000UL;uxCant++);
    SSI__uxSetData(SHARP_96_96_SSI, 0x20UL);
    SSI__uxSetData(SHARP_96_96_SSI, 0x00UL);
    for(UBase_t uxCant = 0UL; uxCant< 20000UL;uxCant++);
    SHARP_96_96__vDisableChipSelect();
    for(UBase_t uxCant = 0UL; uxCant< 20000UL;uxCant++);


    SHARP_96_96__vEnableChipSelect();
    for(UBase_t uxCant = 0UL; uxCant< 20000UL;uxCant++);
    SSI__uxSetData(SHARP_96_96_SSI, 0x80UL);
    for(uint8_t u8Row = 0U; u8Row< 128U ;u8Row++)
    {
        uint8_t u8AGRow = Sharp_96_96_u8Reverse((u8Row + 1U));
        SSI__uxSetData(SHARP_96_96_SSI,(UBase_t) u8AGRow);
        for(uint8_t u8Column = 0U; u8Column< (128U/16U) ;u8Column++)
        {
            SSI__uxSetData(SHARP_96_96_SSI, 0xFFU);
        }
        for(uint8_t u8Column = (128U/16U); u8Column< (128U/8U) ;u8Column++)
        {
            SSI__uxSetData(SHARP_96_96_SSI, 0x00U);
        }
        SSI__uxSetData(SHARP_96_96_SSI, 0x00UL);
    }
    SSI__uxSetData(SHARP_96_96_SSI, 0x00UL);
    for(UBase_t uxCant = 0UL; uxCant< 20000UL;uxCant++);
    SHARP_96_96__vDisableChipSelect();
    for(UBase_t uxCant = 0UL; uxCant< 20000UL;uxCant++);

    SHARP_96_96__vEnableChipSelect();
    for(UBase_t uxCant = 0UL; uxCant< 20000UL;uxCant++);
    SSI__uxSetData(SHARP_96_96_SSI, 0x00UL);
    SSI__uxSetData(SHARP_96_96_SSI, 0x00UL);
    for(UBase_t uxCant = 0UL; uxCant< 20000UL;uxCant++);
    SHARP_96_96__vDisableChipSelect();

    SHARP_96_96__vEnable();


}

const uint8_t Sharp_96_96_u8ReverseData[] =
{
    0x0U, 0x8U, 0x4U, 0xCU, 0x2U, 0xAU, 0x6U, 0xEU,
    0x1U, 0x9U, 0x5U, 0xDU, 0x3U, 0xBU, 0x7U, 0xFU
};

static uint8_t Sharp_96_96_u8Reverse(uint8_t u8Row)
{
  uint8_t u8Result = 0U;

  u8Result  = Sharp_96_96_u8ReverseData[u8Row & 0xFU];
  u8Result <<= 4U;
  u8Result |= Sharp_96_96_u8ReverseData[(u8Row & 0xF0U)>>4U];
  return (u8Result);
}

