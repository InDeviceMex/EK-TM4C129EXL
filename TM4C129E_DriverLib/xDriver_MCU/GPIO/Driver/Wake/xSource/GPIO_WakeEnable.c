/**
 *
 * @file GPIO_WakeEnable.c
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
 * @verbatim 10 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Wake/xHeader/GPIO_WakeEnable.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetWakeUpStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                        GPIO_nSTATE enStateArg)
{
    GPIO_Register_t stRegister;
    uint32_t u32ValueReg;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(GPIO_enPORT_K != enPortArg)
    {
        enErrorReg = GPIO_enERROR_RANGE;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL == (0xF0UL & (uint32_t) enPinMaskArg))
        {
            enErrorReg = GPIO_enERROR_RANGE;
        }
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
            u32ValueReg &= 0xF0;
        }
        stRegister.u32Shift = 0UL;
        stRegister.u32Mask = (uint32_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_WAKEPEN_OFFSET;
        stRegister.u32Value = u32ValueReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetWakeUpStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                           GPIO_nSTATE enStateArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(GPIO_enPORT_K != enPortArg)
    {
        enErrorReg = GPIO_enERROR_RANGE;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if((uint32_t) GPIO_enPIN_3 >= (uint32_t) enPinArg)
        {
            enErrorReg = GPIO_enERROR_RANGE;
        }
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enPinArg;
        stRegister.u32Mask = GPIO_WAKEPEN_PIN4_MASK;
        stRegister.uptrAddress = GPIO_WAKEPEN_OFFSET;
        stRegister.u32Value = (uint32_t) enStateArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enEnableWakeUpByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg)
{
    GPIO_nERROR enReturnReg;

    enReturnReg = GPIO__enSetWakeUpStateByMask(enPortArg, enPinMaskArg, GPIO_enSTATE_ENA);

    return (enReturnReg);
}

GPIO_nERROR GPIO__enEnableWakeUpByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg)
{
    GPIO_nERROR enReturnReg;

    enReturnReg = GPIO__enSetWakeUpStateByNumber(enPortArg, enPinArg, GPIO_enSTATE_ENA);

    return (enReturnReg);
}

GPIO_nERROR GPIO__enDisableWakeUpByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg)
{
    GPIO_nERROR enReturnReg;

    enReturnReg = GPIO__enSetWakeUpStateByMask(enPortArg, enPinMaskArg, GPIO_enSTATE_DIS);

    return (enReturnReg);
}

GPIO_nERROR GPIO__enDisableWakeUpByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg)
{
    GPIO_nERROR enReturnReg;

    enReturnReg = GPIO__enSetWakeUpStateByNumber(enPortArg, enPinArg, GPIO_enSTATE_DIS);

    return (enReturnReg);
}

GPIO_nERROR GPIO__enGetWakeUpStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
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
        if(GPIO_enPORT_K != enPortArg)
        {
            enErrorReg = GPIO_enERROR_RANGE;
        }
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL == (0xF0UL & (uint32_t) enPinMaskArg))
        {
            enErrorReg = GPIO_enERROR_RANGE;
        }
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0UL;
        stRegister.u32Mask = (uint32_t) enPinMaskArg;
        stRegister.u32Mask &= 0xF0UL;
        stRegister.uptrAddress = GPIO_WAKEPEN_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penPinMaskReqArg = (GPIO_nPINMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetWakeUpStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
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
        if(GPIO_enPORT_K != enPortArg)
        {
            enErrorReg = GPIO_enERROR_RANGE;
        }
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if((uint32_t) GPIO_enPIN_3 >= (uint32_t) enPinArg)
        {
            enErrorReg = GPIO_enERROR_RANGE;
        }
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enPinArg;
        stRegister.u32Mask = GPIO_WAKEPEN_PIN4_MASK;
        stRegister.uptrAddress = GPIO_WAKEPEN_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penStateArg = (GPIO_nSTATE) stRegister.u32Value;
    }

    return (enErrorReg);
}
