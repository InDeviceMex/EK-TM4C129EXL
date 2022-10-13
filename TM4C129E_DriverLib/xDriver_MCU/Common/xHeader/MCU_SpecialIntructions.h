/**
 *
 * @file MCU_SpecialIntructions.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 28 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_SPECIALINTRUCTIONS_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_SPECIALINTRUCTIONS_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

UBase_t MCU__uxGetCounLeadingZeros(UBase_t uxValueArg);
uint8_t MCU__u8ReverseByte(uint8_t u8Value);
uint16_t MCU__u16ReverseHalfWorld(uint16_t u16Value);
UBase_t MCU__uxReverseWorld(UBase_t uxValueArg);

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_SPECIALINTRUCTIONS_H_ */
