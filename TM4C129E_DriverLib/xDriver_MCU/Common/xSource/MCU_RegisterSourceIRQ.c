/**
 *
 * @file MCU_RegisterSourceIRQ.c
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
#include <xDriver_MCU/Common/xHeader/MCU_RegisterSourceIRQ.h>
#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>

MCU_nERROR MCU__enRegisterIRQSourceHandler(MCU_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                    MCU_pvfIRQSourceHandler_t* pfIrqArrayHandler,
                                    UBase_t uxInterruptSource,
                                    UBase_t uxInterruptSourceMax)
{
    UBase_t uxIrqSourceHandler;
    MCU_nERROR enErrorReg;
    enErrorReg = MCU_enERROR_OK;
    if((0UL == (uintptr_t) pfIrqSourceHandler) || (0UL == (uintptr_t) pfIrqArrayHandler))
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        enErrorReg = MCU__enCheckParams(uxInterruptSource, uxInterruptSourceMax);
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        uxIrqSourceHandler = (UBase_t) pfIrqSourceHandler;
        uxIrqSourceHandler |= 1UL;

        pfIrqArrayHandler += uxInterruptSource;
        *pfIrqArrayHandler = (MCU_pvfIRQSourceHandler_t) uxIrqSourceHandler;
    }
    return (enErrorReg);
}

MCU_nERROR MCU__enRegisterIRQSourceHandler_RAM(MCU_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                        MCU_pvfIRQSourceHandler_t* pfIrqArrayHandler,
                                        UBase_t uxInterruptSource,
                                        UBase_t uxInterruptSourceMax)
{
    UBase_t uxIrqSourceHandler;
    MCU_nERROR enErrorReg;
    enErrorReg = MCU_enERROR_OK;
    if((0UL == (uintptr_t) pfIrqSourceHandler) || (0UL == (uintptr_t) pfIrqArrayHandler))
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        enErrorReg = MCU__enCheckParams_RAM(uxInterruptSource, uxInterruptSourceMax);
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        uxIrqSourceHandler = (UBase_t) pfIrqSourceHandler;
        uxIrqSourceHandler |= 1UL;

        pfIrqArrayHandler += uxInterruptSource;
        *pfIrqArrayHandler = (MCU_pvfIRQSourceHandler_t) uxIrqSourceHandler;
    }
    return (enErrorReg);
}

void MCU__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                    void (**pfIrqVectorHandler) (void),
                                    UBase_t uxInterruptSource,
                                    UBase_t uxInterruptSourceMax)
{
    UBase_t uxInterrupt;
    UBase_t uxIrqSourceHandler ;
    if((0UL != (UBase_t) pfIrqSourceHandler) && (0UL != (UBase_t) pfIrqVectorHandler))
    {
        uxInterrupt = MCU__uxCheckParams(uxInterruptSource, uxInterruptSourceMax);
        uxIrqSourceHandler = (UBase_t) pfIrqSourceHandler;
        uxIrqSourceHandler |= 1UL;

        pfIrqVectorHandler += uxInterrupt;
        *pfIrqVectorHandler = (void (*) (void)) uxIrqSourceHandler;
    }
}

void MCU__vRegisterIRQSourceHandler_RAM(void (*pfIrqSourceHandler) (void),
                                        void (**pfIrqVectorHandler) (void),
                                        UBase_t uxInterruptSource,
                                        UBase_t uxInterruptSourceMax)
{
    UBase_t uxInterrupt;
    UBase_t uxIrqSourceHandler ;
    if((0UL != (UBase_t) pfIrqSourceHandler) && (0UL != (UBase_t) pfIrqVectorHandler))
    {
        uxInterrupt = MCU__uxCheckParams_RAM(uxInterruptSource, uxInterruptSourceMax);
        uxIrqSourceHandler = (UBase_t) pfIrqSourceHandler;
        uxIrqSourceHandler |= 1UL;

        pfIrqVectorHandler += uxInterrupt;
        *pfIrqVectorHandler = (void (*) (void)) uxIrqSourceHandler;
    }
}
