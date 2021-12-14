/**
 *
 * @file OS_List_Next.c
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
 * @verbatim 9 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/List/xHeader/OS_List_Next.h>

OS_ListItem_t* OS_List__pstGetNext(const OS_ListItem_t* const pstListItemArg)
{
    OS_ListItem_t* pstNextItemReg = (OS_ListItem_t*) 0UL;
    if(0UL != (OS_UBase_t) pstListItemArg)
    {
        pstNextItemReg = CDLinkedList_Item__pstGetNextItem(pstListItemArg);
    }
    return (pstNextItemReg);
}
