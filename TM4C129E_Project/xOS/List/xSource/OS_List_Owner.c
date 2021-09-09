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

void OS_List__vSetItemOwner(OS_ListItem_TypeDef* const pstListItemArg ,
                            void* pvOwnerArg)
{
    if((0UL != (OS_UBase_t) pstListItemArg))
    {
        CDLinkedList_Item__vSetData(pstListItemArg, pvOwnerArg);
    }
}

void* OS_List__pvGetItemOwner(const OS_ListItem_TypeDef* const pstListItemArg)
{
    void* pvOwnerReg = (void*) 0UL;
    if((0UL != (OS_UBase_t) pstListItemArg))
    {
        pvOwnerReg = CDLinkedList_Item__pvGetData(pstListItemArg);
    }
    return (pvOwnerReg);
}

void* OS_List__pvGetOwnerOfNextEntry(OS_List_TypeDef* const pstListArg)
{
    void* pvOwnerReg = (void*) 0UL;
    if((0UL != (OS_UBase_t) pstListArg))
    {
        pvOwnerReg = CDLinkedList__pvGetDataNextItem(pstListArg);
    }
    return (pvOwnerReg);
}
