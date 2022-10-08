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

Base_t Math__sxMap(Base_t sxValueInput, Base_t sxMaxValueInput, Base_t sxMinValueInput, Base_t sxMaxValueOutput, Base_t sxMinValueOutput)
{
    Base_t sxDiffValuesInput = 0UL;
    Base_t sxDiffValuesOutput = 0UL;
    Base_t sxValueOutput = 0UL;

    sxDiffValuesOutput = sxMaxValueOutput - sxMinValueOutput;
    sxDiffValuesInput = sxMaxValueInput - sxMinValueInput;

    sxValueOutput = sxValueInput;
    sxValueOutput -= sxMinValueInput;
    sxValueOutput *= sxDiffValuesOutput;
    sxValueOutput /= sxDiffValuesInput;
    sxValueOutput += sxMinValueOutput;

    return (sxValueOutput);
}

UBase_t Math__uxMap(UBase_t uxValueInput, UBase_t uxMaxValueInput, UBase_t uxMinValueInput, UBase_t uxMaxValueOutput, UBase_t uxMinValueOutput)
{
    UBase_t uxDiffValuesInput = 0UL;
    UBase_t uxDiffValuesOutput = 0UL;
    UBase_t uxValueOutput = 0UL;

    uxDiffValuesOutput = uxMaxValueOutput - uxMinValueOutput;
    uxDiffValuesInput = uxMaxValueInput - uxMinValueInput;

    uxValueOutput = uxValueInput;
    uxValueOutput -= uxMinValueInput;
    uxValueOutput *= uxDiffValuesOutput;
    uxValueOutput /= uxDiffValuesInput;
    uxValueOutput += uxMinValueOutput;

    return (uxValueOutput);
}

