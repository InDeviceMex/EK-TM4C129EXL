/**
 *
 * @file ST7735_ClearSection.h
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
#ifndef XAPPLICATION_ST7735_GRAPHICS_XHEADER_ST7735_CLEARSECTION_H_
#define XAPPLICATION_ST7735_GRAPHICS_XHEADER_ST7735_CLEARSECTION_H_

#include <xApplication/ST7735/Graphics/Common/ST7735_Common.h>

void ST7735__vClearSection(ST7735_Layer_Typedef* restrict enLayerArg, ST7735_DIMENSIONS_Typedef stDimesionsArg, uint32_t u32Color);

#endif /* XAPPLICATION_ST7735_GRAPHICS_XHEADER_ST7735_CLEARSECTION_H_ */
