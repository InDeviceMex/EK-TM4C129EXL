/**
 *
 * @file OS_List_Empty.c
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
#include <xOS/List/xHeader/OS_List_Empty.h>

OS_Boolean_t OS_List__boIsEmpty(const OS_List_t* const pstListArg)
{
    OS_Boolean_t boItemContained;
    boItemContained = FALSE;
    CDLinkedList__enIsEmpty(pstListArg, &boItemContained);
    return (boItemContained);
}




