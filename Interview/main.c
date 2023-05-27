#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

typedef enum
{
    FALSE = 0UL,
    TRUE = 1UL,
}boolean_t;

#define CHAR_LIMIT (255U)
boolean_t boPermutacion(const char* pcString1, const char* pcString2, uint32_t u32MaxLength);

uint32_t count = 0U;

boolean_t boResultPer3 = FALSE;

void main(void)
{
    boolean_t boResultPer = FALSE;
    char* String1 = "Hola Mundo, Esta es la permutacion 1 hola hola";
    char* String2 = "laHo Mundo, sEta es al permuatcion 1";
    char* String3 = "laHo Mundo, sEta es al permuatcion 2";
    char* String4 = "Hola Mundo, Esta es la permutacion 1 hhoo llaa";

    /*Test Driver Development*/

    boResultPer = boPermutacion((const char*) String1,(const char*) String2, CHAR_LIMIT);
    if(TRUE == boResultPer)
    {
        printf("Incorrect value");
    }
    else
    {
        printf("Correct value");
    }

    boResultPer = boPermutacion((const char*) String1,(const char*) String3, CHAR_LIMIT);
    if(TRUE == boResultPer)
    {
        printf("Incorrect value");
    }
    else
    {
        printf("Correct value");
    }

    boResultPer = boPermutacion((const char*) String1,(const char*) String4, CHAR_LIMIT);
    if(FALSE == boResultPer)
    {
        printf("Incorrect value");
    }
    else
    {
        printf("Correct value");
    }

    while(1);
}


boolean_t boPermutacion(const char* pcString1, const char* pcString2, uint32_t u32MaxLength)
{
    int32_t u32Buffer[CHAR_LIMIT];
    uint16_t u16Iter = 0U;
    uint32_t u32Count = 0U;
    boolean_t boResult = TRUE;
    boolean_t boEndSize1 = FALSE;
    boolean_t boEndSize2 = FALSE;
    char* pcValue1 = 0U;
    char* pcValue2 = 0U;
    const char* pcString1Reg = pcString1;
    const char* pcString2Reg = pcString2;

    for(u16Iter = 0U; u16Iter < CHAR_LIMIT; u16Iter++)
    {
        u32Buffer[u16Iter] = 0;
    }

    pcValue1 = pcString1Reg;
    pcValue2 = pcString2Reg;
    while((0UL != *pcValue1) && (0UL != *pcValue1) && (u32Count < u32MaxLength))
    {
        u32Buffer[(uint32_t) *pcValue1]++;
        u32Buffer[(uint32_t) *pcValue2]--;
        pcValue1++;
        pcValue2++;
        u32Count++;
    }

    if(0UL == *pcValue1)
    {
        boEndSize1 = TRUE;
    }
    if(0UL == *pcValue2)
    {
        boEndSize2 = TRUE;
    }

    if(boEndSize2 == boEndSize1)
    {
        for(u16Iter = 0U; u16Iter < CHAR_LIMIT; u16Iter++)
        {
            if(0U != u32Buffer[u16Iter])
            {
                boResult = FALSE;
                break;
            }
        }
    }
    else
    {
        boResult = FALSE;
    }

    return (boResult);

}


