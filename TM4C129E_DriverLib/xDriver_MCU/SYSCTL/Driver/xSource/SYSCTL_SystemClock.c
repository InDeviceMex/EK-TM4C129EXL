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

#define SYSCTL_VCO_INDEXMAX ((uint32_t) 2UL)
#define SYSCTL_XTAL_MAX ((uint32_t) 25000000UL)
#define SYSCTL_FREQXTAL_INDEXMAX ((uint32_t) 27UL)
#define SYSCTL_TIMEOUT ((uint32_t) 1000000UL)

#define SYSCTL_MINT_INDEX (0UL)
#define SYSCTL_MFRAC_INDEX (1UL)
#define SYSCTL_N_INDEX (2UL)
#define SYSCTL_Q_INDEX (3UL)
#define SYSCTL_DIV_INDEXMAX (4UL)

static uint32_t SYSCTL_u32OscSourceFreq = 16000000UL;
static uint32_t SYSCTL_u32SystemClock = 16000000UL;

static uint32_t SYSCTL_u32GetFreqXtal(uint32_t u32Index);
static uint32_t SYSCTL_u32GetFreqVCO(uint32_t u32Index);
static uint32_t SYSCTL_u32GetXTALtoVCO(uint32_t u32IndexVco,
                                       uint32_t u32IndexXtal,
                                       uint32_t u32IndexDiv);
static uint32_t SYSCTL_u32GetPLLClock(uint32_t u32OscSourceFreq);

static uint32_t SYSCTL_u32GetXTALtoVCO(uint32_t u32IndexVco,
                                       uint32_t u32IndexXtal,
                                       uint32_t u32IndexDiv)
{
    const uint32_t u32XTALtoVCO[SYSCTL_VCO_INDEXMAX]
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
    uint32_t u32Return = 0UL;
    if ((SYSCTL_FREQXTAL_INDEXMAX > u32IndexXtal) &&
        (SYSCTL_VCO_INDEXMAX > u32IndexVco) &&
        (SYSCTL_DIV_INDEXMAX > u32IndexDiv))
    {
        u32Return = u32XTALtoVCO[u32IndexVco][u32IndexXtal][u32IndexDiv];
    }
    return (u32Return);
}

static uint32_t SYSCTL_u32GetFreqXtal(uint32_t u32Index)
{
    const uint32_t u32FreqXtal [SYSCTL_FREQXTAL_INDEXMAX]=
    {
      1000000UL, 1843200UL, 2000000UL, 2457600UL, 3579545UL, 3686400UL,
      4000000UL ,4096000UL ,4915200UL ,5000000UL ,5120000UL ,6000000UL,
      6144000UL ,7372800UL ,8000000UL ,8192000UL ,10000000UL,12000000UL,
      12288000UL,13560000UL,14318180UL,16000000UL,16384000UL,18000000UL,
      20000000UL,24000000UL,25000000UL
    };
    uint32_t u32Return = 0UL;
    if (SYSCTL_FREQXTAL_INDEXMAX > u32Index)
    {
        u32Return = u32FreqXtal[u32Index];
    }
    return (u32Return);
}

static uint32_t SYSCTL_u32GetFreqVCO(uint32_t u32Index)
{
    const uint32_t u32FreqVCO[SYSCTL_VCO_INDEXMAX] =
    {
        160000000,                              /* VCO 320*/
        240000000,                              /* VCO 480 */
    };
    uint32_t u32Return = 0UL;
    if (SYSCTL_VCO_INDEXMAX > u32Index)
    {
        u32Return = u32FreqVCO[u32Index];
    }
    return (u32Return);
}

