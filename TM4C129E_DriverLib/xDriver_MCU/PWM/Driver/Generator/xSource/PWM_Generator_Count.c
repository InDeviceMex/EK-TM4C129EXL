/**
 *
 * @file PWM_Generator_Count.c
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
 * @verbatim 7 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Count.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/PWM_Intrinsics.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

PWM_nERROR PWM_Generator__enGetCounterValueByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, UBase_t* puxValueArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxValueArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_COUNT_OFFSET;

        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_GEN_COUNT_R_COUNT_BIT;
        stRegister.uxMask = PWM_GEN_COUNT_COUNT_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *puxValueArg = (UBase_t) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
