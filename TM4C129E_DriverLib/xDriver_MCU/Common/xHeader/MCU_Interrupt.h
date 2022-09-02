/**
 *
 * @file MCU_Interrupt.h
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
 * @verbatim 27 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_

#include <xDriver_MCU/Common/xHeader/MCU_enum.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(MCU__enDisGlobalInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__vEnGlobalInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enEnGlobalInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__vSetGlobalInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enSetGlobalInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enGetGlobalInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enDisGlobalFault_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enEnGlobalFault_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enSetGlobalFault_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enGetGlobalFault_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__vWaitForInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__vWaitForEvent_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__vSendEvent_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__vSetBasePriorityInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enSetBasePriorityInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enGetBasePriorityInterrupt_RAM, ".ramcode")

MCU_nENABLE MCU__enDisGlobalInterrupt_RAM(void);
void MCU__vEnGlobalInterrupt_RAM(void);
MCU_nENABLE MCU__enEnGlobalInterrupt_RAM(void);
void MCU__vSetGlobalInterrupt_RAM(MCU_nENABLE enStateInterrupt);
MCU_nENABLE MCU__enSetGlobalInterrupt_RAM(MCU_nENABLE enStateInterrupt);
MCU_nENABLE MCU__enGetGlobalInterrupt_RAM(void);


MCU_nENABLE MCU__enDisGlobalFault_RAM(void);
MCU_nENABLE MCU__enEnGlobalFault_RAM(void);
MCU_nENABLE MCU__enSetGlobalFault_RAM(MCU_nENABLE enStateInterrupt);
MCU_nENABLE MCU__enGetGlobalFault_RAM(void);


void MCU__vSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt);
MCU_nPRIORITY MCU__enSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt);
MCU_nPRIORITY MCU__enGetBasePriorityInterrupt_RAM(void);


void MCU__vWaitForInterrupt_RAM(void);
void MCU__vWaitForEvent_RAM(void);
void MCU__vSendEvent_RAM(void);


#elif defined (__GNUC__ )

MCU_nENABLE MCU__enDisGlobalInterrupt_RAM(void)__attribute__((section(".ramcode")));
void MCU__vEnGlobalInterrupt_RAM(void)__attribute__((section(".ramcode")));
MCU_nENABLE MCU__enEnGlobalInterrupt_RAM(void)__attribute__((section(".ramcode")));
void MCU__vSetGlobalInterrupt_RAM(MCU_nENABLE enStateInterrupt)__attribute__((section(".ramcode")));
MCU_nENABLE MCU__enSetGlobalInterrupt_RAM(MCU_nENABLE enStateInterrupt)__attribute__((section(".ramcode")));
MCU_nENABLE MCU__enGetGlobalInterrupt_RAM(void)__attribute__((section(".ramcode")));


MCU_nENABLE MCU__enDisGlobalFault_RAM(void)__attribute__((section(".ramcode")));
MCU_nENABLE MCU__enEnGlobalFault_RAM(void)__attribute__((section(".ramcode")));
MCU_nENABLE MCU__enSetGlobalFault_RAM(MCU_nENABLE enStateInterrupt)__attribute__((section(".ramcode")));
MCU_nENABLE MCU__enGetGlobalFault_RAM(void)__attribute__((section(".ramcode")));


void MCU__vSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt)__attribute__((section(".ramcode")));
MCU_nPRIORITY MCU__enSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt)__attribute__((section(".ramcode")));
MCU_nPRIORITY MCU__enGetBasePriorityInterrupt_RAM(void)__attribute__((section(".ramcode")));


void MCU__vWaitForInterrupt_RAM(void)__attribute__((section(".ramcode")));
void MCU__vWaitForEvent_RAM(void)__attribute__((section(".ramcode")));
void MCU__vSendEvent_RAM(void)__attribute__((section(".ramcode")));

#endif


void MCU__vWaitForInterrupt(void);
void MCU__vWaitForEvent(void);
void MCU__vSendEvent(void);


MCU_nENABLE MCU__enDisGlobalInterrupt(void);
void MCU__vEnGlobalInterrupt(void);
MCU_nENABLE MCU__enEnGlobalInterrupt(void);
void MCU__vSetGlobalInterrupt(MCU_nENABLE enStateInterrupt);
MCU_nENABLE MCU__enSetGlobalInterrupt(MCU_nENABLE enStateInterrupt);
MCU_nENABLE MCU__enGetGlobalInterrupt(void);


MCU_nENABLE MCU__enDisGlobalFault(void);
MCU_nENABLE MCU__enEnGlobalFault(void);
MCU_nENABLE MCU__enSetGlobalFault(MCU_nENABLE enStateInterrupt);
MCU_nENABLE MCU__enGetGlobalFault(void);


void MCU__vSetBasePriorityInterrupt(MCU_nPRIORITY enStateInterrupt);
MCU_nPRIORITY MCU__enSetBasePriorityInterrupt(MCU_nPRIORITY enStateInterrupt);
MCU_nPRIORITY MCU__enGetBasePriorityInterrupt(void);

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma CHECK_MISRA("-19.7,-19.13")
#endif

#define STRINGIZE_NX(A) #A
#define STRINGIZE(A) STRINGIZE_NX(A)

#define MCU__vSetBreakpoint(values)    {__asm volatile(STRINGIZE_NX(\t BKPT values));}
#define MCU__vSupervisorCall(values)    {__asm volatile(STRINGIZE_NX(\t SVC values));}

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("19.7,19.13")
#endif

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_ */
