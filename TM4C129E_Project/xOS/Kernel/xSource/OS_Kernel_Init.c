/**
 *
 * @file OS_Kernel_Init.c
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
 * @verbatim Mar 23, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 23, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include<xOS/Kernel/xHeader/OS_Kernel_Init.h>
#include<xOS/Kernel/xHeader/OS_Kernel_Threads.h>
#include<xOS/TCB/OS_TCB.h>

OS_TCB_TypeDef OS_Kernel_stTCB;

void OS_Kernel__vInit(void)
{
    OS_TCB__enInit(&OS_Kernel_stTCB,&OS_Kernel__vDestroyItem);
}



