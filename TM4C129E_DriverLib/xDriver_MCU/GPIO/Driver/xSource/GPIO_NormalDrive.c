/**
 *
 * @file GPIO_NormalDrive.c
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
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_NormalDrive.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

static const uintptr_t GPIO_uptrDriveOffset[(uint32_t) GPIO_enNORMAL_DRIVE_MAX] =
{
 GPIO_DR2R_OFFSET, GPIO_DR4R_OFFSET, GPIO_DR8R_OFFSET
};

GPIO_nERROR GPIO__enSetNormalDriveByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                         GPIO_nNORMAL_DRIVE enDriveArg, GPIO_nSTATE enStateArg)
{
    GPIO_Register_t stRegister;
    uint32_t u32ValueReg;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinMaskArg, (uint32_t) GPIO_enPINMASK_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enDriveArg, (uint32_t) GPIO_enNORMAL_DRIVE_MAX);
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
        stRegister.u32Shift = GPIO_DR2R_R_PIN0_BIT;
        stRegister.u32Mask = (uint32_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_uptrDriveOffset[(uintptr_t) enDriveArg];
        stRegister.u32Value = u32ValueReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetNormalDriveByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                           GPIO_nNORMAL_DRIVE enDriveArg, GPIO_nSTATE enStateArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enDriveArg, (uint32_t) GPIO_enNORMAL_DRIVE_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enPinArg;
        stRegister.u32Shift += GPIO_DR2R_R_PIN0_BIT;
        stRegister.u32Mask = GPIO_DR2R_PIN0_MASK;
        stRegister.uptrAddress = GPIO_uptrDriveOffset[(uintptr_t) enDriveArg];
        stRegister.u32Value = (uint32_t) enStateArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enEnableNormalDriveByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                            GPIO_nNORMAL_DRIVE enDriveArg)
{
    GPIO_nERROR enReturnReg;
    enReturnReg = GPIO__enSetNormalDriveByMask(enPortArg, enPinMaskArg, enDriveArg, GPIO_enSTATE_ENA);
    return (enReturnReg);
}

GPIO_nERROR GPIO__enEnableNormalDriveByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                              GPIO_nNORMAL_DRIVE enDriveArg)
{
    GPIO_nERROR enReturnReg;
    enReturnReg = GPIO__enSetNormalDriveByNumber(enPortArg, enPinArg, enDriveArg, GPIO_enSTATE_ENA);
    return (enReturnReg);
}

GPIO_nERROR GPIO__enDisableNormalDriveByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                             GPIO_nNORMAL_DRIVE enDriveArg)
{
    GPIO_nERROR enReturnReg;
    enReturnReg = GPIO__enSetNormalDriveByMask(enPortArg, enPinMaskArg, enDriveArg, GPIO_enSTATE_DIS);
    return (enReturnReg);
}

GPIO_nERROR GPIO__enDisableNormalDriveByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                               GPIO_nNORMAL_DRIVE enDriveArg)
{
    GPIO_nERROR enReturnReg;
    enReturnReg = GPIO__enSetNormalDriveByNumber(enPortArg, enPinArg, enDriveArg, GPIO_enSTATE_DIS);
    return (enReturnReg);
}

GPIO_nERROR GPIO__enGetNormalDriveByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                         GPIO_nNORMAL_DRIVE enDriveArg, GPIO_nPINMASK* penPinMaskReqArg)
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
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enDriveArg, (uint32_t) GPIO_enNORMAL_DRIVE_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = GPIO_DR2R_R_PIN0_BIT;
        stRegister.u32Mask = (uint32_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_uptrDriveOffset[(uintptr_t) enDriveArg];
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penPinMaskReqArg = (GPIO_nPINMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetNormalDriveByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                           GPIO_nNORMAL_DRIVE enDriveArg, GPIO_nSTATE* penStateArg)
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
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enDriveArg, (uint32_t) GPIO_enNORMAL_DRIVE_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enPinArg;
        stRegister.u32Shift += GPIO_DR2R_R_PIN0_BIT;
        stRegister.u32Mask = GPIO_DR2R_PIN0_MASK;
        stRegister.uptrAddress = GPIO_uptrDriveOffset[(uintptr_t) enDriveArg];
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penStateArg = (GPIO_nSTATE) stRegister.u32Value;
    }

    return (enErrorReg);
}




