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

void OS_Task__vPlaceOnEventList(OS_List_t* const pstEventList,
                                const OS_UBase_t uxTicksToWait);
void OS_Task__vPlaceOnEventListRestricted(OS_List_t* const pstEventList,
                                          const OS_UBase_t uxTicksToWait,
                                          const OS_Boolean_t boWaitIndefinitely);
void OS_Task__vPlaceOnUnorderedEventList(OS_List_t* pstEventList,
                                         const OS_UBase_t uxItemValue,
                                         const OS_UBase_t uxTicksToWait);
OS_Boolean_t OS_Task__boRemoveFromEventList(const OS_List_t* const pstEventList);
OS_Boolean_t OS_Task__boRemoveFromUnorderedEventList(OS_ListItem_t* pstEventListItem,
                                                     const OS_UBase_t xItemValue);
OS_UBase_t OS_Task__uxResetEventItemValue(void);

#endif /* XOS_TASK_XHEADER_OS_TASK_EVENT_H_ */
