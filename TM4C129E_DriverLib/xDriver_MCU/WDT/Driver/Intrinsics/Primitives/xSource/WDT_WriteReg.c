/**
 *
 * @file WDT_WriteReg.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_WriteReg.h>

#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_Wait.h>
#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

WDT_nERROR WDT__enWriteRegisterTimeout(WDT_nMODULE enModuleArg, WDT_Register_t* pstRegisterDataArg, UBase_t uxTimeoutArg)
{
    uintptr_t uptrModuleBase;
    WDT_nERROR enErrorReg;
    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) WDT_enMODULE_MAX);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enWaitWrite(enModuleArg, uxTimeoutArg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = WDT__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (WDT_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
    }

    return (enErrorReg);
}

WDT_nERROR WDT__enWriteRegister(WDT_nMODULE enModuleArg, WDT_Register_t* pstRegisterDataArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enWriteRegisterTimeout(enModuleArg, pstRegisterDataArg, 0UL);
    return (enErrorReg);
}
