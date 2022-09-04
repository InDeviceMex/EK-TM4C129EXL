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

#include <xDriver_MCU/Common/xHeader/MCU_enum.h>


__attribute__((naked)) uint32_t MCU__u32SetFPUStatusControl(uint32_t u32ValueArg);
__attribute__((naked)) void MCU__vSetFPUStatusControl(uint32_t u32ValueArg);
__attribute__((naked)) uint32_t MCU__u32GetFPUStatusControl(void);

__attribute__((naked)) uint32_t MCU__u32SetFPUStatusControlMask(uint32_t u32BitMaskArg);
__attribute__((naked)) uint32_t MCU__u32ClearFPUStatusControlMask(uint32_t u32BitMaskArg);
uint32_t MCU__u32FPUStatusControlMask(uint32_t u32BitMaskArg, uint32_t u32ValueArg);

__attribute__((naked)) void MCU__vSetFPUStatusControlMask(uint32_t u32BitMaskArg);
__attribute__((naked)) void MCU__vClearFPUStatusControlMask(uint32_t u32BitMaskArg);
void MCU__vFPUStatusControlMask(uint32_t u32BitMaskArg, uint32_t u32ValueArg);

__attribute__((naked)) uint32_t MCU__u32GetFPUStatusControlMask(uint32_t u32BitMaskArg);

__attribute__((naked)) uint32_t MCU__u32SetFPUStatusControlBit(uint32_t u32BitBitArg);
__attribute__((naked)) uint32_t MCU__u32ClearFPUStatusControlBit(uint32_t u32BitBitArg);
uint32_t MCU__u32FPUStatusControlBit(uint32_t u32BitBitArg, uint32_t u32ValueArg);

__attribute__((naked)) void MCU__vSetFPUStatusControlBit(uint32_t u32BitBitArg);
__attribute__((naked)) void MCU__vClearFPUStatusControlBit(uint32_t u32BitBitArg);
void MCU__vFPUStatusControlBit(uint32_t u32BitBitArg, uint32_t u32ValueArg);

__attribute__((naked)) uint32_t MCU__u32GetFPUStatusControlBit(uint32_t u32BitPosArg);


#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_FLOATINGPOINT_H_ */
