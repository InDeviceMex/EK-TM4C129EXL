/**
 *
 * @file SSI_ClockConfig.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/xHeader/SSI_ClockConfig.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

SSI_nERROR SSI__enSetClockSource(SSI_nMODULE enModuleArg, SSI_nCLOCK enClockArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    stRegister.uxShift = SSI_CC_R_CS_BIT;
    stRegister.uxMask = SSI_CC_CS_MASK;
    stRegister.uptrAddress = SSI_CC_OFFSET;
    stRegister.uxValue = (UBase_t) enClockArg;
    enErrorReg = SSI__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SSI_nERROR SSI__enGetClockSource(SSI_nMODULE enModuleArg, SSI_nCLOCK* penClockArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) penClockArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SSI_CC_R_CS_BIT;
        stRegister.uxMask = SSI_CC_CS_MASK;
        stRegister.uptrAddress = SSI_CC_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        *penClockArg = (SSI_nCLOCK) stRegister.uxValue;
    }

    return (enErrorReg);
}


SSI_nERROR SSI__enSetClockPrescaler(SSI_nMODULE enModuleArg, UBase_t uxPrescalerArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    enErrorReg = SSI_enERROR_OK;
    if(0UL != (uxPrescalerArg & 1UL))
    {
        enErrorReg = SSI_enERROR_VALUE;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SSI_CPSR_R_CPSDVSR_BIT;
        stRegister.uxMask = SSI_CPSR_CPSDVSR_MASK;
        stRegister.uptrAddress = SSI_CPSR_OFFSET;
        stRegister.uxValue = (UBase_t) uxPrescalerArg;
        enErrorReg = SSI__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enGetClockPrescaler(SSI_nMODULE enModuleArg, UBase_t* puxPrescalerArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) puxPrescalerArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SSI_CPSR_R_CPSDVSR_BIT;
        stRegister.uxMask = SSI_CPSR_CPSDVSR_MASK;
        stRegister.uptrAddress = SSI_CPSR_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        *puxPrescalerArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}

