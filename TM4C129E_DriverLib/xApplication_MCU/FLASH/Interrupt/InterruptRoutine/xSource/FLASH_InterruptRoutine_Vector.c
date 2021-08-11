/**
 *
 * @file FLASH_InterruptRoutine_Vector.c
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
#include <xApplication_MCU/FLASH/Interrupt/InterruptRoutine/xHeader/FLASH_InterruptRoutine_Vector.h>

#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Dependencies.h>

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
