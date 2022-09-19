/**
 *
 * @file GPIO_Data.c
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
 * @verbatim 3 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_Data.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetDataByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                  GPIO_nLEVEL enLevelArg)
{
    GPIO_Register_t stRegister;
    uint32_t u32ValueReg;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinMaskArg, (uint32_t) GPIO_enPINMASK_MAX);
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
        stRegister.u32Shift = GPIO_DATA_R_PIN0_BIT;
        stRegister.u32Mask = (uint32_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_DATA_OFFSET;
        stRegister.u32Value = u32ValueReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetDataByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                     GPIO_nLEVEL enLevelArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enPinArg;
        stRegister.u32Shift += GPIO_DATA_R_PIN0_BIT;
        stRegister.u32Mask = GPIO_DATA_PIN0_MASK;
        stRegister.uptrAddress = GPIO_DATA_OFFSET;
        stRegister.u32Value = (uint32_t) enLevelArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetDataByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
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
        stRegister.u32Shift = GPIO_DATA_R_PIN0_BIT;
        stRegister.u32Mask = (uint32_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_DATA_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penPinMaskReqArg = (GPIO_nPINMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetDataByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
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
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enPinArg;
        stRegister.u32Shift += GPIO_DATA_R_PIN0_BIT;
        stRegister.u32Mask = GPIO_DATA_PIN0_MASK;
        stRegister.uptrAddress = GPIO_DATA_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penLevelArg = (GPIO_nLEVEL) stRegister.u32Value;
    }
    return (enErrorReg);
}
