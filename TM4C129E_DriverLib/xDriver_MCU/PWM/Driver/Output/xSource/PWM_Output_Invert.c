/**
 *
 * @file PWM_Output_Invert.c
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
 * @verbatim 3 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Output/xHeader/PWM_Output_Invert.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/PWM_Intrinsics.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

PWM_nERROR PWM_Output__enSetInversionStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                   PWM_nOUTPUT enOutputArg, PWM_nSTATE enStateArg)
{
    PWM_Register_t stRegister;
    UBase_t uxShiftReg;
    UBase_t uxValueReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enOutputArg, (UBase_t) PWM_enOUTPUT_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        if(PWM_enSTATE_DIS == enStateArg)
        {
            uxValueReg = 0UL;
        }
        else
        {
            uxValueReg = (UBase_t) enOutputArg;
        }
        uxShiftReg = PWM_OUTPUT_INVERT_R_GEN1_OUTA_BIT - PWM_OUTPUT_INVERT_R_GEN0_OUTA_BIT;
        uxShiftReg *= (UBase_t) enGeneratorArg;

        stRegister.uxShift = (UBase_t) uxShiftReg;
        stRegister.uxMask = (UBase_t) enOutputArg;
        stRegister.uptrAddress = PWM_OUTPUT_INVERT_OFFSET;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

PWM_nERROR PWM_Output__enSetInversionStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGenMaskArg,
                                                 PWM_nOUTPUT enOutputArg, PWM_nSTATE enStateArg)
{
    UBase_t uxGeneratorReg;
    UBase_t uxGenMaskReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGenMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxGeneratorReg = 0U;
        uxGenMaskReg = (UBase_t) enGenMaskArg;
        while((0U != uxGenMaskReg) && (PWM_enERROR_OK == enErrorReg))
        {
            if(0UL != ((UBase_t) PWM_enGENMASK_0 & uxGenMaskReg))
            {
                enErrorReg = PWM_Output__enSetInversionStateByNumber(enModuleArg, (PWM_nGENERATOR) uxGeneratorReg, enOutputArg, enStateArg);
            }
            uxGeneratorReg++;
            uxGenMaskReg >>= 1U;
        }
    }
    return (enErrorReg);
}


PWM_nERROR PWM_Output__enGetInversionStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                   PWM_nOUTPUT enOutputArg, PWM_nOUTPUT* penStateArg)
{
    PWM_Register_t stRegister;
    UBase_t uxShiftReg;
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
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enOutputArg, (UBase_t) PWM_enOUTPUT_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxShiftReg = PWM_OUTPUT_INVERT_R_GEN1_OUTA_BIT - PWM_OUTPUT_INVERT_R_GEN0_OUTA_BIT;
        uxShiftReg *= (UBase_t) enGeneratorArg;

        stRegister.uxShift = (UBase_t) uxShiftReg;
        stRegister.uxMask = (UBase_t) enOutputArg;
        stRegister.uptrAddress = PWM_OUTPUT_INVERT_OFFSET;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penStateArg = (PWM_nOUTPUT) stRegister.uxValue;
    }

    return (enErrorReg);
}
