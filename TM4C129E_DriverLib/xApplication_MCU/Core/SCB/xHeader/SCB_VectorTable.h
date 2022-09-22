/**
 *
 * @file SCB_VectorTable.h
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
 * @verbatim 2 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_CORE_SCB_XHEADER_SCB_VECTORTABLE_H_
#define XAPPLICATION_MCU_CORE_SCB_XHEADER_SCB_VECTORTABLE_H_

#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Defines.h>

SCB_pvfIRQVectorHandler_t* SCB__pfnGetVectorTableRam(void);
SCB_nERROR SCB__enSetVectorTable(SCB_nMODULE enModuleArg, uint32_t u32OffsetArg);

#endif /* XAPPLICATION_MCU_CORE_SCB_XHEADER_SCB_VECTORTABLE_H_ */
