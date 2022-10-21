/**
 *
 * @file WDT_ConfigOnly.h
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

#ifndef XAPPLICATION_MCU_WDT_CONFIG_XHEADER_WDT_CONFIGONLY_H_
#define XAPPLICATION_MCU_WDT_CONFIG_XHEADER_WDT_CONFIGONLY_H_

#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Defines.h>

WDT_nERROR WDT__enSetConfig(WDT_nMODULE enModuleArg, WDT_nCONFIG enConfigArg);
WDT_nERROR WDT__enSetConfigStructure(WDT_nMODULE enModuleArg, const WDT_CONFIG_t *pstConfigArg);
WDT_nERROR WDT__enGetConfig(WDT_nMODULE enModuleArg, WDT_nCONFIG* penConfigArg);
WDT_nERROR WDT__enGetConfigStructure(WDT_nMODULE enModuleArg, WDT_CONFIG_t *pstConfigArg);
WDT_nERROR WDT__enGetConfig_Create(WDT_nMODULE enModuleArg, WDT_CONFIG_t** pstConfigArg);

#endif /* XAPPLICATION_MCU_WDT_CONFIG_XHEADER_WDT_CONFIGONLY_H_ */
