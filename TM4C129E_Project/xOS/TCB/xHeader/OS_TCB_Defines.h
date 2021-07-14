/**
 *
 * @file OS_TCB_Defines.h
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
 * @verbatim Mar 23, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 23, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TCB_XHEADER_OS_TCB_DEFINES_H_
#define XOS_TCB_XHEADER_OS_TCB_DEFINES_H_

#include <xUtils/Standard/Standard.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

#define OS_TCB_NAME_LENGTH (20UL)
#define OS_TCB_PRIORITY_MAX (7UL)

typedef enum
{
    OS_TCB_enSTATUS_OK,
    OS_TCB_enSTATUS_ERROR,
}OS_TCB_nSTATUS;

typedef enum
{
    OS_TCB_enNotWaitingNotification = 0,
    OS_TCB_enWaitingNotification,
    OS_TCB_enNotified
} OS_TCB_nNotifyValue;

typedef enum
{
    OS_TCB_enSTATE_RUNNING = 0UL,
    OS_TCB_enSTATE_READY = 1UL,
    OS_TCB_enSTATE_BLOCKED = 2UL,
    OS_TCB_enSTATE_SUSPENDED = 3UL,
    OS_TCB_enSTATE_DELETED = 4UL,
    OS_TCB_enSTATE_UNKNOW = 0xFFFFFFFFUL,
}OS_TCB_nSTATE;

typedef enum
{
    OS_TCB_enSTATE_CHAR_READY = 'R',
    OS_TCB_enSTATE_CHAR_BLOCKED = 'B',
    OS_TCB_enSTATE_CHAR_SUSPENDED = 'S',
    OS_TCB_enSTATE_CHAR_DELETED = 'D',
}OS_TCB_nSTATE_CHAR;

typedef CSLinkedList_TypeDef OS_TCB_TypeDef;
typedef CSLinkedListItem_TypeDef OS_TCB_Item_TypeDef;

typedef struct
{
    uint32_t* pu32TopOfStack;
    OS_TCB_TypeDef stTCBTaskStateList;
    OS_TCB_TypeDef stTCBEventList;
    uint32_t u32Priority;
    uint32_t* pu32Stack;
    uint32_t u32StackSize;
    char pcName[OS_TCB_NAME_LENGTH];

    /**Critical Nesting*/
    uint32_t u32CriticalNesting;

    /**Trace*/
    uint32_t u32ID;
    /**u32TCBNumber is saved in list father*/

    /**Mutexes */
    uint32_t u32BasePriority;
    uint32_t u32MutexesHeld;

    /**Run Time Stats*/
    uint32_t u32Period;
    uint32_t u32RunTimeCounter;

    /**Task notifications*/
    uint32_t u32NotifyValue;
    OS_TCB_nNotifyValue enNotifyState;
}OS_TCB_Container_Typedef;



#endif /* XOS_TCB_XHEADER_OS_TCB_DEFINES_H_ */
