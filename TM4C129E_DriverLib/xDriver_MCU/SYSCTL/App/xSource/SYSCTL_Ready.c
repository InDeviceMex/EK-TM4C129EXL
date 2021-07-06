/**
 *
 * @file SYSCTL_Ready.c
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
 * @verbatim 8 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/App/xHeader/SYSCTL_Ready.h>

#include <xDriver_MCU/SYSCTL/Driver/SYSCTL_Driver.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vSetReady(SYSCTL_nPERIPHERAL enPeripheral)
{
    SYSCTL_nPERIPHERAL_READY enReady = SYSCTL_enNOREADY;
    enReady = SYSCTL__enIsPeripheralReady(enPeripheral);
    if(SYSCTL_enNOREADY == enReady)
    {
        SYSCTL__vResetPeripheral(enPeripheral);
        SYSCTL__vDisRunModePeripheral(enPeripheral);
        SYSCTL__vEnRunModePeripheral(enPeripheral);
    }
}

void SYSCTL__vClearReady(SYSCTL_nPERIPHERAL enPeripheral)
{
    SYSCTL_nPERIPHERAL_READY enReady = SYSCTL_enNOREADY;
    enReady = SYSCTL__enIsPeripheralReady(enPeripheral);
    if(SYSCTL_enREADY == enReady)
    {
        SYSCTL__vResetPeripheral(enPeripheral);
        SYSCTL__vDisRunModePeripheral(enPeripheral);
    }
}

void SYSCTL__vReset(SYSCTL_nPERIPHERAL enPeripheral)
{
    SYSCTL_nPERIPHERAL_READY enReady = SYSCTL_enNOREADY;
    enReady = SYSCTL__enIsPeripheralReady(enPeripheral);
    if(SYSCTL_enREADY == enReady)
    {
        SYSCTL__vResetPeripheral(enPeripheral);
    }
}

SYSCTL_nPERIPHERAL_READY SYSCTL__enIsReady(SYSCTL_nPERIPHERAL enPeripheral)
{
    SYSCTL_nPERIPHERAL_READY enReady = SYSCTL_enNOREADY;
    enReady = SYSCTL__enIsPeripheralReady(enPeripheral);
    return enReady;
}
