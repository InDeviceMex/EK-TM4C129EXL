/**
 *
 * @file OS_List_Length.c
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
#include <xOS/List/xHeader/OS_List_Length.h>

OS_UBase_t OS_List__uxGetLength(const OS_List_TypeDef* const pstListArg)
{
    OS_UBase_t uxListLength = 0UL;
    if(0UL != (OS_UBase_t) pstListArg)
    {
        uxListLength = CDLinkedList__u32GetSize(pstListArg);
    }
    return (uxListLength);
}

