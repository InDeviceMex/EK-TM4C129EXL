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

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(MCU__enDisGlobalInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enEnGlobalInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__vSetGlobalInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enSetGlobalInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enGetGlobalInterrupt_RAM, ".ramcode")

#pragma  CODE_SECTION(MCU__enDisGlobalFault_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enEnGlobalFault_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enSetGlobalFault_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enGetGlobalFault_RAM, ".ramcode")

#pragma  CODE_SECTION(MCU__vSetBasePriorityInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enSetBasePriorityInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enGetBasePriorityInterrupt_RAM, ".ramcode")

__attribute__((naked)) MCU_nSTATE MCU__enDisGlobalInterrupt_RAM(void);
__attribute__((naked)) MCU_nSTATE MCU__enEnGlobalInterrupt_RAM(void);
__attribute__((naked)) void MCU__vSetGlobalInterrupt_RAM(MCU_nSTATE enStateInterrupt);
__attribute__((naked)) MCU_nSTATE MCU__enSetGlobalInterrupt_RAM(MCU_nSTATE enStateInterrupt);
__attribute__((naked)) MCU_nSTATE MCU__enGetGlobalInterrupt_RAM(void);


__attribute__((naked)) MCU_nSTATE MCU__enDisGlobalFault_RAM(void);
__attribute__((naked)) MCU_nSTATE MCU__enEnGlobalFault_RAM(void);
__attribute__((naked)) MCU_nSTATE MCU__enSetGlobalFault_RAM(MCU_nSTATE enStateInterrupt);
__attribute__((naked)) MCU_nSTATE MCU__enGetGlobalFault_RAM(void);


__attribute__((naked)) void MCU__vSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt);
__attribute__((naked)) MCU_nPRIORITY MCU__enSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt);
__attribute__((naked)) MCU_nPRIORITY MCU__enGetBasePriorityInterrupt_RAM(void);


#elif defined (__GNUC__ )

__attribute__((naked)) MCU_nSTATE MCU__enDisGlobalInterrupt_RAM(void)__attribute__((section(".ramcode")));
__attribute__((naked)) MCU_nSTATE MCU__enEnGlobalInterrupt_RAM(void)__attribute__((section(".ramcode")));
__attribute__((naked)) void MCU__vSetGlobalInterrupt_RAM(MCU_nSTATE enStateInterrupt)__attribute__((section(".ramcode")));
__attribute__((naked)) MCU_nSTATE MCU__enSetGlobalInterrupt_RAM(MCU_nSTATE enStateInterrupt)__attribute__((section(".ramcode")));
__attribute__((naked)) MCU_nSTATE MCU__enGetGlobalInterrupt_RAM(void)__attribute__((section(".ramcode")));


__attribute__((naked)) MCU_nSTATE MCU__enDisGlobalFault_RAM(void)__attribute__((section(".ramcode")));
__attribute__((naked)) MCU_nSTATE MCU__enEnGlobalFault_RAM(void)__attribute__((section(".ramcode")));
__attribute__((naked)) MCU_nSTATE MCU__enSetGlobalFault_RAM(MCU_nSTATE enStateInterrupt)__attribute__((section(".ramcode")));
__attribute__((naked)) MCU_nSTATE MCU__enGetGlobalFault_RAM(void)__attribute__((section(".ramcode")));


__attribute__((naked)) void MCU__vSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt)__attribute__((section(".ramcode")));
__attribute__((naked)) MCU_nPRIORITY MCU__enSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt)__attribute__((section(".ramcode")));
__attribute__((naked)) MCU_nPRIORITY MCU__enGetBasePriorityInterrupt_RAM(void)__attribute__((section(".ramcode")));

#endif

__attribute__((naked)) MCU_nSTATE MCU__enDisGlobalInterrupt(void);

__attribute__((naked)) MCU_nSTATE MCU__enEnGlobalInterrupt(void);
__attribute__((naked)) void MCU__vSetGlobalInterrupt(MCU_nSTATE enStateInterrupt);
__attribute__((naked)) MCU_nSTATE MCU__enSetGlobalInterrupt(MCU_nSTATE enStateInterrupt);
__attribute__((naked)) MCU_nSTATE MCU__enGetGlobalInterrupt(void);


__attribute__((naked)) MCU_nSTATE MCU__enDisGlobalFault(void);
__attribute__((naked)) MCU_nSTATE MCU__enEnGlobalFault(void);
__attribute__((naked)) MCU_nSTATE MCU__enSetGlobalFault(MCU_nSTATE enStateInterrupt);
__attribute__((naked)) MCU_nSTATE MCU__enGetGlobalFault(void);


__attribute__((naked)) void MCU__vSetBasePriorityInterrupt(MCU_nPRIORITY enStateInterrupt);
__attribute__((naked)) MCU_nPRIORITY MCU__enSetBasePriorityInterrupt(MCU_nPRIORITY enStateInterrupt);
__attribute__((naked)) MCU_nPRIORITY MCU__enGetBasePriorityInterrupt(void);

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma CHECK_MISRA("-19.7,-19.13")
#endif

#define STRINGIZE_NX(A) #A
#define STRINGIZE(A) STRINGIZE_NX(A)

#define MCU__vSetBreakpoint(values)    {__asm volatile(STRINGIZE_NX(\t BKPT values));}
#define MCU__vSupervisorCall(values)    {__asm volatile(STRINGIZE_NX(\t SVC values));}

#define MCU__vWaitForInterrupt_RAM() {__asm volatile(" wfi \n" \
                                                     " dsb \n" \
                                                     " isb \n");}
#define MCU__vWaitForEvent_RAM() {__asm volatile(" wfe \n" \
                                                 " dsb \n" \
                                                 " isb \n");}
#define MCU__vSendEvent_RAM() {__asm volatile(" sev \n" \
                                              " dsb \n" \
                                              " isb \n");}
#define MCU__vEnGlobalInterrupt_RAM() { __asm volatile(" cpsie   i \n" \
                                                       " dsb \n" \
                                                       " isb\n");}

#define MCU__vWaitForInterrupt() {__asm volatile(" wfi \n" \
                                                     " dsb \n" \
                                                     " isb \n");}
#define MCU__vWaitForEvent() {__asm volatile(" wfe \n" \
                                                 " dsb \n" \
                                                 " isb \n");}
#define MCU__vSendEvent() {__asm volatile(" sev \n" \
                                              " dsb \n" \
                                              " isb \n");}
#define MCU__vEnGlobalInterrupt() { __asm volatile( " cpsie   i \n" \
                                                    " dsb \n" \
                                                    " isb\n");}

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("19.7,19.13")
#endif

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_ */
