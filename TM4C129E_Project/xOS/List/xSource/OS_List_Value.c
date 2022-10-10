/**
 *
 * @file OS_List_Value.c
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
#include <xOS/List/xHeader/OS_List_Value.h>

void OS_List__vSetItemValue(OS_ListItem_t* const pstListItemArg ,
                            OS_UBase_t uxValueArg)
{
    CDLinkedList_Item__enSetValue(pstListItemArg, uxValueArg);
}

OS_UBase_t OS_List__uxGetItemValue(const OS_ListItem_t* const pstListItemArg)
{
    OS_UBase_t uxValueReg;
    uxValueReg = 0UL;
    CDLinkedList_Item__enGetValue(pstListItemArg, &uxValueReg);
    return (uxValueReg);
}


