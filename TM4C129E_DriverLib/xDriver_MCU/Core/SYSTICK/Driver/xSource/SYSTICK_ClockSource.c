/**
 *
 * @file SYSTICK_ClockSource.c
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
 * @verbatim 18 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_ClockSource.h>

#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/Primitives/SYSTICK_Primitives.h>

SYSTICK_nERROR SYSTICK__enSetClockSource(SYSTICK_nMODULE enModuleArg,
                                         SYSTICK_nCLKSOURCE enClockSrcArg)
{
    SYSTICK_Register_t stRegister;
    SYSTICK_nERROR enErrorReg;

    stRegister.uxShift = SYSTICK_CSR_R_CLKSOURCE_BIT;
    stRegister.uxMask = SYSTICK_CSR_CLKSOURCE_MASK;
    stRegister.uptrAddress = SYSTICK_CSR_OFFSET;
    stRegister.uxValue = (UBase_t) enClockSrcArg;
    enErrorReg = SYSTICK__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enGetClockSource(SYSTICK_nMODULE enModuleArg,
                                         SYSTICK_nCLKSOURCE* penClockSrcArg)
{
    SYSTICK_Register_t stRegister;
    SYSTICK_nERROR enErrorReg;

    enErrorReg = SYSTICK_enERROR_OK;
    if(0UL == (uintptr_t) penClockSrcArg)
    {
        enErrorReg = SYSTICK_enERROR_POINTER;
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SYSTICK_CSR_R_CLKSOURCE_BIT;
        stRegister.uxMask = SYSTICK_CSR_CLKSOURCE_MASK;
        stRegister.uptrAddress = SYSTICK_CSR_OFFSET;
        enErrorReg = SYSTICK__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        *penClockSrcArg = (SYSTICK_nCLKSOURCE) stRegister.uxValue;
    }
    return (enErrorReg);
}

