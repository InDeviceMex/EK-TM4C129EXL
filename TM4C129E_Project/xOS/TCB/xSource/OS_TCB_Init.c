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

static void OS_TCB_vDestroyElement(void *pvDataContainerArg);

OS_TCB_TypeDef* OS_TCB__pstInit(void)
{
    OS_TCB_stTCB = (OS_TCB_TypeDef*) CSLinkedList__pstInit(&OS_TCB_vDestroyElement);
    return OS_TCB_stTCB;
}

OS_TCB_nSTATUS OS_TCB__enInit(OS_TCB_TypeDef* pstTCB)
{
    OS_TCB_nSTATUS enStatus = OS_TCB_enSTATUS_ERROR;
    if(0UL != (uint32_t) pstTCB)
    {
        OS_TCB_stTCB = pstTCB;
        enStatus =  (OS_TCB_nSTATUS) CSLinkedList__enInit( (CSLinkedList_TypeDef*) pstTCB, &OS_TCB_vDestroyElement);
    }
    return enStatus;
}

OS_TCB_TypeDef* OS_TCB__pstGet(void)
{
    return OS_TCB_stTCB;
}

static void OS_TCB_vDestroyElement(void *pvDataContainerArg)
{
    OS_TCB_Container_Typedef *pstDataContainer = (OS_TCB_Container_Typedef*) pvDataContainerArg;
    uint32_t u32Count = 0UL;
    char* pcNamePointer = (char*) 0U;
    if(0UL != (uint32_t) pvDataContainerArg)
    {
        free((void*) pstDataContainer->pu32Stack);

        pstDataContainer->pu32Stack = (uint32_t*) 0UL;
        pstDataContainer->u32State = 0UL;
        pstDataContainer->u32StackSize = 0UL;
        pstDataContainer->pu32StackEnd = (uint32_t*) 0UL;
        pstDataContainer->u32ID = 0UL;
        pstDataContainer->u32Period = 0UL;
        pstDataContainer->u32BurstTime = 0UL;
        pstDataContainer->u32Priority = 0UL;
        pstDataContainer->u32BasePriority = 0UL;

        pcNamePointer = pstDataContainer->pcName;
        while(((char) 0U != *pcNamePointer) && (u32Count < OS_TCB_NAME_LENGTH))
        {
            *pcNamePointer = (char) 0U;
            pcNamePointer += 1UL;
            u32Count++;
        }

        free((void*) pstDataContainer);
    }
}



