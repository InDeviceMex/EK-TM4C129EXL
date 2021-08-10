/**
 *
 * @file ST7735_Commands.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 18 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/ST7735/xHeader/ST7735_Commands.h>
#include <xApplication/ST7735/xHeader/ST7735_Write.h>
#include <xApplication/ST7735/xHeader/ST7735_Delay.h>
#include <xApplication/ST7735/xHeader/ST7735_Enum.h>

const uint8_t ST7735_pcCommandSet1[59UL] =
{
    15U,
    (uint8_t) ST7735_enCOMMAND_SWRESET, (uint8_t) ST7735_enCOMMAND_DELAY, 150U,
    (uint8_t) ST7735_enCOMMAND_SLPOUT   , (uint8_t) ST7735_enCOMMAND_DELAY, 255U,
    (uint8_t) ST7735_enCOMMAND_FRMCTR1, 3U                                       , 0x01U, 0x2CU, 0x2DU,
    (uint8_t) ST7735_enCOMMAND_FRMCTR2, 3U                                       , 0x01U, 0x2CU, 0x2DU,
    (uint8_t) ST7735_enCOMMAND_FRMCTR3, 6U                                       , 0x01U, 0x2CU, 0x2DU, 0x01U, 0x2CU, 0x2DU,
    (uint8_t) ST7735_enCOMMAND_INVCTR   , 1U                                       , 0x07,
    (uint8_t) ST7735_enCOMMAND_PWCTR1 , 3U                                        , 0xA2U, 0x02U, 0x84U,
    (uint8_t) ST7735_enCOMMAND_PWCTR2 , 1U                                        , 0xC5U,
    (uint8_t) ST7735_enCOMMAND_PWCTR3 , 2U                                        , 0x0AU, 0x00U,
    (uint8_t) ST7735_enCOMMAND_PWCTR4 , 2U                                        , 0x8AU, 0x2AU,
    (uint8_t) ST7735_enCOMMAND_PWCTR5 , 2U                                        , 0x8AU, 0xEEU,
    (uint8_t) ST7735_enCOMMAND_VMCTR1 , 1U                                        ,  0x0EU,
    (uint8_t) ST7735_enCOMMAND_INVOFF  , 0U                                        ,
    (uint8_t) ST7735_enCOMMAND_MADCTL , 1U                                        , 0xC8U,
    (uint8_t) ST7735_enCOMMAND_COLMOD, 1U                                        , 0x05U
};

const uint8_t ST7735_pcCommandSet2_Green[13U] =
{
    2U,
    (uint8_t) ST7735_enCOMMAND_CASET  , 4U      , 0x00U, 0x02U, 0x00U, 0x7FU + 0x02U,
    (uint8_t) ST7735_enCOMMAND_RASET  , 4U      , 0x00U, 0x01U, 0x00U, 0x7FU + 0x01U
};

const uint8_t ST7735_pcCommandSet2_Red[13U] =
{
    2U,
    (uint8_t) ST7735_enCOMMAND_CASET  , 4U      , 0x00U, 0x00U, 0x00U, 0x7FU,
    (uint8_t) ST7735_enCOMMAND_RASET  , 4U      , 0x00U, 0x00U, 0x00U, 0x7FU
};

const uint8_t ST7735_pcCommandSet3[43U] =
{
    4U,
    (uint8_t) ST7735_enCOMMAND_GMCTRP1, 16U      , 0x02U, 0x1CU, 0x07U, 0x12U, 0x37U, 0x32U, 0x29U, 0x2DU, 0x29U, 0x25U, 0x2BU, 0x39U, 0x00U, 0x01U, 0x03U, 0x10U,
      (uint8_t) ST7735_enCOMMAND_GMCTRN1, 16U      , 0x03U, 0x1DU, 0x07U, 0x06U, 0x2EU, 0x2CU, 0x29U, 0x2DU, 0x2EU, 0x2EU, 0x37U, 0x3FU, 0x00U, 0x00U, 0x02U, 0x10U,
      (uint8_t) ST7735_enCOMMAND_NORON  ,   (uint8_t)  ST7735_enCOMMAND_DELAY, 10U,
      (uint8_t) ST7735_enCOMMAND_DISPON ,    (uint8_t) ST7735_enCOMMAND_DELAY, 100U
};

void ST7735__vCommandList(const uint8_t * pu8AddressArg)
{
    uint8_t u8NumCommands = 0U;
    uint8_t u8NumCommandsPos = 0U;
    uint8_t u8NumArguments = 0U;
    uint8_t u8NumArgumentsPos = 0U;
    uint8_t u8AddressValue = 0U;
    uint16_t u16Delay = 0U;
    uint8_t u8Reg = 0U;
    uint8_t u8Count = 0U;

    u8NumCommands = *(pu8AddressArg);
    pu8AddressArg += 1UL;

    for(u8NumCommandsPos = u8NumCommands; 0U != u8NumCommandsPos; u8NumCommandsPos--)
    {
        u8AddressValue = *(pu8AddressArg);
        ST7735__u32WriteCommand((uint16_t) u8AddressValue);
        pu8AddressArg += 1UL;
        u8NumArguments  = *(pu8AddressArg);
        pu8AddressArg += 1UL;
        u16Delay = (uint16_t) u8NumArguments;
        u16Delay &= (uint16_t) ST7735_enCOMMAND_DELAY;          /*   If it set, delay follows args*/
        u8Reg = ((uint8_t) ST7735_enCOMMAND_DELAY);
        u8Reg = ~u8Reg;
        u8NumArguments &= u8Reg;                   /*   Mask out delay bit*/

        for(u8NumArgumentsPos = u8NumArguments; 0U != u8NumArgumentsPos; u8NumArgumentsPos--)
        {
            u8AddressValue = *(pu8AddressArg);
            ST7735__u32WriteData((uint32_t) u8AddressValue);
            pu8AddressArg += 1UL;
        }

        if(0U != u16Delay)
        {
            u8Reg = (*pu8AddressArg);
            u16Delay = (uint16_t) u8Reg;             /* Read post-command delay time (u16Delay)*/
            pu8AddressArg += 1UL;
            if(255U == u16Delay)
            {
                u16Delay = 500U;     /* If 255, delay for 500 u16Delay*/
            }
            ST7735__vDelay1ms((uint32_t) u16Delay);
        }
    }
}
