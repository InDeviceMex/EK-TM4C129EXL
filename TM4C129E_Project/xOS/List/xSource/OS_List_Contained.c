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
    void* pvItemOwnerListReg = (void*) 0UL;
    if(0UL != (OS_UBase_t) pstListItemArg)
    {
        pvItemOwnerListReg = CDLinkedList_Item__pvGetOwnerList(pstListItemArg);

    }
    return (pvItemOwnerListReg);
}

OS_Boolean_t OS_List__boIsContainedWithin(const OS_List_t* const pstListArg ,
                                          const OS_ListItem_t* const pstListItemArg)
{
    OS_Boolean_t boItemContained = FALSE;
    CDLinkedList_nSTATUS enStatusList = CDLinkedList_enSTATUS_ERROR;
    if((0UL != (OS_UBase_t) pstListArg) &&
       (0UL != (OS_UBase_t) pstListItemArg))
     {
        enStatusList = CDLinkedList__enIsItemOwnerList(pstListArg, pstListItemArg);
        if(CDLinkedList_enSTATUS_OK == enStatusList)
        {
            boItemContained = TRUE;
        }
     }
    return (boItemContained);
}

