/**
 *
 * @file WDT_ModeLoad.h
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
 * @verbatim 27 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_WDT_XHEADER_WDT_MODELOAD_H_
#define XAPPLICATION_MCU_WDT_XHEADER_WDT_MODELOAD_H_

#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Defines.h>

WDT_nSTATUS WDT__enSetMode_Load(WDT_nMODULE enModule, WDT_nMODE enModeArg, uint32_t u32Load);
WDT_nSTATUS WDT__enSetModeStruct_Load(WDT_nMODULE enModule,
                                      const WDT_MODE_Typedef* pstMode,
                                      uint32_t u32Load);

#endif /* XAPPLICATION_MCU_WDT_XHEADER_WDT_MODELOAD_H_ */
