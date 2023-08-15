/**
 *
 * @file OS_Queue_Create.c
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
 * @verbatim 15 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Create.h>

#include <stdlib.h>
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Reset.h>
#include <xOS/Adapt/OS_Adapt.h>

OS_Queue_Handle_t OS_Queue__pvGenericCreate(const OS_UBase_t uxQueueLength,
                                             const OS_UBase_t uxItemSizeArg,
                                             const OS_Queue_nType enQueueTypeArg)
{
    OS_Queue_Handle_t pvReturn;
    pvReturn = (OS_Queue_Handle_t) 0UL;
    if(0U < uxQueueLength)
    {
        OS_UBase_t uxQueueSizeInBytes;
        if(0UL != uxItemSizeArg)
        {
            uxQueueSizeInBytes = (OS_UBase_t) uxQueueLength;
            uxQueueSizeInBytes *= uxItemSizeArg;
            uxQueueSizeInBytes += 1UL;
        }
        else
        {
            uxQueueSizeInBytes = 0UL;
        }
        #if defined (__TI_ARM__ ) || defined (__MSP430__ )
        OS_Queue_t* pstNewQueue = (OS_Queue_t*) memalign(OS_ADAPT_BYTE_ALIGNMENT_MASK + 1UL,
                                                 (size_t) uxQueueSizeInBytes + sizeof(OS_Queue_t));
        #elif defined (__GNUC__ )
        OS_Queue_t* pstNewQueue = (OS_Queue_t*) malloc((size_t) uxQueueSizeInBytes + sizeof(OS_Queue_t));
        #endif

        if(0UL !=  (OS_Pointer_t) pstNewQueue)
        {
            if(0UL == uxItemSizeArg)
            {
                pstNewQueue->ps8Head = (int8_t*) pstNewQueue;
            }
            else
            {
                pstNewQueue->ps8Head = (int8_t *) pstNewQueue;
                pstNewQueue->ps8Head += sizeof(OS_Queue_t);
            }

            pstNewQueue->uxLength = (OS_UBase_t) uxQueueLength;
            pstNewQueue->uxItemSize = (OS_UBase_t) uxItemSizeArg;
            (void) OS_Queue__boGenericReset(pstNewQueue, TRUE);

            pstNewQueue->enQueueTypeTrace = enQueueTypeArg;
            pstNewQueue->pstQueueSetContainer = (OS_Queue_t*) 0UL;
            pvReturn = pstNewQueue;
        }
    }
    return (pvReturn);
}


OS_Queue_Handle_t OS_Queue__pvCreate(const OS_UBase_t uxQueueLength,
                                     const OS_UBase_t uxItemSizeArg)
{
    OS_Queue_Handle_t pvHandleReg;
    pvHandleReg = OS_Queue__pvGenericCreate(uxQueueLength, uxItemSizeArg, OS_Queue_enType_BASE);
    return (pvHandleReg);
}


