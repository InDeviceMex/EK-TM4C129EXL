/**
 *
 * @file PWM_Generator_Compare.c
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
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Compare.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/PWM_Intrinsics.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

PWM_nERROR PWM_Generator__enSetCompareValueByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, UBase_t uxValueArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    UBase_t uxGeneratorReg;
    PWM_nERROR enErrorReg;

    uxGeneratorReg = 0UL;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enOutputArg, (UBase_t) PWM_enOUTPUT_MAX);
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
            uxOffsetReg += PWM_GEN_OUTA_CMP_OFFSET;

            stRegister.uxShift = PWM_GEN_OUTA_CMP_R_COMP_BIT;
            stRegister.uxMask = MCU_MASK_BASE;
            stRegister.uptrAddress = (UBase_t) uxOffsetReg;
            stRegister.uxValue = (UBase_t) uxValueArg;
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
            uxOffsetReg += PWM_GEN_OUTB_CMP_OFFSET;

            stRegister.uxShift = PWM_GEN_OUTB_CMP_R_COMP_BIT;
            stRegister.uxMask = MCU_MASK_BASE;
            stRegister.uptrAddress = (UBase_t) uxOffsetReg;
            stRegister.uxValue = (UBase_t) uxValueArg;
            enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
        }
    }

    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetCompareValueByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nOUTPUT enOutputArg, UBase_t uxValueArg)
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
                enErrorReg = PWM_Generator__enSetCompareValueByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enOutputArg, uxValueArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}


PWM_nERROR PWM_Generator__enGetCompareValueByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, UBase_t* puxValueArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    UBase_t uxGeneratorReg;
    PWM_nERROR enErrorReg;

    uxGeneratorReg = 0UL;
    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) puxValueArg)
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
        uxGeneratorReg = (UBase_t) enGeneratorArg;
        if(0UL != ((UBase_t) PWM_enOUTPUT_A & (UBase_t) enOutputArg))
        {
            uxOffsetReg = uxGeneratorReg;
            uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
            uxOffsetReg *= 4UL;
            uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
            uxOffsetReg += PWM_GEN_OUTA_CMP_OFFSET;

            stRegister.uxShift = PWM_GEN_OUTA_CMP_R_COMP_BIT;
            stRegister.uxMask = PWM_GEN_OUTA_CMP_COMP_MASK;
            stRegister.uptrAddress = (UBase_t)uxOffsetReg;
            enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
            if(PWM_enERROR_OK == enErrorReg)
            {
                *puxValueArg = (UBase_t) stRegister.uxValue;
                puxValueArg += 1UL;
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
            uxOffsetReg += PWM_GEN_OUTB_CMP_OFFSET;

            stRegister.uxShift = PWM_GEN_OUTB_CMP_R_COMP_BIT;
            stRegister.uxMask = PWM_GEN_OUTB_CMP_COMP_MASK;
            stRegister.uptrAddress = (UBase_t) uxOffsetReg;
            enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
            if(PWM_enERROR_OK == enErrorReg)
            {
                *puxValueArg = (UBase_t) stRegister.uxValue;
            }
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetCompareUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, PWM_nUPDATE enModeArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    UBase_t uxGeneratorReg;
    UBase_t uxModeReg;
    UBase_t uxUpdateReg;
    PWM_nERROR enErrorReg;

    uxGeneratorReg = 0UL;
    uxModeReg = 0UL;
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
        uxModeReg = (UBase_t) enModeArg;
        if(0UL != ((UBase_t) PWM_enOUTPUT_A & (UBase_t) enOutputArg))
        {
            uxUpdateReg = uxModeReg;
            uxUpdateReg &= 1UL;

            uxOffsetReg = uxGeneratorReg;
            uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
            uxOffsetReg *= 4UL;
            uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
            uxOffsetReg += PWM_GEN_CTL_OFFSET;

            stRegister.uxShift = PWM_GEN_CTL_R_OUTA_CMP_UPD_BIT;
            stRegister.uxMask = PWM_GEN_CTL_OUTA_CMP_UPD_MASK;
            stRegister.uptrAddress = (UBase_t) uxOffsetReg;
            stRegister.uxValue = (UBase_t) uxUpdateReg;
            enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
        }
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        if(0UL != ((UBase_t) PWM_enOUTPUT_B & (UBase_t) enOutputArg))
        {
            uxUpdateReg = uxModeReg;
            uxUpdateReg &= 1UL;

            uxOffsetReg = uxGeneratorReg;
            uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
            uxOffsetReg *= 4UL;
            uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
            uxOffsetReg += PWM_GEN_CTL_OFFSET;

            stRegister.uxShift = PWM_GEN_CTL_R_OUTB_CMP_UPD_BIT;
            stRegister.uxMask = PWM_GEN_CTL_OUTB_CMP_UPD_MASK;
            stRegister.uptrAddress = (UBase_t) uxOffsetReg;
            stRegister.uxValue = (UBase_t) uxUpdateReg;
            enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
        }
    }

    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetCompareUpdateModeByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nOUTPUT enOutputArg, PWM_nUPDATE enModeArg)
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
                enErrorReg = PWM_Generator__enSetCompareUpdateModeByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enOutputArg, enModeArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enGetCompareUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, PWM_nUPDATE* penModeArg)
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

            stRegister.uxShift = PWM_GEN_CTL_R_OUTA_CMP_UPD_BIT;
            stRegister.uxMask = PWM_GEN_CTL_OUTA_CMP_UPD_MASK;
            stRegister.uptrAddress = (UBase_t)uxOffsetReg;
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

            stRegister.uxShift = PWM_GEN_CTL_R_OUTB_CMP_UPD_BIT;
            stRegister.uxMask = PWM_GEN_CTL_OUTB_CMP_UPD_MASK;
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
