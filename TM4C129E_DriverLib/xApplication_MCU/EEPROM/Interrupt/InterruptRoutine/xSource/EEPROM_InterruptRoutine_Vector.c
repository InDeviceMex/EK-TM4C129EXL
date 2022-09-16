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

void EEPROM__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Ready = 0U;
    EEPROM_pvfIRQSourceHandler_t pvfCallback;

    u32Ready = SYSCTL_PREEPROM_R;
    if(SYSCTL_PREEPROM_R_EEPROM_NOREADY == (SYSCTL_PREEPROM_R_EEPROM_MASK & u32Ready))
    {
        pvfCallback = EEPROM__pvfGetIRQSourceHandler(EEPROM_enMODULE_0, EEPROM_enINTERRUPT_SW);
        pvfCallback(EEPROM_BASE, (void*) EEPROM_enINTERRUPT_SW);
    }
    else
    {
        u32Reg = EEPROM_DONE_R;

        if(0UL == ((uint32_t) EEPROM_enINT_ALL & u32Reg))
        {
            pvfCallback = EEPROM__pvfGetIRQSourceHandler(EEPROM_enMODULE_0, EEPROM_enINTERRUPT_SW);
            pvfCallback(EEPROM_BASE, (void*) EEPROM_enINTERRUPT_SW);
        }
        else
        {
            if((uint32_t) EEPROM_enINT_ERASE & u32Reg)
            {
                pvfCallback = EEPROM__pvfGetIRQSourceHandler(EEPROM_enMODULE_0, EEPROM_enINTERRUPT_ERASE);
                pvfCallback(EEPROM_BASE, (void*) EEPROM_enINTERRUPT_ERASE);
            }
            if((uint32_t) EEPROM_enINT_COPY & u32Reg)
            {
                pvfCallback = EEPROM__pvfGetIRQSourceHandler(EEPROM_enMODULE_0, EEPROM_enINTERRUPT_COPY);
                pvfCallback(EEPROM_BASE, (void*) EEPROM_enINTERRUPT_COPY);
            }
            if((uint32_t) EEPROM_enINT_NOPERMISSION & u32Reg)
            {
                pvfCallback = EEPROM__pvfGetIRQSourceHandler(EEPROM_enMODULE_0, EEPROM_enINTERRUPT_NOPERMISSION);
                pvfCallback(EEPROM_BASE, (void*) EEPROM_enINTERRUPT_NOPERMISSION);
            }
            if((uint32_t) EEPROM_enINT_WRITE & u32Reg)
            {
                pvfCallback = EEPROM__pvfGetIRQSourceHandler(EEPROM_enMODULE_0, EEPROM_enINTERRUPT_WRITE);
                pvfCallback(EEPROM_BASE, (void*) EEPROM_enINTERRUPT_WRITE);
            }
        }
    }
}
