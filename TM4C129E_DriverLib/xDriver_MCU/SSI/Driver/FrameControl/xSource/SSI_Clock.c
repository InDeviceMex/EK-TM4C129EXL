/**
 *
 * @file SSI_Clock.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/FrameControl/xHeader/SSI_Clock.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

SSI_nERROR SSI__enSetSerialClockRate(SSI_nMODULE enModuleArg, UBase_t uxRateArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    stRegister.uxShift = SSI_CR0_R_SCR_BIT;
    stRegister.uxMask = SSI_CR0_SCR_MASK;
    stRegister.uptrAddress = SSI_CR0_OFFSET;
    stRegister.uxValue = (UBase_t) uxRateArg;
    enErrorReg = SSI__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SSI_nERROR SSI__enGetSerialClockRate(SSI_nMODULE enModuleArg, UBase_t* puxRateArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) puxRateArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SSI_CR0_R_SCR_BIT;
        stRegister.uxMask = SSI_CR0_SCR_MASK;
        stRegister.uptrAddress = SSI_CR0_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        *puxRateArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}
