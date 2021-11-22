/**
 *
 * @file OS_Task_Name.c
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
 * @verbatim 23 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/Attributes/xHeader/OS_Task_Name.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>


char* OS_Task__pcGetTaskName(OS_Task_Handle_t pvTaskToQuery)
{
    OS_Task_TCB_t *pstTCB = (OS_Task_TCB_t*) 0UL;
    char* pcTaskNameReg = (char*) 0UL;

    pstTCB = OS_Task__pstGetTCBFromHandle(pvTaskToQuery);
    if(0UL != (OS_UBase_t) pstTCB)
    {
        pcTaskNameReg = pstTCB->pcTaskName;
    }
    return (pcTaskNameReg);
}
