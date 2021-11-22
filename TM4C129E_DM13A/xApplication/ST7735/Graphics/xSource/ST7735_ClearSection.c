/**
 *
 * @file ST7735_ClearSection.c
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
#include <xApplication/ST7735/Graphics/xHeader/ST7735_ClearSection.h>
#include <xApplication/ST7735/Graphics/xHeader/ST7735_WorkingArea.h>

#include <xUtils/Graphics/xHeader/Graphics_ClearSection.h>

#include <xApplication/ST7735/xHeader/ST7735_Write.h>
#include <xApplication/ST7735/xHeader/ST7735_Enum.h>
#include <xApplication/ST7735/xHeader/ST7735_Defines.h>

#include <xDriver_MCU/SSI/SSI.h>

void ST7735__vClearSectionWrapper(ST7735_Layer_Typedef* restrict enLayerArg, ST7735_DIMENSIONS_Typedef stDimesionsArg, uint32_t u32Color);

void ST7735__vClearSectionWrapper(ST7735_Layer_Typedef* restrict enLayerArg, ST7735_DIMENSIONS_Typedef stDimesionsArg, uint32_t u32Color)
{
    uint32_t u32TotalDim = 0UL;
    if(0UL != (uint32_t) enLayerArg)
    {
        u32TotalDim = stDimesionsArg.u32Height;
        u32TotalDim *= stDimesionsArg.u32Width;
        ST7735__vSetWorkingArea(enLayerArg, stDimesionsArg);

        SSI__vSetDataLength(ST7735_SSI, SSI_enLENGTH_16BITS);
        ST7735__u32WriteDMA(u32Color, u32TotalDim);
        SSI__vSetDataLength(ST7735_SSI, SSI_enLENGTH_8BITS);
    }
}

void ST7735__vClearSection(ST7735_Layer_Typedef* restrict enLayerArg, ST7735_DIMENSIONS_Typedef stDimesionsArg, uint32_t u32Color)
{
    Graphics__vClearSection(&ST7735__vClearSectionWrapper ,enLayerArg, stDimesionsArg, u32Color);

}
