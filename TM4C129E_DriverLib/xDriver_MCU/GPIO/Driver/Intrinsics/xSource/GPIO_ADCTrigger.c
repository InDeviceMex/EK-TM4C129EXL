/**
 *
 * @file GPIO_GPIOTrigger.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_ADCTrigger.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetADCTriggerStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                             GPIO_nSTATE enStateArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinMaskArg, (UBase_t) GPIO_enPINMASK_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = (GPIO_enSTATE_DIS == enStateArg) ? 0UL : (UBase_t) enPinMaskArg;
        GPIO_Register_t stRegister;
        stRegister.uxShift = GPIO_ADCCTL_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_ADCCTL_OFFSET;
        stRegister.uxValue = uxValueReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetADCTriggerStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nSTATE enStateArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        GPIO_Register_t stRegister;
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxShift += GPIO_ADCCTL_R_PIN0_BIT;
        stRegister.uxMask = GPIO_ADCCTL_PIN0_MASK;
        stRegister.uptrAddress = GPIO_ADCCTL_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enEnableADCTriggerByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetADCTriggerStateByMask(enPortArg, enPinMaskArg, GPIO_enSTATE_ENA);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enEnableADCTriggerByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetADCTriggerStateByNumber(enPortArg, enPinArg, GPIO_enSTATE_ENA);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enDisableADCTriggerByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetADCTriggerStateByMask(enPortArg, enPinMaskArg, GPIO_enSTATE_DIS);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enDisableADCTriggerByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetADCTriggerStateByNumber(enPortArg, enPinArg, GPIO_enSTATE_DIS);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetADCTriggerStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
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
        stRegister.uxShift = GPIO_ADCCTL_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_ADCCTL_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
        if(GPIO_enERROR_OK == enErrorReg)
        {
            *penPinMaskReqArg = (GPIO_nPINMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetADCTriggerStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
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
        stRegister.uxShift += GPIO_ADCCTL_R_PIN0_BIT;
        stRegister.uxMask = GPIO_ADCCTL_PIN0_MASK;
        stRegister.uptrAddress = GPIO_ADCCTL_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
        if(GPIO_enERROR_OK == enErrorReg)
        {
            *penStateArg = (GPIO_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
