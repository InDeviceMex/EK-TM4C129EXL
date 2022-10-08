/**
 *
 * @file PWM_InterruptSource_Generator.c
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
 * @verbatim 1 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Intrinsics/Interrupt/xHeader/PWM_InterruptSource_Generator.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/Primitives/PWM_Primitives.h>

static PWM_nERROR PWM_Generator__enGetStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, uintptr_t uptrOffsetArg,
                                                    PWM_nEVENT enEventArg, UBase_t* puxStateArg);
static PWM_nERROR PWM_Generator__enGetStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, uintptr_t uptrOffsetArg,
                                                  PWM_nEVENT enEventArg, UBase_t* puxStateArg);
static PWM_nERROR PWM_Generator__enGetMaskStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, uintptr_t uptrOffsetArg,
                                                        PWM_nEVENTMASK enEventMaskArg, UBase_t* puxStateArg);


static PWM_nERROR PWM_Generator__enGetStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, uintptr_t uptrOffsetArg,
                                                    PWM_nEVENT enEventArg, UBase_t* puxStateArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) puxStateArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
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
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += uptrOffsetArg;

        stRegister.uxShift = PWM_GEN_INTEN_R_CNT_ZERO_INT_BIT;
        stRegister.uxShift += (UBase_t) enEventArg;
        stRegister.uxMask = PWM_GEN_INTEN_CNT_ZERO_INT_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *puxStateArg = stRegister.uxValue;
    }
    return (enErrorReg);
}


static PWM_nERROR PWM_Generator__enGetMaskStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, uintptr_t uptrOffsetArg,
                                                        PWM_nEVENTMASK enEventMaskArg, UBase_t* puxStateArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) puxStateArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
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
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += uptrOffsetArg;

        stRegister.uxShift = PWM_GEN_INTEN_R_CNT_ZERO_INT_BIT;
        stRegister.uxMask = (UBase_t) enEventMaskArg;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *puxStateArg = stRegister.uxValue;
    }
    return (enErrorReg);
}

static PWM_nERROR PWM_Generator__enGetStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, uintptr_t uptrOffsetArg,
                                                  PWM_nEVENT enEventArg, UBase_t* puxStateArg)
{
    UBase_t uxGenMaskReg;
    UBase_t uxGenerator;
    UBase_t uxGeneratorGetReg;
    UBase_t uxValueReg;
    UBase_t uxTempReg;
    PWM_nERROR enErrorReg;

    uxGeneratorGetReg = 0UL;
    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) puxStateArg)
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
                enErrorReg = PWM_Generator__enGetStateByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, uptrOffsetArg, enEventArg, &uxTempReg);
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
        *puxStateArg = (UBase_t) uxGeneratorGetReg;
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetInterruptSourceStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                          PWM_nEVENT enEventArg, PWM_nSTATE enStateArg)
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
                enErrorReg = PWM_Generator__enSetInterruptSourceStateByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enEventArg, enStateArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetInterruptSourceMaskStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                              PWM_nEVENTMASK enEventMaskArg, PWM_nSTATE enStateArg)
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
                enErrorReg = PWM_Generator__enSetInterruptSourceMaskStateByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enEventMaskArg, enStateArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetInterruptSourceMaskStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                                PWM_nEVENTMASK enEventMaskArg, PWM_nSTATE enStateArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    UBase_t uxValueReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enEventMaskArg, (UBase_t) PWM_enEVENTMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        if(PWM_enSTATE_DIS == enStateArg)
        {
            uxValueReg = 0U;
        }
        else
        {
            uxValueReg = (UBase_t) enEventMaskArg;
        }

        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_INTEN_OFFSET;

        stRegister.uxShift = PWM_GEN_INTEN_R_CNT_ZERO_INT_BIT;
        stRegister.uxMask = (UBase_t) enEventMaskArg;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = uxValueReg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


PWM_nERROR PWM_Generator__enSetInterruptSourceStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENT enEventArg, PWM_nSTATE enStateArg)
{
    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enEventArg, (UBase_t) PWM_enEVENT_SW);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_INTEN_OFFSET;

        stRegister.uxShift = PWM_GEN_INTEN_R_CNT_ZERO_INT_BIT;
        stRegister.uxShift += (UBase_t) enEventArg;
        stRegister.uxMask = PWM_GEN_INTEN_CNT_ZERO_INT_MASK;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


PWM_nERROR PWM_Generator__enGetInterruptSourceStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                          PWM_nEVENT enEventArg, PWM_nGENMASK* penGeneratorGetArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enGetStateByMask(enModuleArg, enGeneratorMaskArg, PWM_INTEN_OFFSET, enEventArg, (UBase_t*) penGeneratorGetArg);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enGetInterruptSourceStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENT enEventArg, PWM_nSTATE* penStateArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enGetStateByNumber(enModuleArg, enGeneratorArg, PWM_INTEN_OFFSET, enEventArg, (UBase_t*) penStateArg);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enGetInterruptSourceMaskStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENTMASK enEventMaskArg, PWM_nEVENTMASK* penEventMaskGetArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enGetMaskStateByNumber(enModuleArg, enGeneratorArg, PWM_INTEN_OFFSET, enEventMaskArg, (UBase_t*) penEventMaskGetArg);
    return (enErrorReg);
}


PWM_nERROR PWM_Generator__enEnableInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENT enEventArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetInterruptSourceStateByMask(enModuleArg, enGeneratorMaskArg, enEventArg, PWM_enSTATE_ENA);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enEnableInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENT enEventArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetInterruptSourceStateByNumber(enModuleArg, enGeneratorArg, enEventArg, PWM_enSTATE_ENA);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enEnableInterruptSourceMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENTMASK enEventMaskArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetInterruptSourceMaskStateByMask(enModuleArg, enGeneratorMaskArg, enEventMaskArg, PWM_enSTATE_ENA);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enEnableInterruptSourceMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENTMASK enEventMaskArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetInterruptSourceMaskStateByNumber(enModuleArg, enGeneratorArg, enEventMaskArg, PWM_enSTATE_ENA);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enDisableInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENT enEventArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetInterruptSourceStateByMask(enModuleArg, enGeneratorMaskArg, enEventArg, PWM_enSTATE_DIS);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enDisableInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENT enEventArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetInterruptSourceStateByNumber(enModuleArg, enGeneratorArg, enEventArg, PWM_enSTATE_DIS);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enDisableInterruptSourceMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENTMASK enEventMaskArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetInterruptSourceMaskStateByMask(enModuleArg, enGeneratorMaskArg, enEventMaskArg, PWM_enSTATE_DIS);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enDisableInterruptSourceMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENTMASK enEventMaskArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enSetInterruptSourceMaskStateByNumber(enModuleArg, enGeneratorArg, enEventMaskArg, PWM_enSTATE_DIS);
    return (enErrorReg);
}


PWM_nERROR PWM_Generator__enClearInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENT enEventArg)
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
                enErrorReg = PWM_Generator__enClearInterruptSourceByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enEventArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enClearInterruptSourceMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENTMASK enEventMaskArg)
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
                enErrorReg = PWM_Generator__enClearInterruptSourceMaskByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enEventMaskArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enClearInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENT enEventArg)
{

    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    UBase_t uxValueReg;
    UBase_t uxBitPos;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enEventArg, (UBase_t) PWM_enEVENT_SW);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_ISC_OFFSET;

        uxBitPos = PWM_GEN_ISC_R_CNT_ZERO_INT_BIT;
        uxBitPos += (UBase_t) enEventArg;

        uxValueReg = 1U;
        uxValueReg <<= uxBitPos;

        stRegister.uxShift = 0UL;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enClearInterruptSourceMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENTMASK enEventMaskArg)
{

    PWM_Register_t stRegister;
    UBase_t uxOffsetReg;
    UBase_t uxValueReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enEventMaskArg, (UBase_t) PWM_enEVENTMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = (UBase_t) enGeneratorArg;
        uxOffsetReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
        uxOffsetReg *= 4UL;
        uxOffsetReg += PWM_GEN_REGISTER_BASE_OFFSET;
        uxOffsetReg += PWM_GEN_ISC_OFFSET;


        uxValueReg = (UBase_t) enEventMaskArg;
        uxValueReg <<= PWM_GEN_ISC_R_CNT_ZERO_INT_BIT;

        stRegister.uxShift = 0UL;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = (UBase_t) uxOffsetReg;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}


PWM_nERROR PWM_Generator__enStatusInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                        PWM_nEVENT enEventArg, PWM_nGENMASK* penGeneratorGetArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enGetStateByMask(enModuleArg, enGeneratorMaskArg, PWM_RIS_OFFSET, enEventArg, (UBase_t*) penGeneratorGetArg);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enStatusInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                          PWM_nEVENT enEventArg, PWM_nSTATUS* penStatusArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enGetStateByNumber(enModuleArg, enGeneratorArg, PWM_RIS_OFFSET, enEventArg, (UBase_t*) penStatusArg);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enStatusInterruptSourceMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENTMASK enEventMaskArg, PWM_nEVENTMASK* penEventMaskGetArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enGetMaskStateByNumber(enModuleArg, enGeneratorArg, PWM_RIS_OFFSET, enEventMaskArg, (UBase_t*) penEventMaskGetArg);
    return (enErrorReg);
}


PWM_nERROR PWM_Generator__enStatusMaskedInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                              PWM_nEVENT enEventArg, PWM_nGENMASK* penGeneratorGetArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enGetStateByMask(enModuleArg, enGeneratorMaskArg, PWM_ISC_OFFSET, enEventArg, (UBase_t*) penGeneratorGetArg);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enStatusMaskedInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                          PWM_nEVENT enEventArg, PWM_nSTATUS* penStatusArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enGetStateByNumber(enModuleArg, enGeneratorArg, PWM_ISC_OFFSET, enEventArg, (UBase_t*) penStatusArg);
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enStatusMaskedInterruptSourceMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENTMASK enEventMaskArg, PWM_nEVENTMASK* penEventMaskGetArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM_Generator__enGetMaskStateByNumber(enModuleArg, enGeneratorArg, PWM_ISC_OFFSET, enEventMaskArg, (UBase_t*) penEventMaskGetArg);
    return (enErrorReg);
}

