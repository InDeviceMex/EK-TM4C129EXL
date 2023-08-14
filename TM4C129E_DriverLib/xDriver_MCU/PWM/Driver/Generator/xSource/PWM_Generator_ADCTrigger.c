/**
 *
 * @file PWM_Generator_ADCTrigger.c
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
 * @verbatim 8 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_ADCTrigger.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/Primitives/PWM_Primitives.h>

PWM_nERROR PWM_Generator__enSetADCTriggerStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                          PWM_nEVENT enEventArg, PWM_nSTATE enStateArg)
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
                enErrorReg = PWM_Generator__enSetADCTriggerStateByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enEventArg, enStateArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetADCTriggerMaskStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                              PWM_nEVENTMASK enEventMaskArg, PWM_nSTATE enStateArg)
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
                enErrorReg = PWM_Generator__enSetADCTriggerMaskStateByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enEventMaskArg, enStateArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetADCTriggerMaskStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                                PWM_nEVENTMASK enEventMaskArg, PWM_nSTATE enStateArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enEventMaskArg, (UBase_t) PWM_enEVENTMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = (PWM_enSTATE_DIS == enStateArg) ? 0U : (UBase_t) enEventMaskArg;

        UBase_t uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_INTEN_OFFSET;

        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_GEN_INTEN_R_CNT_ZERO_TRG_BIT;
        stRegister.uxMask = (UBase_t) enEventMaskArg;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = uxValueReg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


PWM_nERROR PWM_Generator__enSetADCTriggerStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENT enEventArg, PWM_nSTATE enStateArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enEventArg, (UBase_t) PWM_enEVENT_SW);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_INTEN_OFFSET;

        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_GEN_INTEN_R_CNT_ZERO_TRG_BIT;
        stRegister.uxShift += (UBase_t) enEventArg;
        stRegister.uxMask = PWM_GEN_INTEN_CNT_ZERO_TRG_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}


PWM_nERROR PWM_Generator__enGetADCTriggerStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                          PWM_nEVENT enEventArg, PWM_nGENMASK* penGeneratorGetArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penGeneratorGetArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;
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
                UBase_t uxTempReg = 0UL;
                enErrorReg = PWM_Generator__enGetADCTriggerStateByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enEventArg, (PWM_nSTATE*) &uxTempReg);
                if(PWM_enERROR_OK == enErrorReg)
                {
                    if(0UL != uxTempReg)
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
            *penGeneratorGetArg = (PWM_nGENMASK) uxGeneratorGetReg;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enGetADCTriggerStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENT enEventArg, PWM_nSTATE* penStateArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enEventArg, (UBase_t) PWM_enEVENT_SW);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_INTEN_OFFSET;

        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_GEN_INTEN_R_CNT_ZERO_TRG_BIT;
        stRegister.uxShift += (UBase_t) enEventArg;
        stRegister.uxMask = PWM_GEN_INTEN_CNT_ZERO_TRG_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *penStateArg = (PWM_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enGetADCTriggerMaskStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENTMASK enEventMaskArg, PWM_nEVENTMASK* penEventMaskGetArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penEventMaskGetArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enEventMaskArg, (UBase_t) PWM_enEVENTMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_INTEN_OFFSET;

        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_GEN_INTEN_R_CNT_ZERO_TRG_BIT;
        stRegister.uxMask = (UBase_t) enEventMaskArg;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *penEventMaskGetArg = (PWM_nEVENTMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enEnableADCTriggerByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENT enEventArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetADCTriggerStateByMask(enModuleArg, enGeneratorMaskArg, enEventArg, PWM_enSTATE_ENA);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enEnableADCTriggerByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENT enEventArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetADCTriggerStateByNumber(enModuleArg, enGeneratorArg, enEventArg, PWM_enSTATE_ENA);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enEnableADCTriggerMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENTMASK enEventMaskArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetADCTriggerMaskStateByMask(enModuleArg, enGeneratorMaskArg, enEventMaskArg, PWM_enSTATE_ENA);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enEnableADCTriggerMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENTMASK enEventMaskArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetADCTriggerMaskStateByNumber(enModuleArg, enGeneratorArg, enEventMaskArg, PWM_enSTATE_ENA);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enDisableADCTriggerByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENT enEventArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetADCTriggerStateByMask(enModuleArg, enGeneratorMaskArg, enEventArg, PWM_enSTATE_DIS);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enDisableADCTriggerByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENT enEventArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetADCTriggerStateByNumber(enModuleArg, enGeneratorArg, enEventArg, PWM_enSTATE_DIS);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enDisableADCTriggerMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENTMASK enEventMaskArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetADCTriggerMaskStateByMask(enModuleArg, enGeneratorMaskArg, enEventMaskArg, PWM_enSTATE_DIS);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enDisableADCTriggerMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENTMASK enEventMaskArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetADCTriggerMaskStateByNumber(enModuleArg, enGeneratorArg, enEventMaskArg, PWM_enSTATE_DIS);
    return (enErrorReg);
}
