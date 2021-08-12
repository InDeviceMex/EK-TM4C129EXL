/**
 *
 * @file SYSEXC_Init.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SYSEXC/xHeader/SYSEXC_Init.h>

#include <xApplication_MCU/SYSEXC/Intrinsics/xHeader/SYSEXC_Dependencies.h>
#include <xApplication_MCU/SYSEXC/Interrupt/SYSEXC_Interrupt.h>

void SYSEXC__vInit(SYSEXC_nINT_SOURCE enInterruptParam, SYSEXC_nPRIORITY enSYSEXCPriority)
{
    void (*pfIrqVectorHandler) (void) = (void (*) (void)) 0UL;

    pfIrqVectorHandler = SYSEXC__pvfGetIRQVectorHandler();
    SYSEXC__vRegisterIRQVectorHandler( pfIrqVectorHandler);

    SYSEXC__vDisInterruptSource(SYSEXC_enINT_SOURCE_ALL);
    SYSEXC__vEnInterruptSource(enInterruptParam);
    SYSEXC__vEnInterruptVector(enSYSEXCPriority);
}
