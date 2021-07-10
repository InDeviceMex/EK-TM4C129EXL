/**
 *
 * @file MCU_ControlReg.h
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
 * @verbatim 17 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_CONTROLREG_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_CONTROLREG_H_

#include <xDriver_MCU/Common/xHeader/MCU_enum.h>

__attribute__((naked)) MCU_nFPU_STATE MCU__enSetFPUContextActive(MCU_nFPU_STATE enStateCoprocessor);
__attribute__((naked)) MCU_nFPU_STATE MCU__enGetFPUContextActive(void);

__attribute__((naked)) MCU_nSTACK MCU__enSetStackActive(MCU_nSTACK enStack);
__attribute__((naked)) MCU_nSTACK MCU__enGetStackActive(void);

__attribute__((naked)) void MCU__vSetPSPValue(uint32_t u32StackValue);
__attribute__((naked)) uint32_t MCU__u32GetPSPValue(void);
__attribute__((naked)) void MCU__vSetMSPValue(uint32_t u32StackValue);
__attribute__((naked)) uint32_t MCU__u32GetMSPValue(void);

__attribute__((naked)) void MCU__vSetStackValue(MCU_nSTACK enStack, uint32_t u32StackValue);
__attribute__((naked)) uint32_t MCU__u32GetStackValue(MCU_nSTACK enStack);

__attribute__((naked)) MCU_nTHREAD_LEVEL MCU__enSetThreadLevel(MCU_nTHREAD_LEVEL enLevel);
__attribute__((naked)) MCU_nTHREAD_LEVEL MCU__enGetThreadLevel(void);



#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_CONTROLREG_H_ */
