/**
 *
 * @file SSI_RegisterPeripheral.c
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
 * @verbatim 16 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Peripheral/Register/RegisterPeripheral/SSI_RegisterPeripheral.h>

UBase_t SSI__uxBlockBaseAddress(SSI_nMODULE enModuleArg)
{
    const uintptr_t SSI_BLOCK_BASE[(UBase_t) SSI_enMODULE_MAX] =
    {
     SSI0_BASE, SSI1_BASE, SSI2_BASE, SSI3_BASE,
    };
    return (SSI_BLOCK_BASE[(UBase_t) enModuleArg]);
}


