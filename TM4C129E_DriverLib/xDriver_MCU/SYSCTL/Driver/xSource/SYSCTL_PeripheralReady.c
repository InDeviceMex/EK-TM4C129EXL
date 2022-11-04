/**
 *
 * @file SYSCTL_PeripheralReady.c
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralReady.h>

#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralGeneric.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nERROR SYSCTL__enIsPeripheralReady(SYSCTL_nMODULE enModuleArg, SYSCTL_nPERIPHERAL enPeripheralArg, SYSCTL_nBOOLEAN* penStateArg)
{
    SYSCTL_Register_t enRegister;
    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK ==  enErrorReg)
    {
        enRegister.uptrAddress = SYSCTL_PR_OFFSET;
        enErrorReg =SYSCTL__enReadPeripheral(enModuleArg, enPeripheralArg, &enRegister);
    }
    if(SYSCTL_enERROR_OK ==  enErrorReg)
    {
        *penStateArg = (SYSCTL_nBOOLEAN) enRegister.uxValue;
    }
    return (enErrorReg);
}
