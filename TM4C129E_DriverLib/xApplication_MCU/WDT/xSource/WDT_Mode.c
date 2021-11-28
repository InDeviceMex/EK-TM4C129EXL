/**
 *
 * @file WDT_Mode.c
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
 * @verbatim 27 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/WDT/xHeader/WDT_Mode.h>

#include <stdlib.h>
#include <xApplication_MCU/WDT/xHeader/WDT_DisInterrupt.h>
#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Dependencies.h>

WDT_nSTATUS WDT__enSetModeStruct(WDT_nMODULE enModule, const WDT_MODE_t* pstMode)
{
    WDT_nSTATUS enReturn = WDT_enSTATUS_ERROR;
    if((uint32_t) 0U != (uint32_t) pstMode )
    {
        if(WDT_enINTERRUPT_ENABLE_DISABLE == pstMode->enInterrupt )
        {
            WDT__vDisInterruptSource(enModule);
        }
        WDT__vSetStall(enModule, pstMode->enStall);
        WDT__vSetResetOutput(enModule, pstMode->enResetOutput);
        WDT__vSetInterruptSourceType(enModule, pstMode->enIntType);

        if(WDT_enINTERRUPT_ENABLE_ENABLE == pstMode->enInterrupt)
        {
            WDT__vEnInterruptSource(enModule);
        }
        enReturn = WDT_enSTATUS_OK;
    }
    return (enReturn);
}

WDT_nSTATUS WDT__enSetMode(WDT_nMODULE enModule, WDT_nMODE enModeArg)
{
    WDT_nSTATUS enReturn = WDT_enSTATUS_ERROR;
    WDT_MODE_t* pstMode = WDT__pstCreateModeStruct(enModeArg);

    if(0UL != (uint32_t) pstMode )
    {
        enReturn = WDT__enSetModeStruct(enModule, pstMode);
        WDT__vDeleteModeStruct(pstMode);
    }
    return (enReturn);
}

WDT_nMODE WDT__enGetMode(WDT_nMODULE enModule)
{
    WDT_nMODE enModeReg = WDT_enMODE_UNDEF;

    WDT_nINT_TYPE enIntTypeVar = WDT_enINT_TYPE_UNDEF;
    WDT_nRESET enResetOutputVar = WDT_enRESET_UNDEF;
    WDT_nINTERRUPT_ENABLE enInterruptVar = WDT_enINTERRUPT_ENABLE_UNDEF;
    WDT_nSTALL enStallVar = WDT_enSTALL_UNDEF;

    uint32_t u32Reg = 0UL;

    enInterruptVar = WDT__enGetInterruptSourceEnable(enModule);
    enStallVar = WDT__enGetStall(enModule);
    enIntTypeVar = WDT__enGetInterruptSourceType(enModule);
    enResetOutputVar = WDT__enGetResetOutput(enModule);

    u32Reg = ((uint32_t) enInterruptVar << 0UL);
    u32Reg |= ((uint32_t) enStallVar << 8UL);
    u32Reg |= ((uint32_t) enIntTypeVar << 16UL);
    u32Reg |= ((uint32_t) enResetOutputVar << 24UL);

    enModeReg = (WDT_nMODE) u32Reg;
    return (enModeReg);
}

void WDT__vGetMode(WDT_nMODULE enModule, WDT_MODE_t* pstMode)
{
    if(0UL != (uint32_t) pstMode )
    {
        pstMode->enInterrupt = WDT__enGetInterruptSourceEnable(enModule);
        pstMode->enStall = WDT__enGetStall(enModule);
        pstMode->enIntType = WDT__enGetInterruptSourceType(enModule);
        pstMode->enResetOutput = WDT__enGetResetOutput(enModule);
    }
}

WDT_MODE_t* WDT__pstGetMode(WDT_nMODULE enModule)
{
    WDT_MODE_t* pstMode = (WDT_MODE_t*) 0UL;
    #if defined (__TI_ARM__ )
    pstMode = (WDT_MODE_t*) memalign((size_t) 4UL, (size_t) sizeof(WDT_MODE_t) );
    #elif defined (__GNUC__ )
    pstMode = (WDT_MODE_t*) malloc(sizeof(WDT_MODE_t));
    #endif
    if(0UL != (uint32_t) pstMode )
    {
        WDT__vGetMode(enModule, pstMode);
    }
    return (pstMode);
}
