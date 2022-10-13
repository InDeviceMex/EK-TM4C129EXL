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

#pragma  CODE_SECTION(MCU__enDisableGlobalInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enEnableGlobalInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__vSetGlobalInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enSetGlobalInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enGetGlobalInterrupt_RAM, ".ramcode")

#pragma  CODE_SECTION(MCU__enDisableGlobalFault_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enEnableGlobalFault_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enSetGlobalFault_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enGetGlobalFault_RAM, ".ramcode")

#pragma  CODE_SECTION(MCU__vSetBasePriorityInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enSetBasePriorityInterrupt_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enGetBasePriorityInterrupt_RAM, ".ramcode")

MCU_nSTATE MCU__enDisableGlobalInterrupt_RAM(void);
MCU_nSTATE MCU__enEnableGlobalInterrupt_RAM(void);
void MCU__vSetGlobalInterrupt_RAM(MCU_nSTATE enStateInterrupt);
MCU_nSTATE MCU__enSetGlobalInterrupt_RAM(MCU_nSTATE enStateInterrupt);
MCU_nSTATE MCU__enGetGlobalInterrupt_RAM(void);


MCU_nSTATE MCU__enDisableGlobalFault_RAM(void);
MCU_nSTATE MCU__enEnableGlobalFault_RAM(void);
MCU_nSTATE MCU__enSetGlobalFault_RAM(MCU_nSTATE enStateInterrupt);
MCU_nSTATE MCU__enGetGlobalFault_RAM(void);


void MCU__vSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt);
MCU_nPRIORITY MCU__enSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt);
MCU_nPRIORITY MCU__enGetBasePriorityInterrupt_RAM(void);


#elif defined (__GNUC__ )

MCU_nSTATE MCU__enDisableGlobalInterrupt_RAM(void) __attribute__((section(".ramcode")));
MCU_nSTATE MCU__enEnableGlobalInterrupt_RAM(void) __attribute__((section(".ramcode")));
void MCU__vSetGlobalInterrupt_RAM(MCU_nSTATE enStateInterrupt) __attribute__((section(".ramcode")));
MCU_nSTATE MCU__enSetGlobalInterrupt_RAM(MCU_nSTATE enStateInterrupt) __attribute__((section(".ramcode")));
MCU_nSTATE MCU__enGetGlobalInterrupt_RAM(void) __attribute__((section(".ramcode")));


MCU_nSTATE MCU__enDisableGlobalFault_RAM(void) __attribute__((section(".ramcode")));
MCU_nSTATE MCU__enEnableGlobalFault_RAM(void) __attribute__((section(".ramcode")));
MCU_nSTATE MCU__enSetGlobalFault_RAM(MCU_nSTATE enStateInterrupt) __attribute__((section(".ramcode")));
MCU_nSTATE MCU__enGetGlobalFault_RAM(void) __attribute__((section(".ramcode")));


void MCU__vSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt) __attribute__((section(".ramcode")));
MCU_nPRIORITY MCU__enSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt) __attribute__((section(".ramcode")));
MCU_nPRIORITY MCU__enGetBasePriorityInterrupt_RAM(void) __attribute__((section(".ramcode")));


#endif



MCU_nSTATE MCU__enDisableGlobalInterrupt(void);

MCU_nSTATE MCU__enEnableGlobalInterrupt(void);
void MCU__vSetGlobalInterrupt(MCU_nSTATE enStateInterrupt);
MCU_nSTATE MCU__enSetGlobalInterrupt(MCU_nSTATE enStateInterrupt);
MCU_nSTATE MCU__enGetGlobalInterrupt(void);


MCU_nSTATE MCU__enDisableGlobalFault(void);
MCU_nSTATE MCU__enEnableGlobalFault(void);
MCU_nSTATE MCU__enSetGlobalFault(MCU_nSTATE enStateInterrupt);
MCU_nSTATE MCU__enGetGlobalFault(void);


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

#define MCU__vWaitForInterrupt_RAM() {__asm volatile(" wfi \n" \
                                                     " dsb \n" \
                                                     " isb \n");}
#define MCU__vWaitForEvent_RAM() {__asm volatile(" wfe \n" \
                                                 " dsb \n" \
                                                 " isb \n");}
#define MCU__vSendEvent_RAM() {__asm volatile(" sev \n" \
                                              " dsb \n" \
                                              " isb \n");}
#define MCU__vEnableGlobalInterrupt_RAM() { __asm volatile(" cpsie   i \n" \
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
#define MCU__vEnableGlobalInterrupt() { __asm volatile( " cpsie   i \n" \
                                                    " dsb \n" \
                                                    " isb\n");}

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("19.7,19.13")
#endif

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_ */
