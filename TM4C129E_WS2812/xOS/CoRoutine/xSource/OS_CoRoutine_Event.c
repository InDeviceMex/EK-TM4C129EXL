/**
 *
 * @file OS_CoRoutine_Event.c
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
 * @verbatim 1 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/CoRoutine/xHeader/OS_CoRoutine_Event.h>

#include <xOS/CoRoutine/Intrinsics/OS_CoRoutine_Intrinsics.h>


OS_Boolean_t OS_CoRoutine__boRemoveFromEventList(const OS_List_t* pstEventList)
{
    OS_CoRoutine_CRCB_t* pstUnblockedCRCB;
    OS_CoRoutine_CRCB_t* pstCurrentCRCB;
    OS_List_t* pstPendingListReg;
    OS_ListItem_t* pstListItemReg;
    OS_Boolean_t boReturn;

    /* This function is called from within an interrupt.  It can only access
    event lists and the pending ready list.  This function assumes that a
    check has already been made to ensure pstEventList is not empty. */
    boReturn = FALSE;
    pstUnblockedCRCB = (OS_CoRoutine_CRCB_t *) OS_List__pvGetOwnerOfHeadEntry(pstEventList);
    pstListItemReg = &(pstUnblockedCRCB->stEventListItem);
    (void) OS_List__uxRemove(pstListItemReg);
    pstListItemReg = &(pstUnblockedCRCB->stEventListItem);
    pstPendingListReg = OS_CoRoutine__pstGetPendingReadyList();
    OS_List__vInsertEnd( pstPendingListReg, pstListItemReg);
    pstCurrentCRCB = OS_CoRoutine__pstGetCurrentCRCB();
    if( pstUnblockedCRCB->uxPriorityCoRoutine >= pstCurrentCRCB->uxPriorityCoRoutine)
    {
        boReturn = TRUE;
    }
    else
    {
        boReturn = FALSE;
    }

    return (boReturn);
}

