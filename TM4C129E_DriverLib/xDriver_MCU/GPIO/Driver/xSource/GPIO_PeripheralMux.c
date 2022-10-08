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
                                           UBase_t uxMuxArg)
{
    UBase_t uxPinReg;
    UBase_t uxPinMaskReg;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinMaskArg, (UBase_t) GPIO_enPINMASK_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        uxPinReg = 0U;
        uxPinMaskReg = (UBase_t) enPinMaskArg;
        while((0U != uxPinMaskReg) && (GPIO_enERROR_OK == enErrorReg))
        {
            if(0UL != ((UBase_t) GPIO_enPINMASK_0 & uxPinMaskReg))
            {
                enErrorReg = GPIO__enSetPeripheralMuxByNumber(enPortArg, (GPIO_nPIN) uxPinReg, uxMuxArg);
            }
            uxPinReg++;
            uxPinMaskReg >>= 1U;
        }
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetPeripheralMuxByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                         UBase_t uxMuxArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxShift *= (GPIO_PCTL_R_PIN1_BIT - GPIO_PCTL_R_PIN0_BIT);
        stRegister.uxShift += GPIO_PCTL_R_PIN0_BIT;
        stRegister.uxMask = GPIO_PCTL_PIN0_MASK;
        stRegister.uptrAddress = GPIO_PCTL_OFFSET;
        stRegister.uxValue = (UBase_t) uxMuxArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetPeripheralMuxByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                         UBase_t* puxMuxArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) puxMuxArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxShift *= (GPIO_PCTL_R_PIN1_BIT - GPIO_PCTL_R_PIN0_BIT);
        stRegister.uxShift += GPIO_PCTL_R_PIN0_BIT;
        stRegister.uxMask = GPIO_PCTL_PIN0_MASK;
        stRegister.uptrAddress = GPIO_PCTL_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *puxMuxArg = (UBase_t) stRegister.uxValue;
    }
    return (enErrorReg);
}





