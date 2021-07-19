/**
 *
 * @file OS_Adapt_Priority.h
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
 * @verbatim 15 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_ADAPT_XHEADER_OS_ADAPT_PRIORITY_H_
#define XOS_ADAPT_XHEADER_OS_ADAPT_PRIORITY_H_

#include <xOS/Adapt/xHeader/OS_Adapt_Defines.h>

void OS_Adapt__vRecordReadyPriority(uint32_t u32Priority, volatile uint32_t* pu32ReadyPriorities);
void OS_Adapt__vResetReadyPriority(uint32_t u32Priority, volatile uint32_t* pu32ReadyPriorities);
void OS_Adapt__vGetHighestPriority(uint32_t* pu32TopPriority, volatile uint32_t u32ReadyPriorities );

#endif /* XOS_ADAPT_XHEADER_OS_ADAPT_PRIORITY_H_ */
