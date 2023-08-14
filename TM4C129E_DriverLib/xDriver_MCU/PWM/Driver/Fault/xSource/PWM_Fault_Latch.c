/**
 *
 * @file PWM_Fault_Latch.c
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
#include <xDriver_MCU/PWM/Driver/Fault/xHeader/PWM_Fault_Latch.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/PWM_Intrinsics.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

PWM_nERROR PWM_Fault__enSetLatchModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nSTATE enStateArg)
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
        stRegister.uxShift = PWM_GEN_CTL_R_FAULT_LATCH_BIT;
        stRegister.uxMask = PWM_GEN_CTL_FAULT_LATCH_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Fault__enSetLatchModeByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nSTATE enStateArg)
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
                enErrorReg = PWM_Fault__enSetLatchModeByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enStateArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}


PWM_nERROR PWM_Fault__enGetLatchModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nSTATE* penStateArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;
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
        stRegister.uxShift = PWM_GEN_CTL_R_FAULT_LATCH_BIT;
        stRegister.uxMask = PWM_GEN_CTL_FAULT_LATCH_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *penStateArg = (PWM_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Fault__enGetLatchModeByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nGENMASK* penStateArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;
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
                PWM_nSTATE enTempReg = PWM_enSTATE_DIS;
                enErrorReg = PWM_Fault__enGetLatchModeByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, &enTempReg);
                if((PWM_enERROR_OK == enErrorReg) && (PWM_enSTATE_DIS != enTempReg))
                {
                    uxGeneratorGetReg |= uxValueReg;
                }
            }
            uxValueReg <<= 1UL;
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
        if(PWM_enERROR_OK == enErrorReg)
        {
            *penStateArg = (PWM_nGENMASK) uxGeneratorGetReg;
        }
    }
    return (enErrorReg);
}