SYSCTL_nSTATUS SYSCTL__enGetVCOClock(uint32_t *pu32VCOFrequency)
{
    SYSCTL_nSTATUS enStatus = SYSCTL_enERROR;
    uint32_t u32OscBypass = SYSCTL_RSCLKCFG_USEPLL_OSC;
    uint32_t u32PInt = 0UL;
    uint32_t u32PIntMult = 0UL;
    uint32_t u32PFract = 0UL;
    uint32_t u32PFractMult = 0UL;
    uint32_t u32N = 0UL;
    uint32_t u32Q = 0UL;
    uint32_t u32NQ = 0UL;
    uint32_t u32TempVCO;

    u32OscBypass = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET,
                                   SYSCTL_RSCLKCFG_USEPLL_MASK, SYSCTL_RSCLKCFG_R_USEPLL_BIT);
    if(0UL != (uint32_t) pu32VCOFrequency)
    {

        *pu32VCOFrequency = 0UL;
        if(SYSCTL_RSCLKCFG_USEPLL_PLL == u32OscBypass)
        {
            u32N = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ1_OFFSET,
                                        SYSCTL_PLLFREQ1_N_MASK, SYSCTL_PLLFREQ1_R_N_BIT);
            u32N += 1UL;
            u32Q = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ1_OFFSET,
                                        SYSCTL_PLLFREQ1_Q_MASK, SYSCTL_PLLFREQ1_R_Q_BIT);
            u32Q += 1UL;

            u32PInt = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                                   SYSCTL_PLLFREQ0_MINT_MASK, SYSCTL_PLLFREQ0_R_MINT_BIT);
            u32PFract = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                                 SYSCTL_PLLFREQ0_MFRAC_MASK, SYSCTL_PLLFREQ0_R_MFRAC_BIT);

            u32PIntMult = SYSCTL_u32OscSourceFreq * u32PInt;
            u32PFractMult = SYSCTL_u32OscSourceFreq * u32PFract;
            u32PFractMult /= 1024UL;
            u32NQ = u32N * u32Q;

            u32TempVCO = u32PIntMult;
            u32TempVCO += u32PFractMult;
            u32TempVCO /= u32NQ;

            *pu32VCOFrequency =  (uint32_t) u32TempVCO;
            enStatus = SYSCTL_enOK;
        }
    }
    return (enStatus);
}

static uint32_t SYSCTL_u32GetPLLClock(uint32_t u32OscSourceFreq)
{
    uint32_t u32Result = 0UL;
    uint32_t u32F1 = 0UL;
    uint32_t u32F2 = 0UL;
    uint32_t u32PInt = 0UL;
    uint32_t u32PFract = 0UL;
    uint32_t u32Q = 0UL;
    uint32_t u32N = 0UL;
    uint32_t u32Aux = 0UL;

    u32N = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ1_OFFSET,
                                SYSCTL_PLLFREQ1_N_MASK, SYSCTL_PLLFREQ1_R_N_BIT);
    u32N += 1UL;
    u32Q = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ1_OFFSET,
                                SYSCTL_PLLFREQ1_Q_MASK, SYSCTL_PLLFREQ1_R_Q_BIT);
    u32Q += 1UL;

    u32PInt = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                                   SYSCTL_PLLFREQ0_MINT_MASK, SYSCTL_PLLFREQ0_R_MINT_BIT);
    u32PFract = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                                     SYSCTL_PLLFREQ0_MFRAC_MASK, SYSCTL_PLLFREQ0_R_MFRAC_BIT);

    SYSCTL_u32OscSourceFreq /= u32N;
    u32F1 = u32PFract / 32UL;
    u32F2 = u32PFract - (u32F1 * 32UL);

    u32Result = SYSCTL_u32OscSourceFreq * u32PInt;
    u32Aux = SYSCTL_u32OscSourceFreq * u32F1;
    u32Aux /= 32UL;
    u32Result += u32Aux;

    u32Aux = SYSCTL_u32OscSourceFreq;
    u32Aux *= (uint32_t) u32F2;
    u32Aux /= 1024UL;
    u32Result += u32Aux;

    u32Result /= u32Q;

    return (u32Result);
}

uint32_t SYSCTL__u32GetSystemClock(void)
{
    return (SYSCTL_u32SystemClock);
}

