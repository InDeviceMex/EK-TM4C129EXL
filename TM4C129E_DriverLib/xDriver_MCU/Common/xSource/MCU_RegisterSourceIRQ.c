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

MCU_nERROR MCU__enRegisterIRQSourceHandler(MCU__pvfIRQSourceHandler_t pfIrqSourceHandler,
                                    MCU__pvfIRQSourceHandler_t* pfIrqArrayHandler,
                                    uint32_t u32InterruptSource,
                                    uint32_t u32InterruptSourceMax)
{
    uint32_t u32IrqSourceHandler;
    MCU_nERROR enErrorReg;
    if((0UL != (uint32_t) pfIrqSourceHandler) && (0UL != (uint32_t) pfIrqArrayHandler))
    {
        enErrorReg = MCU__enCheckParams(u32InterruptSource, u32InterruptSourceMax);
        if(MCU_enERROR_OK == enErrorReg)
        {
            u32IrqSourceHandler = (uint32_t) pfIrqSourceHandler;
            u32IrqSourceHandler |= 1UL;

            pfIrqArrayHandler += u32InterruptSource;
            *pfIrqArrayHandler = (void (*) (void)) u32IrqSourceHandler;
        }
    }
    else
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    return (enErrorReg);
}

void MCU__vRegisterIRQSourceHandler_RAM(MCU__pvfIRQSourceHandler_t pfIrqSourceHandler,
                                        MCU__pvfIRQSourceHandler_t* pfIrqArrayHandler,
                                        uint32_t u32InterruptSource,
                                        uint32_t u32InterruptSourceMax)
{
    uint32_t u32IrqSourceHandler;
    MCU_nERROR enErrorReg;
    if((0UL != (uint32_t) pfIrqSourceHandler) && (0UL != (uint32_t) pfIrqArrayHandler))
    {
        enErrorReg = MCU__enCheckParams_RAM(u32InterruptSource, u32InterruptSourceMax);
        if(MCU_enERROR_OK == enErrorReg)
        {
            u32IrqSourceHandler = (uint32_t) pfIrqSourceHandler;
            u32IrqSourceHandler |= 1UL;

            pfIrqArrayHandler += u32InterruptSource;
            *pfIrqArrayHandler = (void (*) (void)) u32IrqSourceHandler;
        }
    }
    else
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    return (enErrorReg);
}
