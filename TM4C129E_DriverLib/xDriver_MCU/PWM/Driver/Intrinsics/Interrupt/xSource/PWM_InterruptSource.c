/**
 *
 * @file PWM_InterruptSource.c
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
#include <xDriver_MCU/PWM/Driver/Intrinsics/Interrupt/xHeader/PWM_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/Primitives/PWM_Primitives.h>

static PWM_nERROR PWM__enGetStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, uintptr_t uptrOffsetArg,
                                        PWM_nINT_TYPE enTypeArg, PWM_nGENMASK* penGeneratorGetArg);

static PWM_nERROR PWM__enGetStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, uintptr_t uptrOffsetArg,
                                          PWM_nINT_TYPE enTypeArg, UBase_t* puxStateArg);


static PWM_nERROR PWM__enGetStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, uintptr_t uptrOffsetArg,
                                        PWM_nINT_TYPE enTypeArg, PWM_nGENMASK* penGeneratorGetArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penGeneratorGetArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;

    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enTypeArg, (UBase_t) PWM_enINT_TYPE_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxBitReg = (UBase_t) enTypeArg;
        uxBitReg <<= 4UL; /* *= 16 */

        PWM_Register_t stRegister;
        stRegister.uxShift = (UBase_t) uxBitReg;
        stRegister.uxMask = enGeneratorMaskArg;
        stRegister.uptrAddress = uptrOffsetArg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *penGeneratorGetArg = (PWM_nGENMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

static PWM_nERROR PWM__enGetStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, uintptr_t uptrOffsetArg,
                                          PWM_nINT_TYPE enTypeArg, UBase_t* puxStateArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxStateArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enTypeArg, (UBase_t) PWM_enINT_TYPE_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxBitReg;
        uxBitReg = (UBase_t) enTypeArg;
        uxBitReg <<= 4UL; /* *= 16 */

        PWM_Register_t stRegister;
        stRegister.uxShift = (UBase_t) uxBitReg;
        stRegister.uxShift += (UBase_t) enGeneratorArg;
        stRegister.uxMask = PWM_INTEN_GEN0_FAULT_MASK;
        stRegister.uptrAddress = uptrOffsetArg;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *puxStateArg = stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM__enSetInterruptSourceStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                PWM_nINT_TYPE enTypeArg, PWM_nSTATE enStateArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enTypeArg, (UBase_t) PWM_enINT_TYPE_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = (PWM_enSTATE_DIS == enStateArg) ? 0U : (UBase_t) enGeneratorMaskArg;

        UBase_t uxBitReg = (UBase_t) enTypeArg;
        uxBitReg <<= 4UL; /* *= 16 */

        PWM_Register_t stRegister;
        stRegister.uxShift = (UBase_t) uxBitReg;
        stRegister.uxMask = enGeneratorMaskArg;
        stRegister.uptrAddress = PWM_INTEN_OFFSET;
        stRegister.uxValue = uxValueReg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

PWM_nERROR PWM__enSetInterruptSourceStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                  PWM_nINT_TYPE enTypeArg, PWM_nSTATE enStateArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enTypeArg, (UBase_t) PWM_enINT_TYPE_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxBitReg = (UBase_t) enTypeArg;
        uxBitReg <<= 4UL; /* *= 16 */

        PWM_Register_t stRegister;
        stRegister.uxShift = (UBase_t) uxBitReg;
        stRegister.uxShift += (UBase_t) enGeneratorArg;
        stRegister.uxMask = PWM_INTEN_GEN0_FAULT_MASK;
        stRegister.uptrAddress = PWM_INTEN_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

PWM_nERROR PWM__enGetInterruptSourceStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                PWM_nINT_TYPE enTypeArg, PWM_nGENMASK* penGeneratorGetArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM__enGetStateByMask(enModuleArg, enGeneratorMaskArg, PWM_INTEN_OFFSET, enTypeArg, penGeneratorGetArg);
    return (enErrorReg);
}

