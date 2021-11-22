/**
 *
 * @file OS_List_Insert.c
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
#include <xOS/List/xHeader/OS_List_Insert.h>

void OS_List__vInsert(OS_List_t* const pstListArg ,
                         OS_ListItem_t* const pstNewListItemArg)
{
    if((0UL != (OS_UBase_t) pstListArg) &&
       (0UL != (OS_UBase_t) pstNewListItemArg))
    {
        CDLinkedList__enInsertInAscendingOrderByValue(pstListArg,
                                                  pstNewListItemArg);
    }
}




