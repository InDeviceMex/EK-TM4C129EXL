/**
 *
 * @file PWM_DeadBand_RisingDelay.c
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
#include <xDriver_MCU/PWM/Driver/DeadBand/xHeader/PWM_DeadBand_RisingDelay.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/PWM_Intrinsics.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

PWM_nERROR PWM_DeadBand__enSetRisingDelayByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, UBase_t uxDelayArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_DB_RISE_OFFSET;

        stRegister.uxShift = PWM_GEN_DB_RISE_R_DELAY_BIT;
        stRegister.uxMask = PWM_GEN_DB_RISE_DELAY_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = (UBase_t) uxDelayArg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

PWM_nERROR PWM_DeadBand__enSetRisingDelayByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, UBase_t uxDelayArg)
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
                enErrorReg = PWM_DeadBand__enSetRisingDelayByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, uxDelayArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}


PWM_nERROR PWM_DeadBand__enGetRisingDelayByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, UBase_t* puxDelayArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) puxDelayArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_DB_RISE_OFFSET;

        stRegister.uxShift = PWM_GEN_DB_RISE_R_DELAY_BIT;
        stRegister.uxMask = PWM_GEN_DB_RISE_DELAY_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *puxDelayArg = (UBase_t) stRegister.uxValue;
    }
    return (enErrorReg);
}


PWM_nERROR PWM_DeadBand__enSetRisingDelayUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nUPDATE enModeArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    UBase_t uxUpdateReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enModeArg, (UBase_t) PWM_enUPDATE_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxUpdateReg = (UBase_t) enModeArg;

        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_CTL_OFFSET;

        stRegister.uxShift = PWM_GEN_CTL_R_DB_RISE_UPD_BIT;
        stRegister.uxMask = PWM_GEN_CTL_DB_RISE_UPD_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = (UBase_t) uxUpdateReg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

PWM_nERROR PWM_DeadBand__enSetRisingDelayUpdateModeByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nUPDATE enModeArg)
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
                enErrorReg = PWM_DeadBand__enSetRisingDelayUpdateModeByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enModeArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}


PWM_nERROR PWM_DeadBand__enGetRisingDelayUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nUPDATE* penModeArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

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
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_CTL_OFFSET;

        stRegister.uxShift = PWM_GEN_CTL_R_DB_RISE_UPD_BIT;
        stRegister.uxMask = PWM_GEN_CTL_DB_RISE_UPD_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penModeArg = (PWM_nUPDATE) stRegister.uxValue;
    }
    return (enErrorReg);
}

