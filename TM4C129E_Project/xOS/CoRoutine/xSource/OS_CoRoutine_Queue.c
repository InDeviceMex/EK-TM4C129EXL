/**
 *
 * @file OS_CoRoutine_Queue.c
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
 * @verbatim 3 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/CoRoutine/xHeader/OS_CoRoutine_Event.h>

#include <xOS/CoRoutine/Intrinsics/OS_CoRoutine_Intrinsics.h>
#include <xOS/Queue/xHeader/OS_Queue_CoRoutine.h>

OS_Boolean_t OS_CoRoutine__boSendFromISR(OS_Queue_Handle_t pvQueue,
                                         const void *pvItemToQueue,
                                         OS_Boolean_t boCoRoutinePreviouslyWoken)
{
    OS_Boolean_t boReturn = FALSE;
    boReturn = OS_Queue__boCoRoutineSendFromISR(pvQueue, pvItemToQueue, boCoRoutinePreviouslyWoken);
    return (boReturn);
}

OS_Boolean_t OS_CoRoutine__boReceiveFromISR(OS_Queue_Handle_t pvQueue,
                                            void *pvBuffer,
                                            OS_Boolean_t* pboCoRoutineWoken)
{
    OS_Boolean_t boReturn = FALSE;
    boReturn = OS_Queue__boCoRoutineReceiveFromISR(pvQueue, pvBuffer, pboCoRoutineWoken);
    return (boReturn);
}




