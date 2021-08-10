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

uint32_t ST7735__u32WriteCommand(uint16_t u16DataArg);
uint32_t ST7735__u32WriteData(uint32_t u32DataArg);
uint32_t ST7735__u32WriteFifo(uint16_t u16DataArg, uint32_t u32BufferCant);
uint32_t ST7735__u32WriteDMA(uint32_t u32DataArg, uint32_t u32BufferCant);

uint32_t ST7735__u32GetDMATxInterupt(void);
void ST7735__vSetDMATxInterupt(uint32_t u32StateArg);

#endif /* XAPPLICATION_ST7735_XHEADER_ST7735_WRITE_H_ */
