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

#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetDrive(GPIO_nPORT enPort, GPIO_nPINMASK enPin, GPIO_nDRIVE enDriveParam)
{
    uint32_t u32Drive = 0UL;
    uint32_t u32Drive12mA = 0UL;
    uint32_t u32PinBit = 0UL;
    uint32_t u32PinBitPos = 0UL;
    uint32_t u32SlewRate = 0UL;
    uint32_t u32EnExtendedDriveMode = 0UL;
    GPIO_nEXTENDED_DRIVE enExtendedDrive = GPIO_enEXTENDED_DRIVE_NORMAL;

    u32Drive = (uint32_t) enDriveParam;
    u32Drive &= 0x3UL;

    u32EnExtendedDriveMode = (uint32_t) enDriveParam;
    u32EnExtendedDriveMode >>= 16UL;
    u32EnExtendedDriveMode &= 0x3UL;

    u32Drive12mA = (uint32_t) enDriveParam;
    u32Drive12mA >>= 2UL;
    u32Drive12mA &= 0x1UL;


    u32SlewRate = (uint32_t) enDriveParam;
    u32SlewRate >>= 8UL;
    u32SlewRate &= 0x1UL;

    enExtendedDrive = GPIO__enGetExtendedDrive(enPort);
    if(GPIO_enEXTENDED_DRIVE_EXTENDED == enExtendedDrive)
    {
        u32PinBit = (uint32_t) enPin;
        u32PinBit &= (uint32_t) GPIO_enPINMASK_ALL;
        while(0UL != u32PinBit)
        {
            if(u32PinBit & 0x1UL)
            {
                GPIO__vWriteRegister(enPort, GPIO_PC_OFFSET,
                     u32EnExtendedDriveMode, GPIO_PC_PIN0_MASK, u32PinBitPos);
            }
            u32PinBit >>= 1UL;
            u32PinBitPos++;
        }

        if(3UL == u32Drive)
        {
            GPIO__vEnGeneric(enPort, GPIO_DR4R_OFFSET, enPin);
            GPIO__vEnGeneric(enPort, GPIO_DR8R_OFFSET, enPin);
        }

        GPIO__vSetGeneric(enPort, GPIO_DR12R_OFFSET, enPin, (uint32_t) u32Drive12mA);
    }

    switch (u32Drive)
    {
    case 0UL:
        GPIO__vEnGeneric(enPort, GPIO_DR2R_OFFSET, enPin);
        break;
    case 1UL:
        GPIO__vEnGeneric(enPort, GPIO_DR4R_OFFSET, enPin);
        break;
    case 2UL:
        GPIO__vEnGeneric(enPort, GPIO_DR8R_OFFSET, enPin);
        break;
    default:
        break;
    }

    GPIO__vSetGeneric(enPort, GPIO_SLR_OFFSET, enPin, (uint32_t) u32SlewRate);
}

GPIO_nDRIVE GPIO__enGetDrive(GPIO_nPORT enPort, GPIO_nPINMASK enPin)
{
    GPIO_nEXTENDED_DRIVE enExtendedDrive = GPIO_enEXTENDED_DRIVE_NORMAL;
    uint32_t u32Drive12mA = 0UL;
    uint32_t u32DriveParam = 0UL;
    uint32_t u32Drive = 0UL;
    uint32_t u32EnExtendedDriveMode = 0UL;
    uint32_t u32EnExtendedDriveModeAux = 0UL;
    uint32_t u32SlewRate = 0UL;
    uint32_t u32PinBit = 0UL;
    uint32_t u32PinBitPos = 0UL;

    enExtendedDrive = GPIO__enGetExtendedDrive(enPort);
    if(GPIO_enEXTENDED_DRIVE_EXTENDED == enExtendedDrive)
    {
        u32Drive12mA = GPIO__u32GetGeneric(enPort, GPIO_DR12R_OFFSET, enPin);
        u32Drive12mA &= 0x1UL;
        u32Drive12mA <<= 2UL;

        u32PinBit = (uint32_t) enPin;
        u32PinBit &= (uint32_t) GPIO_enPINMASK_ALL;
        while(0UL != u32PinBit)
        {
            if(u32PinBit & 0x1UL)
            {
                u32EnExtendedDriveModeAux = GPIO__u32ReadRegister(enPort, GPIO_PC_OFFSET,
                                                  GPIO_PC_PIN0_MASK, u32PinBitPos);
                 u32EnExtendedDriveMode |= u32EnExtendedDriveModeAux;
            }
            u32PinBit >>= 1UL;
            u32PinBitPos++;
        }
        u32EnExtendedDriveMode &= 0x03UL;
        u32EnExtendedDriveMode <<= 16UL;
    }

    u32SlewRate = GPIO__u32GetGeneric(enPort, GPIO_SLR_OFFSET, enPin);
    u32SlewRate &= 0x1UL;
    u32SlewRate <<= 8UL;

    u32DriveParam = GPIO__u32GetGeneric(enPort, GPIO_DR8R_OFFSET, enPin);
    u32Drive = u32DriveParam << 1UL;
    u32DriveParam = GPIO__u32GetGeneric(enPort, GPIO_DR4R_OFFSET, enPin);
    u32Drive += u32DriveParam;
    u32Drive &= 0x3UL;

    return ((GPIO_nDRIVE) u32Drive);
}
