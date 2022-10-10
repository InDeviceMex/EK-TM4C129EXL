/**
 *
 * @file OS_List_EndMarker.c
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
#include <xOS/List/xHeader/OS_List_EndMarker.h>

OS_ListItem_t* OS_List__pstEndMarker(const OS_List_t* const pstListArg)
{
    OS_ListItem_t* pstEndMarkerReg;
    pstEndMarkerReg = (OS_ListItem_t*) 0UL;
    CDLinkedList__enGetTail(pstListArg, &pstEndMarkerReg);
    return (pstEndMarkerReg);
}
