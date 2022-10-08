/**
 *
 * @file FPU_RegisterPeripheral.c
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
 * @verbatim 1 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/FPU/Peripheral/Register/xHeader/FPU_RegisterPeripheral.h>

uintptr_t FPU__uptrBlockBaseAddress(FPU_nMODULE enModuleArg)
{
    uintptr_t FPU_BLOCK_BASE[(UBase_t) FPU_enMODULE_MAX] =
    {
     FPU_BASE
    };
    return (FPU_BLOCK_BASE[(UBase_t) enModuleArg]);
}




