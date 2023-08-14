/**
 *
 * @file PWM_Generator_Load.c
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
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Load.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/PWM_Intrinsics.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

PWM_nERROR PWM_Generator__enSetLoadValueByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, UBase_t uxValueArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_LOAD_OFFSET;

        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_GEN_LOAD_R_LOAD_BIT;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = (UBase_t) uxValueArg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetLoadValueByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, UBase_t uxValueArg)
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
                enErrorReg = PWM_Generator__enSetLoadValueByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, uxValueArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}


PWM_nERROR PWM_Generator__enGetLoadValueByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, UBase_t* puxValueArg)
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
        uxOffsetReg += PWM_GEN_LOAD_OFFSET;

        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_GEN_LOAD_R_LOAD_BIT;
        stRegister.uxMask = PWM_GEN_LOAD_LOAD_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *puxValueArg = (UBase_t) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetLoadUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nUPDATE enModeArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enModeArg, (UBase_t) PWM_enUPDATE_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxUpdateReg = (UBase_t) enModeArg;
        uxUpdateReg &= 1UL;

        UBase_t uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_CTL_OFFSET;

        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_GEN_CTL_R_LOAD_UPD_BIT;
        stRegister.uxMask = PWM_GEN_CTL_LOAD_UPD_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = (UBase_t) uxUpdateReg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetLoadUpdateModeByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nUPDATE enModeArg)
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
                enErrorReg = PWM_Generator__enSetLoadUpdateModeByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enModeArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}


PWM_nERROR PWM_Generator__enGetLoadUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nUPDATE* penModeArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penModeArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;

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
        stRegister.uxShift = PWM_GEN_CTL_R_LOAD_UPD_BIT;
        stRegister.uxMask = PWM_GEN_CTL_LOAD_UPD_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *penModeArg = (PWM_nUPDATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
