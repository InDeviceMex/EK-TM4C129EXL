/**
 *
 * @file Math_Map.c
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
 * @verbatim 11 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
 #include <xUtils/Math/xHeader/Math_Map.h>

Math_nERROR Math__enMapSigned(Base_t sxValueInput, Base_t* sxValueOutput, Base_t sxMaxValueInput, Base_t sxMinValueInput, Base_t sxMaxValueOutput, Base_t sxMinValueOutput)
{
    Math_nERROR enErrorReg;
    Base_t sxDiffValuesInput;
    Base_t sxDiffValuesOutput;
    Base_t sxValueOutputReg;
    sxDiffValuesInput = 0;
    sxDiffValuesOutput = 0;
    enErrorReg = Math_enERROR_OK;
    if(0UL == (uintptr_t) sxValueOutput)
    {
        enErrorReg = Math_enERROR_POINTER;
    }
    if(Math_enERROR_OK == enErrorReg)
    {
        sxDiffValuesOutput = sxMaxValueOutput - sxMinValueOutput;
        sxDiffValuesInput = sxMaxValueInput - sxMinValueInput;
        if(0 == sxDiffValuesInput)
        {
            enErrorReg = Math_enERROR_VALUE;
        }
    }
    if(Math_enERROR_OK == enErrorReg)
    {
        sxValueOutputReg = sxValueInput;
        sxValueOutputReg -= sxMinValueInput;
        sxValueOutputReg *= sxDiffValuesOutput;
        sxValueOutputReg /= sxDiffValuesInput;
        sxValueOutputReg += sxMinValueOutput;

        *sxValueOutput = (Base_t) sxValueOutputReg;
    }

    return (enErrorReg);
}

Math_nERROR Math__enMapUnsigned(UBase_t uxValueInput, UBase_t* uxValueOutput, UBase_t uxMaxValueInput, UBase_t uxMinValueInput, UBase_t uxMaxValueOutput, UBase_t uxMinValueOutput)
{
     Math_nERROR enErrorReg;
     UBase_t uxDiffValuesInput;
     UBase_t uxDiffValuesOutput;
     UBase_t uxValueOutputReg;
     uxDiffValuesInput = 0UL;
     uxDiffValuesOutput = 0UL;
     enErrorReg = Math_enERROR_OK;
     if(0UL == (uintptr_t) uxValueOutput)
     {
         enErrorReg = Math_enERROR_POINTER;
     }
     if(Math_enERROR_OK == enErrorReg)
     {
         uxDiffValuesOutput = uxMaxValueOutput - uxMinValueOutput;
         uxDiffValuesInput = uxMaxValueInput - uxMinValueInput;
         if(0UL == uxDiffValuesInput)
         {
             enErrorReg = Math_enERROR_VALUE;
         }

     }
     if(Math_enERROR_OK == enErrorReg)
     {
        uxValueOutputReg = uxValueInput;
        uxValueOutputReg -= uxMinValueInput;
        uxValueOutputReg *= uxDiffValuesOutput;
        uxValueOutputReg /= uxDiffValuesInput;
        uxValueOutputReg += uxMinValueOutput;

        *uxValueOutput = (UBase_t) uxValueOutputReg;

     }

    return (enErrorReg);
}

