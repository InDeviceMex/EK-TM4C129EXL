/**
 *
 * @file ST7735_Reset.h
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
#ifndef XAPPLICATION_ST7735_XHEADER_ST7735_RESET_H_
#define XAPPLICATION_ST7735_XHEADER_ST7735_RESET_H_

#include <xApplication/ST7735/xHeader/ST7735_Enum.h>

error_t ST7735__enInitReset(void);
error_t ST7735__enSetReset(void);
error_t ST7735__enClearReset(void);

#endif /* XAPPLICATION_ST7735_XHEADER_ST7735_RESET_H_ */
