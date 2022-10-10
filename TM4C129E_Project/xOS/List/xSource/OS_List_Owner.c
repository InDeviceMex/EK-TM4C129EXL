/**
 *
 * @file OS_List_Owner.c
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
 * @verbatim 8 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/List/xHeader/OS_List_Owner.h>

void OS_List__vSetItemOwner(OS_ListItem_t* const pstListItemArg ,
                            void* pvOwnerArg)
{
    CDLinkedList_Item__enSetData(pstListItemArg, pvOwnerArg);
}

void* OS_List__pvGetItemOwner(const OS_ListItem_t* const pstListItemArg)
{
    void* pvOwnerReg;
    pvOwnerReg = (void*) 0UL;
    CDLinkedList_Item__enGetData(pstListItemArg, &pvOwnerReg);
    return (pvOwnerReg);
}

void* OS_List__pvGetOwnerOfNextEntry(OS_List_t* const pstListArg)
{
    void* pvOwnerReg;
    pvOwnerReg = (void*) 0UL;
    CDLinkedList__enGetDataNextItem(pstListArg, &pvOwnerReg);
    return (pvOwnerReg);
}
