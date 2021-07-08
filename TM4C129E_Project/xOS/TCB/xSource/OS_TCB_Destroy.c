/**
 *
 * @file OS_TCB_Destroy.c
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
#include <xOS/TCB/xHeader/OS_TCB_Destroy.h>
#include <xOS/TCB/xHeader/OS_TCB_Init.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Destroy.h>

void OS_TCB__vDestroy(void)
{
    OS_TCB_TypeDef* pstTCB = OS_TCB__pstGet();
    CSLinkedList__vDestroy( (CSLinkedList_TypeDef*) pstTCB);
}





