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
    uint32_t u32NormalDriveReg;
    uint32_t u32ExtendedDriveReg;
    uint32_t u32ExtendedModeReg;
    uint32_t u32SlewRateReg;

    GPIO_nERROR enErrorReg;
    GPIO_nDRIVE_CAPABILITY enExtendedCapabilityReg;


    u32NormalDriveReg = 0UL;
    u32ExtendedDriveReg = 0UL;
    u32ExtendedModeReg = 0UL;
    u32SlewRateReg = 0UL;
    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinMaskArg, (uint32_t) GPIO_enPINMASK_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        u32NormalDriveReg = (uint32_t) enDriveArg;
        u32NormalDriveReg >>= 0UL;
        u32NormalDriveReg &= 0xFUL;

        u32ExtendedDriveReg = (uint32_t) enDriveArg;
        u32ExtendedDriveReg >>= 4UL;
        u32ExtendedDriveReg &= 0xFUL;

        u32SlewRateReg = (uint32_t) enDriveArg;
        u32SlewRateReg >>= 8UL;
        u32SlewRateReg &= 0xFUL;

        u32ExtendedModeReg = (uint32_t) enDriveArg;
        u32ExtendedModeReg >>= 12UL;
        u32ExtendedModeReg &= 0xFUL;

        enExtendedCapabilityReg = GPIO_enDRIVE_CAPABILITY_NORMAL;
        enErrorReg = GPIO__enGetDriveCapability(enPortArg, &enExtendedCapabilityReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(GPIO_enDRIVE_CAPABILITY_EXTENDED == enExtendedCapabilityReg)
        {
            enErrorReg = GPIO__enSetDriveModeByMask(enPortArg, enPinMaskArg, (GPIO_nDRIVE_MODE) u32ExtendedModeReg);
            if(GPIO_enERROR_OK == enErrorReg)
            {
                enErrorReg = GPIO__enSetExtendedDriveByMask(enPortArg, enPinMaskArg, (GPIO_nSTATE) u32ExtendedDriveReg);
            }
        }
        else if(0UL != u32ExtendedModeReg)
        {
            enErrorReg = GPIO_enERROR_VALUE;
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL != (1U & u32NormalDriveReg))
        {
            enErrorReg = GPIO__enSetNormalDriveByMask(enPortArg, enPinMaskArg, GPIO_enNORMAL_DRIVE_2mA, GPIO_enSTATE_ENA);
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL != (2U & u32NormalDriveReg))
        {
            enErrorReg = GPIO__enSetNormalDriveByMask(enPortArg, enPinMaskArg, GPIO_enNORMAL_DRIVE_4mA, GPIO_enSTATE_ENA);
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL != (4U & u32NormalDriveReg))
        {
            enErrorReg = GPIO__enSetNormalDriveByMask(enPortArg, enPinMaskArg, GPIO_enNORMAL_DRIVE_8mA, GPIO_enSTATE_ENA);
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetSlewRateByMask(enPortArg, enPinMaskArg, (GPIO_nSTATE) u32SlewRateReg);
    }
    return (enErrorReg);
}


