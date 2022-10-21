/**
 *
 * @file GPIO_PullUp.c
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
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_PullUp.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetPullUpResistorByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                        GPIO_nSTATE enStateArg)
{
    GPIO_Register_t stRegister;
    UBase_t uxValueReg;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinMaskArg, (UBase_t) GPIO_enPINMASK_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(GPIO_enSTATE_DIS == enStateArg)
        {
            uxValueReg = 0UL;
        }
        else
        {
            uxValueReg = (UBase_t) enPinMaskArg;
        }
        stRegister.uxShift = GPIO_PUR_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_PUR_OFFSET;
        stRegister.uxValue = uxValueReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetPullUpResistorByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nSTATE enStateArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxShift += GPIO_PUR_R_PIN0_BIT;
        stRegister.uxMask = GPIO_PUR_PIN0_MASK;
        stRegister.uptrAddress = GPIO_PUR_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enEnablePullUpResistorByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetPullUpResistorByMask(enPortArg, enPinMaskArg, GPIO_enSTATE_ENA);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enEnablePullUpResistorByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetPullUpResistorByNumber(enPortArg, enPinArg, GPIO_enSTATE_ENA);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enDisablePullUpResistorByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetPullUpResistorByMask(enPortArg, enPinMaskArg, GPIO_enSTATE_DIS);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enDisablePullUpResistorByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetPullUpResistorByNumber(enPortArg, enPinArg, GPIO_enSTATE_DIS);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetPullUpResistorByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                             GPIO_nPINMASK* penPinMaskReqArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL != (uintptr_t) penPinMaskReqArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinMaskArg, (UBase_t) GPIO_enPINMASK_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = GPIO_PUR_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_PUR_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penPinMaskReqArg = (GPIO_nPINMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetPullUpResistorByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nSTATE* penStateArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxShift += GPIO_PUR_R_PIN0_BIT;
        stRegister.uxMask = GPIO_PUR_PIN0_MASK;
        stRegister.uptrAddress = GPIO_PUR_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penStateArg = (GPIO_nSTATE) stRegister.uxValue;
    }
    return (enErrorReg);
}






