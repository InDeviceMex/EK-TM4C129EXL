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

#if defined (__TI_ARM__ )

    #pragma  CODE_SECTION(MCU__enDisGlobalInterrupt_RAM, ".ramcode")
    #pragma  CODE_SECTION(MCU__enEnGlobalInterrupt_RAM, ".ramcode")
    #pragma  CODE_SECTION(MCU__enSetGlobalInterrupt_RAM, ".ramcode")
    #pragma  CODE_SECTION(MCU__enGetGlobalInterrupt_RAM, ".ramcode")
    #pragma  CODE_SECTION(MCU__enDisGlobalFault_RAM, ".ramcode")
    #pragma  CODE_SECTION(MCU__enEnGlobalFault_RAM, ".ramcode")
    #pragma  CODE_SECTION(MCU__enSetGlobalFault_RAM, ".ramcode")
    #pragma  CODE_SECTION(MCU__enGetGlobalFault_RAM, ".ramcode")
    #pragma  CODE_SECTION(MCU__vWaitForInterrupt_RAM, ".ramcode")
    #pragma  CODE_SECTION(MCU__vWaitForEvent_RAM, ".ramcode")
    #pragma  CODE_SECTION(MCU__vSendEvent_RAM, ".ramcode")
    #pragma  CODE_SECTION(MCU__enSetBasePriorityInterrupt_RAM, ".ramcode")
    #pragma  CODE_SECTION(MCU__enGetBasePriorityInterrupt_RAM, ".ramcode")

    __attribute__((naked)) MCU_nENABLE MCU__enDisGlobalInterrupt_RAM(void);
    __attribute__((naked)) MCU_nENABLE MCU__enEnGlobalInterrupt_RAM(void);
    __attribute__((naked)) MCU_nENABLE MCU__enSetGlobalInterrupt_RAM(MCU_nENABLE enStateInterrupt);
    __attribute__((naked)) MCU_nENABLE MCU__enGetGlobalInterrupt_RAM(void);

    __attribute__((naked)) MCU_nENABLE MCU__enDisGlobalFault_RAM(void);
    __attribute__((naked)) MCU_nENABLE MCU__enEnGlobalFault_RAM(void);
    __attribute__((naked)) MCU_nENABLE MCU__enSetGlobalFault_RAM(MCU_nENABLE enStateInterrupt);
    __attribute__((naked)) MCU_nENABLE MCU__enGetGlobalFault_RAM(void);

    __attribute__((naked)) MCU_nPRIORITY MCU__enSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt);
    __attribute__((naked)) MCU_nPRIORITY MCU__enGetBasePriorityInterrupt_RAM(void);

    void MCU__vWaitForInterrupt_RAM(void);
    void MCU__vWaitForEvent_RAM(void);
    void MCU__vSendEvent_RAM(void);

    #pragma CHECK_MISRA("-8.5")

        #pragma FUNC_ALWAYS_INLINE (MCU__vWaitForInterrupt)
        #pragma FUNC_ALWAYS_INLINE (MCU__vWaitForEvent)
        #pragma FUNC_ALWAYS_INLINE (MCU__vSendEvent)
        #pragma FUNC_ALWAYS_INLINE (MCU__vSetBasePriorityInterrupt)

        inline void MCU__vWaitForInterrupt(void);
        inline void MCU__vWaitForEvent(void);
        inline void MCU__vSendEvent(void);
        inline void MCU__vSetBasePriorityInterrupt(MCU_nPRIORITY enStateInterrupt);

        inline void MCU__vWaitForInterrupt(void)
        {
            {__asm(" wfi");}
        }

        inline void MCU__vWaitForEvent(void)
        {
            {__asm(" wfe");}
        }

        inline void MCU__vSendEvent(void)
        {
            {__asm(" sev");}
        }

        inline void MCU__vSetBasePriorityInterrupt(MCU_nPRIORITY enStateInterrupt)
        {
            {__asm(" and     r1, r0, #0x7\n");}
            {__asm(" lsl     r1, #0x5\n");}
            {__asm(" msr     BASEPRI, r1\n");}
            {__asm(" dsb\n");}
            {__asm(" isb\n");}
        }

    #pragma RESET_MISRA("8.5")

