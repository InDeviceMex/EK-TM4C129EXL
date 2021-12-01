/**
 *
 * @file OS_CoRoutine_Create.c
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
 * @verbatim 28 nov. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 nov. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/CoRoutine/xHeader/OS_CoRoutine_Create.h>

#include <stdlib.h>
#include <xOS/CoRoutine/Intrinsics/OS_CoRoutine_Intrinsics.h>
#include <xOS/CoRoutine/xHeader/OS_CoRoutine_Ready.h>

static void OS_CoRoutine__vInitialiseLists(void);

static void OS_CoRoutine__vInitialiseLists(void)
{
    OS_CoRoutine__vInitialiseReadyLists();
    OS_CoRoutine__vInitialiseDelayedLists();
}

OS_UBase_t OS_CoRoutine__uxCreate( OS_CoRoutine_Function_t pvfCoRoutineCode, OS_UBase_t uxPriorityArg, OS_UBase_t uxIndexArg)
{
    OS_CoRoutine_CRCB_t* pstCoRoutine = (OS_CoRoutine_CRCB_t*) 0UL;
    OS_CoRoutine_CRCB_t* pstCurrentCoRoutine = (OS_CoRoutine_CRCB_t*) 0UL;
    OS_ListItem_t* pstListItemReg = (OS_ListItem_t*) 0UL;
    OS_UBase_t uxReturn = 0UL;

    if(0UL != (OS_UBase_t) pvfCoRoutineCode)
    {
        /* Allocate the memory that will store the co-routine control block. */
        #if defined (__TI_ARM__ )
            pstCoRoutine = (OS_CoRoutine_CRCB_t*) memalign(8UL, (size_t) sizeof(OS_CoRoutine_CRCB_t));
        #elif defined (__GNUC__ )
            pstCoRoutine = (OS_CoRoutine_CRCB_t*) malloc(sizeof(OS_CoRoutine_CRCB_t));
        #endif
        if(0UL != (OS_UBase_t) pstCoRoutine )
        {
            /* If pstCurrentCoRoutine is NULL then this is the first co-routine to
            be created and the co-routine data structures need initialising. */
            pstCurrentCoRoutine = OS_CoRoutine__pstGetCurrentCRCB();
            if(0UL == pstCurrentCoRoutine)
            {
                OS_CoRoutine__vSetCurrentCRCB(pstCoRoutine);
                OS_CoRoutine__vInitialiseLists();
            }

            /* Check the priority is within limits. */
            if( uxPriorityArg >= OS_COROUTINE_MAX_PRIORITIES )
            {
                uxPriorityArg = OS_COROUTINE_MAX_PRIORITIES - 1UL;
            }

            /* Fill out the co-routine control block from the function parameters. */
            pstCoRoutine->u16State = OS_COROUTINE_INITIAL_STATE;
            pstCoRoutine->uxPriorityCoRoutine = (OS_UBase_t) uxPriorityArg;
            pstCoRoutine->uxIndex = uxIndexArg;
            pstCoRoutine->pvfCoRoutineFunction = pvfCoRoutineCode;

            /* Initialise all the other co-routine control block parameters. */
            OS_List__vInitItem(&(pstCoRoutine->stGenericListItem));
            OS_List__vInitItem(&(pstCoRoutine->stEventListItem ));

            /* Set the co-routine control block as a link back from the ListItem_t.
            This is so we can get back to the containing CRCB from a generic item
            in a list. */
            pstListItemReg = &(pstCoRoutine->stGenericListItem);
            OS_List__vSetItemOwner(pstListItemReg, pstCoRoutine);
            pstListItemReg = &(pstCoRoutine->stEventListItem);
            OS_List__vSetItemOwner(pstListItemReg, pstCoRoutine);

            /* Event lists are always in priority order. */
            OS_List__vSetItemValue(&(pstCoRoutine->stEventListItem), ((OS_UBase_t)OS_COROUTINE_MAX_PRIORITIES - (OS_UBase_t) uxPriorityArg));

            /* Now the co-routine has been initialised it can be added to the ready
            list at the correct priority. */
            OS_CoRoutine__vAddToReadyQueue(pstCoRoutine);
            uxReturn = 1UL;
        }
        else
        {
            uxReturn = 3UL;
        }
    }
    return (uxReturn);
}
