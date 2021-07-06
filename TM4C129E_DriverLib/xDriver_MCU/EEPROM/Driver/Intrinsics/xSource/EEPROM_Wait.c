/**
 *
 * @file EEPROM_Wait.c
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
/**
 * Include Files
 */
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/xHeader/EEPROM_Wait.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Primitives/EEPROM_Primitives.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

/**
 *
 * Local Definitions
 */
#define EEPROM_TIMEOUT_MAX (500000UL)

EEPROM_nSTATUS EEPROM__enGetStatus (void)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    EEPROM_nREADY enReady = EEPROM_enNOREADY;
    uint32_t u32Reg = 0UL;
    enReady = EEPROM__enIsReady();
    if(EEPROM_enREADY == enReady)
    {
        enReturn = EEPROM_enOK;
        u32Reg = MCU__u32ReadRegister(EEPROM_BASE, EEPROM_EEDONE_OFFSET, EEPROM_EEDONE_WORKING_MASK, EEPROM_EEDONE_R_WORKING_BIT);
        if(EEPROM_EEDONE_WORKING_ENA == u32Reg)
        {
            enReturn = EEPROM_enBUSY;
        }
    }
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWait (void)
{
    uint32_t u32TimeOut = EEPROM_TIMEOUT_MAX;
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    EEPROM_nREADY enReady = EEPROM_enNOREADY;

    enReady = EEPROM__enIsReady();
    if(EEPROM_enREADY == enReady)
    {
        enReturn = EEPROM_enOK;
        do
        {
            enReturn = EEPROM__enGetStatus();
            u32TimeOut--;
        }while((EEPROM_enBUSY == (EEPROM_nSTATUS) enReturn) && ((uint32_t) 0 != u32TimeOut));
    }
    return (EEPROM_nSTATUS) enReturn;
}
