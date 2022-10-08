/**
 *
 * @file QEI_InterruptRoutine_Source.c
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/QEI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/QEI_InterruptRoutine_Source.h>

void QEI_vIRQSourceHandler_Dummy(void);

void (*QEI__vIRQSourceHandler[(UBase_t) QEI_enMODULE_MAX]
                             [(UBase_t) QEI_enINTERRUPT_MAX]) (void) =
{
    {
         &QEI_vIRQSourceHandler_Dummy,&QEI_vIRQSourceHandler_Dummy,
         &QEI_vIRQSourceHandler_Dummy,&QEI_vIRQSourceHandler_Dummy,
         &QEI_vIRQSourceHandler_Dummy
    },
};

void QEI_vIRQSourceHandler_Dummy(void)
{
    while(1UL){}
}


void (*QEI__pvfGetIRQSourceHandler(QEI_nMODULE enQEISubmodule,
                                   QEI_nINTERRUPT enQEIInterruptNum))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = QEI__vIRQSourceHandler[(UBase_t) enQEISubmodule]
                                           [(UBase_t)enQEIInterruptNum];
    return (pvfFunctionReg);
}

void (**QEI__pvfGetIRQSourceHandlerPointer(QEI_nMODULE enQEISubmodule,
                                           QEI_nINTERRUPT enQEIInterruptNum))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &QEI__vIRQSourceHandler[(UBase_t) enQEISubmodule]
                                                             [(UBase_t)enQEIInterruptNum];
    return (pvfFunctionReg);
}


