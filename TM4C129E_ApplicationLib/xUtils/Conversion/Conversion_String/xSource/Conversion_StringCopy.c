/**
 *
 * @file Conversion_StringCopy.c
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
 * @verbatim 5 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Conversion/Conversion_String/xHeader/Conversion_StringCopy.h>

static void CONV_vCopyLoopCharIf(char* pcMemoryDest, const char* pcMemorySource, size_t szLength);
static void CONV_vCopyLoopIntIf(Base_t* pwMemoryDest, const Base_t* pwMemorySource, size_t szLength);
static void CONV_vCopyReverseLoopCharIf(char* pcMemoryDest, const char* pcMemorySource, size_t szLength);
static void CONV_vCopyReverseLoopIntIf(Base_t* pwMemoryDest, const Base_t* pwMemorySource, size_t szLength);

CONV_nERROR CONV_enStringCopy(char* pcStringDest, const char* pcStringSource, UBase_t uxMaxSize)
{
    CONV_nERROR enErrorReg;
    char* pcStringReg;

    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pcStringDest) || (0UL == (uintptr_t) pcStringSource))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        pcStringReg = pcStringDest;
        while((0U != (uint8_t) *pcStringSource) && (0UL < (UBase_t) uxMaxSize))
        {
            *pcStringReg = *pcStringSource;
            pcStringSource += 1U;
            pcStringReg += 1U;
            uxMaxSize--;
        }
        if(0UL == uxMaxSize)
        {
            enErrorReg = CONV_enERROR_OUT_OF_RANGE;
        }
        else
        {
            *pcStringReg = '\0';
        }
    }
    return (enErrorReg);
}

#define CONV_WORDSIZE   ((size_t) sizeof(Base_t))
#define CONV_WORDMASK   (CONV_WORDSIZE - 1UL)

static void CONV_vCopyLoopCharIf(char* pcMemoryDest, const char* pcMemorySource, size_t szLength)
{
    if(0UL != szLength)
    {
        do
        {
            *pcMemoryDest = *pcMemorySource;
            pcMemorySource += 1UL;
            pcMemoryDest += 1UL;
            szLength--;
        }while(0UL != szLength);
    }

}

static void CONV_vCopyLoopIntIf(Base_t* pwMemoryDest, const Base_t* pwMemorySource, size_t szLength)
{
    if(0UL != szLength)
    {
        do
        {
            *pwMemoryDest = *pwMemorySource;
            pwMemorySource += 1UL;
            pwMemoryDest += 1UL;
            szLength--;
        }while(0UL != szLength);
    }

}
static void CONV_vCopyReverseLoopCharIf(char* pcMemoryDest, const char* pcMemorySource, size_t szLength)
{
    if(0UL != szLength)
    {
        do
        {
            pcMemoryDest -= 1UL;
            pcMemorySource -= 1UL;
            *pcMemoryDest = *pcMemorySource;
            szLength--;
        }while(0UL != szLength);
    }
}

static void CONV_vCopyReverseLoopIntIf(Base_t* pwMemoryDest, const Base_t* pwMemorySource, size_t szLength)
{
    if(0UL != szLength)
    {
        do
        {
            pwMemoryDest -= 1UL;
            pwMemorySource -= 1UL;
            *pwMemoryDest = *pwMemorySource;
            szLength--;
        }while(0UL != szLength);
    }
}

CONV_nERROR CONV_enMemoryCopy(void* pvMemoryDest, const void* pvMemorySource, size_t szLength)
{
    char* pcMemoryDestReg;
    const char* pcMemorySourceReg;
    size_t szSizeTem;
    CONV_nERROR enErrorReg;

    szSizeTem = 0UL;
    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pvMemoryDest) || (0UL == (uintptr_t) pvMemorySource))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        pcMemoryDestReg = (char*) pvMemoryDest;
        pcMemorySourceReg = (const char*) pvMemorySource;
        szSizeTem = (size_t) pcMemorySourceReg;
        if((UBase_t) pcMemoryDestReg < (UBase_t) pcMemorySourceReg)
        {
            size_t szTempAlign;

            szTempAlign = szSizeTem;
            szTempAlign |= (size_t) pcMemoryDestReg;
            if(0UL != (szTempAlign & CONV_WORDMASK))
            {
                szTempAlign = szSizeTem;
                szTempAlign ^= (size_t) pcMemoryDestReg;
                if((0UL != (szTempAlign & CONV_WORDMASK)) || (CONV_WORDSIZE > szLength))
                {
                    szSizeTem =  szLength;
                }
                else
                {
                    szTempAlign = szSizeTem;
                    szTempAlign &= CONV_WORDMASK;
                    szSizeTem = CONV_WORDSIZE;
                    szSizeTem -= szTempAlign;
                }
                szLength -= szSizeTem;
                CONV_vCopyLoopCharIf(pcMemoryDestReg, pcMemorySourceReg, szSizeTem);
            }
            szSizeTem = szLength;
            szSizeTem /= CONV_WORDSIZE;
            CONV_vCopyLoopIntIf((Base_t*)pcMemoryDestReg, (const Base_t*)pcMemorySourceReg, szSizeTem);
            szSizeTem = szLength;
            szSizeTem &= CONV_WORDMASK;
            CONV_vCopyLoopCharIf(pcMemoryDestReg, pcMemorySourceReg, szSizeTem);
        }
        else
        {
            size_t szTempAlign;
            pcMemorySourceReg += szLength;
            pcMemoryDestReg += szLength;
            szSizeTem += szLength;

            szTempAlign = szSizeTem;
            szTempAlign |= (size_t) pcMemoryDestReg;
            if(szTempAlign & CONV_WORDMASK)
            {
                szTempAlign = szSizeTem;
                szTempAlign ^= (size_t) pcMemoryDestReg;
                if((0UL != (szTempAlign & CONV_WORDMASK)) || (szLength <= CONV_WORDSIZE))
                {
                    szSizeTem =  szLength;
                }
                else
                {
                    szSizeTem &= CONV_WORDMASK;
                }
                szLength -= szSizeTem;
                CONV_vCopyReverseLoopCharIf(pcMemoryDestReg, pcMemorySourceReg, szSizeTem);
            }
            szSizeTem = szLength;
            szSizeTem /= CONV_WORDSIZE;
            CONV_vCopyReverseLoopIntIf((Base_t*) pcMemoryDestReg, (const Base_t*) pcMemorySourceReg ,szSizeTem);
            szSizeTem = szLength;
            szSizeTem &= CONV_WORDMASK;
            CONV_vCopyReverseLoopCharIf(pcMemoryDestReg, pcMemorySourceReg, szSizeTem);
        }
    }
    return (enErrorReg);
}
