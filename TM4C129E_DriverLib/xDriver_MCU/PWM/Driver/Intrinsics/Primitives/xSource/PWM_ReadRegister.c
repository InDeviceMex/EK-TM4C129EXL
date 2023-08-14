/**
 *
 * @file PWM_ReadRegister.c
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
 * @verbatim 26 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Intrinsics/Primitives/xHeader/PWM_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

PWM_nERROR PWM__enReadRegister(PWM_nMODULE enModuleArg, PWM_Register_t* pstRegisterDataArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) pstRegisterDataArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) PWM_enMODULE_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uintptr_t uptrModuleBase = PWM__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (PWM_nERROR) MCU__enReadRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}
