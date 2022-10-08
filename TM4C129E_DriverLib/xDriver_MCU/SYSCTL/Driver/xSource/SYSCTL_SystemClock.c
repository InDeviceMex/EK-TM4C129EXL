/*
 * SYSCTL_SystemClock.c
 *
 *  Created on: 15 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_SystemClock.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_MemoryTiming.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

#define SYSCTL_VCO_INDEXMAX ((UBase_t) 2UL)
#define SYSCTL_XTAL_MAX ((UBase_t) 25000000UL)
#define SYSCTL_FREQXTAL_INDEXMAX ((UBase_t) 27UL)
#define SYSCTL_TIMEOUT ((UBase_t) 1000000UL)

#define SYSCTL_MINT_INDEX (0UL)
#define SYSCTL_MFRAC_INDEX (1UL)
#define SYSCTL_N_INDEX (2UL)
#define SYSCTL_Q_INDEX (3UL)
#define SYSCTL_DIV_INDEXMAX (4UL)

static UBase_t SYSCTL_uxOscSourceFreq = 16000000UL;
static UBase_t SYSCTL_uxSystemClock = 16000000UL;

static UBase_t SYSCTL_uxGetFreqXtal(UBase_t uxIndex);
static UBase_t SYSCTL_uxGetFreqVCO(UBase_t uxIndex);
static UBase_t SYSCTL_uxGetXTALtoVCO(UBase_t uxIndexVco,
                                       UBase_t uxIndexXtal,
                                       UBase_t uxIndexDiv);
static UBase_t SYSCTL_uxGetPLLClock(UBase_t uxOscSourceFreq);

static UBase_t SYSCTL_uxGetXTALtoVCO(UBase_t uxIndexVco,
                                       UBase_t uxIndexXtal,
                                       UBase_t uxIndexDiv)
{
    const UBase_t uxXTALtoVCO[SYSCTL_VCO_INDEXMAX]
                               [SYSCTL_FREQXTAL_INDEXMAX]
                                [SYSCTL_DIV_INDEXMAX] =
    {
        {/* VCO 320 MHz */
            { 64UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 64UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 64UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 64UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 64UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 64UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 64UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 64UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 64UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 64UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* 5 MHz */
            { 62UL, 512UL, (1UL - 1UL), (2UL - 1UL) },     /* 5.12 MHz */
            { 160UL, 0UL, (3UL - 1UL), (2UL - 1UL) },     /* 6 MHz */
            { 52UL, 85UL, (1UL - 1UL), (2UL - 1UL) },     /* 6.144 MHz */
            { 43UL, 412UL, (1UL - 1UL), (2UL - 1UL) },     /* 7.3728 MHz */
            { 40UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* 8 MHz */
            { 39UL, 64UL, (1UL - 1UL), (2UL - 1UL) },     /* 8.192 MHz */
            { 32UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* 10 MHz */
            { 80UL, 0UL, (3UL - 1UL), (2UL - 1UL) },     /* 12 MHz */
            { 26UL, 43UL, (1UL - 1UL), (2UL - 1UL) },     /* 12.288 MHz */
            { 23UL, 613UL, (1UL - 1UL), (2UL - 1UL) },     /* 13.56 MHz */
            { 22UL, 358UL, (1UL - 1UL), (2UL - 1UL) },     /* 14.318180 MHz */
            { 20UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* 16 MHz */
            { 19UL, 544UL, (1UL - 1UL), (2UL - 1UL) },     /* 16.384 MHz */
            { 160UL, 0UL, (9UL - 1UL), (2UL - 1UL) },     /* 18 MHz */
            { 16UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* 20 MHz */
            { 40UL, 0UL, (3UL - 1UL), (2UL - 1UL) },     /* 24 MHz */
            { 64UL, 0UL, (5UL - 1UL), (2UL - 1UL) },     /* 25 MHz */
        },
        {/* VCO 480 MHz */
            { 96UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 96UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 96UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 96UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 96UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 96UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 96UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 96UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 96UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* Inv */
            { 96UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* 5 MHz */
            { 93UL, 768UL, (1UL - 1UL), (2UL - 1UL) },     /* 5.12 MHz */
            { 80UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* 6 MHz */
            { 78UL, 128UL, (1UL - 1UL), (2UL - 1UL) },     /* 6.144 MHz */
            { 65UL, 107UL, (1UL - 1UL), (2UL - 1UL) },     /* 7.3728 MHz */
            { 60UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* 8 MHz */
            { 58UL, 608UL, (1UL - 1UL), (2UL - 1UL) },     /* 8.192 MHz */
            { 48UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* 10 MHz */
            { 40UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* 12 MHz */
            { 39UL, 64UL, (1UL - 1UL), (2UL - 1UL) },     /* 12.288 MHz */
            { 35UL, 408UL, (1UL - 1UL), (2UL - 1UL) },     /* 13.56 MHz */
            { 33UL, 536UL, (1UL - 1UL), (2UL - 1UL) },     /* 14.318180 MHz */
            { 30UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* 16 MHz */
            { 29UL, 304UL, (1UL - 1UL), (2UL - 1UL) },     /* 16.384 MHz */
            { 80UL, 0UL, (3UL - 1UL), (2UL - 1UL) },     /* 18 MHz */
            { 24UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* 20 MHz */
            { 20UL, 0UL, (1UL - 1UL), (2UL - 1UL) },     /* 24 MHz */
            { 96UL, 0UL, (5UL - 1UL), (2UL - 1UL) },     /* 25 MHz */
        },
    };
    UBase_t uxReturn = 0UL;
    if ((SYSCTL_FREQXTAL_INDEXMAX > uxIndexXtal) &&
        (SYSCTL_VCO_INDEXMAX > uxIndexVco) &&
        (SYSCTL_DIV_INDEXMAX > uxIndexDiv))
    {
        uxReturn = uxXTALtoVCO[uxIndexVco][uxIndexXtal][uxIndexDiv];
    }
    return (uxReturn);
}

static UBase_t SYSCTL_uxGetFreqXtal(UBase_t uxIndex)
{
    const UBase_t uxFreqXtal [SYSCTL_FREQXTAL_INDEXMAX]=
    {
      1000000UL, 1843200UL, 2000000UL, 2457600UL, 3579545UL, 3686400UL,
      4000000UL ,4096000UL ,4915200UL ,5000000UL ,5120000UL ,6000000UL,
      6144000UL ,7372800UL ,8000000UL ,8192000UL ,10000000UL,12000000UL,
      12288000UL,13560000UL,14318180UL,16000000UL,16384000UL,18000000UL,
      20000000UL,24000000UL,25000000UL
    };
    UBase_t uxReturn = 0UL;
    if (SYSCTL_FREQXTAL_INDEXMAX > uxIndex)
    {
        uxReturn = uxFreqXtal[uxIndex];
    }
    return (uxReturn);
}

static UBase_t SYSCTL_uxGetFreqVCO(UBase_t uxIndex)
{
    const UBase_t uxFreqVCO[SYSCTL_VCO_INDEXMAX] =
    {
        160000000,                              /* VCO 320*/
        240000000,                              /* VCO 480 */
    };
    UBase_t uxReturn = 0UL;
    if (SYSCTL_VCO_INDEXMAX > uxIndex)
    {
        uxReturn = uxFreqVCO[uxIndex];
    }
    return (uxReturn);
}

SYSCTL_nSTATUS SYSCTL__enGetVCOClock(UBase_t *puxVCOFrequency)
{
    SYSCTL_nSTATUS enStatus = SYSCTL_enERROR;
    UBase_t uxOscBypass = SYSCTL_RSCLKCFG_USEPLL_OSC;
    UBase_t uxPInt = 0UL;
    UBase_t uxPIntMult = 0UL;
    UBase_t uxPFract = 0UL;
    UBase_t uxPFractMult = 0UL;
    UBase_t uxN = 0UL;
    UBase_t uxQ = 0UL;
    UBase_t uxNQ = 0UL;
    UBase_t uxTempVCO;

    uxOscBypass = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET,
                                   SYSCTL_RSCLKCFG_USEPLL_MASK, SYSCTL_RSCLKCFG_R_USEPLL_BIT);
    if(0UL != (UBase_t) puxVCOFrequency)
    {

        *puxVCOFrequency = 0UL;
        if(SYSCTL_RSCLKCFG_USEPLL_PLL == uxOscBypass)
        {
            uxN = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ1_OFFSET,
                                        SYSCTL_PLLFREQ1_N_MASK, SYSCTL_PLLFREQ1_R_N_BIT);
            uxN += 1UL;
            uxQ = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ1_OFFSET,
                                        SYSCTL_PLLFREQ1_Q_MASK, SYSCTL_PLLFREQ1_R_Q_BIT);
            uxQ += 1UL;

            uxPInt = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                                   SYSCTL_PLLFREQ0_MINT_MASK, SYSCTL_PLLFREQ0_R_MINT_BIT);
            uxPFract = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                                 SYSCTL_PLLFREQ0_MFRAC_MASK, SYSCTL_PLLFREQ0_R_MFRAC_BIT);

            uxPIntMult = SYSCTL_uxOscSourceFreq * uxPInt;
            uxPFractMult = SYSCTL_uxOscSourceFreq * uxPFract;
            uxPFractMult /= 1024UL;
            uxNQ = uxN * uxQ;

            uxTempVCO = uxPIntMult;
            uxTempVCO += uxPFractMult;
            uxTempVCO /= uxNQ;

            *puxVCOFrequency =  (UBase_t) uxTempVCO;
            enStatus = SYSCTL_enOK;
        }
    }
    return (enStatus);
}

static UBase_t SYSCTL_uxGetPLLClock(UBase_t uxOscSourceFreq)
{
    UBase_t uxResult = 0UL;
    UBase_t uxF1 = 0UL;
    UBase_t uxF2 = 0UL;
    UBase_t uxPInt = 0UL;
    UBase_t uxPFract = 0UL;
    UBase_t uxQ = 0UL;
    UBase_t uxN = 0UL;
    UBase_t uxAux = 0UL;

    uxN = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ1_OFFSET,
                                SYSCTL_PLLFREQ1_N_MASK, SYSCTL_PLLFREQ1_R_N_BIT);
    uxN += 1UL;
    uxQ = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ1_OFFSET,
                                SYSCTL_PLLFREQ1_Q_MASK, SYSCTL_PLLFREQ1_R_Q_BIT);
    uxQ += 1UL;

    uxPInt = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                                   SYSCTL_PLLFREQ0_MINT_MASK, SYSCTL_PLLFREQ0_R_MINT_BIT);
    uxPFract = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                                     SYSCTL_PLLFREQ0_MFRAC_MASK, SYSCTL_PLLFREQ0_R_MFRAC_BIT);

    SYSCTL_uxOscSourceFreq /= uxN;
    uxF1 = uxPFract / 32UL;
    uxF2 = uxPFract - (uxF1 * 32UL);

    uxResult = SYSCTL_uxOscSourceFreq * uxPInt;
    uxAux = SYSCTL_uxOscSourceFreq * uxF1;
    uxAux /= 32UL;
    uxResult += uxAux;

    uxAux = SYSCTL_uxOscSourceFreq;
    uxAux *= (UBase_t) uxF2;
    uxAux /= 1024UL;
    uxResult += uxAux;

    uxResult /= uxQ;

    return (uxResult);
}

UBase_t SYSCTL__uxGetSystemClock(void)
{
    return (SYSCTL_uxSystemClock);
}

SYSCTL_nSTATUS SYSCTL__enSetSystemClock(UBase_t uxSystemClock,
                                        SYSCTL_CONFIG_t stClockConfig)
{
    SYSCTL_nSTATUS enStatus = SYSCTL_enOK;
    SYSCTL_nXTAL enExtenalCrystal = SYSCTL_enXTAL_5MHZ;
    SYSCTL_nOSC enOscSourceReg = SYSCTL_enOSC_MOSC;
    SYSCTL_nBYPASS enOscBypassReg = SYSCTL_enPLL;
    SYSCTL_nVCO enVcoRangeReg = SYSCTL_enVCO_320MHZ;
    UBase_t uxRunModeConfigReg = 0UL;
    UBase_t uxMainOscRangeReg = SYSCTL_MOSCCTL_R_OSCRNG_LOW;
    UBase_t uxTimeout = SYSCTL_TIMEOUT;
    UBase_t uxMainOscStatusReg = SYSCTL_RIS_MOSCPUPRIS_NOACTIVE;
    UBase_t uxSysDiv = 0UL;
    UBase_t uxSysMINT = 0UL;
    UBase_t uxSysMFRAC = 0UL;
    UBase_t uxSysN = 0UL;
    UBase_t uxPllState = SYSCTL_PLLFREQ0_PLLPWR_OFF;

    enOscSourceReg = stClockConfig.enOscSource;
    switch(enOscSourceReg)
    {
    case SYSCTL_enOSC_PIOSC:
        enExtenalCrystal = SYSCTL_enXTAL_16MHZ;
        SYSCTL_uxOscSourceFreq = 16000000UL;

        uxRunModeConfigReg = SYSCTL_RSCLKCFG_R_OSCSRC_PIOSC |
                              SYSCTL_RSCLKCFG_R_PLLSRC_PIOSC;
        break;
    case SYSCTL_enOSC_30KHZ:
        SYSCTL_uxOscSourceFreq = 30000UL;
        uxRunModeConfigReg = SYSCTL_RSCLKCFG_R_OSCSRC_LFIOSC;
        break;
    case SYSCTL_enOSC_EXT_32KHZ:
        SYSCTL_uxOscSourceFreq = 32768UL;
        uxRunModeConfigReg = SYSCTL_RSCLKCFG_R_OSCSRC_RTCOSC;
        break;
    case SYSCTL_enOSC_MOSC:
        enExtenalCrystal = stClockConfig.enExternalCrystal;

        enStatus = SYSCTL_enERROR;
        if(((UBase_t) SYSCTL_enXTAL_5MHZ <= (UBase_t) enExtenalCrystal) &&
           ((UBase_t) SYSCTL_enXTAL_25MHZ >= (UBase_t) enExtenalCrystal))
        {
            SYSCTL_uxOscSourceFreq = SYSCTL_uxGetFreqXtal((UBase_t) enExtenalCrystal);
            uxRunModeConfigReg = SYSCTL_RSCLKCFG_R_OSCSRC_MOSC |
                                  SYSCTL_RSCLKCFG_R_PLLSRC_MOSC;

            if((UBase_t) SYSCTL_enXTAL_10MHZ <= (UBase_t) enExtenalCrystal)
            {
                uxMainOscRangeReg = SYSCTL_MOSCCTL_R_OSCRNG_HIGH;
            }

            MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_MOSCCTL_OFFSET, uxMainOscRangeReg,
                                SYSCTL_MOSCCTL_R_OSCRNG_MASK | SYSCTL_MOSCCTL_R_PWRDN_MASK |
                                SYSCTL_MOSCCTL_R_NOXTAL_MASK,
                                0UL);
            do
            {
                uxTimeout--;
                uxMainOscStatusReg = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_RIS_OFFSET,
                                                           SYSCTL_RIS_MOSCPUPRIS_MASK,
                                                           SYSCTL_RIS_R_MOSCPUPRIS_BIT);
            }while((SYSCTL_RIS_MOSCPUPRIS_NOACTIVE == uxMainOscStatusReg) &&
                   (0UL != uxTimeout));

            if(0UL != uxTimeout){ enStatus = SYSCTL_enOK; }
        }
        break;
    default:
        enStatus = SYSCTL_enERROR;
        break;
    }

    if((SYSCTL_enOK == enStatus) && (0UL != uxSystemClock))
    {
        enOscBypassReg = stClockConfig.enOscBypass;
        if(SYSCTL_enPLL == enOscBypassReg)
        {
            enStatus = SYSCTL_enERROR;
            if((SYSCTL_enOSC_MOSC == enOscSourceReg) ||
               (SYSCTL_enOSC_PIOSC == enOscSourceReg))
            {
                enVcoRangeReg = stClockConfig.enVCORange;
                SYSCTL__vSetMemoryTiming(SYSCTL_XTAL_MAX);
                MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET,
                                    SYSCTL_RSCLKCFG_R_MEMTIMU_UPDATE,
                                    SYSCTL_RSCLKCFG_R_MEMTIMU_MASK |
                                    SYSCTL_RSCLKCFG_R_PSYSDIV_MASK |
                                    SYSCTL_RSCLKCFG_R_OSCSRC_MASK  |
                                    SYSCTL_RSCLKCFG_R_PLLSRC_MASK  |
                                    SYSCTL_RSCLKCFG_R_USEPLL_MASK, 0UL);
                uxSysDiv = SYSCTL_uxGetFreqVCO((UBase_t) enVcoRangeReg);
                uxSysDiv += uxSystemClock;
                uxSysDiv -= 1UL;
                uxSysDiv /= uxSystemClock;

                MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET, uxRunModeConfigReg,
                    SYSCTL_RSCLKCFG_R_OSCSRC_MASK | SYSCTL_RSCLKCFG_R_PLLSRC_MASK, 0UL);
                uxSysMINT = SYSCTL_uxGetXTALtoVCO((UBase_t) enVcoRangeReg,
                                                    (UBase_t) enExtenalCrystal,
                                                    SYSCTL_MINT_INDEX );
                uxSysMFRAC = SYSCTL_uxGetXTALtoVCO((UBase_t) enVcoRangeReg,
                                                     (UBase_t) enExtenalCrystal,
                                                     SYSCTL_MFRAC_INDEX );
                uxSysN = SYSCTL_uxGetXTALtoVCO((UBase_t) enVcoRangeReg,
                                                 (UBase_t) enExtenalCrystal,
                                                 SYSCTL_N_INDEX );


                MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_PLLFREQ1_OFFSET,
                            uxSysN, SYSCTL_PLLFREQ1_N_MASK, SYSCTL_PLLFREQ1_R_N_BIT);
                MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_PLLFREQ1_OFFSET,
                        (uxSysDiv - 1UL), SYSCTL_PLLFREQ1_Q_MASK, SYSCTL_PLLFREQ1_R_Q_BIT);

                MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                        uxSysMINT, SYSCTL_PLLFREQ0_MINT_MASK, SYSCTL_PLLFREQ0_R_MINT_BIT);
                MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                    uxSysMFRAC, SYSCTL_PLLFREQ0_MFRAC_MASK, SYSCTL_PLLFREQ0_R_MFRAC_BIT);

                uxSystemClock = SYSCTL_uxGetPLLClock(SYSCTL_uxOscSourceFreq);
                uxSystemClock /= 2UL;
                SYSCTL__vSetMemoryTiming(uxSystemClock);

                uxPllState = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                               SYSCTL_PLLFREQ0_PLLPWR_MASK, SYSCTL_PLLFREQ0_R_PLLPWR_BIT);
                if(SYSCTL_PLLFREQ0_PLLPWR_ON == uxPllState)
                {
                    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET,
                    SYSCTL_RSCLKCFG_NEWFREQ_UPDATE,
                    SYSCTL_RSCLKCFG_NEWFREQ_MASK,
                    SYSCTL_RSCLKCFG_R_NEWFREQ_BIT);
                }
                else
                {
                    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                    SYSCTL_PLLFREQ0_PLLPWR_ON,
                    SYSCTL_PLLFREQ0_PLLPWR_MASK,
                    SYSCTL_PLLFREQ0_R_PLLPWR_BIT);
                }
                uxTimeout = SYSCTL_TIMEOUT;
                do
                {
                    uxTimeout--;
                    uxPllState = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_PLLSTAT_OFFSET,
                                       SYSCTL_PLLSTAT_LOCK_MASK, SYSCTL_PLLSTAT_R_LOCK_BIT);
                }while((SYSCTL_PLLSTAT_LOCK_NOLOCK == uxPllState) && (0UL != uxTimeout));

                if(0UL != uxTimeout)
                {
                    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET, 1UL,
                                        SYSCTL_RSCLKCFG_PSYSDIV_MASK,
                                        SYSCTL_RSCLKCFG_R_PSYSDIV_BIT);

                    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET,
                            uxRunModeConfigReg,
                            SYSCTL_RSCLKCFG_R_PLLSRC_MASK | SYSCTL_RSCLKCFG_R_OSCSRC_MASK,
                            0UL);

                    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET,
                            SYSCTL_RSCLKCFG_MEMTIMU_UPDATE,
                            SYSCTL_RSCLKCFG_MEMTIMU_MASK,
                            SYSCTL_RSCLKCFG_R_MEMTIMU_BIT);

                    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET,
                            SYSCTL_RSCLKCFG_USEPLL_PLL,
                            SYSCTL_RSCLKCFG_USEPLL_MASK,
                            SYSCTL_RSCLKCFG_R_USEPLL_BIT);

                    SYSCTL_uxSystemClock = uxSystemClock;
                    enStatus = SYSCTL_enOK;
                }
            }
        }
        else
        {
            SYSCTL__vSetMemoryTiming(16000000UL);
            MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                                SYSCTL_PLLFREQ0_PLLPWR_OFF,
                                SYSCTL_PLLFREQ0_PLLPWR_MASK,
                                SYSCTL_PLLFREQ0_R_PLLPWR_BIT);
            MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET,
                                SYSCTL_RSCLKCFG_R_MEMTIMU_UPDATE,
                                SYSCTL_RSCLKCFG_R_MEMTIMU_MASK | SYSCTL_RSCLKCFG_R_OSYSDIV_MASK |
                                SYSCTL_RSCLKCFG_R_OSCSRC_MASK  | SYSCTL_RSCLKCFG_R_USEPLL_MASK ,
                                0UL);
            uxSysDiv = SYSCTL_uxOscSourceFreq;
            uxSysDiv /= uxSystemClock;
            if(0UL != uxSysDiv)
            {
                uxSysDiv -= 1UL;
            }
            uxSystemClock = SYSCTL_uxOscSourceFreq;
            uxSystemClock /= (uxSysDiv + 1UL);

            SYSCTL__vSetMemoryTiming(uxSystemClock);
            MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET, uxSysDiv,
                        SYSCTL_RSCLKCFG_OSYSDIV_MASK, SYSCTL_RSCLKCFG_R_OSYSDIV_BIT);
            MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET, uxRunModeConfigReg,
                        SYSCTL_RSCLKCFG_R_OSCSRC_MASK | SYSCTL_RSCLKCFG_R_PLLSRC_MASK, 0UL);
            MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET,
                        SYSCTL_RSCLKCFG_MEMTIMU_UPDATE,
                        SYSCTL_RSCLKCFG_MEMTIMU_MASK,
                        SYSCTL_RSCLKCFG_R_MEMTIMU_BIT);
            SYSCTL_uxSystemClock = uxSystemClock;
        }
    }

    return (enStatus);
}
