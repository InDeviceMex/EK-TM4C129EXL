/**
 *
 * @file ST7735_Commands.h
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
#ifndef XAPPLICATION_ST7735_XHEADER_ST7735_COMMANDS_H_
#define XAPPLICATION_ST7735_XHEADER_ST7735_COMMANDS_H_

#include <xUtils/Standard/Standard.h>

extern const uint8_t ST7735_pcCommandSet1[59UL];
extern const uint8_t ST7735_pcCommandSet2_Green[13UL] ;
extern const uint8_t ST7735_pcCommandSet2_Red[13UL];
extern const uint8_t ST7735_pcCommandSet3[43UL];


void ST7735__vCommandList(const uint8_t * pu8AddressArg);

#endif /* XAPPLICATION_ST7735_XHEADER_ST7735_COMMANDS_H_ */
