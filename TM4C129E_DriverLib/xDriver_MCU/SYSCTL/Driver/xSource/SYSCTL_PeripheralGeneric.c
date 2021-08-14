/**
 *
 * @file SYSCTL_PeripheralGeneric.c
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
 * @verbatim 26 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralGeneric.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vWritePeripheral(SYSCTL_nPERIPHERAL enPeripheral,
                              uint32_t u32PeripheralArg, uint32_t u32ValueArg)
{
    uint32_t u32RegisterValue = 0UL;
    uint32_t u32NoRegister = 0UL;
    uint32_t u32NoPeripheral = 0UL;
    uint32_t u32Offset = 0UL;

    uint32_t u32RegisterPROffset = SYSCTL_PR_OFFSET;

    u32NoRegister = (uint32_t) enPeripheral;
    u32NoRegister >>= 8UL;
    u32NoRegister &= 0xFFUL;

    u32NoPeripheral = (uint32_t) enPeripheral;
    u32NoPeripheral &= 0xFFUL;

    u32Offset = u32NoRegister;
    u32Offset *= 4UL;
    u32PeripheralArg += u32Offset;
    u32RegisterPROffset += u32Offset;
    u32RegisterValue = MCU__u32ReadRegister(SYSCTL_BASE, u32PeripheralArg, 1UL, u32NoPeripheral);
    if(0UL == u32RegisterValue)
    {
        MCU__vWriteRegister(SYSCTL_BASE, u32PeripheralArg, u32ValueArg, 1UL, u32NoPeripheral);
        MCU__vNoOperation();
        MCU__vNoOperation();
        MCU__vNoOperation();
        MCU__vNoOperation();
        if(0UL != u32ValueArg)
        {
            do
            {
                u32RegisterValue = MCU__u32ReadRegister(SYSCTL_BASE, u32RegisterPROffset,
                                                        1UL, u32NoPeripheral);
            }while(0UL == u32RegisterValue);
        }
    }
}

uint32_t SYSCTL__u32ReadPeripheral(SYSCTL_nPERIPHERAL enPeripheral, uint32_t u32PeripheralArg)
{
    uint32_t u32RegisterValue = 0UL;
    uint32_t u32NoRegister = 0UL;
    uint32_t u32NoPeripheral = 0UL;
    uint32_t u32Offset = 0UL;

    u32NoRegister = (uint32_t) enPeripheral;
    u32NoRegister >>= 8UL;
    u32NoRegister &= 0xFFUL;

    u32NoPeripheral = (uint32_t) enPeripheral;
    u32NoPeripheral &= 0xFFUL;


    u32Offset = u32NoRegister;
    u32Offset *= 4UL;
    u32PeripheralArg += u32Offset;

    u32RegisterValue = MCU__u32ReadRegister(SYSCTL_BASE, u32PeripheralArg, 1UL, u32NoPeripheral);

    return (u32RegisterValue);
}
