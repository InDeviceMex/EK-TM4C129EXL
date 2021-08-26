/**
 *
 * @file SYSEXC_InterruptRoutine_Source.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSEXC/Driver/Interrupt/InterruptRoutine/xHeader/SYSEXC_InterruptRoutine_Source.h>

static void SYSEXC_vIRQSourceHandler_Dummy(void);

static void (*SYSEXC__vIRQSourceHandler[(uint32_t) SYSEXC_enINTERRUPT_MAX]) (void) =
{
   &SYSEXC_vIRQSourceHandler_Dummy,&SYSEXC_vIRQSourceHandler_Dummy,
   &SYSEXC_vIRQSourceHandler_Dummy,&SYSEXC_vIRQSourceHandler_Dummy,
   &SYSEXC_vIRQSourceHandler_Dummy,&SYSEXC_vIRQSourceHandler_Dummy,
   &SYSEXC_vIRQSourceHandler_Dummy
};

static void SYSEXC_vIRQSourceHandler_Dummy(void)
{
    while(1UL){}
}

void (*SYSEXC__pvfGetIRQSourceHandler(SYSEXC_nINTERRUPT enInterruptSourceArg))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = SYSEXC__vIRQSourceHandler[(uint32_t) enInterruptSourceArg];
    return (pvfFunctionReg);
}

void (**SYSEXC__pvfGetIRQSourceHandlerPointer(SYSEXC_nINTERRUPT enInterruptSourceArg))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &SYSEXC__vIRQSourceHandler[(uint32_t) enInterruptSourceArg];
    return (pvfFunctionReg);
}