#elif defined (__GNUC__ )

    __attribute__((naked)) MCU_nENABLE MCU__enDisGlobalInterrupt_RAM(void)__attribute__((section(".ramcode")));
    __attribute__((naked)) MCU_nENABLE MCU__enEnGlobalInterrupt_RAM(void)__attribute__((section(".ramcode")));
    __attribute__((naked)) MCU_nENABLE MCU__enSetGlobalInterrupt_RAM(MCU_nENABLE enStateInterrupt)__attribute__((section(".ramcode")));
    __attribute__((naked)) MCU_nENABLE MCU__enGetGlobalInterrupt_RAM(void)__attribute__((section(".ramcode")));

    __attribute__((naked)) MCU_nENABLE MCU__enDisGlobalFault_RAM(void)__attribute__((section(".ramcode")));
    __attribute__((naked)) MCU_nENABLE MCU__enEnGlobalFault_RAM(void)__attribute__((section(".ramcode")));
    __attribute__((naked)) MCU_nENABLE MCU__enSetGlobalFault_RAM(MCU_nENABLE enStateInterrupt)__attribute__((section(".ramcode")));
    __attribute__((naked)) MCU_nENABLE MCU__enGetGlobalFault_RAM(void)__attribute__((section(".ramcode")));


    __attribute__((naked)) MCU_nPRIORITY MCU__enSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt)__attribute__((section(".ramcode")));
    __attribute__((naked)) MCU_nPRIORITY MCU__enGetBasePriorityInterrupt_RAM(void)__attribute__((section(".ramcode")));

    void MCU__vWaitForInterrupt_RAM(void)__attribute__((section(".ramcode")));
    void MCU__vWaitForEvent_RAM(void)__attribute__((section(".ramcode")));
    void MCU__vSendEvent_RAM(void)__attribute__((section(".ramcode")));

    inline void MCU__vWaitForInterrupt(void)__attribute__((always_inline));
    inline void MCU__vWaitForEvent(void)__attribute__((always_inline));
    inline void MCU__vSendEvent(void)__attribute__((always_inline));
    inline void MCU__vSetBasePriorityInterrupt(MCU_nPRIORITY enStateInterrupt)__attribute__((always_inline));

    inline void MCU__vWaitForInterrupt(void)
    {
        {__asm(" wfi");}
    }

    inline void MCU__vWaitForEvent(void)
    {
        {__asm(" wfe");}
    }

    inline void MCU__vSendEvent(void)
    {
        {__asm(" sev");}
    }

    inline void MCU__vSetBasePriorityInterrupt(MCU_nPRIORITY enStateInterrupt)
    {
        {__asm(" and     r1, r0, #0x7\n");}
        {__asm(" lsl     r1, #0x5\n");}
        {__asm(" msr     BASEPRI, r1\n");}
        {__asm(" dsb\n");}
        {__asm(" isb\n");}
    }

#endif

__attribute__((naked)) MCU_nENABLE MCU__enDisGlobalInterrupt(void);
__attribute__((naked)) MCU_nENABLE MCU__enEnGlobalInterrupt(void);
__attribute__((naked)) MCU_nENABLE MCU__enSetGlobalInterrupt(MCU_nENABLE enStateInterrupt);
__attribute__((naked)) MCU_nENABLE MCU__enGetGlobalInterrupt(void);

__attribute__((naked)) MCU_nENABLE MCU__enDisGlobalFault(void);
__attribute__((naked)) MCU_nENABLE MCU__enEnGlobalFault(void);
__attribute__((naked)) MCU_nENABLE MCU__enSetGlobalFault(MCU_nENABLE enStateInterrupt);
__attribute__((naked)) MCU_nENABLE MCU__enGetGlobalFault(void);

__attribute__((naked)) MCU_nPRIORITY MCU__enSetBasePriorityInterrupt(MCU_nPRIORITY enStateInterrupt);
__attribute__((naked)) MCU_nPRIORITY MCU__enGetBasePriorityInterrupt(void);

#if defined (__TI_ARM__ )
    #pragma CHECK_MISRA("-19.7,-19.13")
#endif

#define STRINGIZE_NX(A) #A
#define STRINGIZE(A) STRINGIZE_NX(A)

#define MCU__vSetBreakpoint(values)    {__asm(STRINGIZE_NX(\t BKPT values));}
#define MCU__vSupervisorCall(values)    {__asm(STRINGIZE_NX(\t SVC values));}

#if defined (__TI_ARM__ )
    #pragma RESET_MISRA("19.7,19.13")
#endif

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_INTERRUPT_H_ */
