/**
 *
 * @file ST7735_WorkingArea.h
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
#ifndef XAPPLICATION_ST7735_GRAPHICS_XHEADER_ST7735_WORKINGAREA_H_
#define XAPPLICATION_ST7735_GRAPHICS_XHEADER_ST7735_WORKINGAREA_H_

#include <xApplication/ST7735/Graphics/Common/ST7735_Common.h>

void ST7735__vSetWorkingWindow(ST7735_Layer_t* restrict enLayerArg, ST7735_DIMENSIONS_t stDimesionsArg);
void ST7735__vSetWorkingArea(ST7735_Layer_t* restrict enLayerArg, ST7735_DIMENSIONS_t stDimesionsArg);

#endif /* XAPPLICATION_ST7735_GRAPHICS_XHEADER_ST7735_WORKINGAREA_H_ */
