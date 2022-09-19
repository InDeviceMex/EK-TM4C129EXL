/**
 *
 * @file GPIO_Commit.c
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
 * @verbatim 30 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Commit.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Lock.h>
#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetCommitStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                        GPIO_nSTATE enStateArg)
{
    GPIO_Register_t stRegister;
    uint32_t u32ValueReg;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinMaskArg, (uint32_t) GPIO_enPINMASK_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enUnlock(enPortArg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(GPIO_enSTATE_DIS == enStateArg)
        {
            u32ValueReg = 0UL;
        }
        else
        {
            u32ValueReg = (uint32_t) enPinMaskArg;
        }
        stRegister.u32Shift = GPIO_CR_R_PIN0_BIT;
        stRegister.u32Mask = (uint32_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_CR_OFFSET;
        stRegister.u32Value = u32ValueReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enLock(enPortArg);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetCommitStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                           GPIO_nSTATE enStateArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enUnlock(enPortArg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enPinArg;
        stRegister.u32Shift += GPIO_CR_R_PIN0_BIT;
        stRegister.u32Mask = GPIO_CR_PIN0_MASK;
        stRegister.uptrAddress = GPIO_CR_OFFSET;
        stRegister.u32Value = (uint32_t) enStateArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enLock(enPortArg);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetCommitStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
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
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinMaskArg, (uint32_t) GPIO_enPINMASK_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enUnlock(enPortArg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = GPIO_CR_R_PIN0_BIT;
        stRegister.u32Mask = (uint32_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_CR_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penPinMaskReqArg = (GPIO_nPINMASK) stRegister.u32Value;
        enErrorReg = GPIO__enLock(enPortArg);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetCommitStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
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
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enUnlock(enPortArg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enPinArg;
        stRegister.u32Shift += GPIO_CR_R_PIN0_BIT;
        stRegister.u32Mask = GPIO_CR_PIN0_MASK;
        stRegister.uptrAddress = GPIO_CR_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penStateArg = (GPIO_nSTATE) stRegister.u32Value;
        enErrorReg = GPIO__enLock(enPortArg);
    }
    return (enErrorReg);
}

