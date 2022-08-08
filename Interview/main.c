#include <stdint.h>

#define CHAR_LIMIT (255U)
uint32_t u32Permutacion(const char* pcString1, const char* pcString2, uint32_t u32MaxLength);

uint32_t count = 0U;

uint32_t u32ResultPer1 = 0U;
uint32_t u32ResultPer2 = 0U;
void main(void)
{
    const char String1[] = "Hola Mundo, Esta es la permutacion 1 hola hola";
    const char String2[] = "laHo Mundo, sEta es al permuatcion 1";
    const char String3[] = "laHo Mundo, sEta es al permuatcion 2";

    u32ResultPer1 = u32Permutacion(String1, String2, CHAR_LIMIT);
    u32ResultPer2 = u32Permutacion(String1, String3, CHAR_LIMIT);




    while(1);
}


uint32_t u32Permutacion(const char* pcString1, const char* pcString2, uint32_t u32MaxLength)
{
    uint32_t pu32Buffer1[CHAR_LIMIT] = {0U};
    uint16_t u16Iter = 0U;
    uint32_t u32Count = 0U;
    uint32_t u32Result = 1U;
    char cValue1 = 0U;
    char cValue2 = 0U;
    const char* pcString1Reg = pcString1;
    const char* pcString2Reg = pcString2;

    for(u16Iter = 0U; u16Iter < CHAR_LIMIT; u16Iter++)
    {
        pu32Buffer1[u16Iter] = 0U;
        pu32Buffer2[u16Iter] = 0U;
    }

    cValue1 = *pcString1Reg;
    cValue2 = *pcString2Reg;
    while((0U != cValue1) && (0U != cValue2) && (u32Count < u32MaxLength))
    {
        pu32Buffer1[(uint32_t) cValue1]++;
        pu32Buffer2[(uint32_t) cValue2]++;
        pcString1Reg++;
        pcString2Reg++;
        cValue1 = *pcString1Reg;
        cValue2 = *pcString2Reg;
        u32Count++;
    }

    for(u16Iter = 0U; u16Iter < CHAR_LIMIT; u16Iter++)
    {
        if(pu32Buffer1[u16Iter]  != pu32Buffer2[u16Iter])
        {
            u32Result = 0U;
            break;
        }
    }

    return (u32Result);

}


