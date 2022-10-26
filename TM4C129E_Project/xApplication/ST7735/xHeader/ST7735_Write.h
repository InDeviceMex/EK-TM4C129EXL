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

#include <xApplication/ST7735/xHeader/ST7735_Enum.h>

error_t ST7735__enInitWriteDMAConfig(void);

error_t ST7735__enWriteCommand(uint16_t u16DataArg);
error_t ST7735__enWriteData(UBase_t uxDataArg);
error_t ST7735__enWriteFifo(uint16_t u16DataArg, UBase_t uxBufferCant);
error_t ST7735__enWriteDMA(UBase_t uxDataArg, UBase_t uxBufferCant);
error_t ST7735__enWriteBuffer16bDMA(uint16_t* pu16DataArg, UBase_t uxBufferCant);

#endif /* XAPPLICATION_ST7735_XHEADER_ST7735_WRITE_H_ */
