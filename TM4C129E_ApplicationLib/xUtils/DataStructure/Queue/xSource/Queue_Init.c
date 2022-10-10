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

Queue_nERROR Queue__enCreate(Queue_t** pstQueue,
                        Queue_pvfDestroyItemData_t pvfDestroyItemDataArg,
                        Queue_pvfDestroyItem_t pvfDestroyItemArg)
{
    Queue_nERROR enErrorReg;
    enErrorReg = (Queue_nERROR) SLinkedList__enCreate(pstQueue, pvfDestroyItemDataArg, pvfDestroyItemArg);
    return (enErrorReg);
}

Queue_nERROR Queue__enInit(Queue_t* pstQueue,
                            Queue_pvfDestroyItemData_t pvfDestroyItemDataArg,
                            Queue_pvfDestroyItem_t pvfDestroyItemArg,
                            Queue_pvfDestroy_t pvfDestroyArg)
{
    Queue_nERROR enErrorReg;
    enErrorReg = (Queue_nERROR) SLinkedList__enInit( pstQueue, pvfDestroyItemDataArg, pvfDestroyItemArg, pvfDestroyArg);
    return (enErrorReg);
}



