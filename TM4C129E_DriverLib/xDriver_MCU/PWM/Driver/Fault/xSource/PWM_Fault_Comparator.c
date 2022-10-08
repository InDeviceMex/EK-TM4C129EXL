/**
 *
 * @file PWM_Fault_Comparator.c
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
#include <xDriver_MCU/PWM/Driver/Fault/xHeader/PWM_Fault_Comparator.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/Primitives/PWM_Primitives.h>

PWM_nERROR PWM_FaultDComp__enSetStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                              PWM_nFAULT_DCOMP enDCompArg, PWM_nSTATE enStateArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enDCompArg, (UBase_t) PWM_enFAULT_DCOMP_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_FAULT_DCMP_ENABLE_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_DCMP_ENABLE_R_DCMP0_BIT;
        stRegister.uxShift += (UBase_t) enDCompArg;
        stRegister.uxMask = PWM_GEN_EXT_FAULT_DCMP_ENABLE_DCMP0_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


PWM_nERROR PWM_FaultDComp__enSetStateMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                        PWM_nFAULT_DCOMPMASK enDCompMaskArg, PWM_nSTATE enStateArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    UBase_t uxValueReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enDCompMaskArg, (UBase_t) PWM_enFAULT_DCOMPMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        if(PWM_enSTATE_DIS == enStateArg)
        {
            uxValueReg = 0U;
        }
        else
        {
            uxValueReg = (UBase_t) enDCompMaskArg;
        }

        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_FAULT_DCMP_ENABLE_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_DCMP_ENABLE_R_DCMP0_BIT;
        stRegister.uxMask = (UBase_t) enDCompMaskArg;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = uxValueReg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


PWM_nERROR PWM_FaultDComp__enSetStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_DCOMP enDCompArg, PWM_nSTATE enStateArg)
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
                enErrorReg = PWM_FaultDComp__enSetStateByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enDCompArg, enStateArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultDComp__enSetStateMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                      PWM_nFAULT_DCOMPMASK enDCompMaskArg, PWM_nSTATE enStateArg)
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
                enErrorReg = PWM_FaultDComp__enSetStateMaskByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enDCompMaskArg, enStateArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultDComp__enGetStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                              PWM_nFAULT_DCOMP enDCompArg, PWM_nSTATE* penStateArg)
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
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enDCompArg, (UBase_t) PWM_enFAULT_DCOMP_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_FAULT_DCMP_ENABLE_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_DCMP_ENABLE_R_DCMP0_BIT;
        stRegister.uxShift += (UBase_t) enDCompArg;
        stRegister.uxMask = PWM_GEN_EXT_FAULT_DCMP_ENABLE_DCMP0_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penStateArg = (PWM_nSTATE) stRegister.uxValue;
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultDComp__enGetStateMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                  PWM_nFAULT_DCOMPMASK enDCompMaskArg, PWM_nFAULT_DCOMPMASK* penDCompMaskGetArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) penDCompMaskGetArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enDCompMaskArg, (UBase_t) PWM_enFAULT_DCOMPMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_FAULT_DCMP_ENABLE_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_DCMP_ENABLE_R_DCMP0_BIT;
        stRegister.uxMask = (UBase_t) enDCompMaskArg;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penDCompMaskGetArg = (PWM_nFAULT_DCOMPMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}


PWM_nERROR PWM_FaultDComp__enGetStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_DCOMP enDCompArg, PWM_nGENMASK* penGeneratorGetArg)
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
                enErrorReg = PWM_FaultDComp__enGetStateByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enDCompArg, (PWM_nSTATE*) &uxTempReg);
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



PWM_nERROR PWM_FaultDComp__enClearStatusByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                   PWM_nFAULT_DCOMP enDCompArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enDCompArg, (UBase_t) PWM_enFAULT_DCOMP_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_EXT_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_EXT_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_EXT_FAULT_DCMP_STAT_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_DCMP_STAT_R_DCMP0_BIT;
        stRegister.uxShift += (UBase_t) enDCompArg;
        stRegister.uxMask = PWM_GEN_EXT_FAULT_DCMP_STAT_DCMP0_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = PWM_GEN_EXT_FAULT_DCMP_STAT_DCMP0_CLEAR;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


PWM_nERROR PWM_FaultDComp__enClearStatusMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                        PWM_nFAULT_DCOMPMASK enDCompMaskArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enDCompMaskArg, (UBase_t) PWM_enFAULT_DCOMPMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_EXT_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_EXT_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_EXT_FAULT_DCMP_STAT_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_DCMP_STAT_R_DCMP0_BIT;
        stRegister.uxMask = (UBase_t) enDCompMaskArg;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = (UBase_t) enDCompMaskArg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


PWM_nERROR PWM_FaultDComp__enClearStatusByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_DCOMP enDCompArg)
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
                enErrorReg = PWM_FaultDComp__enClearStatusByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enDCompArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultDComp__enClearStatusMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                      PWM_nFAULT_DCOMPMASK enDCompMaskArg)
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
                enErrorReg = PWM_FaultDComp__enClearStatusMaskByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enDCompMaskArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultDComp__enGetStatusByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                              PWM_nFAULT_DCOMP enDCompArg, PWM_nSTATUS* penStatusArg)
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
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enDCompArg, (UBase_t) PWM_enFAULT_DCOMP_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_EXT_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_EXT_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_EXT_FAULT_DCMP_STAT_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_DCMP_STAT_R_DCMP0_BIT;
        stRegister.uxShift += (UBase_t) enDCompArg;
        stRegister.uxMask = PWM_GEN_EXT_FAULT_DCMP_STAT_DCMP0_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (PWM_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultDComp__enGetStatusMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                       PWM_nFAULT_DCOMPMASK enDCompMaskArg, PWM_nFAULT_DCOMPMASK* penDCompMaskGetArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) penDCompMaskGetArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enDCompMaskArg, (UBase_t) PWM_enFAULT_DCOMPMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_EXT_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_EXT_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_EXT_FAULT_DCMP_STAT_OFFSET;

        stRegister.uxShift = PWM_GEN_EXT_FAULT_DCMP_STAT_R_DCMP0_BIT;
        stRegister.uxMask = (UBase_t) enDCompMaskArg;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penDCompMaskGetArg = (PWM_nFAULT_DCOMPMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}


PWM_nERROR PWM_FaultDComp__enGetStatusByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_DCOMP enDCompArg, PWM_nGENMASK* penGeneratorGetArg)
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
                enErrorReg = PWM_FaultDComp__enGetStatusByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enDCompArg, (PWM_nSTATUS*) &uxTempReg);
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
