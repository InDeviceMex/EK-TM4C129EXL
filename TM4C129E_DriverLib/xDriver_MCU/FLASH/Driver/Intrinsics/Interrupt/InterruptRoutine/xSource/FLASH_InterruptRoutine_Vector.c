/**
 *
 * @file FLASH_InterruptRoutine_Vector.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/FLASH_InterruptRoutine_Vector.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/FLASH_InterruptRoutine_Source.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>

void FLASH__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32RegEEPROM = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = FLASH_FCMISC_R;

    if((uint32_t) FLASH_enINT_ACCESS & u32Reg)
    {
        FLASH_FCMISC_R = (uint32_t) FLASH_enINT_ACCESS;
        pfvCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enINTERRUPT_ACCESS);
        pfvCallback();
    }
    if((uint32_t) FLASH_enINT_PROGRAMMING & u32Reg)
    {
        FLASH_FCMISC_R = (uint32_t) FLASH_enINT_PROGRAMMING;
        pfvCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enINTERRUPT_PROGRAMMING);
        pfvCallback();
    }
    if((uint32_t) FLASH_enINT_EEPROM & u32Reg)
    {
        FLASH_FCMISC_R = (uint32_t) FLASH_enINT_EEPROM;
        u32RegEEPROM = SYSCTL_PREEPROM_R;
        u32RegEEPROM &= SYSCTL_PREEPROM_R_EEPROM_MASK;
        if(SYSCTL_PREEPROM_R_EEPROM_MASK == u32RegEEPROM)
        {
            pfvCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enINTERRUPT_EEPROM);
            pfvCallback();
        }
    }
    if((uint32_t) FLASH_enINT_PUMP_VOL & u32Reg)
    {
        FLASH_FCMISC_R = (uint32_t) FLASH_enINT_PUMP_VOL;
        pfvCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enINTERRUPT_PUMP_VOL);
        pfvCallback();
    }
    if((uint32_t) FLASH_enINT_INVALID_DATA & u32Reg)
    {
        FLASH_FCMISC_R = (uint32_t) FLASH_enINT_INVALID_DATA;
        pfvCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enINTERRUPT_INVALID_DATA);
        pfvCallback();
    }
    if((uint32_t) FLASH_enINT_ERRASE_ERROR & u32Reg)
    {
        FLASH_FCMISC_R = (uint32_t) FLASH_enINT_ERRASE_ERROR;
        pfvCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enINTERRUPT_ERRASE_ERROR);
        pfvCallback();
    }
    if((uint32_t) FLASH_enINT_PROGRAM_ERROR & u32Reg)
    {
        FLASH_FCMISC_R = (uint32_t) FLASH_enINT_PROGRAM_ERROR;
        pfvCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enINTERRUPT_PROGRAM_ERROR);
        pfvCallback();
    }
}
