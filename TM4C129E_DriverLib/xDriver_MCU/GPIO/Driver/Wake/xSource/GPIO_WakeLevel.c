/**
 *
 * @file GPIO_WakeLevel.c
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
#include <xDriver_MCU/GPIO/Driver/Wake/xHeader/GPIO_WakeLevel.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetWakeUpLevelByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                        GPIO_nLEVEL enLevelArg)
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
        if(GPIO_enLEVEL_LOW == enLevelArg)
        {
            u32ValueReg = 0UL;
        }
        else
        {
            u32ValueReg = (uint32_t) enPinMaskArg;
            u32ValueReg &= 0xF0UL;
        }
        stRegister.u32Shift = 0UL;
        stRegister.u32Mask = (uint32_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_WAKELVL_OFFSET;
        stRegister.u32Value = (uint32_t) u32ValueReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetWakeUpLevelByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                           GPIO_nLEVEL enLevelArg)
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
        stRegister.u32Mask = GPIO_WAKELVL_PIN4_MASK;
        stRegister.uptrAddress = GPIO_WAKELVL_OFFSET;
        stRegister.u32Value = (uint32_t) enLevelArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }


    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetWakeUpLevelByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
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
        stRegister.uptrAddress = GPIO_WAKELVL_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penPinMaskReqArg = (GPIO_nPINMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetWakeUpLevelByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nLEVEL* penLevelArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penLevelArg)
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
        stRegister.u32Mask = GPIO_WAKELVL_PIN4_MASK;
        stRegister.uptrAddress = GPIO_WAKELVL_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penLevelArg = (GPIO_nLEVEL) stRegister.u32Value;
    }

    return (enErrorReg);
}


