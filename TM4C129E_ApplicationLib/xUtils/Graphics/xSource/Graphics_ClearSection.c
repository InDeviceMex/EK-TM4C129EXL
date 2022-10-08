/**
 *
 * @file Graphics_ClearSection.c
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

#include <xUtils/Graphics/xHeader/Graphics_ClearSection.h>

void Graphics__vClearSection (void (*pvfCallback)(Graphics_Layer_t* restrict pstLayerArg, Graphics_DIMENSIONS_t stDimensionsArg, UBase_t  uxColor), Graphics_Layer_t* restrict pstLayerArg, Graphics_DIMENSIONS_t stDimensionsArg, UBase_t  uxColor)
{
    Graphics_nSTATUS enStatus = Graphics_enSTATUS_OK;
    UBase_t uxStatusWidth = 0UL;
    UBase_t uxStatusHeight = 0UL;
    UBase_t uxHeightReg = 0UL;
    UBase_t uxWidthReg = 0UL;
    UBase_t uxHeightTotalReg = 0UL;
    UBase_t uxWidthTotalReg = 0UL;
    UBase_t uxCoordXReg= 0UL;
    UBase_t uxCoordYReg = 0UL;
    if(0UL != (UBase_t) pstLayerArg)
    {
        uxHeightReg = stDimensionsArg.uxHeight;
        uxWidthReg = stDimensionsArg.uxWidth;
        uxHeightTotalReg = pstLayerArg->uxHeightTotal;
        uxWidthTotalReg = pstLayerArg->uxWidthTotal;
        uxCoordXReg = stDimensionsArg.uxCoordX_Initial;
        uxCoordYReg = stDimensionsArg.uxCoordY_Initial;
        uxStatusHeight = (UBase_t) Graphics__enCheckParams(uxHeightReg,  uxCoordYReg, uxHeightTotalReg);
        uxStatusWidth = (UBase_t) Graphics__enCheckParams(uxWidthReg,  uxCoordXReg, uxWidthTotalReg);

        uxStatusHeight |= uxStatusWidth;
        enStatus = (Graphics_nSTATUS) uxStatusHeight;

        if(Graphics_enSTATUS_OK == enStatus)
        {
            pvfCallback(pstLayerArg, stDimensionsArg, uxColor);
        }
    }
}
