/**
 *
 * @file ST7735_Write.h
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
#ifndef XAPPLICATION_ST7735_XHEADER_ST7735_WRITE_H_
#define XAPPLICATION_ST7735_XHEADER_ST7735_WRITE_H_

#include <xUtils/Standard/Standard.h>

void ST7735__vInitWriteDMAConfig(void);

UBase_t ST7735__uxWriteCommand(uint16_t u16DataArg);
UBase_t ST7735__uxWriteData(UBase_t uxDataArg);
UBase_t ST7735__uxWriteFifo(uint16_t u16DataArg, UBase_t uxBufferCant);
UBase_t ST7735__uxWriteDMA(UBase_t uxDataArg, UBase_t uxBufferCant);
UBase_t ST7735__uxWriteBuffer16bDMA(uint16_t* pu16DataArg, UBase_t uxBufferCant);

UBase_t ST7735__uxGetDMATxInterupt(void);
void ST7735__vSetDMATxInterupt(UBase_t uxStateArg);

#endif /* XAPPLICATION_ST7735_XHEADER_ST7735_WRITE_H_ */
