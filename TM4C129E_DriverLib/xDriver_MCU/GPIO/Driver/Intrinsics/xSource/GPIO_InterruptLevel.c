/**
 *
 * @file GPIO_InterruptLevel.c
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
 * @verbatim Apr 6, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 6, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptLevel.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptSense.h>
#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetInterruptLevelByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                            GPIO_nLEVEL enLevelArg)
{
    GPIO_Register_t stRegister;
    uint32_t u32ValueReg;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinMaskArg, (uint32_t) GPIO_enPINMASK_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetInterruptSenseByMask(enPortArg, enPinMaskArg, GPIO_enSENSE_LEVEL);
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
        }
        stRegister.u32Shift = GPIO_IEV_R_PIN0_BIT;
        stRegister.u32Mask = (uint32_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_IEV_OFFSET;
        stRegister.u32Value = u32ValueReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetInterruptLevelByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                              GPIO_nLEVEL enLevelArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetInterruptSenseByNumber(enPortArg, enPinArg, GPIO_enSENSE_LEVEL);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enPinArg;
        stRegister.u32Shift += GPIO_IEV_R_PIN0_BIT;
        stRegister.u32Mask = GPIO_IEV_PIN0_MASK;
        stRegister.uptrAddress = GPIO_IEV_OFFSET;
        stRegister.u32Value = (uint32_t) enLevelArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetInterruptLevelByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                            GPIO_nPINMASK* penPinMaskReqArg)
{
    GPIO_Register_t stRegister;
    uint32_t u32PinMaskReg;
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
        u32PinMaskReg = 0UL;
        enErrorReg = GPIO__enGetInterruptSenseByMask(enPortArg, enPinMaskArg, (GPIO_nPINMASK*) &u32PinMaskReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = GPIO_IEV_R_PIN0_BIT;
        stRegister.u32Mask = (uint32_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_IEV_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        u32PinMaskReg &= stRegister.u32Value;
        *penPinMaskReqArg = (GPIO_nPINMASK) u32PinMaskReg;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetInterruptLevelByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                              GPIO_nLEVEL* penLevelArg)
{
    GPIO_Register_t stRegister;
    GPIO_nSENSE enSenseReg;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penLevelArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enSenseReg = GPIO_enSENSE_UNDEF;
        enErrorReg = GPIO__enGetInterruptSenseByNumber(enPortArg, enPinArg, &enSenseReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(GPIO_enSENSE_LEVEL != enSenseReg)
        {
            stRegister.u32Shift = (uint32_t) enPinArg;
            stRegister.u32Shift += GPIO_IEV_R_PIN0_BIT;
            stRegister.u32Mask = GPIO_IEV_PIN0_MASK;
            stRegister.uptrAddress = GPIO_IEV_OFFSET;
            enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
            if(GPIO_enERROR_OK == enErrorReg)
            {
                *penLevelArg = (GPIO_nLEVEL) stRegister.u32Value;
            }
        }
        else
        {
            *penLevelArg = GPIO_enLEVEL_UNDEF;
        }
    }

    return (enErrorReg);
}

