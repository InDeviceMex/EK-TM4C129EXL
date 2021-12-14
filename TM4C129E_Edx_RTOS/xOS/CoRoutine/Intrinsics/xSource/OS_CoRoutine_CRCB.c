/**
 *
 * @file OS_CoRoutine_CRCB.c
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
 * @verbatim 28 nov. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 nov. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/CoRoutine/Intrinsics/xHeader/OS_CoRoutine_CRCB.h>

OS_CoRoutine_CRCB_t* volatile OS_CoRoutine_pstCurrentCRCB = (OS_CoRoutine_CRCB_t*) 0UL;

OS_CoRoutine_CRCB_t* volatile* OS_CoRoutine__pstGetCurrentCRCBAddress(void)
{
    return (&OS_CoRoutine_pstCurrentCRCB);
}

OS_CoRoutine_CRCB_t* OS_CoRoutine__pstGetCurrentCRCB(void)
{
    return (OS_CoRoutine_pstCurrentCRCB);
}

void OS_CoRoutine__vSetCurrentCRCB(OS_CoRoutine_CRCB_t* pstNewCRCB)
{
    OS_CoRoutine_pstCurrentCRCB = pstNewCRCB;
}




