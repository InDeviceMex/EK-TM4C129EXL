/**
 *
 * @file Queue_Init.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 13 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/Queue/xHeader/Queue_Init.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Init.h>

Queue_nSTATUS Queue__enCreate(Queue_t** pstQueue,
                        Queue_pvfDestroyItemData_t pvfDestroyItemDataArg,
                        Queue_pvfDestroyItem_t pvfDestroyItemArg)
{
    return (Queue_nSTATUS) SLinkedList__enCreate(pstQueue, pvfDestroyItemDataArg, pvfDestroyItemArg);
}

Queue_nSTATUS Queue__enInit(Queue_t* pstQueue,
                            Queue_pvfDestroyItemData_t pvfDestroyItemDataArg,
                            Queue_pvfDestroyItem_t pvfDestroyItemArg,
                            Queue_pvfDestroy_t pvfDestroyArg)
{
    return (Queue_nSTATUS) SLinkedList__enInit( pstQueue,
                                                pvfDestroyItemDataArg,
                                                pvfDestroyItemArg,
                                                pvfDestroyArg);
}



