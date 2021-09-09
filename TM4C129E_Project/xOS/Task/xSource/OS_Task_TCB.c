/**
 *
 * @file OS_Task_TCB.c
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
 * @verbatim 15 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/xHeader/OS_Task_TCB.h>

#include <xOS/Task/Intrinsics/xHeader/OS_Task_TCB.h>
#include <xOS/Task/xHeader/OS_Task_Suspended.h>
#include <stdlib.h>

void OS_Task__vDeleteTCB(OS_Task_TCB_TypeDef* pstTCB)
{
    /**TODO: check is task suspend need to be called here*/

    OS_Task__vSuspendAll();
    free(pstTCB->puxStack);
    free(pstTCB);
    (void) OS_Task__boResumeAll();
}
