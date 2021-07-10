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
    OS_TCB_enSTATE_RUNNING = 0UL,
    OS_TCB_enSTATE_READY = 1UL,
    OS_TCB_enSTATE_BLOCKED = 2UL,
    OS_TCB_enSTATE_SUSPENDED = 3UL,
    OS_TCB_enSTATE_DELETED = 4UL,
    OS_TCB_enSTATE_UNKNOW = 0xFFFFFFFFUL,
}OS_TCB_nSTATE;

typedef struct
{
    uint32_t* pu32Stack;
    uint32_t* pu32StackEnd;
    uint32_t u32StackSize;
    uint32_t u32ID;
    uint32_t u32Period;
    uint32_t u32BurstTime;
    uint32_t u32Priority;
    uint32_t u32BasePriority;
    OS_TCB_nSTATE enStateTask;
    char pcName[OS_TCB_NAME_LENGTH];
}OS_TCB_Container_Typedef;

typedef CSLinkedList_TypeDef OS_TCB_TypeDef;
typedef CSLinkedListElement_TypeDef OS_TCB_Element_TypeDef;


#endif /* XOS_TCB_XHEADER_OS_TCB_DEFINES_H_ */
