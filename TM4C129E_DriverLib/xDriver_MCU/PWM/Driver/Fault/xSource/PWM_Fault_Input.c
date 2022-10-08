/**
 *
 * @file PWM_Fault_Input.c
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
#include <xDriver_MCU/PWM/Driver/Fault/xHeader/PWM_Fault_Input.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/Primitives/PWM_Primitives.h>

PWM_nERROR PWM_FaultInput__enSetStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                              PWM_nFAULT_INPUT enInputArg, PWM_nSTATE enStateArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enInputArg, (UBase_t) PWM_enFAULT_INPUT_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_FAULT_PIN_ENABLE_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_PIN_ENABLE_R_PIN0_BIT;
        stRegister.uxShift += (UBase_t) enInputArg;
        stRegister.uxMask = PWM_GEN_EXT_FAULT_PIN_ENABLE_PIN0_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


PWM_nERROR PWM_FaultInput__enSetStateMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                        PWM_nFAULT_INPUTMASK enInputMaskArg, PWM_nSTATE enStateArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    UBase_t uxValueReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enInputMaskArg, (UBase_t) PWM_enFAULT_INPUTMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        if(PWM_enSTATE_DIS == enStateArg)
        {
            uxValueReg = 0U;
        }
        else
        {
            uxValueReg = (UBase_t) enInputMaskArg;
        }

        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_FAULT_PIN_ENABLE_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_PIN_ENABLE_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enInputMaskArg;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = uxValueReg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


PWM_nERROR PWM_FaultInput__enSetStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_INPUT enInputArg, PWM_nSTATE enStateArg)
{
    UBase_t uxGenMaskReg;
    UBase_t uxGenerator;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxGenerator = 0UL;
        uxGenMaskReg = (UBase_t) enGeneratorMaskArg;
        while((0UL != uxGenMaskReg) && (PWM_enERROR_OK == enErrorReg))
        {
            if(0UL != (1UL & uxGenMaskReg))
            {
                enErrorReg = PWM_FaultInput__enSetStateByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enInputArg, enStateArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultInput__enSetStateMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                      PWM_nFAULT_INPUTMASK enInputMaskArg, PWM_nSTATE enStateArg)
{
    UBase_t uxGenMaskReg;
    UBase_t uxGenerator;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxGenerator = 0UL;
        uxGenMaskReg = (UBase_t) enGeneratorMaskArg;
        while((0UL != uxGenMaskReg) && (PWM_enERROR_OK == enErrorReg))
        {
            if(0UL != (1UL & uxGenMaskReg))
            {
                enErrorReg = PWM_FaultInput__enSetStateMaskByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enInputMaskArg, enStateArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultInput__enGetStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                              PWM_nFAULT_INPUT enInputArg, PWM_nSTATE* penStateArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enInputArg, (UBase_t) PWM_enFAULT_INPUT_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_FAULT_PIN_ENABLE_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_PIN_ENABLE_R_PIN0_BIT;
        stRegister.uxShift += (UBase_t) enInputArg;
        stRegister.uxMask = PWM_GEN_EXT_FAULT_PIN_ENABLE_PIN0_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penStateArg = (PWM_nSTATE) stRegister.uxValue;
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultInput__enGetStateMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                       PWM_nFAULT_INPUTMASK enInputMaskArg, PWM_nFAULT_INPUTMASK* penInputMaskGetArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) penInputMaskGetArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enInputMaskArg, (UBase_t) PWM_enFAULT_INPUTMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_FAULT_PIN_ENABLE_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_PIN_ENABLE_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enInputMaskArg;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penInputMaskGetArg = (PWM_nFAULT_INPUTMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}


PWM_nERROR PWM_FaultInput__enGetStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_INPUT enInputArg, PWM_nGENMASK* penGeneratorGetArg)
{
    UBase_t uxGenMaskReg;
    UBase_t uxGenerator;
    UBase_t uxGeneratorGetReg;
    UBase_t uxValueReg;
    UBase_t uxTempReg;
    PWM_nERROR enErrorReg;

    uxGeneratorGetReg = 0UL;
    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) penGeneratorGetArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxGenerator = 0UL;
        uxValueReg = 1UL;
        uxGenMaskReg = (UBase_t) enGeneratorMaskArg;
        while((0UL != uxGenMaskReg) && (PWM_enERROR_OK == enErrorReg))
        {
            if(0UL != (1UL & uxGenMaskReg))
            {
                uxTempReg = 0UL;
                enErrorReg = PWM_FaultInput__enGetStateByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enInputArg, (PWM_nSTATE*) &uxTempReg);
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
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penGeneratorGetArg = (PWM_nGENMASK) uxGeneratorGetReg;
    }
    return (enErrorReg);
}









PWM_nERROR PWM_FaultInput__enSetSenseLevelByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                   PWM_nFAULT_INPUT enInputArg, PWM_nLEVEL enLevelArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enInputArg, (UBase_t) PWM_enFAULT_INPUT_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_EXT_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_EXT_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_EXT_FAULT_PIN_SENSE_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_PIN_SENSE_R_PIN0_BIT;
        stRegister.uxShift += (UBase_t) enInputArg;
        stRegister.uxMask = PWM_GEN_EXT_FAULT_PIN_SENSE_PIN0_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = (UBase_t) enLevelArg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


PWM_nERROR PWM_FaultInput__enSetSenseLevelMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                        PWM_nFAULT_INPUTMASK enInputMaskArg, PWM_nLEVEL enLevelArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    UBase_t uxValueReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enInputMaskArg, (UBase_t) PWM_enFAULT_INPUTMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        if(PWM_enLEVEL_LOW == enLevelArg)
        {
            uxValueReg = 0U;
        }
        else
        {
            uxValueReg = (UBase_t) enInputMaskArg;
        }

        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_EXT_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_EXT_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_EXT_FAULT_PIN_SENSE_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_PIN_SENSE_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enInputMaskArg;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = uxValueReg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


PWM_nERROR PWM_FaultInput__enSetSenseLevelByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_INPUT enInputArg, PWM_nLEVEL enLevelArg)
{
    UBase_t uxGenMaskReg;
    UBase_t uxGenerator;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxGenerator = 0UL;
        uxGenMaskReg = (UBase_t) enGeneratorMaskArg;
        while((0UL != uxGenMaskReg) && (PWM_enERROR_OK == enErrorReg))
        {
            if(0UL != (1UL & uxGenMaskReg))
            {
                enErrorReg = PWM_FaultInput__enSetSenseLevelByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enInputArg, enLevelArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultInput__enSetSenseLevelMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                      PWM_nFAULT_INPUTMASK enInputMaskArg, PWM_nLEVEL enLevelArg)
{
    UBase_t uxGenMaskReg;
    UBase_t uxGenerator;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxGenerator = 0UL;
        uxGenMaskReg = (UBase_t) enGeneratorMaskArg;
        while((0UL != uxGenMaskReg) && (PWM_enERROR_OK == enErrorReg))
        {
            if(0UL != (1UL & uxGenMaskReg))
            {
                enErrorReg = PWM_FaultInput__enSetSenseLevelMaskByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enInputMaskArg, enLevelArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultInput__enGetSenseLevelByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                              PWM_nFAULT_INPUT enInputArg, PWM_nLEVEL* penLevelArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) penLevelArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enInputArg, (UBase_t) PWM_enFAULT_INPUT_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_EXT_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_EXT_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_EXT_FAULT_PIN_SENSE_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_PIN_SENSE_R_PIN0_BIT;
        stRegister.uxShift += (UBase_t) enInputArg;
        stRegister.uxMask = PWM_GEN_EXT_FAULT_PIN_SENSE_PIN0_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penLevelArg = (PWM_nLEVEL) stRegister.uxValue;
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultInput__enGetSenseLevelMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                       PWM_nFAULT_INPUTMASK enInputMaskArg, PWM_nFAULT_INPUTMASK* penInputMaskGetArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) penInputMaskGetArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enInputMaskArg, (UBase_t) PWM_enFAULT_INPUTMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_EXT_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_EXT_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_EXT_FAULT_PIN_SENSE_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_PIN_SENSE_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enInputMaskArg;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penInputMaskGetArg = (PWM_nFAULT_INPUTMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}


PWM_nERROR PWM_FaultInput__enGetSenseLevelByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_INPUT enInputArg, PWM_nGENMASK* penGeneratorGetArg)
{
    UBase_t uxGenMaskReg;
    UBase_t uxGenerator;
    UBase_t uxGeneratorGetReg;
    UBase_t uxValueReg;
    UBase_t uxTempReg;
    PWM_nERROR enErrorReg;

    uxGeneratorGetReg = 0UL;
    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) penGeneratorGetArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxGenerator = 0UL;
        uxValueReg = 1UL;
        uxGenMaskReg = (UBase_t) enGeneratorMaskArg;
        while((0UL != uxGenMaskReg) && (PWM_enERROR_OK == enErrorReg))
        {
            if(0UL != (1UL & uxGenMaskReg))
            {
                uxTempReg = 0UL;
                enErrorReg = PWM_FaultInput__enGetSenseLevelByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enInputArg, (PWM_nLEVEL*) &uxTempReg);
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
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penGeneratorGetArg = (PWM_nGENMASK) uxGeneratorGetReg;
    }
    return (enErrorReg);
}














PWM_nERROR PWM_FaultInput__enClearStatusByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                   PWM_nFAULT_INPUT enInputArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enInputArg, (UBase_t) PWM_enFAULT_INPUT_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_EXT_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_EXT_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_EXT_FAULT_PIN_STAT_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_PIN_STAT_R_PIN0_BIT;
        stRegister.uxShift += (UBase_t) enInputArg;
        stRegister.uxMask = PWM_GEN_EXT_FAULT_PIN_STAT_PIN0_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = PWM_GEN_EXT_FAULT_PIN_STAT_PIN0_CLEAR;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


PWM_nERROR PWM_FaultInput__enClearStatusMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                        PWM_nFAULT_INPUTMASK enInputMaskArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enInputMaskArg, (UBase_t) PWM_enFAULT_INPUTMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_EXT_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_EXT_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_EXT_FAULT_PIN_STAT_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_PIN_STAT_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enInputMaskArg;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = (UBase_t) enInputMaskArg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


PWM_nERROR PWM_FaultInput__enClearStatusByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_INPUT enInputArg)
{
    UBase_t uxGenMaskReg;
    UBase_t uxGenerator;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxGenerator = 0UL;
        uxGenMaskReg = (UBase_t) enGeneratorMaskArg;
        while((0UL != uxGenMaskReg) && (PWM_enERROR_OK == enErrorReg))
        {
            if(0UL != (1UL & uxGenMaskReg))
            {
                enErrorReg = PWM_FaultInput__enClearStatusByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enInputArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultInput__enClearStatusMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                      PWM_nFAULT_INPUTMASK enInputMaskArg)
{
    UBase_t uxGenMaskReg;
    UBase_t uxGenerator;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxGenerator = 0UL;
        uxGenMaskReg = (UBase_t) enGeneratorMaskArg;
        while((0UL != uxGenMaskReg) && (PWM_enERROR_OK == enErrorReg))
        {
            if(0UL != (1UL & uxGenMaskReg))
            {
                enErrorReg = PWM_FaultInput__enClearStatusMaskByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enInputMaskArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultInput__enGetStatusByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                              PWM_nFAULT_INPUT enInputArg, PWM_nSTATUS* penStatusArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enInputArg, (UBase_t) PWM_enFAULT_INPUT_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_EXT_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_EXT_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_EXT_FAULT_PIN_STAT_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_PIN_STAT_R_PIN0_BIT;
        stRegister.uxShift += (UBase_t) enInputArg;
        stRegister.uxMask = PWM_GEN_EXT_FAULT_PIN_STAT_PIN0_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (PWM_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultInput__enGetStatusMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                       PWM_nFAULT_INPUTMASK enInputMaskArg, PWM_nFAULT_INPUTMASK* penInputMaskGetArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) penInputMaskGetArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enInputMaskArg, (UBase_t) PWM_enFAULT_INPUTMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_EXT_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_EXT_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_EXT_FAULT_PIN_STAT_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_PIN_STAT_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enInputMaskArg;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penInputMaskGetArg = (PWM_nFAULT_INPUTMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}


PWM_nERROR PWM_FaultInput__enGetStatusByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_INPUT enInputArg, PWM_nGENMASK* penGeneratorGetArg)
{
    UBase_t uxGenMaskReg;
    UBase_t uxGenerator;
    UBase_t uxGeneratorGetReg;
    UBase_t uxValueReg;
    UBase_t uxTempReg;
    PWM_nERROR enErrorReg;

    uxGeneratorGetReg = 0UL;
    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) penGeneratorGetArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxGenerator = 0UL;
        uxValueReg = 1UL;
        uxGenMaskReg = (UBase_t) enGeneratorMaskArg;
        while((0UL != uxGenMaskReg) && (PWM_enERROR_OK == enErrorReg))
        {
            if(0UL != (1UL & uxGenMaskReg))
            {
                uxTempReg = 0UL;
                enErrorReg = PWM_FaultInput__enGetStatusByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enInputArg, (PWM_nSTATUS*) &uxTempReg);
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
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penGeneratorGetArg = (PWM_nGENMASK) uxGeneratorGetReg;
    }
    return (enErrorReg);
}
