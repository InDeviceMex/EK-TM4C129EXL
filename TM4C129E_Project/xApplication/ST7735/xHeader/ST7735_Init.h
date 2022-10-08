/**
 *
 * @file ST7735_Init.h
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
#ifndef XAPPLICATION_ST7735_XHEADER_ST7735_INIT_H_
#define XAPPLICATION_ST7735_XHEADER_ST7735_INIT_H_

#include <xUtils/Font/Font.h>
#include <xUtils/Standard/Standard.h>
#include <xApplication/ST7735/xHeader/ST7735_Enum.h>

void ST7735__vInit(const uint8_t *pu8CommandList);
void ST7735__vInitRModel(ST7735_nINITFLAGS enOptionArg);
void ST7735__vFillRect(UBase_t uxXCoord, UBase_t uxYCoord, UBase_t uxWidthArg, UBase_t uxHeightArg, UBase_t uxColor);
void ST7735__vDrawBuffer(UBase_t uxXCoord, UBase_t uxYCoord, UBase_t uxWidthArg, UBase_t uxHeightArg, uint16_t* u16Buffer);

void ST7735__vBufferChar(uint16_t* pu16Buffer, UBase_t uxCoordX0, UBase_t uxCoordY0, char cASCII, uint16_t u16Color, FONT_t* sFontType);
void ST7735__vBufferString(uint16_t* pu16Buffer, UBase_t uxCoordX0, UBase_t uxCoordY0, char* cASCII, uint16_t u16Color, FONT_t* sFontType);

#endif /* XAPPLICATION_ST7735_XHEADER_ST7735_INIT_H_ */
