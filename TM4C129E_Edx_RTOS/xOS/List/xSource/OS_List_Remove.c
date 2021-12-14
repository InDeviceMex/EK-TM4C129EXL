/**
 *
 * @file OS_List_Remove.c
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
#include <xOS/List/xHeader/OS_List_Remove.h>

OS_UBase_t OS_List__uxRemove(OS_ListItem_t* const pstItemToRemoveArg)
{
    OS_List_t* pstListReg = (OS_List_t*) 0UL;
    OS_UBase_t uxListSizeReg = 0UL;

    if(0UL != (OS_UBase_t) pstItemToRemoveArg)
    {
        pstListReg = (OS_List_t*) CDLinkedList_Item__pvGetOwnerList(pstItemToRemoveArg);
        CDLinkedList__enRemove(pstItemToRemoveArg);
        uxListSizeReg = CDLinkedList__u32GetSize(pstListReg);
    }
    return (uxListSizeReg);
}
