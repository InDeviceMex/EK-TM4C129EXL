/**
 *
 * @file SYSCTL_InterruptRoutine_Source.c
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
 * @verbatim 16 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/Interrupt/InterruptRoutine/xHeader/SYSCTL_InterruptRoutine_Source.h>

static void SYSCTL_vIRQSourceHandler_Dummy(void);

static void (*SYSCTL__vIRQSourceHandler[(UBase_t) SYSCTL_enINTERRUPT_MAX]) (void) =
{
   &SYSCTL_vIRQSourceHandler_Dummy,&SYSCTL_vIRQSourceHandler_Dummy,
   &SYSCTL_vIRQSourceHandler_Dummy,&SYSCTL_vIRQSourceHandler_Dummy,
   &SYSCTL_vIRQSourceHandler_Dummy
};

static void SYSCTL_vIRQSourceHandler_Dummy(void)
{
    while(1UL){}
}

void (*SYSCTL__pvfGetIRQSourceHandler(SYSCTL_nINTERRUPT enInterruptSourceArg))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = SYSCTL__vIRQSourceHandler[(UBase_t) enInterruptSourceArg];
    return (pvfFunctionReg);
}

void (**SYSCTL__pvfGetIRQSourceHandlerPointer(SYSCTL_nINTERRUPT enInterruptSourceArg))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &SYSCTL__vIRQSourceHandler[(UBase_t) enInterruptSourceArg];
    return (pvfFunctionReg);
}
