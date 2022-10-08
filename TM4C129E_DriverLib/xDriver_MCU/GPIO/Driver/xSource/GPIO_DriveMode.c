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
                enErrorReg = GPIO__enSetDriveModeByNumber(enPortArg, (GPIO_nPIN) uxPinReg, enModeArg);
            }
            uxPinReg++;
            uxPinMaskReg >>= 1U;
        }
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetDriveModeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                         GPIO_nDRIVE_MODE enModeArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxShift *= (GPIO_PC_R_PIN1_BIT - GPIO_PC_R_PIN0_BIT);
        stRegister.uxShift += GPIO_PC_R_PIN0_BIT;
        stRegister.uxMask = GPIO_PC_PIN0_MASK;
        stRegister.uptrAddress = GPIO_PC_OFFSET;
        stRegister.uxValue = (UBase_t) enModeArg;
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
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxShift *= (GPIO_PC_R_PIN1_BIT - GPIO_PC_R_PIN0_BIT);
        stRegister.uxShift += GPIO_PC_R_PIN0_BIT;
        stRegister.uxMask = GPIO_PC_PIN0_MASK;
        stRegister.uptrAddress = GPIO_PC_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penModeArg = (GPIO_nDRIVE_MODE) stRegister.uxValue;
    }
    return (enErrorReg);
}