PWM_nERROR PWM__enGetInterruptSourceStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                  PWM_nINT_TYPE enTypeArg, PWM_nSTATE* penStateArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM__enGetStateByNumber(enModuleArg, enGeneratorArg, PWM_INTEN_OFFSET, enTypeArg, (UBase_t*) penStateArg);
    return (enErrorReg);
}

PWM_nERROR PWM__enEnableInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nINT_TYPE enTypeArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM__enSetInterruptSourceStateByMask(enModuleArg, enGeneratorMaskArg, enTypeArg, PWM_enSTATE_ENA);
    return (enErrorReg);
}

PWM_nERROR PWM__enEnableInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nINT_TYPE enTypeArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM__enSetInterruptSourceStateByNumber(enModuleArg, enGeneratorArg, enTypeArg, PWM_enSTATE_ENA);
    return (enErrorReg);
}

PWM_nERROR PWM__enDisableInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nINT_TYPE enTypeArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM__enSetInterruptSourceStateByMask(enModuleArg, enGeneratorMaskArg, enTypeArg, PWM_enSTATE_DIS);
    return (enErrorReg);
}

PWM_nERROR PWM__enDisableInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nINT_TYPE enTypeArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM__enSetInterruptSourceStateByNumber(enModuleArg, enGeneratorArg, enTypeArg, PWM_enSTATE_DIS);
    return (enErrorReg);
}

PWM_nERROR PWM__enClearInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nINT_TYPE enTypeArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enTypeArg, (UBase_t) PWM_enINT_TYPE_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxBitReg = (UBase_t) enTypeArg;
        uxBitReg <<= 4UL; /* *= 16 */

        UBase_t uxValueReg = (UBase_t) enGeneratorMaskArg;
        uxValueReg <<= uxBitReg;

        PWM_Register_t stRegister;
        stRegister.uxShift = 0UL;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = PWM_ISC_OFFSET;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

PWM_nERROR PWM__enClearInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nINT_TYPE enTypeArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enTypeArg, (UBase_t) PWM_enINT_TYPE_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        UBase_t uxBitReg = (UBase_t) enTypeArg;
        uxBitReg <<= 4UL; /* *= 16 */
        uxBitReg += (UBase_t) enGeneratorArg;

        UBase_t uxValueReg = 1U;
        uxValueReg <<= uxBitReg;

        PWM_Register_t stRegister;
        stRegister.uxShift = 0UL;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = PWM_ISC_OFFSET;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

PWM_nERROR PWM__enStatusInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                              PWM_nINT_TYPE enTypeArg, PWM_nGENMASK* penGeneratorGetArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM__enGetStateByMask(enModuleArg, enGeneratorMaskArg, PWM_RIS_OFFSET, enTypeArg, penGeneratorGetArg);
    return (enErrorReg);
}

PWM_nERROR PWM__enStatusInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                PWM_nINT_TYPE enTypeArg, PWM_nSTATUS* penStatusArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM__enGetStateByNumber(enModuleArg, enGeneratorArg, PWM_RIS_OFFSET, enTypeArg, (UBase_t*) penStatusArg);
    return (enErrorReg);
}

PWM_nERROR PWM__enStatusMaskedInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                    PWM_nINT_TYPE enTypeArg, PWM_nGENMASK* penGeneratorGetArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM__enGetStateByMask(enModuleArg, enGeneratorMaskArg, PWM_ISC_OFFSET, enTypeArg, penGeneratorGetArg);
    return (enErrorReg);
}

PWM_nERROR PWM__enStatusMaskedInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                      PWM_nINT_TYPE enTypeArg, PWM_nSTATUS* penStatusArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = PWM__enGetStateByNumber(enModuleArg, enGeneratorArg, PWM_ISC_OFFSET, enTypeArg, (UBase_t*) penStatusArg);
    return (enErrorReg);
}

