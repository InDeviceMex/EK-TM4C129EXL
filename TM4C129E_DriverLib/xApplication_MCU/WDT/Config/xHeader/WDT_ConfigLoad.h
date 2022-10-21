/**
 *
 * @file WDT_ConfigLoad.h
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

#ifndef XAPPLICATION_MCU_WDT_CONFIG_XHEADER_WDT_CONFIGLOAD_H_
#define XAPPLICATION_MCU_WDT_CONFIG_XHEADER_WDT_CONFIGLOAD_H_

#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Defines.h>

WDT_nERROR WDT__enSetConfig_Interval(WDT_nMODULE enModuleArg, WDT_nCONFIG enConfigArg, UBase_t uxIntervalArg);
WDT_nERROR WDT__enSetConfigStructure_Interval(WDT_nMODULE enModuleArg,
                                      const WDT_CONFIG_t* pstConfigArg,
                                      UBase_t uxIntervalArg);
WDT_nERROR WDT__enGetConfig_Interval(WDT_nMODULE enModuleArg, WDT_nCONFIG* penConfigArg, UBase_t* puxIntervalArg);
WDT_nERROR WDT__enGetConfigStructure_Interval(WDT_nMODULE enModuleArg,
                                              WDT_CONFIG_t* pstConfigArg,
                                              UBase_t* puxIntervalArg);

#endif /* XAPPLICATION_MCU_WDT_CONFIG_XHEADER_WDT_CONFIGLOAD_H_ */
