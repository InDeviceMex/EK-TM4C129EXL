/*
 * SYSCTL_SystemClock.c
 *
 *  Created on: 15 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_SystemClock.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_MemoryTiming.h>
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_GatingClock.h>
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_AlternateClock.h>
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_MainOsc.h>
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_OutputClock.h>
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PLLCLock.h>
#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

#define SYSCTL_TIMEOUT ((UBase_t) 1000000UL)

#define SYSCTL_PLL_M_INT_INDEX (0UL)
#define SYSCTL_PLL_M_FRAC_INDEX (1UL)
#define SYSCTL_N_INDEX (2UL)
#define SYSCTL_Q_INDEX (3UL)
#define SYSCTL_DIV_INDEXMAX (4UL)

#define SYSCTL_enMOSCFrequency (SYSCTL_enXTAL_25MHZ)
#define SYSCTL_uxPIOSCFrequency (16000000UL)
#define SYSCTL_uxLFIOSCFrequency (33000UL)

static SYSCTL_nERROR SYSCTL_enGetMOSCFrequencyGeneric(SYSCTL_nXTAL enXtalArg, UBase_t* puxXtalFrequencyArg);
static SYSCTL_nERROR SYSCTL_enGetDivValueByVCOAndXTAL(SYSCTL_nVCO enVcoRangeArg, SYSCTL_nXTAL enXtalArg, UBase_t uxRequestArg, UBase_t* puxResponseArg);

static SYSCTL_nERROR SYSCTL_enGetDivValueByVCOAndXTAL(SYSCTL_nVCO enVcoRangeArg, SYSCTL_nXTAL enXtalArg, UBase_t uxRequestArg, UBase_t* puxResponseArg)
{
    const UBase_t uxXTALtoVCOReg[(UBase_t) SYSCTL_enVCO_MAX][(UBase_t) SYSCTL_enXTAL_MAX][SYSCTL_DIV_INDEXMAX] =
    {
        {/* VCO 320 MHz */
            { 64UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 64UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 64UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 64UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 64UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 64UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 64UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 64UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 64UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 64UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* 5 MHz */
            { 62UL , 512UL, (1UL - 1UL), (1UL - 1UL) },     /* 5.12 MHz */
            { 160UL, 0UL  , (3UL - 1UL), (1UL - 1UL) },     /* 6 MHz */
            { 52UL , 85UL , (1UL - 1UL), (1UL - 1UL) },     /* 6.144 MHz */
            { 43UL , 412UL, (1UL - 1UL), (1UL - 1UL) },     /* 7.3728 MHz */
            { 40UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* 8 MHz */
            { 39UL , 64UL , (1UL - 1UL), (1UL - 1UL) },     /* 8.192 MHz */
            { 32UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* 10 MHz */
            { 80UL , 0UL  , (3UL - 1UL), (1UL - 1UL) },     /* 12 MHz */
            { 26UL , 43UL , (1UL - 1UL), (1UL - 1UL) },     /* 12.288 MHz */
            { 23UL , 613UL, (1UL - 1UL), (1UL - 1UL) },     /* 13.56 MHz */
            { 22UL , 358UL, (1UL - 1UL), (1UL - 1UL) },     /* 14.318180 MHz */
            { 20UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* 16 MHz */
            { 19UL , 544UL, (1UL - 1UL), (1UL - 1UL) },     /* 16.384 MHz */
            { 160UL, 0UL  , (9UL - 1UL), (1UL - 1UL) },     /* 18 MHz */
            { 16UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* 20 MHz */
            { 40UL , 0UL  , (3UL - 1UL), (1UL - 1UL) },     /* 24 MHz */
            { 64UL , 0UL  , (5UL - 1UL), (1UL - 1UL) },     /* 25 MHz */
        },
        {/* VCO 480 MHz */
            { 96UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 96UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 96UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 96UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 96UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 96UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 96UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 96UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 96UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* Inv */
            { 96UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* 5 MHz */
            { 93UL , 768UL, (1UL - 1UL), (1UL - 1UL) },     /* 5.12 MHz */
            { 80UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* 6 MHz */
            { 78UL , 128UL, (1UL - 1UL), (1UL - 1UL) },     /* 6.144 MHz */
            { 65UL , 107UL, (1UL - 1UL), (1UL - 1UL) },     /* 7.3728 MHz */
            { 60UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* 8 MHz */
            { 58UL , 608UL, (1UL - 1UL), (1UL - 1UL) },     /* 8.192 MHz */
            { 48UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* 10 MHz */
            { 40UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* 12 MHz */
            { 39UL , 64UL , (1UL - 1UL), (1UL - 1UL) },     /* 12.288 MHz */
            { 35UL , 408UL, (1UL - 1UL), (1UL - 1UL) },     /* 13.56 MHz */
            { 33UL , 536UL, (1UL - 1UL), (1UL - 1UL) },     /* 14.318180 MHz */
            { 30UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* 16 MHz */
            { 29UL , 304UL, (1UL - 1UL), (1UL - 1UL) },     /* 16.384 MHz */
            { 80UL , 0UL  , (3UL - 1UL), (1UL - 1UL) },     /* 18 MHz */
            { 24UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* 20 MHz */
            { 20UL , 0UL  , (1UL - 1UL), (1UL - 1UL) },     /* 24 MHz */
            { 96UL , 0UL  , (5UL - 1UL), (1UL - 1UL) },     /* 25 MHz */
        },
    };
    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL_enERROR_OK;
    if (((UBase_t) SYSCTL_enXTAL_MAX <= (UBase_t) enXtalArg)    ||
        ((UBase_t) SYSCTL_enVCO_MAX <= (UBase_t) enVcoRangeArg) ||
        (SYSCTL_DIV_INDEXMAX <= uxRequestArg))
    {
        enErrorReg = SYSCTL_enERROR_VALUE;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) puxResponseArg)
        {
            enErrorReg = SYSCTL_enERROR_POINTER;
        }
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *puxResponseArg = uxXTALtoVCOReg[(UBase_t) enVcoRangeArg][(UBase_t) enXtalArg][uxRequestArg];
    }
    return (enErrorReg);
}

static SYSCTL_nERROR SYSCTL_enGetMOSCFrequencyGeneric(SYSCTL_nXTAL enXtalArg, UBase_t* puxXtalFrequencyArg)
{
    const UBase_t uxFreqXtalReg [(UBase_t) SYSCTL_enXTAL_MAX]=
    {
      1000000UL , 1843200UL , 2000000UL , 2457600UL , 3579545UL , 3686400UL ,
      4000000UL , 4096000UL , 4915200UL , 5000000UL , 5120000UL , 6000000UL ,
      6144000UL , 7372800UL , 8000000UL , 8192000UL , 10000000UL, 12000000UL,
      12288000UL, 13560000UL, 14318180UL, 16000000UL, 16384000UL, 18000000UL,
      20000000UL, 24000000UL, 25000000UL
    };
    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL_enERROR_OK;
    if ((UBase_t) SYSCTL_enXTAL_MAX <= (UBase_t) enXtalArg)
    {
        enErrorReg = SYSCTL_enERROR_VALUE;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) puxXtalFrequencyArg)
        {
            enErrorReg = SYSCTL_enERROR_POINTER;
        }
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *puxXtalFrequencyArg = uxFreqXtalReg[(UBase_t) enXtalArg];
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetPIOSCFrequency(UBase_t* puxFrequencyArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) puxFrequencyArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *puxFrequencyArg = SYSCTL_uxPIOSCFrequency;
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetMOSCFrequency(UBase_t* puxFrequencyArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL_enGetMOSCFrequencyGeneric(SYSCTL_enMOSCFrequency, puxFrequencyArg);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetLFIOSCFrequency(UBase_t* puxFrequencyArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) puxFrequencyArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *puxFrequencyArg = SYSCTL_uxLFIOSCFrequency;
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetVCOClockFrequency(SYSCTL_nMODULE enModuleArg, UBase_t *puxVCOFrequency)
{
    UBase_t uxPLLNValueReg;
    UBase_t uxPLLQValueReg;
    UBase_t uxPLLMIntegerValueReg;
    UBase_t uxPLLMFractionalValueReg;
    UBase_t uxFrequencyClockReg;
    uint64_t u64FrequencyInReg;
    SYSCTL_nOSCCLK_SRC enPLLClockSourceReg;
    SYSCTL_nERROR enErrorReg;

    uxPLLNValueReg = 0UL;
    uxPLLQValueReg = 0UL;
    uxPLLMIntegerValueReg = 0UL;
    uxPLLMFractionalValueReg = 0UL;
    uxFrequencyClockReg = 0UL;
    enPLLClockSourceReg = SYSCTL_enOSCCLK_SRC_PIOSC;
    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) puxVCOFrequency)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
         enErrorReg = SYSCTL__enGetPLLClockSource(enModuleArg, &enPLLClockSourceReg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        if(SYSCTL_enOSCCLK_SRC_PIOSC == enPLLClockSourceReg)
        {
            SYSCTL_nSTATE enMOSCState;
            enMOSCState = SYSCTL_enSTATE_DIS;
            enErrorReg = SYSCTL__enGetMOSCState(enModuleArg, &enMOSCState);
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                if(SYSCTL_enSTATE_DIS == enMOSCState)
                {
                    uxFrequencyClockReg = 0UL;
                }
                else
                {
                    enErrorReg = SYSCTL__enGetPIOSCFrequency(&uxFrequencyClockReg);
                }
            }
        }
        else if(SYSCTL_enOSCCLK_SRC_MOSC == enPLLClockSourceReg)
        {
            enErrorReg = SYSCTL__enGetMOSCFrequency(&uxFrequencyClockReg);
        }
        else
        {
            enErrorReg = SYSCTL_enERROR_VALUE;
        }
    }

    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enGetPLLClockValue_N(enModuleArg, &uxPLLNValueReg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enGetPLLClockValue_Q(enModuleArg, &uxPLLQValueReg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enGetPLLClockIntegerValue_M(enModuleArg, &uxPLLMIntegerValueReg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enGetPLLClockFractionalValue_M(enModuleArg, &uxPLLMFractionalValueReg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        uxPLLNValueReg += 1UL;
        uxPLLQValueReg += 1UL;
        u64FrequencyInReg = uxPLLMIntegerValueReg;
        u64FrequencyInReg *= 1024UL;
        u64FrequencyInReg += uxPLLMFractionalValueReg;
        u64FrequencyInReg *= uxFrequencyClockReg;
        u64FrequencyInReg /= 1024UL;
        u64FrequencyInReg /= uxPLLNValueReg;
        u64FrequencyInReg /= uxPLLQValueReg;

        *puxVCOFrequency =  (UBase_t) u64FrequencyInReg;
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetAlternateClockFrequency(SYSCTL_nMODULE enModuleArg, UBase_t* puxFrequencyArg)
{
    UBase_t uxFrequencyReg;
    SYSCTL_nALTCLK_SRC enClockSourceReg;
    SYSCTL_nERROR enErrorReg;

    uxFrequencyReg = 0UL;
    enClockSourceReg = SYSCTL_enALTCLK_SRC_PIOSC;
    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) puxFrequencyArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enGetAlternateClockSource(enModuleArg, &enClockSourceReg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        switch(enClockSourceReg)
        {
        case SYSCTL_enALTCLK_SRC_PIOSC:
            enErrorReg = SYSCTL__enGetPIOSCFrequency(&uxFrequencyReg);
            break;
        case SYSCTL_enALTCLK_SRC_RTCOSC:
            uxFrequencyReg = 32768UL;
            break;
        case SYSCTL_enALTCLK_SRC_LFIOSC:
            enErrorReg = SYSCTL__enGetLFIOSCFrequency(&uxFrequencyReg);
            break;
        default:
            enErrorReg = SYSCTL_enERROR_VALUE;
            break;
        }
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *puxFrequencyArg = (UBase_t) uxFrequencyReg;
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetOscillatorFrequency(SYSCTL_nMODULE enModuleArg, UBase_t* puxFrequencyArg)
{
    UBase_t uxFrequencyReg;
    UBase_t uxDivisorReg;
    SYSCTL_nOSCCLK_SRC enClockSourceReg;
    SYSCTL_nERROR enErrorReg;

    uxDivisorReg = 0UL;
    uxFrequencyReg = 0UL;
    enClockSourceReg = SYSCTL_enOSCCLK_SRC_PIOSC;
    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) puxFrequencyArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enGetOscillatorClockSource(enModuleArg, &enClockSourceReg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enGetOscillatorClockDivisor(enModuleArg, &uxDivisorReg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        switch(enClockSourceReg)
        {
        case SYSCTL_enOSCCLK_SRC_PIOSC:
            enErrorReg = SYSCTL__enGetPIOSCFrequency(&uxFrequencyReg);
            break;
        case SYSCTL_enOSCCLK_SRC_RTCOSC:
            uxFrequencyReg = 32768UL;
            break;
        case SYSCTL_enOSCCLK_SRC_MOSC:
            enErrorReg = SYSCTL__enGetMOSCFrequency(&uxFrequencyReg);
            break;
        case SYSCTL_enOSCCLK_SRC_LFIOSC:
            enErrorReg = SYSCTL__enGetLFIOSCFrequency(&uxFrequencyReg);
            break;
        default:
            enErrorReg = SYSCTL_enERROR_VALUE;
            break;
        }
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        uxDivisorReg += 1UL;
        uxFrequencyReg /= uxDivisorReg;
        *puxFrequencyArg = (UBase_t) uxFrequencyReg;
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetOutputClockFrequency(SYSCTL_nMODULE enModuleArg, UBase_t* puxFrequencyArg)
{
    UBase_t uxFrequencyReg;
    UBase_t uxDivisorReg;
    SYSCTL_nOUTCLK_SRC enClockSourceReg;
    SYSCTL_nERROR enErrorReg;

    uxDivisorReg = 0UL;
    uxFrequencyReg = 0UL;
    enClockSourceReg = SYSCTL_enOUTCLK_SRC_SYSCLK;
    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) puxFrequencyArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enGetOutputClockSource(enModuleArg, &enClockSourceReg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enGetOutputClockDivisor(enModuleArg, &uxDivisorReg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        switch(enClockSourceReg)
        {
        case SYSCTL_enOUTCLK_SRC_PIOSC:
            enErrorReg = SYSCTL__enGetPIOSCFrequency(&uxFrequencyReg);
            break;
        case SYSCTL_enOUTCLK_SRC_MOSC:
            enErrorReg = SYSCTL__enGetMOSCFrequency(&uxFrequencyReg);
            break;
        case SYSCTL_enOUTCLK_SRC_SYSCLK:
            /** TODO **/
            break;
        default:
            enErrorReg = SYSCTL_enERROR_VALUE;
            break;
        }
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        uxDivisorReg += 1UL;
        uxFrequencyReg /= uxDivisorReg;
        *puxFrequencyArg = (UBase_t) uxFrequencyReg;
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetPLLClockFrequency(SYSCTL_nMODULE enModuleArg, UBase_t* puxFrequencyArg)
{
    UBase_t uxVCOFreqReg;
    UBase_t uxDivisorReg;
    SYSCTL_nERROR enErrorReg;

    uxVCOFreqReg = 0UL;
    uxDivisorReg = 0UL;
    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) puxFrequencyArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enGetVCOClockFrequency(enModuleArg, &uxVCOFreqReg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enGetPLLClockDivisor(enModuleArg, &uxDivisorReg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        uxDivisorReg += 1UL;
        uxVCOFreqReg /= uxDivisorReg;
        *puxFrequencyArg = (UBase_t) uxVCOFreqReg;
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetSystemClockFrequency(SYSCTL_nMODULE enModuleArg, UBase_t* puxFrequencyArg)
{
    UBase_t uxFrequencyReg;
    SYSCTL_nSYSCLK_SRC enClockSourceReg;
    SYSCTL_nERROR enErrorReg;

    enClockSourceReg = SYSCTL_enSYSCLK_SRC_OSCCLK;
    uxFrequencyReg = 0UL;
    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) puxFrequencyArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enGetSystemClockSource(enModuleArg, &enClockSourceReg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        if(SYSCTL_enSYSCLK_SRC_OSCCLK == enClockSourceReg)
        {
            enErrorReg = SYSCTL__enGetOscillatorFrequency(enModuleArg, &uxFrequencyReg);
        }
        else
        {
            enErrorReg = SYSCTL__enGetPLLClockFrequency(enModuleArg, &uxFrequencyReg);
        }
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *puxFrequencyArg = uxFrequencyReg;
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enSetSystemClock(SYSCTL_nMODULE enModuleArg, UBase_t uxSystemClockArg, const SYSCTL_CONFIG_t* pstClockConfig, UBase_t uxTimeoutArg)
{
    UBase_t uxTimeout;
    SYSCTL_nXTAL enCrystalReg;
    SYSCTL_nSYSCLK_SRC enSystemClkReg;
    SYSCTL_nOSCCLK_SRC enOscSoruceReg;
    SYSCTL_nSTATUS enStatusReg;
    SYSCTL_nERROR enErrorReg;

    enSystemClkReg = SYSCTL_enSYSCLK_SRC_OSCCLK;
    enOscSoruceReg = SYSCTL_enOSCCLK_SRC_PIOSC;
    enCrystalReg = SYSCTL_enXTAL_1MHZ;
    enErrorReg = SYSCTL_enERROR_OK;
    if((0UL == uxSystemClockArg) || (120000000UL < uxSystemClockArg))
    {
        enErrorReg = SYSCTL_enERROR_VALUE;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstClockConfig)
        {
            enErrorReg = SYSCTL_enERROR_POINTER;
        }
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enOscSoruceReg = pstClockConfig->enOscillatorSource;
        enSystemClkReg = pstClockConfig->enSystemClockSource;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        if(SYSCTL_enOSCCLK_SRC_MOSC == enOscSoruceReg)
        {
            enCrystalReg = pstClockConfig->enExternalCrystal;
        }
        if(SYSCTL_enOSCCLK_SRC_PIOSC == enOscSoruceReg)
        {
            enCrystalReg = SYSCTL_enXTAL_16MHZ;
        }
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        if(SYSCTL_enSYSCLK_SRC_PLLCLK ==  enSystemClkReg)
        {
            if((SYSCTL_enOSCCLK_SRC_MOSC != enOscSoruceReg) && (SYSCTL_enOSCCLK_SRC_PIOSC != enOscSoruceReg))
            {
                enErrorReg = SYSCTL_enERROR_VALUE;
            }
        }
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        if(SYSCTL_enOSCCLK_SRC_MOSC == enOscSoruceReg)
        {
            if(((UBase_t) SYSCTL_enXTAL_5MHZ  > enCrystalReg) ||
               ((UBase_t) SYSCTL_enXTAL_25MHZ < enCrystalReg) )
            {
                enErrorReg = SYSCTL_enERROR_VALUE;
            }else
            {
                if((UBase_t) SYSCTL_enXTAL_10MHZ <= enCrystalReg)
                {
                    enErrorReg = SYSCTL__enSetMOSCFrequencyRange(enModuleArg, SYSCTL_enMOSC_RANGE_HIGH);
                }
                else
                {
                    enErrorReg = SYSCTL__enSetMOSCFrequencyRange(enModuleArg, SYSCTL_enMOSC_RANGE_LOW);
                }

                if(SYSCTL_enERROR_OK == enErrorReg)
                {
                    enErrorReg = SYSCTL__enSetMOSCState(enModuleArg, SYSCTL_enSTATE_ENA);
                }
                if(SYSCTL_enERROR_OK == enErrorReg)
                {
                    enErrorReg = SYSCTL__enSetMOSCPowerState(enModuleArg, SYSCTL_enSTATE_ENA);
                }

                if(uxTimeoutArg == 0UL)
                {
                    do
                    {
                        enErrorReg = SYSCTL__enStatusInterruptSourceByNumber(enModuleArg, SYSCTL_enINT_MOSC_POWERUP, &enStatusReg);
                    }while((SYSCTL_enSTATUS_INACTIVE == enStatusReg) &&
                           (SYSCTL_enERROR_OK == enErrorReg));
                }
                else
                {
                    uxTimeout = uxTimeoutArg;
                    do
                    {
                        enErrorReg = SYSCTL__enStatusInterruptSourceByNumber(enModuleArg, SYSCTL_enINT_MOSC_POWERUP, &enStatusReg);
                        uxTimeout -= 1UL;
                    }while((SYSCTL_enSTATUS_INACTIVE == enStatusReg) &&
                           (SYSCTL_enERROR_OK == enErrorReg) &&
                           (0UL != uxTimeout));

                    if((SYSCTL_enSTATUS_INACTIVE == enStatusReg) &&
                       (SYSCTL_enERROR_OK == enErrorReg) &&
                       (0UL == uxTimeout))
                    {
                        enErrorReg = SYSCTL_enERROR_TIMEOUT;
                    }
                }
            }
        }
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enSetMemoryTiming(enModuleArg, 120000000UL);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enUpdateMemoryTiming(enModuleArg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enSetOscillatorClockSource(enModuleArg, SYSCTL_enOSCCLK_SRC_PIOSC);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enSetOscillatorClockDivisor(enModuleArg, 0UL);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enSetSystemClockSource(enModuleArg, SYSCTL_enSYSCLK_SRC_OSCCLK);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enSetMemoryTiming(enModuleArg, 16000000UL);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enUpdateMemoryTiming(enModuleArg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        if(SYSCTL_enSYSCLK_SRC_OSCCLK ==  enSystemClkReg)
        {
            UBase_t uxSystemFrequencyReg;
            UBase_t uxDivisorReg;
            uxSystemFrequencyReg = 0UL;

            enErrorReg = SYSCTL__enSetOscillatorClockSource(enModuleArg, enOscSoruceReg);
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL__enGetOscillatorFrequency(enModuleArg, &uxSystemFrequencyReg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                uxDivisorReg = uxSystemFrequencyReg;
                uxDivisorReg /= uxSystemClockArg;
                if(0UL != uxDivisorReg)
                {
                    uxSystemFrequencyReg = uxSystemFrequencyReg / uxDivisorReg;
                    uxDivisorReg -= 1UL;
                }
                enErrorReg = SYSCTL__enSetOscillatorClockDivisor(enModuleArg, uxDivisorReg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL__enSetMemoryTiming(enModuleArg, uxSystemFrequencyReg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL__enSetPLLClockState(enModuleArg, SYSCTL_enSTATE_DIS);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL__enUpdateMemoryTiming(enModuleArg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL__enSetSystemClockSource(enModuleArg, SYSCTL_enSYSCLK_SRC_OSCCLK);
            }
        }
        else
        {
            UBase_t uxSystemFrequencyReg;
            UBase_t uxPLLMIntegerReg;
            UBase_t uxPLLMFractionalReg;
            UBase_t uxPLLNValueReg;
            UBase_t uxPLLQValueReg;
            UBase_t uxPLLDivisorReg;

            SYSCTL_nSTATE enPllState;
            SYSCTL_nVCO enVcoRangeReg;
            enVcoRangeReg = pstClockConfig->enVCORange;


            uxPLLDivisorReg = 0UL;
            uxPLLMIntegerReg = 0UL;
            uxPLLMFractionalReg = 0UL;
            uxPLLNValueReg = 0UL;
            uxPLLQValueReg = 0UL;
            uxSystemFrequencyReg = 0UL;
            enPllState = SYSCTL_enSTATE_DIS;
            enErrorReg = SYSCTL_enGetDivValueByVCOAndXTAL(enVcoRangeReg, enCrystalReg, SYSCTL_PLL_M_INT_INDEX, &uxPLLMIntegerReg);
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL_enGetDivValueByVCOAndXTAL(enVcoRangeReg, enCrystalReg, SYSCTL_PLL_M_FRAC_INDEX, &uxPLLMFractionalReg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL_enGetDivValueByVCOAndXTAL(enVcoRangeReg, enCrystalReg, SYSCTL_N_INDEX, &uxPLLNValueReg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL_enGetDivValueByVCOAndXTAL(enVcoRangeReg, enCrystalReg, SYSCTL_Q_INDEX, &uxPLLQValueReg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL__enSetPLLClockIntegerValue_M(enModuleArg, uxPLLMIntegerReg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL__enSetPLLClockFractionalValue_M(enModuleArg, uxPLLMFractionalReg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL__enSetPLLClockValue_N(enModuleArg, uxPLLNValueReg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL__enSetPLLClockValue_Q(enModuleArg, uxPLLQValueReg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL__enSetPLLClockSource(enModuleArg, enOscSoruceReg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL__enGetPLLClockFrequency(enModuleArg, &uxSystemFrequencyReg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                uxPLLDivisorReg  = uxSystemFrequencyReg;
                uxPLLDivisorReg /= uxSystemClockArg;
                if(0UL != uxPLLDivisorReg)
                {
                    uxSystemFrequencyReg /= uxPLLDivisorReg;
                    uxPLLDivisorReg -= 1UL;
                }
                enErrorReg = SYSCTL__enSetMemoryTiming(enModuleArg, uxSystemFrequencyReg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL__enGetPLLClockState(enModuleArg, &enPllState);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                if(SYSCTL_enSTATE_DIS == enPllState)
                {
                    enErrorReg = SYSCTL__enSetPLLClockState(enModuleArg, SYSCTL_enSTATE_ENA);
                }
                else
                {
                    enErrorReg = SYSCTL__enUpdatePLLValues(enModuleArg);
                }
            }

            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                SYSCTL_nBOOLEAN enPllLocked;
                enPllLocked = SYSCTL_enFALSE;
                if(uxTimeoutArg == 0UL)
                {
                    do
                    {
                        enErrorReg = SYSCTL__enIsPLLClockLocked(enModuleArg, &enPllLocked);
                    }while((SYSCTL_enFALSE == enPllLocked) &&
                           (SYSCTL_enERROR_OK == enErrorReg));
                }
                else
                {
                    uxTimeout = uxTimeoutArg;
                    do
                    {
                        enErrorReg = SYSCTL__enIsPLLClockLocked(enModuleArg, &enPllLocked);
                        uxTimeout -= 1UL;
                    }while((SYSCTL_enFALSE == enPllLocked) &&
                           (SYSCTL_enERROR_OK == enErrorReg) &&
                           (0UL != uxTimeout));

                    if((SYSCTL_enFALSE == enPllLocked) &&
                       (SYSCTL_enERROR_OK == enErrorReg) &&
                       (0UL == uxTimeout))
                    {
                        enErrorReg = SYSCTL_enERROR_TIMEOUT;
                    }
                }
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL__enSetPLLClockDivisor(enModuleArg, uxPLLDivisorReg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL__enUpdateMemoryTiming(enModuleArg);
            }
            if(SYSCTL_enERROR_OK == enErrorReg)
            {
                enErrorReg = SYSCTL__enSetSystemClockSource(enModuleArg, SYSCTL_enSYSCLK_SRC_PLLCLK);
            }
        }
    }

    return (enErrorReg);
}
