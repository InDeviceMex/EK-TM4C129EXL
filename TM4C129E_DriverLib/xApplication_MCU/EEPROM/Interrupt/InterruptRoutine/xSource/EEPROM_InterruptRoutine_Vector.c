/**
 *
 * @file EEPROM_InterruptRoutine_Vector.c
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
#include <xApplication_MCU/EEPROM/Interrupt/InterruptRoutine/xHeader/EEPROM_InterruptRoutine_Vector.h>

#include <xApplication_MCU/EEPROM/Intrinsics/xHeader/EEPROM_Dependencies.h>

void EEPROM__vIRQVectorHandler(uintptr_t uptrModuleArg, void* pvArgument)
{
    UBase_t uxReg;
    UBase_t uxReady;
    EEPROM_pvfIRQSourceHandler_t pvfCallback;

    uxReady = SYSCTL_PREEPROM_R;
    if(SYSCTL_PREEPROM_R_EEPROM_NOREADY == (SYSCTL_PREEPROM_R_EEPROM_MASK & uxReady))
    {
        pvfCallback = EEPROM__pvfGetIRQSourceHandler(EEPROM_enMODULE_0, EEPROM_enINT_SW);
        pvfCallback(EEPROM_BASE, (void*) EEPROM_enINT_SW);
    }
    else
    {
        uxReg = EEPROM_DONE_R;

        if(0UL == ((UBase_t) EEPROM_enINTMASK_ALL & uxReg))
        {
            pvfCallback = EEPROM__pvfGetIRQSourceHandler(EEPROM_enMODULE_0, EEPROM_enINT_SW);
            pvfCallback(EEPROM_BASE, (void*) EEPROM_enINT_SW);
        }
        else
        {
            if((UBase_t) EEPROM_enINTMASK_ERASE & uxReg)
            {
                pvfCallback = EEPROM__pvfGetIRQSourceHandler(EEPROM_enMODULE_0, EEPROM_enINT_ERASE);
                pvfCallback(EEPROM_BASE, (void*) EEPROM_enINT_ERASE);
            }
            if((UBase_t) EEPROM_enINTMASK_COPY & uxReg)
            {
                pvfCallback = EEPROM__pvfGetIRQSourceHandler(EEPROM_enMODULE_0, EEPROM_enINT_COPY);
                pvfCallback(EEPROM_BASE, (void*) EEPROM_enINT_COPY);
            }
            if((UBase_t) EEPROM_enINTMASK_NOPERMISSION & uxReg)
            {
                pvfCallback = EEPROM__pvfGetIRQSourceHandler(EEPROM_enMODULE_0, EEPROM_enINT_NOPERMISSION);
                pvfCallback(EEPROM_BASE, (void*) EEPROM_enINT_NOPERMISSION);
            }
            if((UBase_t) EEPROM_enINTMASK_WRITE & uxReg)
            {
                pvfCallback = EEPROM__pvfGetIRQSourceHandler(EEPROM_enMODULE_0, EEPROM_enINT_WRITE);
                pvfCallback(EEPROM_BASE, (void*) EEPROM_enINT_WRITE);
            }
        }
    }
}
