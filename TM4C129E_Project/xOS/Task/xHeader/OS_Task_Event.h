/**
 *
 * @file OS_Task_Event.h
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
 * @verbatim 29 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TASK_XHEADER_OS_TASK_EVENT_H_
#define XOS_TASK_XHEADER_OS_TASK_EVENT_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

void OS_Task__vPlaceOnEventList(OS_Task_List_Typedef* const pstEventList, const uint32_t u32TicksToWait);
void OS_Task__vPlaceOnEventListRestricted(OS_Task_List_Typedef * const pstEventList, const uint32_t u32TicksToWait, const uint32_t u32WaitIndefinitely);
void OS_Task__vPlaceOnUnorderedEventList(OS_Task_List_Typedef* pstEventList, const uint32_t u32DataAuxiliar, const uint32_t u32TicksToWait);
uint32_t OS_Task__u32RemoveFromEventList(const OS_Task_List_Typedef* const pstEventList);
uint32_t OS_Task__u32RemoveFromUnorderedEventList(OS_Task_ListItem_TypeDef* pstEventListItem, const uint32_t u32DataAuxiliar);
uint32_t OS_Task__u32ResetEventValue(void);

#endif /* XOS_TASK_XHEADER_OS_TASK_EVENT_H_ */
