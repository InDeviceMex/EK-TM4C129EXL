/*
 * SYSCTL_PeripheralPower.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralPower.h>

#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralGeneric.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>


SYSCTL_nERROR SYSCTL__enSetPowerControlState(SYSCTL_nMODULE enModuleArg, SYSCTL_nPERIPHERAL enPeripheralArg, SYSCTL_nSTATE enStateArg)
{
    SYSCTL_Register_t enRegister;
    SYSCTL_nERROR enErrorReg;

    enRegister.uptrAddress = SYSCTL_PC_OFFSET;
    enRegister.uxValue = (UBase_t) enStateArg;

    enErrorReg =SYSCTL__enWritePeripheral(enModuleArg, enPeripheralArg, &enRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enPowerOn(SYSCTL_nMODULE enModuleArg, SYSCTL_nPERIPHERAL enPeripheralArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg =SYSCTL__enSetPowerControlState(enModuleArg, enPeripheralArg, SYSCTL_enSTATE_ENA);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enPowerOff(SYSCTL_nMODULE enModuleArg, SYSCTL_nPERIPHERAL enPeripheralArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg =SYSCTL__enSetPowerControlState(enModuleArg, enPeripheralArg, SYSCTL_enSTATE_DIS);
    return (enErrorReg);
}


SYSCTL_nERROR SYSCTL__enGetPowerControlState(SYSCTL_nMODULE enModuleArg, SYSCTL_nPERIPHERAL enPeripheralArg, SYSCTL_nSTATE* penStateArg)
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
        enRegister.uptrAddress = SYSCTL_PC_OFFSET;
        enErrorReg =SYSCTL__enReadPeripheral(enModuleArg, enPeripheralArg, &enRegister);
    }
    if(SYSCTL_enERROR_OK ==  enErrorReg)
    {
        *penStateArg = (SYSCTL_nSTATE) enRegister.uxValue;
    }
    return (enErrorReg);
}

