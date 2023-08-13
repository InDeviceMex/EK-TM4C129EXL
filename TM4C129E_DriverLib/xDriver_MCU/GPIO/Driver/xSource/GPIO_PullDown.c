/**
 *
 * @file GPIO_PullDown.c
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
 * @verbatim 17 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_PullDown.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetPullDownResistorByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                              GPIO_nSTATE enStateArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinMaskArg, (UBase_t) GPIO_enPINMASK_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = (GPIO_enSTATE_DIS == enStateArg) ? 0UL : (UBase_t) enPinMaskArg;
        GPIO_Register_t stRegister;
        stRegister.uxShift = GPIO_PDR_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_PDR_OFFSET;
        stRegister.uxValue = uxValueReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetPullDownResistorByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                                GPIO_nSTATE enStateArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        GPIO_Register_t stRegister;
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxShift += GPIO_PDR_R_PIN0_BIT;
        stRegister.uxMask = GPIO_PDR_PIN0_MASK;
        stRegister.uptrAddress = GPIO_PDR_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enEnablePullDownResistorByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetPullDownResistorByMask(enPortArg, enPinMaskArg, GPIO_enSTATE_ENA);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enEnablePullDownResistorByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetPullDownResistorByNumber(enPortArg, enPinArg, GPIO_enSTATE_ENA);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enDisablePullDownResistorByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetPullDownResistorByMask(enPortArg, enPinMaskArg, GPIO_enSTATE_DIS);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enDisablePullDownResistorByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetPullDownResistorByNumber(enPortArg, enPinArg, GPIO_enSTATE_DIS);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetPullDownResistorByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                             GPIO_nPINMASK* penPinMaskReqArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penPinMaskReqArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinMaskArg, (UBase_t) GPIO_enPINMASK_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        GPIO_Register_t stRegister;
        stRegister.uxShift = GPIO_PDR_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_PDR_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
        if(GPIO_enERROR_OK == enErrorReg)
        {
            *penPinMaskReqArg = (GPIO_nPINMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetPullDownResistorByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                                GPIO_nSTATE* penStateArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;

    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        GPIO_Register_t stRegister;
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxShift += GPIO_PDR_R_PIN0_BIT;
        stRegister.uxMask = GPIO_PDR_PIN0_MASK;
        stRegister.uptrAddress = GPIO_PDR_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
        if(GPIO_enERROR_OK == enErrorReg)
        {
            *penStateArg = (GPIO_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
