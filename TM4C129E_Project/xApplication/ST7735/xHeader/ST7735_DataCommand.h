/**
 *
 * @file ST7735_DataCommand.h
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
#ifndef XAPPLICATION_ST7735_XHEADER_ST7735_DATACOMMAND_H_
#define XAPPLICATION_ST7735_XHEADER_ST7735_DATACOMMAND_H_

#include <xApplication/ST7735/xHeader/ST7735_Enum.h>

error_t ST7735__enInitDataCommand(void);
error_t ST7735__enSetCommand(void);
error_t ST7735__enSetData(void);

#endif /* XAPPLICATION_ST7735_XHEADER_ST7735_DATACOMMAND_H_ */
