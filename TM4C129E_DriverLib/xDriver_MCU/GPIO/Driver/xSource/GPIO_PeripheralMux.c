/**
 *
 * @file GPIO_PeripheralMux.c
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
 * @verbatim 18 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_PeripheralMux.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetPeripheralMuxByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                           uint32_t u32MuxArg)
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
            if(0UL != ((uint32_t) GPIO_enPINMASK_0 & u32PinMaskReg))
            {
                enErrorReg = GPIO__enSetPeripheralMuxByNumber(enPortArg, (GPIO_nPIN) u32PinReg, u32MuxArg);
            }
            u32PinReg++;
            u32PinMaskReg >>= 1U;
        }
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetPeripheralMuxByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                         uint32_t u32MuxArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enPinArg;
        stRegister.u32Shift *= (GPIO_PCTL_R_PIN1_BIT - GPIO_PCTL_R_PIN0_BIT);
        stRegister.u32Shift += GPIO_PCTL_R_PIN0_BIT;
        stRegister.u32Mask = GPIO_PCTL_PIN0_MASK;
        stRegister.uptrAddress = GPIO_PCTL_OFFSET;
        stRegister.u32Value = (uint32_t) u32MuxArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetPeripheralMuxByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                         uint32_t* pu32MuxArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) pu32MuxArg)
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
        stRegister.u32Shift *= (GPIO_PCTL_R_PIN1_BIT - GPIO_PCTL_R_PIN0_BIT);
        stRegister.u32Shift += GPIO_PCTL_R_PIN0_BIT;
        stRegister.u32Mask = GPIO_PCTL_PIN0_MASK;
        stRegister.uptrAddress = GPIO_PCTL_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *pu32MuxArg = (uint32_t) stRegister.u32Value;
    }
    return (enErrorReg);
}





