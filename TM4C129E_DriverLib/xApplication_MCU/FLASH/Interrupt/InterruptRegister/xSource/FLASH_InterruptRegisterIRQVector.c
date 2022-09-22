/**
 *
 * @file FLASH_InterruptRegisterIRQVector.c
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
#include <xApplication_MCU/FLASH/Interrupt/InterruptRegister/xHeader/FLASH_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/FLASH/Interrupt/InterruptRoutine/FLASH_InterruptRoutine.h>
#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Dependencies.h>

FLASH_nERROR FLASH__enRegisterIRQVectorHandler(FLASH_nMODULE enModuleArg, FLASH_pvfIRQVectorHandler_t pfIrqVectorHandlerArg)
{
    const SCB_nVECISR SCB_VECISR_FLASH[(uint32_t) FLASH_enMODULE_MAX]=
    {
        {SCB_enVECISR_FLASH}
    };
    SCB_nVECISR enVectorReg;
    FLASH_nERROR enErrorReg;
    FLASH_pvfIRQVectorHandler_t* pvfVectorHandlerReg;

    enErrorReg = (FLASH_nERROR) MCU__enCheckParams((uint32_t) enModuleArg, (uint32_t) FLASH_enMODULE_MAX);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enVectorReg = SCB_VECISR_FLASH[(uint32_t) enModuleArg];
        pvfVectorHandlerReg = FLASH__pvfGetIRQVectorHandlerPointer(enModuleArg);
        enErrorReg = (FLASH_nERROR) SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVectorReg, pfIrqVectorHandlerArg, pvfVectorHandlerReg);
    }
    return (enErrorReg);

}
