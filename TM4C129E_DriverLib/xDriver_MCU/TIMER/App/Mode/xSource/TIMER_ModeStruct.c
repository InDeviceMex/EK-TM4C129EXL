/**
 *
 * @file TIMER_ModeStruct.c
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
 * @verbatim 16 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/App/Mode/xHeader/TIMER_ModeStruct.h>

#include <stdlib.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void TIMER__vCreateModeStructPointer(TIMER_nMODE enModeArg, TIMER_MODE_t* pstMode)
{
    if(0UL != (UBase_t) pstMode)
    {
        pstMode->enDirection = (TIMER_nCOUNT_DIR) ((UBase_t) enModeArg & 1U);
        pstMode->enAltMode = (TIMER_nALT_MODE) (((UBase_t) enModeArg >> 4U) & 1U);
        pstMode->enEdgeMode = (TIMER_nEDGE_MODE) (((UBase_t) enModeArg >> 8U) & 1U);
        pstMode->enSubMode = (TIMER_nSUB_MODE) (((UBase_t) enModeArg >> 12U) & 3U);
        pstMode->enConfig = (TIMER_nCONFIG) (((UBase_t) enModeArg >> 16U) & 7U);
        pstMode->enPWMOut = (TIMER_nPWM_OUTPUT) (((UBase_t) enModeArg >> 20U) & 1U);
        pstMode->enPWMOutInit = (TIMER_nPWM_OUT_INIT) (((UBase_t) enModeArg >> 24U) & 1U);
        pstMode->enEdgeEvent = (TIMER_nEDGE_EVENT) (((UBase_t) enModeArg >> 28U) & 3U);
        pstMode->enSnapShot = (TIMER_nSNAPSHOT) (((UBase_t) enModeArg >> 30U) & 1U);
    }
}

TIMER_MODE_t* TIMER__pstCreateModeStruct(TIMER_nMODE enModeArg)
{
    TIMER_MODE_t* pstMode = 0;
    #if defined (__TI_ARM__ ) || defined (__MSP430__ )
    pstMode = (TIMER_MODE_t*) memalign((size_t) 4, (size_t) sizeof(TIMER_MODE_t));
    #elif defined (__GNUC__ )
    pstMode = (TIMER_MODE_t*) malloc((size_t) sizeof(TIMER_MODE_t));
    #endif
    if(0UL != (UBase_t) pstMode)
    {
        pstMode->enDirection = (TIMER_nCOUNT_DIR) ((UBase_t) enModeArg & 1U);
        pstMode->enAltMode = (TIMER_nALT_MODE) (((UBase_t) enModeArg >> 4U) & 1U);
        pstMode->enEdgeMode = (TIMER_nEDGE_MODE) (((UBase_t) enModeArg >> 8U) & 1U);
        pstMode->enSubMode = (TIMER_nSUB_MODE) (((UBase_t) enModeArg >> 12U) & 3U);
        pstMode->enConfig = (TIMER_nCONFIG) (((UBase_t) enModeArg >> 16U) & 7U);
        pstMode->enPWMOut = (TIMER_nPWM_OUTPUT) (((UBase_t) enModeArg >> 20U) & 1U);
        pstMode->enPWMOutInit = (TIMER_nPWM_OUT_INIT) (((UBase_t) enModeArg >> 24U) & 1U);
        pstMode->enEdgeEvent = (TIMER_nEDGE_EVENT) (((UBase_t) enModeArg >> 28U) & 3U);
        pstMode->enSnapShot = (TIMER_nSNAPSHOT) (((UBase_t) enModeArg >> 30U) & 1U);
    }
    return (pstMode);
}

void TIMER__vDeleteModeStruct(TIMER_MODE_t* pstMode)
{
    free(pstMode);
    pstMode = (TIMER_MODE_t*) 0UL;
}
