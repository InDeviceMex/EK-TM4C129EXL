/**
 *
 * @file PWM_Generator_Direction.c
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
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Direction.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/PWM_Intrinsics.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

PWM_nERROR PWM_Generator__enSetDirectionByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nDIRECTION enDirectionArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_CTL_OFFSET;

        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_GEN_CTL_R_MODE_BIT;
        stRegister.uxMask = PWM_GEN_CTL_MODE_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = (UBase_t) enDirectionArg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetDirectionByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nDIRECTION enDirectionArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxGenerator = 0UL;
        UBase_t uxGenMaskReg = (UBase_t) enGeneratorMaskArg;
        while((0UL != uxGenMaskReg) && (PWM_enERROR_OK == enErrorReg))
        {
            if(0UL != (1UL & uxGenMaskReg))
            {
                enErrorReg = PWM_Generator__enSetDirectionByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enDirectionArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}


PWM_nERROR PWM_Generator__enGetDirectionByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nDIRECTION* penDirectionArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penDirectionArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;
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
        uxOffsetReg += PWM_GEN_CTL_OFFSET;

        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_GEN_CTL_R_MODE_BIT;
        stRegister.uxMask = PWM_GEN_CTL_MODE_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *penDirectionArg = (PWM_nDIRECTION) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enGetDirectionByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nGENMASK* penDirectionArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penDirectionArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxGeneratorGetReg = 0UL;
        UBase_t uxGenerator = 0UL;
        UBase_t uxValueReg = 1UL;
        UBase_t uxGenMaskReg = (UBase_t) enGeneratorMaskArg;
        while((0UL != uxGenMaskReg) && (PWM_enERROR_OK == enErrorReg))
        {
            if(0UL != (1UL & uxGenMaskReg))
            {
                PWM_nDIRECTION enTempReg = PWM_enDIRECTION_DOWN;
                enErrorReg = PWM_Generator__enGetDirectionByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, &enTempReg);
                if(PWM_enERROR_OK == enErrorReg)
                {
                    if(PWM_enDIRECTION_DOWN != enTempReg)
                    {
                        uxGeneratorGetReg |= uxValueReg;
                    }
                }
            }
            uxValueReg <<= 1UL;
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
        if(PWM_enERROR_OK == enErrorReg)
        {
            *penDirectionArg = (PWM_nGENMASK) uxGeneratorGetReg;
        }
    }
    return (enErrorReg);
}
