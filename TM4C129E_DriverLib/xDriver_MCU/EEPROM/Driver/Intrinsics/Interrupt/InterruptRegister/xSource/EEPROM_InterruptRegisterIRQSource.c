/**
 *
 * @file EEPROM_InterruptRegisterIRQSource.c
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
 * @verbatim 25 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/EEPROM_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/EEPROM_InterruptRoutine_Source.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

void EEPROM__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void), EEPROM_nINTERRUPT enInterruptParam)
{
    uint32_t u32InterruptSource = 0UL;
    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32InterruptSource = MCU__u32CheckParams( (uint32_t) enInterruptParam,
                                                  (uint32_t) EEPROM_enINTERRUPT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
                                           EEPROM__pvfGetIRQSourceHandlerPointer((EEPROM_nINTERRUPT) u32InterruptSource),
                                           0UL,
                                           1UL);
    }
}




