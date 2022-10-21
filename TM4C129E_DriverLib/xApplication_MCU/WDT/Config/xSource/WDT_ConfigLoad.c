/**
 *
 * @file WDT_ConfigLoad.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 21 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/WDT/Config/xHeader/WDT_ConfigLoad.h>

#include <xApplication_MCU/WDT/Config/xHeader/WDT_ConfigOnly.h>
#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Dependencies.h>

WDT_nERROR WDT__enSetConfig_Interval(WDT_nMODULE enModuleArg, WDT_nCONFIG enConfigArg, UBase_t uxIntervalArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enSetIntervalValue(enModuleArg, uxIntervalArg);
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enSetConfig(enModuleArg, enConfigArg);
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enSetConfigStructure_Interval(WDT_nMODULE enModuleArg,
                                      const WDT_CONFIG_t* pstConfigArg,
                                      UBase_t uxIntervalArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enSetIntervalValue(enModuleArg, uxIntervalArg);
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enSetConfigStructure(enModuleArg, pstConfigArg);
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enGetConfig_Interval(WDT_nMODULE enModuleArg, WDT_nCONFIG* penConfigArg, UBase_t* puxIntervalArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enGetIntervalValue(enModuleArg, puxIntervalArg);
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enGetConfig(enModuleArg, penConfigArg);
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enGetConfigStructure_Interval(WDT_nMODULE enModuleArg,
                                              WDT_CONFIG_t* pstConfigArg,
                                              UBase_t* puxIntervalArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enGetIntervalValue(enModuleArg, puxIntervalArg);
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enGetConfigStructure(enModuleArg, pstConfigArg);
    }
    return (enErrorReg);
}