GPIO_nERROR GPIO__enSetDriveByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nDRIVE enDriveArg)
{
    uint32_t u32NormalDriveReg;
    uint32_t u32ExtendedDriveReg;
    uint32_t u32ExtendedModeReg;
    uint32_t u32SlewRateReg;

    GPIO_nERROR enErrorReg;
    GPIO_nDRIVE_CAPABILITY enExtendedCapabilityReg;


    u32NormalDriveReg = 0UL;
    u32ExtendedDriveReg = 0UL;
    u32ExtendedModeReg = 0UL;
    u32SlewRateReg = 0UL;
    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        u32NormalDriveReg = (uint32_t) enDriveArg;
        u32NormalDriveReg >>= 0UL;
        u32NormalDriveReg &= 0xFUL;

        u32ExtendedDriveReg = (uint32_t) enDriveArg;
        u32ExtendedDriveReg >>= 4UL;
        u32ExtendedDriveReg &= 0xFUL;

        u32SlewRateReg = (uint32_t) enDriveArg;
        u32SlewRateReg >>= 8UL;
        u32SlewRateReg &= 0xFUL;

        u32ExtendedModeReg = (uint32_t) enDriveArg;
        u32ExtendedModeReg >>= 12UL;
        u32ExtendedModeReg &= 0xFUL;

        enExtendedCapabilityReg = GPIO_enDRIVE_CAPABILITY_NORMAL;
        enErrorReg = GPIO__enGetDriveCapability(enPortArg, &enExtendedCapabilityReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(GPIO_enDRIVE_CAPABILITY_EXTENDED == enExtendedCapabilityReg)
        {
            enErrorReg = GPIO__enSetDriveModeByNumber(enPortArg, enPinArg, (GPIO_nDRIVE_MODE) u32ExtendedModeReg);
            if(GPIO_enERROR_OK == enErrorReg)
            {
                enErrorReg = GPIO__enSetExtendedDriveByNumber(enPortArg, enPinArg, (GPIO_nSTATE) u32ExtendedDriveReg);
            }
        }
        else if(0UL != u32ExtendedModeReg)
        {
            enErrorReg = GPIO_enERROR_VALUE;
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL != (1U & u32NormalDriveReg))
        {
            enErrorReg = GPIO__enSetNormalDriveByNumber(enPortArg, enPinArg, GPIO_enNORMAL_DRIVE_2mA, GPIO_enSTATE_ENA);
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL != (2U & u32NormalDriveReg))
        {
            enErrorReg = GPIO__enSetNormalDriveByNumber(enPortArg, enPinArg, GPIO_enNORMAL_DRIVE_4mA, GPIO_enSTATE_ENA);
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(0UL != (4U & u32NormalDriveReg))
        {
            enErrorReg = GPIO__enSetNormalDriveByNumber(enPortArg, enPinArg, GPIO_enNORMAL_DRIVE_8mA, GPIO_enSTATE_ENA);
        }
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetSlewRateByNumber(enPortArg, enPinArg, (GPIO_nSTATE) u32SlewRateReg);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetDriveByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nDRIVE* penDriveArg)
{
    uint32_t u32DriveReg;
    uint32_t u32NormalDriveReg;
    uint32_t u32NormalDrive2mAReg;
    uint32_t u32NormalDrive4mAReg;
    uint32_t u32NormalDrive8mAReg;
    uint32_t u32ExtendedDriveReg;
    uint32_t u32ExtendedModeReg;
    uint32_t u32SlewRateReg;

    GPIO_nERROR enErrorReg;
    GPIO_nDRIVE_CAPABILITY enExtendedCapabilityReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penDriveArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enExtendedCapabilityReg = GPIO_enDRIVE_CAPABILITY_NORMAL;
        enErrorReg = GPIO__enGetDriveCapability(enPortArg, &enExtendedCapabilityReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        u32ExtendedModeReg = 0UL;
        u32ExtendedDriveReg = 0UL;
        if(GPIO_enDRIVE_CAPABILITY_EXTENDED == enExtendedCapabilityReg)
        {
            enErrorReg = GPIO__enGetDriveModeByNumber(enPortArg, enPinArg, (GPIO_nDRIVE_MODE*) &u32ExtendedModeReg);
            if(GPIO_enERROR_OK == enErrorReg)
            {
                enErrorReg = GPIO__enGetExtendedDriveByNumber(enPortArg, enPinArg, (GPIO_nSTATE*) &u32ExtendedDriveReg);
            }
        }

        u32NormalDrive2mAReg = 0UL;
        u32NormalDrive4mAReg = 0UL;
        u32NormalDrive8mAReg = 0UL;
        u32SlewRateReg = 0UL;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetNormalDriveByNumber(enPortArg, enPinArg, GPIO_enNORMAL_DRIVE_2mA, (GPIO_nSTATE*) &u32NormalDrive2mAReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetNormalDriveByNumber(enPortArg, enPinArg, GPIO_enNORMAL_DRIVE_4mA, (GPIO_nSTATE*) &u32NormalDrive4mAReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetNormalDriveByNumber(enPortArg, enPinArg, GPIO_enNORMAL_DRIVE_8mA, (GPIO_nSTATE*) &u32NormalDrive8mAReg);
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetSlewRateByNumber(enPortArg, enPinArg, (GPIO_nSTATE*) &u32SlewRateReg);
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        u32NormalDrive2mAReg <<= 0U;
        u32NormalDrive4mAReg <<= 1U;
        u32NormalDrive8mAReg <<= 2U;
        u32NormalDriveReg = u32NormalDrive8mAReg | u32NormalDrive4mAReg | u32NormalDrive2mAReg;
        u32NormalDriveReg &= 0xFUL;
        u32NormalDriveReg <<= 0UL;

        u32ExtendedDriveReg &= 0xFUL;
        u32ExtendedDriveReg <<= 4UL;

        u32SlewRateReg &= 0xFUL;
        u32SlewRateReg <<= 8UL;

        u32ExtendedModeReg &= 0xFUL;
        u32ExtendedModeReg <<= 12UL;

        u32DriveReg = u32ExtendedModeReg | u32SlewRateReg | u32ExtendedDriveReg | u32NormalDriveReg;
        *penDriveArg = (GPIO_nDRIVE) u32DriveReg;
    }
    return (enErrorReg);
}
