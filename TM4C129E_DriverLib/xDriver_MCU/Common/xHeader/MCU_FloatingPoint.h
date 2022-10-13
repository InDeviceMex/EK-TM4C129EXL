/**
 *
 * @file MCU_FloatingPoint.h
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
 * @verbatim 2 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_FLOATINGPOINT_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_FLOATINGPOINT_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

UBase_t MCU__uxSetFPUStatusControl(UBase_t uxValueArg);
void MCU__vSetFPUStatusControl(UBase_t uxValueArg);
UBase_t MCU__uxGetFPUStatusControl(void);

UBase_t MCU__uxSetFPUStatusControlMask(UBase_t uxBitMaskArg);
UBase_t MCU__uxClearFPUStatusControlMask(UBase_t uxBitMaskArg);
UBase_t MCU__uxFPUStatusControlMask(UBase_t uxBitMaskArg, UBase_t uxValueArg);

void MCU__vSetFPUStatusControlMask(UBase_t uxBitMaskArg);
void MCU__vClearFPUStatusControlMask(UBase_t uxBitMaskArg);
void MCU__vFPUStatusControlMask(UBase_t uxBitMaskArg, UBase_t uxValueArg);

UBase_t MCU__uxGetFPUStatusControlMask(UBase_t uxBitMaskArg);

UBase_t MCU__uxSetFPUStatusControlBit(UBase_t uxBitBitArg);
UBase_t MCU__uxClearFPUStatusControlBit(UBase_t uxBitBitArg);
UBase_t MCU__uxFPUStatusControlBit(UBase_t uxBitBitArg, UBase_t uxValueArg);

void MCU__vSetFPUStatusControlBit(UBase_t uxBitBitArg);
void MCU__vClearFPUStatusControlBit(UBase_t uxBitBitArg);
void MCU__vFPUStatusControlBit(UBase_t uxBitBitArg, UBase_t uxValueArg);

UBase_t MCU__uxGetFPUStatusControlBit(UBase_t uxBitPosArg);


#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_FLOATINGPOINT_H_ */
