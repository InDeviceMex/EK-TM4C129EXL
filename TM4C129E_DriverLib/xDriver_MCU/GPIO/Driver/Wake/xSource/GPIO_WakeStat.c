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
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penPinMaskReqArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if((GPIO_enPORT_K != enPortArg) || (0UL == (0xF0UL & (UBase_t) enPinMaskArg)))
        {
            enErrorReg = GPIO_enERROR_RANGE;
        }
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        GPIO_Register_t stRegister;
        stRegister.uxShift = 0UL;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_WAKESTAT_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
        if(GPIO_enERROR_OK == enErrorReg)
        {
            *penPinMaskReqArg = (GPIO_nPINMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetWakeUpStatusByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nWAKE_STATUS* penStateArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;

    if(GPIO_enERROR_OK == enErrorReg)
    {
        if((GPIO_enPORT_K != enPortArg) || ((UBase_t) GPIO_enPIN_3 >= (UBase_t) enPinArg))
        {
            enErrorReg = GPIO_enERROR_RANGE;
        }
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        GPIO_Register_t stRegister;
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxMask = GPIO_WAKESTAT_PIN4_MASK;
        stRegister.uptrAddress = GPIO_WAKESTAT_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
        if(GPIO_enERROR_OK == enErrorReg)
        {
            *penStateArg = (GPIO_nWAKE_STATUS) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
