/**
 *
 * @file GPIO_Drive.c
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_Drive.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_SlewRate.h>
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_NormalDrive.h>
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_ExtendedDrive.h>
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_DriveMode.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetDriveByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg, GPIO_nDRIVE enDriveArg)
{
    UBase_t uxNormalDriveReg;
    UBase_t uxExtendedDriveReg;
    UBase_t uxExtendedModeReg;
    UBase_t uxSlewRateReg;

    GPIO_nERROR enErrorReg;
    GPIO_nDRIVE_CAPABILITY enExtendedCapabilityReg;


    uxNormalDriveReg = 0UL;
    uxExtendedDriveReg = 0UL;
    uxExtendedModeReg = 0UL;
    uxSlewRateReg = 0UL;
    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinMaskArg, (UBase_t) GPIO_enPINMASK_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        uxNormalDriveReg = (UBase_t) enDriveArg;
        uxNormalDriveReg >>= 0UL;
        uxNormalDriveReg &= 0xFUL;

        uxExtendedDriveReg = (UBase_t) enDriveArg;
        uxExtendedDriveReg >>= 4UL;
        uxExtendedDriveReg &= 0xFUL;

        uxSlewRateReg = (UBase_t) enDriveArg;
        uxSlewRateReg >>= 8UL;
        uxSlewRateReg &= 0xFUL;

        uxExtendedModeReg = (UBase_t) enDriveArg;
        uxExtendedModeReg >>= 12UL;
        uxExtendedModeReg &= 0xFUL;

        enExtendedCapabilityReg = GPIO_enDRIVE_CAPABILITY_NORMAL;
        enErrorReg = GPIO__enGetDriveCapability(enPortArg, &enExtendedCapabilityReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(GPIO_enDRIVE_CAPABILITY_EXTENDED == enExtendedCapabilityReg)
        {
            enErrorReg = GPIO__enSetDriveModeByMask(enPortArg, enPinMaskArg, (GPIO_nDRIVE_MODE) uxExtendedModeReg);
            if(GPIO_enERROR_OK == enErrorReg)
            {
                enErrorReg = GPIO__enSetExtendedDriveByMask(enPortArg, enPinMaskArg, (GPIO_nSTATE) uxExtendedDriveReg);
            }
        }
        else if(0UL != uxExtendedModeReg)
        {
            enErrorReg = GPIO_enERROR_VALUE;
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL != (1U & uxNormalDriveReg))
        {
            enErrorReg = GPIO__enSetNormalDriveByMask(enPortArg, enPinMaskArg, GPIO_enNORMAL_DRIVE_2mA, GPIO_enSTATE_ENA);
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL != (2U & uxNormalDriveReg))
        {
            enErrorReg = GPIO__enSetNormalDriveByMask(enPortArg, enPinMaskArg, GPIO_enNORMAL_DRIVE_4mA, GPIO_enSTATE_ENA);
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL != (4U & uxNormalDriveReg))
        {
            enErrorReg = GPIO__enSetNormalDriveByMask(enPortArg, enPinMaskArg, GPIO_enNORMAL_DRIVE_8mA, GPIO_enSTATE_ENA);
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetSlewRateByMask(enPortArg, enPinMaskArg, (GPIO_nSTATE) uxSlewRateReg);
    }
    return (enErrorReg);
}


GPIO_nERROR GPIO__enSetDriveByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nDRIVE enDriveArg)
{
    UBase_t uxNormalDriveReg;
    UBase_t uxExtendedDriveReg;
    UBase_t uxExtendedModeReg;
    UBase_t uxSlewRateReg;

    GPIO_nERROR enErrorReg;
    GPIO_nDRIVE_CAPABILITY enExtendedCapabilityReg;


    uxNormalDriveReg = 0UL;
    uxExtendedDriveReg = 0UL;
    uxExtendedModeReg = 0UL;
    uxSlewRateReg = 0UL;
    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        uxNormalDriveReg = (UBase_t) enDriveArg;
        uxNormalDriveReg >>= 0UL;
        uxNormalDriveReg &= 0xFUL;

        uxExtendedDriveReg = (UBase_t) enDriveArg;
        uxExtendedDriveReg >>= 4UL;
        uxExtendedDriveReg &= 0xFUL;

        uxSlewRateReg = (UBase_t) enDriveArg;
        uxSlewRateReg >>= 8UL;
        uxSlewRateReg &= 0xFUL;

        uxExtendedModeReg = (UBase_t) enDriveArg;
        uxExtendedModeReg >>= 12UL;
        uxExtendedModeReg &= 0xFUL;

        enExtendedCapabilityReg = GPIO_enDRIVE_CAPABILITY_NORMAL;
        enErrorReg = GPIO__enGetDriveCapability(enPortArg, &enExtendedCapabilityReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(GPIO_enDRIVE_CAPABILITY_EXTENDED == enExtendedCapabilityReg)
        {
            enErrorReg = GPIO__enSetDriveModeByNumber(enPortArg, enPinArg, (GPIO_nDRIVE_MODE) uxExtendedModeReg);
            if(GPIO_enERROR_OK == enErrorReg)
            {
                enErrorReg = GPIO__enSetExtendedDriveByNumber(enPortArg, enPinArg, (GPIO_nSTATE) uxExtendedDriveReg);
            }
        }
        else if(0UL != uxExtendedModeReg)
        {
            enErrorReg = GPIO_enERROR_VALUE;
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL != (1U & uxNormalDriveReg))
        {
            enErrorReg = GPIO__enSetNormalDriveByNumber(enPortArg, enPinArg, GPIO_enNORMAL_DRIVE_2mA, GPIO_enSTATE_ENA);
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL != (2U & uxNormalDriveReg))
        {
            enErrorReg = GPIO__enSetNormalDriveByNumber(enPortArg, enPinArg, GPIO_enNORMAL_DRIVE_4mA, GPIO_enSTATE_ENA);
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL != (4U & uxNormalDriveReg))
        {
            enErrorReg = GPIO__enSetNormalDriveByNumber(enPortArg, enPinArg, GPIO_enNORMAL_DRIVE_8mA, GPIO_enSTATE_ENA);
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetSlewRateByNumber(enPortArg, enPinArg, (GPIO_nSTATE) uxSlewRateReg);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetDriveByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nDRIVE* penDriveArg)
{
    UBase_t uxDriveReg;
    UBase_t uxNormalDriveReg;
    UBase_t uxNormalDrive2mAReg;
    UBase_t uxNormalDrive4mAReg;
    UBase_t uxNormalDrive8mAReg;
    UBase_t uxExtendedDriveReg;
    UBase_t uxExtendedModeReg;
    UBase_t uxSlewRateReg;

    GPIO_nERROR enErrorReg;
    GPIO_nDRIVE_CAPABILITY enExtendedCapabilityReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penDriveArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enExtendedCapabilityReg = GPIO_enDRIVE_CAPABILITY_NORMAL;
        enErrorReg = GPIO__enGetDriveCapability(enPortArg, &enExtendedCapabilityReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        uxExtendedModeReg = 0UL;
        uxExtendedDriveReg = 0UL;
        if(GPIO_enDRIVE_CAPABILITY_EXTENDED == enExtendedCapabilityReg)
        {
            enErrorReg = GPIO__enGetDriveModeByNumber(enPortArg, enPinArg, (GPIO_nDRIVE_MODE*) &uxExtendedModeReg);
            if(GPIO_enERROR_OK == enErrorReg)
            {
                enErrorReg = GPIO__enGetExtendedDriveByNumber(enPortArg, enPinArg, (GPIO_nSTATE*) &uxExtendedDriveReg);
            }
        }

        uxNormalDrive2mAReg = 0UL;
        uxNormalDrive4mAReg = 0UL;
        uxNormalDrive8mAReg = 0UL;
        uxSlewRateReg = 0UL;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetNormalDriveByNumber(enPortArg, enPinArg, GPIO_enNORMAL_DRIVE_2mA, (GPIO_nSTATE*) &uxNormalDrive2mAReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetNormalDriveByNumber(enPortArg, enPinArg, GPIO_enNORMAL_DRIVE_4mA, (GPIO_nSTATE*) &uxNormalDrive4mAReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetNormalDriveByNumber(enPortArg, enPinArg, GPIO_enNORMAL_DRIVE_8mA, (GPIO_nSTATE*) &uxNormalDrive8mAReg);
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetSlewRateByNumber(enPortArg, enPinArg, (GPIO_nSTATE*) &uxSlewRateReg);
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        uxNormalDrive2mAReg <<= 0U;
        uxNormalDrive4mAReg <<= 1U;
        uxNormalDrive8mAReg <<= 2U;
        uxNormalDriveReg = uxNormalDrive8mAReg | uxNormalDrive4mAReg | uxNormalDrive2mAReg;
        uxNormalDriveReg &= 0xFUL;
        uxNormalDriveReg <<= 0UL;

        uxExtendedDriveReg &= 0xFUL;
        uxExtendedDriveReg <<= 4UL;

        uxSlewRateReg &= 0xFUL;
        uxSlewRateReg <<= 8UL;

        uxExtendedModeReg &= 0xFUL;
        uxExtendedModeReg <<= 12UL;

        uxDriveReg = uxExtendedModeReg | uxSlewRateReg | uxExtendedDriveReg | uxNormalDriveReg;
        *penDriveArg = (GPIO_nDRIVE) uxDriveReg;
    }
    return (enErrorReg);
}
