/**
 *
 * @file PWM_Generator_Action.c
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
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Action.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/PWM_Intrinsics.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

PWM_nERROR PWM_Generator__enSetActionByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg,
                                              PWM_nEVENT enEventArg, PWM_nACTION enActionArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    UBase_t uxGeneratorReg;
    UBase_t uxShiftReg;
    PWM_nERROR enErrorReg;

    uxGeneratorReg = 0UL;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enOutputArg, (UBase_t) PWM_enOUTPUT_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enEventArg, (UBase_t) PWM_enEVENT_SW);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxGeneratorReg = (UBase_t) enGeneratorArg;
        if(0UL != ((UBase_t) PWM_enOUTPUT_A & (UBase_t) enOutputArg))
        {
            uxOffsetReg = uxGeneratorReg;
            uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
            uxOffsetReg *= 4UL;
            uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
            uxOffsetReg += PWM_GEN_OUTA_ACTION_OFFSET;

            uxShiftReg = PWM_GEN_OUTA_ACTION_R_LOAD_BIT - PWM_GEN_OUTA_ACTION_R_ZERO_BIT;
            uxShiftReg *= (UBase_t) enEventArg;

            stRegister.uxShift = (UBase_t) uxShiftReg;
            stRegister.uxMask = PWM_GEN_OUTA_ACTION_ZERO_MASK;
            stRegister.uptrAddress = (UBase_t) uxOffsetReg;
            stRegister.uxValue = (UBase_t) enActionArg;
            enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
        }
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        if(0UL != ((UBase_t) PWM_enOUTPUT_B & (UBase_t) enOutputArg))
        {
            uxOffsetReg = uxGeneratorReg;
            uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
            uxOffsetReg *= 4UL;
            uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
            uxOffsetReg += PWM_GEN_OUTB_ACTION_OFFSET;

            uxShiftReg = PWM_GEN_OUTB_ACTION_R_LOAD_BIT - PWM_GEN_OUTB_ACTION_R_ZERO_BIT;
            uxShiftReg *= (UBase_t) enEventArg;

            stRegister.uxShift = (UBase_t) uxShiftReg;
            stRegister.uxMask = PWM_GEN_OUTB_ACTION_ZERO_MASK;
            stRegister.uptrAddress = (UBase_t) uxOffsetReg;
            stRegister.uxValue = (UBase_t) enActionArg;
            enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
        }
    }

    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetActionByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nOUTPUT enOutputArg,
                                            PWM_nEVENT enEventArg, PWM_nACTION enActionArg)
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
                enErrorReg = PWM_Generator__enSetActionByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enOutputArg, enEventArg, enActionArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}


PWM_nERROR PWM_Generator__enGetActionByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg,
                                              PWM_nEVENT enEventArg, PWM_nACTION* penActionArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    UBase_t uxShiftReg;
    UBase_t uxGeneratorReg;
    PWM_nERROR enErrorReg;

    uxGeneratorReg = 0UL;
    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) penActionArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enOutputArg, (UBase_t) PWM_enOUTPUT_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enEventArg, (UBase_t) PWM_enEVENT_SW);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxGeneratorReg = (UBase_t) enGeneratorArg;
        if(0UL != ((UBase_t) PWM_enOUTPUT_A & (UBase_t) enOutputArg))
        {
            uxOffsetReg = uxGeneratorReg;
            uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
            uxOffsetReg *= 4UL;
            uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
            uxOffsetReg += PWM_GEN_OUTA_ACTION_OFFSET;

            uxShiftReg = PWM_GEN_OUTA_ACTION_R_LOAD_BIT - PWM_GEN_OUTA_ACTION_R_ZERO_BIT;
            uxShiftReg *= (UBase_t) enEventArg;

            stRegister.uxShift = (UBase_t) uxShiftReg;
            stRegister.uxMask = PWM_GEN_OUTA_ACTION_ZERO_MASK;
            stRegister.uptrAddress = (UBase_t) uxOffsetReg;
            enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
            if(PWM_enERROR_OK == enErrorReg)
            {
                *penActionArg = (PWM_nACTION) stRegister.uxValue;
                penActionArg += 1UL;
            }
        }
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        if(0UL != ((UBase_t) PWM_enOUTPUT_B & (UBase_t) enOutputArg))
        {
            uxOffsetReg = uxGeneratorReg;
            uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
            uxOffsetReg *= 4UL;
            uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
            uxOffsetReg += PWM_GEN_OUTB_ACTION_OFFSET;

            uxShiftReg = PWM_GEN_OUTB_ACTION_R_LOAD_BIT - PWM_GEN_OUTB_ACTION_R_ZERO_BIT;
            uxShiftReg *= (UBase_t) enEventArg;

            stRegister.uxShift = (UBase_t) uxShiftReg;
            stRegister.uxMask = PWM_GEN_OUTB_ACTION_ZERO_MASK;
            stRegister.uptrAddress = (UBase_t) uxOffsetReg;
            enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
            if(PWM_enERROR_OK == enErrorReg)
            {
                *penActionArg = (PWM_nACTION) stRegister.uxValue;
            }
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetActionUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, PWM_nUPDATE enModeArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    UBase_t uxGeneratorReg;
    UBase_t uxUpdateReg;
    PWM_nERROR enErrorReg;

    uxGeneratorReg = 0UL;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enModeArg, (UBase_t) PWM_enUPDATE_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enOutputArg, (UBase_t) PWM_enOUTPUT_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxGeneratorReg = (UBase_t) enGeneratorArg;
        if(0UL != ((UBase_t) PWM_enOUTPUT_A & (UBase_t) enOutputArg))
        {
            uxUpdateReg = (UBase_t) enModeArg;

            uxOffsetReg = uxGeneratorReg;
            uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
            uxOffsetReg *= 4UL;
            uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
            uxOffsetReg += PWM_GEN_CTL_OFFSET;

            stRegister.uxShift = PWM_GEN_CTL_R_OUTA_ACTION_UPD_BIT;
            stRegister.uxMask = PWM_GEN_CTL_OUTA_ACTION_UPD_MASK;
            stRegister.uptrAddress = (UBase_t) uxOffsetReg;
            stRegister.uxValue = (UBase_t) uxUpdateReg;
            enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
        }
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        if(0UL != ((UBase_t) PWM_enOUTPUT_B & (UBase_t) enOutputArg))
        {
            uxUpdateReg = (UBase_t) enModeArg;

            uxOffsetReg = uxGeneratorReg;
            uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
            uxOffsetReg *= 4UL;
            uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
            uxOffsetReg += PWM_GEN_CTL_OFFSET;

            stRegister.uxShift = PWM_GEN_CTL_R_OUTB_ACTION_UPD_BIT;
            stRegister.uxMask = PWM_GEN_CTL_OUTB_ACTION_UPD_MASK;
            stRegister.uptrAddress = (UBase_t) uxOffsetReg;
            stRegister.uxValue = (UBase_t) uxUpdateReg;
            enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
        }
    }

    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetActionUpdateModeByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nOUTPUT enOutputArg, PWM_nUPDATE enModeArg)
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
                enErrorReg = PWM_Generator__enSetActionUpdateModeByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enOutputArg, enModeArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enGetActionUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, PWM_nUPDATE* penModeArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    UBase_t uxGeneratorReg;
    PWM_nERROR enErrorReg;

    uxGeneratorReg = 0UL;
    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) penModeArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxGeneratorReg = (UBase_t) enGeneratorArg;
        if(0UL != ((UBase_t) PWM_enOUTPUT_A & (UBase_t) enOutputArg))
        {
            uxOffsetReg = uxGeneratorReg;
            uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
            uxOffsetReg *= 4UL;
            uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
            uxOffsetReg += PWM_GEN_CTL_OFFSET;

            stRegister.uxShift = PWM_GEN_CTL_R_OUTA_ACTION_UPD_BIT;
            stRegister.uxMask = PWM_GEN_CTL_OUTA_ACTION_UPD_MASK;
            stRegister.uptrAddress = (UBase_t) uxOffsetReg;
            enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
            if(PWM_enERROR_OK == enErrorReg)
            {
                *penModeArg = (PWM_nUPDATE) stRegister.uxValue;
                penModeArg += 1UL;
            }
        }
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        if(0UL != ((UBase_t) PWM_enOUTPUT_B & (UBase_t) enOutputArg))
        {
            uxOffsetReg = uxGeneratorReg;
            uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
            uxOffsetReg *= 4UL;
            uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
            uxOffsetReg += PWM_GEN_CTL_OFFSET;

            stRegister.uxShift = PWM_GEN_CTL_R_OUTB_ACTION_UPD_BIT;
            stRegister.uxMask = PWM_GEN_CTL_OUTB_ACTION_UPD_MASK;
            stRegister.uptrAddress = (UBase_t) uxOffsetReg;
            enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
            if(PWM_enERROR_OK == enErrorReg)
            {
                *penModeArg = (PWM_nUPDATE) stRegister.uxValue;
                penModeArg += 1UL;
            }
        }
    }
    return (enErrorReg);
}

