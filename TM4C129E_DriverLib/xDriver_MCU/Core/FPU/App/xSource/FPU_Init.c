/**
 *
 * @file FPU_Init.c
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
 * @verbatim 2 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/FPU/App/xHeader/FPU_Init.h>

#include <xDriver_MCU/Core/FPU/Driver/FPU_Driver.h>

void FPU__vInit(void)
{
    FPU__enSetAccessType(FPU_enMODULE_0, FPU_enACCESS_FULL);
    FPU__enSetLazyPreservationState(FPU_enMODULE_0, FPU_enSTATE_ENA);
    FPU__enSetAutoPreservationState(FPU_enMODULE_0, FPU_enSTATE_ENA);
    FPU__vSetMode(FPU_enMODULE_0, FPU_enMODE_DENORMAL);
    FPU__vSetHalfPrecision(FPU_enMODULE_0, FPU_enHALF_PRECISION_IEEE);
    FPU__vSetNAN(FPU_enMODULE_0, FPU_enNAN_PROPAGATE);
    FPU__vSetRoundingMode(FPU_enMODULE_0, FPU_enROUNDING_NEAREST);
}
