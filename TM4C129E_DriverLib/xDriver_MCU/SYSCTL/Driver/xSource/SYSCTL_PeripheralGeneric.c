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
#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nERROR SYSCTL__enWritePeripheral(SYSCTL_nMODULE enModuleArg, SYSCTL_nPERIPHERAL enPeripheralArg, SYSCTL_Register_t* pstRegisterDataArg)
{
    UBase_t uxBitNumber;
    UBase_t uxPeripheralIndex;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK ==  enErrorReg)
    {
        uxPeripheralIndex = (UBase_t) enPeripheralArg;
        uxPeripheralIndex >>= 8UL;
        uxPeripheralIndex &= 0xFFUL;
        uxPeripheralIndex *= 4UL;


        uxBitNumber = (UBase_t) enPeripheralArg;
        uxBitNumber &= 0xFFUL;

        pstRegisterDataArg->uptrAddress += uxPeripheralIndex;
        pstRegisterDataArg->uxShift = (UBase_t) uxBitNumber;
        pstRegisterDataArg->uxMask = 1UL;
        enErrorReg = SYSCTL__enWriteRegister(enModuleArg, pstRegisterDataArg);
    }
    if(SYSCTL_enERROR_OK ==  enErrorReg)
    {
        MCU__vNoOperation();
        MCU__vNoOperation();
        MCU__vNoOperation();
        MCU__vNoOperation();
        MCU__vNoOperation();
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enReadPeripheral(SYSCTL_nMODULE enModuleArg, SYSCTL_nPERIPHERAL enPeripheralArg, SYSCTL_Register_t* pstRegisterDataArg)
{
    UBase_t uxBitNumber;
    UBase_t uxPeripheralIndex;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK ==  enErrorReg)
    {
        uxPeripheralIndex = (UBase_t) enPeripheralArg;
        uxPeripheralIndex >>= 8UL;
        uxPeripheralIndex &= 0xFFUL;
        uxPeripheralIndex *= 4UL;


        uxBitNumber = (UBase_t) enPeripheralArg;
        uxBitNumber &= 0xFFUL;

        pstRegisterDataArg->uptrAddress += uxPeripheralIndex;
        pstRegisterDataArg->uxShift = (UBase_t) uxBitNumber;
        pstRegisterDataArg->uxMask = 1UL;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, pstRegisterDataArg);
    }
    return (enErrorReg);
}
