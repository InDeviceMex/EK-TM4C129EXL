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

OS_ListItem_TypeDef* OS_List__pstEndMarker(const OS_List_TypeDef* const pstListArg)
{
    OS_ListItem_TypeDef* pstEndMarkerReg = (OS_ListItem_TypeDef*) 0UL;
    if(0UL != (OS_UBase_t) pstListArg)
    {
        pstEndMarkerReg = CDLinkedList__pstGetTail(pstListArg);
    }
    return (pstEndMarkerReg);
}
