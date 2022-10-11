/**
 *
 * @file OS_List_Init.c
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
#include <xOS/List/xHeader/OS_List_Init.h>

void OS_List__vInit(OS_List_t* const pstListArg)
{
    if(0UL != (OS_Pointer_t) pstListArg)
    {
        CDLinkedList__enInit(pstListArg,
                             (CDLinkedList_pvfDestroyItemData_t) 0UL,
                             (CDLinkedList_pvfDestroyItem_t) 0UL,
                             (CDLinkedList_pvfDestroy_t) 0UL);
    }
}
