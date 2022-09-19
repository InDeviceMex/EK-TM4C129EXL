/**
 *
 * @file ADC_Sync.c
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
 * @verbatim 22 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_Sync.h>

#include <xDriver_MCU/ADC/Driver/Intrinsics/ADC_Intrinsics.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC__enSetSync(ADC_nMODULE enModuleArg, ADC_nSTATE enSyncArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    stRegister.u32Shift = ADC_PSSI_R_SYNCWAIT_BIT;
    stRegister.u32Mask = ADC_PSSI_SYNCWAIT_MASK;
    stRegister.uptrAddress = ADC_PSSI_OFFSET;
    stRegister.u32Value = (uint32_t) enSyncArg;
    enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

ADC_nERROR ADC__enEnableSync(ADC_nMODULE enModuleArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = ADC__enSetSync(enModuleArg, ADC_enSTATE_ENA);
    return (enErrorReg);
}

ADC_nERROR ADC__enDisableSync(ADC_nMODULE enModuleArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = ADC__enSetSync(enModuleArg, ADC_enSTATE_DIS);
    return (enErrorReg);
}

ADC_nERROR ADC__enGetSync(ADC_nMODULE enModuleArg, ADC_nSTATE* penSyncArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) penSyncArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = ADC_PSSI_R_SYNCWAIT_BIT;
        stRegister.u32Mask = ADC_PSSI_SYNCWAIT_MASK;
        stRegister.uptrAddress = ADC_PSSI_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        *penSyncArg = (ADC_nSTATE) stRegister.u32Value;
    }
    return (enErrorReg);
}
