/**
 *
 * @file GPIO_DriveMode.c
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
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_DriveMode.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetDriveModeByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                       GPIO_nDRIVE_MODE enModeArg)
{
    uint32_t u32PinReg;
    uint32_t u32PinMaskReg;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinMaskArg, (uint32_t) GPIO_enPINMASK_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        u32PinReg = 0U;
        u32PinMaskReg = (uint32_t) enPinMaskArg;
        while((0U != u32PinMaskReg) && (GPIO_enERROR_OK == enErrorReg))
        {
            if(0UL != (GPIO_enPINMASK_0 & u32PinMaskReg))
            {
                enErrorReg = GPIO__enSetDriveModeByNumber(enPortArg, (GPIO_nPIN) u32PinReg, enModeArg);
            }
            u32PinReg++;
            u32PinMaskReg >>= 1U;
        }
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetDriveModeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                         GPIO_nDRIVE_MODE enModeArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enPinArg;
        stRegister.u32Shift *= (GPIO_PC_R_PIN1_BIT - GPIO_PC_R_PIN0_BIT);
        stRegister.u32Shift += GPIO_PC_R_PIN0_BIT;
        stRegister.u32Mask = GPIO_PC_PIN0_MASK;
        stRegister.uptrAddress = GPIO_PC_OFFSET;
        stRegister.u32Value = (uint32_t) enModeArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetDriveModeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                         GPIO_nDRIVE_MODE* penModeArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penModeArg)
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
        stRegister.u32Shift *= (GPIO_PC_R_PIN1_BIT - GPIO_PC_R_PIN0_BIT);
        stRegister.u32Shift += GPIO_PC_R_PIN0_BIT;
        stRegister.u32Mask = GPIO_PC_PIN0_MASK;
        stRegister.uptrAddress = GPIO_PC_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penModeArg = (GPIO_nDRIVE_MODE) stRegister.u32Value;
    }
    return (enErrorReg);
}

