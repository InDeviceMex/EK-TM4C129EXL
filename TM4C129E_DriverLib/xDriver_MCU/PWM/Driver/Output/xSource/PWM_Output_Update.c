/**
 *
 * @file PWM_Output_Update.c
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
 * @verbatim 6 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Output/xHeader/PWM_Output_Update.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/PWM_Intrinsics.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

PWM_nERROR PWM_Output__enSetUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                               PWM_nOUTPUT enOutputArg, PWM_nUPDATE enModeArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enOutputArg, (UBase_t) PWM_enOUTPUT_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        if(0UL != ((UBase_t) PWM_enOUTPUT_A & (UBase_t) enOutputArg))
        {
            UBase_t uxShiftReg = PWM_OUTPUT_ENUPD_R_GEN1_OUTA_BIT - PWM_OUTPUT_ENUPD_R_GEN0_OUTA_BIT;
            uxShiftReg *= (UBase_t) enGeneratorArg;
            uxShiftReg += PWM_OUTPUT_ENUPD_R_GEN0_OUTA_BIT;

            PWM_Register_t stRegister;
            stRegister.uxShift = (UBase_t) uxShiftReg;
            stRegister.uxMask = PWM_OUTPUT_ENUPD_GEN0_OUTA_MASK;
            stRegister.uptrAddress = PWM_OUTPUT_ENUPD_OFFSET;
            stRegister.uxValue = (UBase_t) enModeArg;
            enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
        }
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        if(0UL != ((UBase_t) PWM_enOUTPUT_B & (UBase_t) enOutputArg))
        {
            UBase_t uxShiftReg = PWM_OUTPUT_ENUPD_R_GEN1_OUTA_BIT - PWM_OUTPUT_ENUPD_R_GEN0_OUTA_BIT;
            uxShiftReg *= (UBase_t) enGeneratorArg;
            uxShiftReg += PWM_OUTPUT_ENUPD_R_GEN0_OUTB_BIT;

            PWM_Register_t stRegister;
            stRegister.uxShift = (UBase_t) uxShiftReg;
            stRegister.uxMask = PWM_OUTPUT_ENUPD_GEN0_OUTA_MASK;
            stRegister.uptrAddress = PWM_OUTPUT_ENUPD_OFFSET;
            stRegister.uxValue = (UBase_t) enModeArg;
            enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Output__enSetUpdateModeByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGenMaskArg,
                                             PWM_nOUTPUT enOutputArg, PWM_nUPDATE enModeArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGenMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxGeneratorReg = 0U;
        UBase_t uxGenMaskReg = (UBase_t) enGenMaskArg;
        while((0U != uxGenMaskReg) && (PWM_enERROR_OK == enErrorReg))
        {
            if(0UL != ((UBase_t) PWM_enGENMASK_0 & uxGenMaskReg))
            {
                enErrorReg = PWM_Output__enSetUpdateModeByNumber(enModuleArg, (PWM_nGENERATOR) uxGeneratorReg, enOutputArg, enModeArg);
            }
            uxGeneratorReg++;
            uxGenMaskReg >>= 1U;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Output__enGetUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                               PWM_nOUTPUT enOutputArg, PWM_nUPDATE* penModeArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penModeArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;

    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enOutputArg, (UBase_t) PWM_enOUTPUT_BOTH);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        if(0UL != ((UBase_t) PWM_enOUTPUT_A & (UBase_t) enOutputArg))
        {
            UBase_t uxShiftReg = PWM_OUTPUT_ENUPD_R_GEN1_OUTA_BIT - PWM_OUTPUT_ENUPD_R_GEN0_OUTA_BIT;
            uxShiftReg *= (UBase_t) enGeneratorArg;
            uxShiftReg += PWM_OUTPUT_ENUPD_R_GEN0_OUTA_BIT;

            PWM_Register_t stRegister;
            stRegister.uxShift = (UBase_t) uxShiftReg;
            stRegister.uxMask = PWM_OUTPUT_ENUPD_GEN0_OUTA_MASK;
            stRegister.uptrAddress = PWM_OUTPUT_ENUPD_OFFSET;
            enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
            if(PWM_enERROR_OK == enErrorReg)
            {
                *penModeArg = (PWM_nUPDATE) stRegister.uxValue;
            }
        }
        else if(0UL != ((UBase_t) PWM_enOUTPUT_B & (UBase_t) enOutputArg))
        {
            UBase_t uxShiftReg = PWM_OUTPUT_ENUPD_R_GEN1_OUTA_BIT - PWM_OUTPUT_ENUPD_R_GEN0_OUTA_BIT;
            uxShiftReg *= (UBase_t) enGeneratorArg;
            uxShiftReg += PWM_OUTPUT_ENUPD_R_GEN0_OUTB_BIT;

            PWM_Register_t stRegister;
            stRegister.uxShift = (UBase_t) uxShiftReg;
            stRegister.uxMask = PWM_OUTPUT_ENUPD_GEN0_OUTA_MASK;
            stRegister.uptrAddress = PWM_OUTPUT_ENUPD_OFFSET;
            enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
            if(PWM_enERROR_OK == enErrorReg)
            {
                *penModeArg = (PWM_nUPDATE) stRegister.uxValue;
            }
        }
    }
    return (enErrorReg);
}
