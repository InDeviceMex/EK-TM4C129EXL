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

void TIMER__vCreateModeStructPointer(TIMER_nMODE enMode, TIMER_MODE_Typedef* pstMode)
{
    if(0UL != (uint32_t) pstMode)
    {
        pstMode->enDirection = (TIMER_nCOUNT_DIR) ((uint32_t) enMode & 1U);
        pstMode->enAltMode = (TIMER_nALT_MODE) (((uint32_t) enMode >> 4U) & 1U);
        pstMode->enEdgeMode = (TIMER_nEDGE_MODE) (((uint32_t) enMode >> 8U) & 1U);
        pstMode->enSubMode = (TIMER_nSUB_MODE) (((uint32_t) enMode >> 12U) & 3U);
        pstMode->enConfig = (TIMER_nCONFIG) (((uint32_t) enMode >> 16U) & 7U);
        pstMode->enPWMOut = (TIMER_nPWM_OUTPUT) (((uint32_t) enMode >> 20U) & 1U);
        pstMode->enPWMOutInit = (TIMER_nPWM_OUT_INIT) (((uint32_t) enMode >> 24U) & 1U);
        pstMode->enEdgeEvent = (TIMER_nEDGE_EVENT) (((uint32_t) enMode >> 28U) & 3U);
        pstMode->enSnapShot = (TIMER_nSNAPSHOT) (((uint32_t) enMode >> 30U) & 1U);
    }
}

TIMER_MODE_Typedef* TIMER__pstCreateModeStruct(TIMER_nMODE enMode)
{
    TIMER_MODE_Typedef* pstMode = 0;
    #if defined (__TI_ARM__ )
    pstMode = (TIMER_MODE_Typedef*) memalign((size_t) 4, (size_t) sizeof(TIMER_MODE_Typedef));
    #elif defined (__GNUC__ )
    pstMode = (TIMER_MODE_Typedef*) malloc((size_t) sizeof(TIMER_MODE_Typedef));
    #endif
    if(0UL != (uint32_t) pstMode)
    {
        pstMode->enDirection = (TIMER_nCOUNT_DIR) ((uint32_t) enMode & 1U);
        pstMode->enAltMode = (TIMER_nALT_MODE) (((uint32_t) enMode >> 4U) & 1U);
        pstMode->enEdgeMode = (TIMER_nEDGE_MODE) (((uint32_t) enMode >> 8U) & 1U);
        pstMode->enSubMode = (TIMER_nSUB_MODE) (((uint32_t) enMode >> 12U) & 3U);
        pstMode->enConfig = (TIMER_nCONFIG) (((uint32_t) enMode >> 16U) & 7U);
        pstMode->enPWMOut = (TIMER_nPWM_OUTPUT) (((uint32_t) enMode >> 20U) & 1U);
        pstMode->enPWMOutInit = (TIMER_nPWM_OUT_INIT) (((uint32_t) enMode >> 24U) & 1U);
        pstMode->enEdgeEvent = (TIMER_nEDGE_EVENT) (((uint32_t) enMode >> 28U) & 3U);
        pstMode->enSnapShot = (TIMER_nSNAPSHOT) (((uint32_t) enMode >> 30U) & 1U);
    }
    return pstMode;
}

void TIMER__vDeleteModeStruct(TIMER_MODE_Typedef* pstMode)
{
    free(pstMode);
    pstMode = (TIMER_MODE_Typedef*) 0UL;
}
