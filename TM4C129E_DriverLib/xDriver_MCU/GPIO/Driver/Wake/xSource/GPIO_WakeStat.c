/**
 *
 * @file GPIO_WakeStat.c
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
#include <xDriver_MCU/GPIO/Driver/Wake/xHeader/GPIO_WakeStat.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enGetWakeUpStatusByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
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
        stRegister.uptrAddress = GPIO_WAKESTAT_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penPinMaskReqArg = (GPIO_nPINMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetWakeUpStatusByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nWAKE_STATUS* penStateArg)
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
        stRegister.u32Mask = GPIO_WAKESTAT_PIN4_MASK;
        stRegister.uptrAddress = GPIO_WAKESTAT_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penStateArg = (GPIO_nWAKE_STATUS) stRegister.u32Value;
    }

    return (enErrorReg);
}
