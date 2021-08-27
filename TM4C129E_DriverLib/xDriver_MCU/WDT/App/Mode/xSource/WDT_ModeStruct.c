/**
 *
 * @file WDT_ModeStruct.c
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
 * @verbatim 24 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/App/Mode/xHeader/WDT_ModeStruct.h>

#include <stdlib.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

void WDT__vCreateModeStructPointer(WDT_nMODE enMode, WDT_MODE_Typedef* pstMode)
{
    if((uint32_t) 0U != (uint32_t) pstMode )
    {
        pstMode->enInterrupt = (WDT_nINTERRUPT_ENABLE) ((uint32_t) enMode & 1UL);
        pstMode->enStall = (WDT_nSTALL) (( (uint32_t) enMode >> 8UL) & 1UL);
        pstMode->enIntType = (WDT_nINT_TYPE) (( (uint32_t) enMode >> 16UL) & 1UL);
        pstMode->enResetOutput = (WDT_nRESET) (( (uint32_t) enMode >> 24UL) & 1UL);
    }
}

WDT_MODE_Typedef* WDT__pstCreateModeStruct(WDT_nMODE enMode)
{
    WDT_MODE_Typedef* pstMode = (WDT_MODE_Typedef*) 0UL;
    #if defined (__TI_ARM__ )
    pstMode = (WDT_MODE_Typedef*) memalign((size_t) 4UL, (size_t) sizeof(WDT_MODE_Typedef));
    #elif defined (__GNUC__ )
    pstMode = (WDT_MODE_Typedef*) malloc((size_t) sizeof(WDT_MODE_Typedef));
    #endif
    if(0UL != (uint32_t) pstMode )
    {
        pstMode->enInterrupt = (WDT_nINTERRUPT_ENABLE) ( (uint32_t) enMode & 1UL);
        pstMode->enStall = (WDT_nSTALL) (( (uint32_t) enMode >> 8UL) & 1UL);
        pstMode->enIntType = (WDT_nINT_TYPE) (( (uint32_t) enMode >> 16UL) & 1UL);
        pstMode->enResetOutput = (WDT_nRESET) (( (uint32_t) enMode >> 24UL) & 1UL);
    }
    return pstMode;
}

void WDT__vDeleteModeStruct(WDT_MODE_Typedef* pstMode)
{
    free(pstMode);
    pstMode = (WDT_MODE_Typedef*) 0UL;
}
