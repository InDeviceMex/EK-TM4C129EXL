/**
 *
 * @file SYSTICK_Interrupt.c
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
 * @verbatim 21 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_Interrupt.h>

#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/Primitives/SYSTICK_Primitives.h>

SYSTICK_nERROR SYSTICK__enSetInterruptSourceState(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATE enStateArg)
{
    SYSTICK_Register_t stRegister;
    SYSTICK_nERROR enErrorReg;

    stRegister.uxShift = SYSTICK_CSR_R_TICKINT_BIT;
    stRegister.uxMask = SYSTICK_CSR_TICKINT_MASK;
    stRegister.uptrAddress = SYSTICK_CSR_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = SYSTICK__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enGetInterruptSourceState(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATE* penStateArg, SYSTICK_nSTATUS* penStatusArg)
{
    SYSTICK_Register_t stRegister;
    SYSTICK_nERROR enErrorReg;

    enErrorReg = SYSTICK_enERROR_OK;
    if((0UL == (uintptr_t) penStateArg) || (0UL == (uintptr_t) penStatusArg))
    {
        enErrorReg = SYSTICK_enERROR_POINTER;
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0UL;
        stRegister.uxMask = SYSTICK_CSR_R_COUNTFLAG_MASK | SYSTICK_CSR_R_TICKINT_MASK;
        stRegister.uptrAddress = SYSTICK_CSR_OFFSET;
        enErrorReg = SYSTICK__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        if(0UL != (SYSTICK_CSR_R_TICKINT_MASK & stRegister.uxValue))
        {
            *penStateArg = SYSTICK_enSTATE_ENA;
        }
        else
        {
            *penStateArg = SYSTICK_enSTATE_DIS;
        }

        if(0UL != (SYSTICK_CSR_R_COUNTFLAG_MASK & stRegister.uxValue))
        {
            *penStatusArg = SYSTICK_enSTATUS_ACTIVE;
        }
        else
        {
            *penStatusArg = SYSTICK_enSTATUS_INACTIVE;
        }
    }
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enEnableInterruptSource(SYSTICK_nMODULE enModuleArg)
{
    SYSTICK_nERROR enErrorReg;

    enErrorReg = SYSTICK__enSetInterruptSourceState(enModuleArg, SYSTICK_enSTATE_ENA);

    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enDisableInterruptSource(SYSTICK_nMODULE enModuleArg)
{
    SYSTICK_nERROR enErrorReg;

    enErrorReg = SYSTICK__enSetInterruptSourceState(enModuleArg, SYSTICK_enSTATE_DIS);

    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enStatusInterruptSource(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATUS* penStatusArg)
{
    SYSTICK_Register_t stRegister;
    SYSTICK_nERROR enErrorReg;

    enErrorReg = SYSTICK_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = SYSTICK_enERROR_POINTER;
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SYSTICK_CSR_R_COUNTFLAG_BIT;
        stRegister.uxMask = SYSTICK_CSR_COUNTFLAG_MASK;
        stRegister.uptrAddress = SYSTICK_CSR_OFFSET;
        enErrorReg = SYSTICK__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (SYSTICK_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}

SYSTICK_nERROR SYSTICK__enStatusMaskedInterruptSource(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATUS* penStatusArg)
{
    SYSTICK_Register_t stRegister;
    SYSTICK_nERROR enErrorReg;

    enErrorReg = SYSTICK_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = SYSTICK_enERROR_POINTER;
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0UL;
        stRegister.uxMask = SYSTICK_CSR_R_COUNTFLAG_MASK | SYSTICK_CSR_R_TICKINT_MASK;
        stRegister.uptrAddress = SYSTICK_CSR_OFFSET;
        enErrorReg = SYSTICK__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSTICK_enERROR_OK == enErrorReg)
    {
        if((SYSTICK_CSR_R_COUNTFLAG_MASK | SYSTICK_CSR_R_TICKINT_MASK) == stRegister.uxValue)
        {
            *penStatusArg = SYSTICK_enSTATUS_ACTIVE;
        }
        else
        {
            *penStatusArg = SYSTICK_enSTATUS_INACTIVE;
        }
    }
    return (enErrorReg);
}


SYSTICK_nERROR SYSTICK__enClearInterruptSource(SYSTICK_nMODULE enModuleArg)
{
    SYSTICK_nSTATUS enValueReg;
    SYSTICK_nERROR enErrorReg;

    enValueReg = SYSTICK_enSTATUS_INACTIVE;
    enErrorReg = SYSTICK__enStatusInterruptSource(enModuleArg, &enValueReg);
    (void) enValueReg;

    return (enErrorReg);
}


