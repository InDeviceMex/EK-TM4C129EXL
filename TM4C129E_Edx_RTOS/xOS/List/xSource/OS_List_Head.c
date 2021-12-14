/**
 *
 * @file OS_List_Head.c
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
#include <xOS/List/xHeader/OS_List_Head.h>

OS_ListItem_t* OS_List__pstGetHeadEntry(const OS_List_t* const pstListArg)
{
    OS_ListItem_t* pstHeadListReg = (OS_ListItem_t*) 0UL;

    if(0UL != (OS_UBase_t) pstListArg)
    {
        pstHeadListReg = CDLinkedList__pstGetHead(pstListArg);
    }
    return (pstHeadListReg);
}

OS_UBase_t OS_List__uxGetItemValueOfHeadEntry(const OS_List_t* const pstListArg)
{
    OS_UBase_t uxValueReg = 0UL;
    if((0UL != (OS_UBase_t) pstListArg))
    {
        uxValueReg = CDLinkedList__u32GetValueHead(pstListArg);
    }
    return (uxValueReg);
}

void* OS_List__pvGetOwnerOfHeadEntry(const OS_List_t* const pstListArg)
{
    void* pvOwnerReg = (void*) 0UL;
    if((0UL != (OS_UBase_t) pstListArg))
    {
        pvOwnerReg = CDLinkedList__pvGetDataHead(pstListArg);
    }
    return (pvOwnerReg);
}