SYSCTL_nSTATUS SYSCTL__enSetSystemClock(uint32_t u32SystemClock,
                                        SYSCTL_CONFIG_t stClockConfig)
{
    SYSCTL_nSTATUS enStatus = SYSCTL_enOK;
    SYSCTL_nXTAL enExtenalCrystal = SYSCTL_enXTAL_5MHZ;
    SYSCTL_nOSC enOscSourceReg = SYSCTL_enOSC_MOSC;
    SYSCTL_nBYPASS enOscBypassReg = SYSCTL_enPLL;
    SYSCTL_nVCO enVcoRangeReg = SYSCTL_enVCO_320MHZ;
    uint32_t u32RunModeConfigReg = 0UL;
    uint32_t u32MainOscRangeReg = SYSCTL_MOSCCTL_R_OSCRNG_LOW;
    uint32_t u32Timeout = SYSCTL_TIMEOUT;
    uint32_t u32MainOscStatusReg = SYSCTL_RIS_MOSCPUPRIS_NOACTIVE;
    uint32_t u32SysDiv = 0UL;
    uint32_t u32SysMINT = 0UL;
    uint32_t u32SysMFRAC = 0UL;
    uint32_t u32SysN = 0UL;
    uint32_t u32PllState = SYSCTL_PLLFREQ0_PLLPWR_OFF;

    enOscSourceReg = stClockConfig.enOscSource;
    switch(enOscSourceReg)
    {
    case SYSCTL_enOSC_PIOSC:
        enExtenalCrystal = SYSCTL_enXTAL_16MHZ;
        SYSCTL_u32OscSourceFreq = 16000000UL;

        u32RunModeConfigReg = SYSCTL_RSCLKCFG_R_OSCSRC_PIOSC |
                              SYSCTL_RSCLKCFG_R_PLLSRC_PIOSC;
        break;
    case SYSCTL_enOSC_30KHZ:
        SYSCTL_u32OscSourceFreq = 30000UL;
        u32RunModeConfigReg = SYSCTL_RSCLKCFG_R_OSCSRC_LFIOSC;
        break;
    case SYSCTL_enOSC_EXT_32KHZ:
        SYSCTL_u32OscSourceFreq = 32768UL;
        u32RunModeConfigReg = SYSCTL_RSCLKCFG_R_OSCSRC_RTCOSC;
        break;
    case SYSCTL_enOSC_MOSC:
        enExtenalCrystal = stClockConfig.enExternalCrystal;

        enStatus = SYSCTL_enERROR;
        if(((uint32_t) SYSCTL_enXTAL_5MHZ <= (uint32_t) enExtenalCrystal) &&
           ((uint32_t) SYSCTL_enXTAL_25MHZ >= (uint32_t) enExtenalCrystal))
        {
            SYSCTL_u32OscSourceFreq = SYSCTL_u32GetFreqXtal((uint32_t) enExtenalCrystal);
            u32RunModeConfigReg = SYSCTL_RSCLKCFG_R_OSCSRC_MOSC |
                                  SYSCTL_RSCLKCFG_R_PLLSRC_MOSC;

            if((uint32_t) SYSCTL_enXTAL_10MHZ <= (uint32_t) enExtenalCrystal)
            {
                u32MainOscRangeReg = SYSCTL_MOSCCTL_R_OSCRNG_HIGH;
            }

            MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_MOSCCTL_OFFSET, u32MainOscRangeReg,
                                SYSCTL_MOSCCTL_R_OSCRNG_MASK | SYSCTL_MOSCCTL_R_PWRDN_MASK |
                                SYSCTL_MOSCCTL_R_NOXTAL_MASK,
                                0UL);
            do
            {
                u32Timeout--;
                u32MainOscStatusReg = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RIS_OFFSET,
                                                           SYSCTL_RIS_MOSCPUPRIS_MASK,
                                                           SYSCTL_RIS_R_MOSCPUPRIS_BIT);
            }while((SYSCTL_RIS_MOSCPUPRIS_NOACTIVE == u32MainOscStatusReg) &&
                   (0UL != u32Timeout));

            if(0UL != u32Timeout){ enStatus = SYSCTL_enOK; }
        }
        break;
    default:
        enStatus = SYSCTL_enERROR;
        break;
    }

    if((SYSCTL_enOK == enStatus) && (0UL != u32SystemClock))
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
                u32SysDiv = SYSCTL_u32GetFreqVCO((uint32_t) enVcoRangeReg);
                u32SysDiv += u32SystemClock;
                u32SysDiv -= 1UL;
                u32SysDiv /= u32SystemClock;

                MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET, u32RunModeConfigReg,
                    SYSCTL_RSCLKCFG_R_OSCSRC_MASK | SYSCTL_RSCLKCFG_R_PLLSRC_MASK, 0UL);
                u32SysMINT = SYSCTL_u32GetXTALtoVCO((uint32_t) enVcoRangeReg,
                                                    (uint32_t) enExtenalCrystal,
                                                    SYSCTL_MINT_INDEX );
                u32SysMFRAC = SYSCTL_u32GetXTALtoVCO((uint32_t) enVcoRangeReg,
                                                     (uint32_t) enExtenalCrystal,
                                                     SYSCTL_MFRAC_INDEX );
                u32SysN = SYSCTL_u32GetXTALtoVCO((uint32_t) enVcoRangeReg,
                                                 (uint32_t) enExtenalCrystal,
                                                 SYSCTL_N_INDEX );


                MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_PLLFREQ1_OFFSET,
                            u32SysN, SYSCTL_PLLFREQ1_N_MASK, SYSCTL_PLLFREQ1_R_N_BIT);
                MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_PLLFREQ1_OFFSET,
                        (u32SysDiv - 1UL), SYSCTL_PLLFREQ1_Q_MASK, SYSCTL_PLLFREQ1_R_Q_BIT);

                MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                        u32SysMINT, SYSCTL_PLLFREQ0_MINT_MASK, SYSCTL_PLLFREQ0_R_MINT_BIT);
                MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                    u32SysMFRAC, SYSCTL_PLLFREQ0_MFRAC_MASK, SYSCTL_PLLFREQ0_R_MFRAC_BIT);

                u32SystemClock = SYSCTL_u32GetPLLClock(SYSCTL_u32OscSourceFreq);
                u32SystemClock /= 2UL;
                SYSCTL__vSetMemoryTiming(u32SystemClock);

                u32PllState = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_PLLFREQ0_OFFSET,
                               SYSCTL_PLLFREQ0_PLLPWR_MASK, SYSCTL_PLLFREQ0_R_PLLPWR_BIT);
                if(SYSCTL_PLLFREQ0_PLLPWR_ON == u32PllState)
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
                u32Timeout = SYSCTL_TIMEOUT;
                do
                {
                    u32Timeout--;
                    u32PllState = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_PLLSTAT_OFFSET,
                                       SYSCTL_PLLSTAT_LOCK_MASK, SYSCTL_PLLSTAT_R_LOCK_BIT);
                }while((SYSCTL_PLLSTAT_LOCK_NOLOCK == u32PllState) && (0UL != u32Timeout));

                if(0UL != u32Timeout)
                {
                    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET, 1UL,
                                        SYSCTL_RSCLKCFG_PSYSDIV_MASK,
                                        SYSCTL_RSCLKCFG_R_PSYSDIV_BIT);

                    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET,
                            u32RunModeConfigReg,
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

                    SYSCTL_u32SystemClock = u32SystemClock;
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
            u32SysDiv = SYSCTL_u32OscSourceFreq;
            u32SysDiv /= u32SystemClock;
            if(0UL != u32SysDiv)
            {
                u32SysDiv -= 1UL;
            }
            u32SystemClock = SYSCTL_u32OscSourceFreq;
            u32SystemClock /= (u32SysDiv + 1UL);

            SYSCTL__vSetMemoryTiming(u32SystemClock);
            MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET, u32SysDiv,
                        SYSCTL_RSCLKCFG_OSYSDIV_MASK, SYSCTL_RSCLKCFG_R_OSYSDIV_BIT);
            MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET, u32RunModeConfigReg,
                        SYSCTL_RSCLKCFG_R_OSCSRC_MASK | SYSCTL_RSCLKCFG_R_PLLSRC_MASK, 0UL);
            MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET,
                        SYSCTL_RSCLKCFG_MEMTIMU_UPDATE,
                        SYSCTL_RSCLKCFG_MEMTIMU_MASK,
                        SYSCTL_RSCLKCFG_R_MEMTIMU_BIT);
            SYSCTL_u32SystemClock = u32SystemClock;
        }
    }

    return (enStatus);
}
