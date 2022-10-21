/**
 *
 * @file GPIO_DMATrigger.c
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
 * @verbatim 29 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_DMATrigger.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetDMATriggerStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
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
        stRegister.uxShift = GPIO_DMACTL_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_DMACTL_OFFSET;
        stRegister.uxValue = uxValueReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetDMATriggerStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nSTATE enStateArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxShift += GPIO_DMACTL_R_PIN0_BIT;
        stRegister.uxMask = GPIO_DMACTL_PIN0_MASK;
        stRegister.uptrAddress = GPIO_DMACTL_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enEnableDMATriggerByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetDMATriggerStateByMask(enPortArg, enPinMaskArg, GPIO_enSTATE_ENA);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enEnableDMATriggerByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetDMATriggerStateByNumber(enPortArg, enPinArg, GPIO_enSTATE_ENA);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enDisableDMATriggerByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetDMATriggerStateByMask(enPortArg, enPinMaskArg, GPIO_enSTATE_DIS);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enDisableDMATriggerByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO__enSetDMATriggerStateByNumber(enPortArg, enPinArg, GPIO_enSTATE_DIS);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetDMATriggerStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                             GPIO_nPINMASK* penPinMaskReqArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penPinMaskReqArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinMaskArg, (UBase_t) GPIO_enPINMASK_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = GPIO_DMACTL_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_DMACTL_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penPinMaskReqArg = (GPIO_nPINMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetDMATriggerStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
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
        stRegister.uxShift += GPIO_DMACTL_R_PIN0_BIT;
        stRegister.uxMask = GPIO_DMACTL_PIN0_MASK;
        stRegister.uptrAddress = GPIO_DMACTL_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penStateArg = (GPIO_nSTATE) stRegister.uxValue;
    }
    return (enErrorReg);
}

