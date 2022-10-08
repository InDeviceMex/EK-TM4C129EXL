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
    UBase_t uxReg;
    FLASH_pvfIRQSourceHandler_t pvfCallback;

    uxReg = FLASH_MISC_R;

    if(0UL == ((UBase_t) FLASH_enINTMASK_ALL & uxReg))
    {
        pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_SW);
        pvfCallback(FLASH_BASE, (void*) 0UL);
    }
    else
    {
        if((UBase_t) FLASH_enINTMASK_ACCESS & uxReg)
        {
            FLASH_MISC_R = (UBase_t) FLASH_enINTMASK_ACCESS;
            pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_ACCESS);
            pvfCallback(FLASH_BASE, (void*) FLASH_enINT_ACCESS);
        }
        if((UBase_t) FLASH_enINTMASK_PROGRAMMING & uxReg)
        {
            FLASH_MISC_R = (UBase_t) FLASH_enINTMASK_PROGRAMMING;
            pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_PROGRAMMING);
            pvfCallback(FLASH_BASE, (void*) FLASH_enINT_PROGRAMMING);
        }
        if((UBase_t) FLASH_enINTMASK_EEPROM & uxReg)
        {
            FLASH_MISC_R = (UBase_t) FLASH_enINTMASK_EEPROM;
            pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_EEPROM);
            pvfCallback(FLASH_BASE, (void*) FLASH_enINT_EEPROM);
        }
        if((UBase_t) FLASH_enINTMASK_PUMP_VOL & uxReg)
        {
            FLASH_MISC_R = (UBase_t) FLASH_enINTMASK_PUMP_VOL;
            pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_PUMP_VOL);
            pvfCallback(FLASH_BASE, (void*) FLASH_enINT_PUMP_VOL);
        }
        if((UBase_t) FLASH_enINTMASK_INVALID_DATA & uxReg)
        {
            FLASH_MISC_R = (UBase_t) FLASH_enINTMASK_INVALID_DATA;
            pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_INVALID_DATA);
            pvfCallback(FLASH_BASE, (void*) FLASH_enINT_INVALID_DATA);
        }
        if((UBase_t) FLASH_enINTMASK_ERRASE_ERROR & uxReg)
        {
            FLASH_MISC_R = (UBase_t) FLASH_enINTMASK_ERRASE_ERROR;
            pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_ERRASE_ERROR);
            pvfCallback(FLASH_BASE, (void*) FLASH_enINT_ERRASE_ERROR);
        }
        if((UBase_t) FLASH_enINTMASK_PROGRAM_ERROR & uxReg)
        {
            FLASH_MISC_R = (UBase_t) FLASH_enINTMASK_PROGRAM_ERROR;
            pvfCallback = FLASH__pvfGetIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_PROGRAM_ERROR);
            pvfCallback(FLASH_BASE, (void*) FLASH_enINT_PROGRAM_ERROR);
        }
    }
}
