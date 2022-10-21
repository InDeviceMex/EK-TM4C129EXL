/**
 *
 * @file WDT_Wait.c
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
 * @verbatim 23 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_Wait.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

WDT_nERROR WDT__enIsWriteOngoing(WDT_nMODULE enModuleArg, WDT_nBOOLEAN* penStatusArg)
{
    WDT_Register_t stRegister;
    uintptr_t uptrModuleBase;
    WDT_nERROR enErrorReg;
    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) WDT_enMODULE_MAX);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = WDT__uptrBlockBaseAddress(enModuleArg);
        stRegister.uxShift = WDT_CTL_R_WRC_BIT;
        stRegister.uxMask = WDT_CTL_WRC_MASK;
        stRegister.uptrAddress = WDT_CTL_OFFSET;
        stRegister.uptrAddress += uptrModuleBase;
        enErrorReg = (WDT_nERROR) MCU__enReadRegister(&stRegister);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        if(WDT_CTL_WRC_PROGRESS == stRegister.uxValue)
        {
            *penStatusArg = WDT_enTRUE;
        }
        else
        {
            *penStatusArg = WDT_enFALSE;
        }
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enWaitWrite(WDT_nMODULE enModuleArg, UBase_t uxTimeoutArg)
{
    WDT_nERROR enErrorReg;
    WDT_nBOOLEAN penWriteOngoingReg;
    enErrorReg = WDT_enERROR_OK;
    if(WDT_enMODULE_1 == enModuleArg)
    {
        penWriteOngoingReg = WDT_enFALSE;
        if(0UL == uxTimeoutArg)
        {
            do
            {
                enErrorReg = WDT__enIsWriteOngoing(enModuleArg, &penWriteOngoingReg);
            }while((WDT_enTRUE == penWriteOngoingReg) &&
                   (WDT_enERROR_OK == enErrorReg));
        }
        else
        {
            do
            {
                enErrorReg = WDT__enIsWriteOngoing(enModuleArg, &penWriteOngoingReg);
                uxTimeoutArg--;
            }while((WDT_enTRUE == penWriteOngoingReg) &&
                   (WDT_enERROR_OK == enErrorReg) &&
                   (0UL != uxTimeoutArg));

            if((WDT_enTRUE == penWriteOngoingReg) &&
               (WDT_enERROR_OK == enErrorReg) &&
               (0UL == uxTimeoutArg))
            {
                enErrorReg = WDT_enERROR_TIMEOUT;
            }

        }
    }
    return (enErrorReg);
}
