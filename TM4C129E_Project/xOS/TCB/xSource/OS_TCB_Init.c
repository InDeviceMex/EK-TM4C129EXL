/**
 *
 * @file OS_TCB_Init.c
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
#include <xOS/TCB/xHeader/OS_TCB_Init.h>
#include <stdlib.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Init.h>

static OS_TCB_TypeDef* OS_TCB_stTCB = (OS_TCB_TypeDef*) 0UL;

OS_TCB_TypeDef* OS_TCB__pstInit(void (*pvfDestroyElement)(void *pvDataContainerArg))
{
    OS_TCB_stTCB = (OS_TCB_TypeDef*) CSLinkedList__pstInit(pvfDestroyElement);
    return OS_TCB_stTCB;
}

OS_TCB_nSTATUS OS_TCB__enInit(OS_TCB_TypeDef* pstTCB, void (*pvfDestroyElement)(void *pvDataContainerArg))
{
    OS_TCB_nSTATUS enStatus = OS_TCB_enSTATUS_ERROR;
    if(0UL != (uint32_t) pstTCB)
    {
        OS_TCB_stTCB = pstTCB;
        enStatus =  (OS_TCB_nSTATUS) CSLinkedList__enInit( (CSLinkedList_TypeDef*) pstTCB, pvfDestroyElement);
    }
    return enStatus;
}

OS_TCB_TypeDef* OS_TCB__pstGet(void)
{
    return OS_TCB_stTCB;
}




