/**
 *
 * @file ST7735_WorkingArea.c
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
 * @verbatim 19 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/ST7735/Graphics/xHeader/ST7735_WorkingArea.h>

#include <xUtils/Graphics/xHeader/Graphics_ClearSection.h>

#include <xApplication/ST7735/xHeader/ST7735_Write.h>
#include <xApplication/ST7735/xHeader/ST7735_Enum.h>
#include <xApplication/ST7735/xHeader/ST7735_Defines.h>

#include <xDriver_MCU/SSI/SSI.h>

void ST7735__vSetWorkingAreaWrapper(ST7735_Layer_t* restrict enLayerArg, ST7735_DIMENSIONS_t stDimesionsArg, UBase_t uxColor);

uint8_t ST7735_u8ColStart = 2U;
uint8_t ST7735_u8RowStart = 3U;

void ST7735__vSetWorkingAreaWrapper(ST7735_Layer_t* restrict enLayerArg, ST7735_DIMENSIONS_t stDimesionsArg, UBase_t uxColor)
{
    UBase_t uxPosY = stDimesionsArg.uxCoordY[0];
    UBase_t uxPosX = stDimesionsArg.uxCoordX[0];
    UBase_t uxPosYTotal = stDimesionsArg.uxCoordY[0];
    UBase_t uxPosXTotal = stDimesionsArg.uxCoordX[0];
    (void) uxColor;
    uxPosYTotal += stDimesionsArg.uxHeight;
    uxPosXTotal += stDimesionsArg.uxWidth;
    uxPosX += ST7735_u8ColStart;
    uxPosY += ST7735_u8RowStart;
    uxPosXTotal += ST7735_u8ColStart;
    uxPosXTotal -= 1UL;
    uxPosYTotal += ST7735_u8RowStart;
    uxPosYTotal -= 1UL;
    ST7735__uxWriteCommand(ST7735_enCOMMAND_CASET);
    ST7735__uxWriteData(0x00UL);
    ST7735__uxWriteData(uxPosX);
    ST7735__uxWriteData(0x00UL);
    ST7735__uxWriteData(uxPosXTotal);

    ST7735__uxWriteCommand(ST7735_enCOMMAND_RASET);
    ST7735__uxWriteData(0x00UL);
    ST7735__uxWriteData(uxPosY);
    ST7735__uxWriteData(0x00UL);
    ST7735__uxWriteData(uxPosYTotal);

    ST7735__uxWriteCommand(ST7735_enCOMMAND_RAMWR);
}

void ST7735__vSetWorkingArea(ST7735_Layer_t* restrict enLayerArg, ST7735_DIMENSIONS_t stDimesionsArg)
{
    Graphics__vClearSection(&ST7735__vSetWorkingAreaWrapper,enLayerArg, stDimesionsArg, 0UL);
}

