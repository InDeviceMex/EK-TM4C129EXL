/**
 *
 * @file FLASH_InterruptRoutine.c
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
#include <xApplication_MCU/FLASH/Interrupt/InterruptRoutine/FLASH_InterruptRoutine.h>

static FLASH_pvfIRQVectorHandler_t FLASH_pvIRQVectorHandler[(uint32_t) FLASH_enMODULE_MAX]=
{
     {
      &FLASH__vIRQVectorHandler
     }
};

FLASH_pvfIRQVectorHandler_t FLASH__pvfGetIRQVectorHandler(FLASH_nMODULE enModuleArg)
{
    FLASH_pvfIRQVectorHandler_t pvfVectorReg;
    pvfVectorReg = FLASH_pvIRQVectorHandler[(uint32_t) enModuleArg];
    return (pvfVectorReg);
}

FLASH_pvfIRQVectorHandler_t* FLASH__pvfGetIRQVectorHandlerPointer(FLASH_nMODULE enModuleArg)
{
    FLASH_pvfIRQVectorHandler_t* pvfVectorReg;
    pvfVectorReg = &FLASH_pvIRQVectorHandler[(uint32_t) enModuleArg];
    return (pvfVectorReg);
}
