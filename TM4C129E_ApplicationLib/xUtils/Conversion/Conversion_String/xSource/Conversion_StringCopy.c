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
#include <xUtils/Standard/Standard.h>
#include <xUtils/Conversion/Conversion_String/xHeader/Conversion_StringCopy.h>

char* CONV_pcStringCopy(char* pcStringDest, const char* pcStringSource, uint32_t u32MaxSize)
{
    char* pcStringReg = pcStringDest;
    if(((uint32_t) 0U != (uint32_t) pcStringSource) && ((uint32_t) 0U != (uint32_t) pcStringDest))
    {
        while(((char)0 != (char) *pcStringSource) && ((uint32_t) 0 != (uint32_t) u32MaxSize))
        {
            *pcStringReg = *pcStringSource;
            pcStringSource += 1U;
            pcStringReg += 1U;
            u32MaxSize--;
        }
        if((uint32_t) 0 != (uint32_t) u32MaxSize)
        {
            *pcStringReg = '\0';
        }
    }
    return (pcStringDest);
}

#define CONV_WORDSIZE   sizeof(int)
#define CONV_WORDMASK   (CONV_WORDSIZE - 1UL)

void* CONV_pvMemoryCopy(void* pvMemoryDest, const void* pvMemorySource, size_t szLength)
{
    char* pcMemoryDestReg = (char*) pvMemoryDest;
    char* pcMemorySourceReg = (char*) pvMemorySource;
    size_t szAlign = 0UL;
    if(((uint32_t) pvMemorySource != (uint32_t) pvMemoryDest) && (0UL != szLength ))
    {
        if((uint32_t) pcMemoryDestReg < (uint32_t) pcMemorySourceReg)
        {
            szAlign = (size_t) pcMemorySourceReg;
            size_t szTempAlign = szAlign;
            szTempAlign |= (size_t) pcMemoryDestReg;
            if(szTempAlign & CONV_WORDMASK)
            {
                szTempAlign = szAlign ^ (size_t) pcMemoryDestReg;
                if((szTempAlign & CONV_WORDMASK) || (szLength < CONV_WORDSIZE))
                {
                    szAlign =  szLength;
                }
                else
                {
                    szTempAlign = szAlign & CONV_WORDMASK;
                    szAlign = CONV_WORDSIZE;
                    szAlign -= szTempAlign;
                }
                szLength -= szAlign;
                do
                {
                    *pcMemoryDestReg = *pcMemorySourceReg;
                    pcMemoryDestReg++;
                    pcMemorySourceReg++;
                }while(--szAlign);
            }
            szAlign = szLength;
            szAlign /= CONV_WORDSIZE;
            if(0UL != szAlign)
            {
                do
                {
                    *((int*)pcMemoryDestReg) = *((int*)pcMemorySourceReg);
                    pcMemorySourceReg += CONV_WORDSIZE;
                    pcMemoryDestReg += CONV_WORDSIZE;
                }while(--szAlign);
            }
            szAlign = szLength;
            szAlign &= CONV_WORDMASK;
            if(0UL != szAlign)
            {
                do
                {
                    *pcMemoryDestReg = *pcMemorySourceReg;
                    pcMemorySourceReg += 1UL;
                    pcMemoryDestReg += 1UL;
                }while(--szAlign);
            }
        }
        else
        {
            pcMemorySourceReg += szLength;
            pcMemoryDestReg += szLength;
            szAlign = (size_t) pcMemorySourceReg;
            size_t szTempAlign = szAlign;
            szTempAlign |= (size_t) pcMemoryDestReg;
            if(szTempAlign & CONV_WORDMASK)
            {
                szTempAlign = szAlign ^ (size_t) pcMemoryDestReg;
                if((szTempAlign & CONV_WORDMASK) || (szLength <= CONV_WORDSIZE))
                {
                    szAlign =  szLength;
                }
                else
                {
                    szAlign &= CONV_WORDMASK;
                }
                szLength -= szAlign;
                do
                {
                    pcMemoryDestReg--;
                    pcMemorySourceReg--;
                    *pcMemoryDestReg = *pcMemorySourceReg;
                }while(--szAlign);

            }
            szAlign = szLength;
            szAlign /= CONV_WORDSIZE;
            if(0UL != szAlign)
            {
                do
                {
                    pcMemorySourceReg -= CONV_WORDSIZE;
                    pcMemoryDestReg -= CONV_WORDSIZE;
                    *((int*)pcMemoryDestReg) = *((int*)pcMemorySourceReg);
                }while(--szAlign);
            }
            szAlign = szLength;
            szAlign &= CONV_WORDMASK;
            if(0UL != szAlign)
            {
                do
                {
                    pcMemorySourceReg -= 1UL;
                    pcMemoryDestReg -= 1UL;
                    *pcMemoryDestReg = *pcMemorySourceReg;
                }while(--szAlign);
            }
        }
    }
    return (pvMemoryDest);
}

