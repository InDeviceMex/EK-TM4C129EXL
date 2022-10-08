/**
 *
 * @file NVIC_Trigger.c
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
 * @verbatim 20 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Trigger.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/NVIC/Driver/Intrinsics/NVIC_Intrinsics.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>

NVIC_nERROR NVIC__enTriggerVector(NVIC_nMODULE enModuleArg, NVIC_nVECTOR enVectorArg)
{
    NVIC_Register_t stRegister;
    NVIC_nERROR enErrorReg;

    enErrorReg = (NVIC_nERROR) MCU__enCheckParams((UBase_t) enVectorArg, (UBase_t) NVIC_enVECTOR_MAX);
    if(NVIC_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = NVIC_STIR_R_INTID_BIT;
        stRegister.uxMask = NVIC_STIR_R_INTID_MASK;
        stRegister.uptrAddress = NVIC_STIR_OFFSET;
        stRegister.uxValue = (UBase_t) enVectorArg;
        enErrorReg = NVIC__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}
