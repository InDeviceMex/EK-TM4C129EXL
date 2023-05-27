/**
 *
 * @file OS_List_Contained.c
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
#include <xOS/List/xHeader/OS_List_Contained.h>

void* OS_List__pvGetItemContainer(const OS_ListItem_t* const pstListItemArg)
{
    void* pvItemOwnerListReg;
    pvItemOwnerListReg = (void*) 0UL;
    CDLinkedList_Item__enGetOwnerList(pstListItemArg, &pvItemOwnerListReg);
    return (pvItemOwnerListReg);
}

OS_Boolean_t OS_List__boIsContainedWithin(const OS_List_t* const pstListArg ,
                                          const OS_ListItem_t* const pstListItemArg)
{
    OS_Boolean_t boItemContained;
    boItemContained = FALSE;
    CDLinkedList__enIsItemOwnerList(pstListArg, pstListItemArg, &boItemContained);
    return (boItemContained);
}

