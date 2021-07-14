/**
 *
 * @file OS_TCB_Insert.c
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
 * @verbatim 7 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/TCB/xHeader/OS_TCB_Insert.h>
#include <xOS/TCB/xHeader/OS_TCB_Init.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Insert.h>

OS_TCB_Item_TypeDef* OS_TCB__pstInsert(OS_TCB_Container_Typedef* pstData)
{
    OS_TCB_TypeDef* pstTCB = OS_TCB__pstGet();
    return ((OS_TCB_Item_TypeDef*) CSLinkedList__pstInsertAtTail_WithData((CSLinkedList_TypeDef*) pstTCB, (void*) pstData));
}



