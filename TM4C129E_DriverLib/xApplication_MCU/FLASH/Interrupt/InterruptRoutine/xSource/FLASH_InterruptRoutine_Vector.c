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
    uint32_t u32Reg;
    FLASH_pvfIRQSourceHandler_t pvfCallback;

    u32Reg = FLASH_MISC_R;

    if(0UL == ((uint32_t) FLASH_enINTMASK_ALL & u32Reg))
    {
        pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_SW);
        pvfCallback(FLASH_BASE, (void*) 0UL);
    }
    else
    {
        if((uint32_t) FLASH_enINTMASK_ACCESS & u32Reg)
        {
            FLASH_MISC_R = (uint32_t) FLASH_enINTMASK_ACCESS;
            pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_ACCESS);
            pvfCallback(FLASH_BASE, (void*) FLASH_enINT_ACCESS);
        }
        if((uint32_t) FLASH_enINTMASK_PROGRAMMING & u32Reg)
        {
            FLASH_MISC_R = (uint32_t) FLASH_enINTMASK_PROGRAMMING;
            pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_PROGRAMMING);
            pvfCallback(FLASH_BASE, (void*) FLASH_enINT_PROGRAMMING);
        }
        if((uint32_t) FLASH_enINTMASK_EEPROM & u32Reg)
        {
            FLASH_MISC_R = (uint32_t) FLASH_enINTMASK_EEPROM;
            pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_EEPROM);
            pvfCallback(FLASH_BASE, (void*) FLASH_enINT_EEPROM);
        }
        if((uint32_t) FLASH_enINTMASK_PUMP_VOL & u32Reg)
        {
            FLASH_MISC_R = (uint32_t) FLASH_enINTMASK_PUMP_VOL;
            pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_PUMP_VOL);
            pvfCallback(FLASH_BASE, (void*) FLASH_enINT_PUMP_VOL);
        }
        if((uint32_t) FLASH_enINTMASK_INVALID_DATA & u32Reg)
        {
            FLASH_MISC_R = (uint32_t) FLASH_enINTMASK_INVALID_DATA;
            pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_INVALID_DATA);
            pvfCallback(FLASH_BASE, (void*) FLASH_enINT_INVALID_DATA);
        }
        if((uint32_t) FLASH_enINTMASK_ERRASE_ERROR & u32Reg)
        {
            FLASH_MISC_R = (uint32_t) FLASH_enINTMASK_ERRASE_ERROR;
            pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_ERRASE_ERROR);
            pvfCallback(FLASH_BASE, (void*) FLASH_enINT_ERRASE_ERROR);
        }
        if((uint32_t) FLASH_enINTMASK_PROGRAM_ERROR & u32Reg)
        {
            FLASH_MISC_R = (uint32_t) FLASH_enINTMASK_PROGRAM_ERROR;
            pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_PROGRAM_ERROR);
            pvfCallback(FLASH_BASE, (void*) FLASH_enINT_PROGRAM_ERROR);
        }
    }
}
