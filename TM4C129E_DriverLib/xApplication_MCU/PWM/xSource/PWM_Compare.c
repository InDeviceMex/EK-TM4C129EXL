/**
 *
 * @file PWM_Compare.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 27 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/PWM/xHeader/PWM_Compare.h>

#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Dependencies.h>

PWM_nERROR PWM_Generator__enSetComparePorcentageByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, UBase_t uxPorcentageArg)
{
    UBase_t uxLoadReg;
    UBase_t uxCompareReg;
    PWM_nERROR enErrorReg;

    uxLoadReg = 0UL;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) uxPorcentageArg, (100UL + 1UL));
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = PWM_Generator__enGetLoadValueByNumber(enModuleArg, enGeneratorArg, &uxLoadReg);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxLoadReg++;
        uxCompareReg = uxPorcentageArg;
        uxCompareReg *= uxLoadReg;
        uxCompareReg /= 100UL;
        if(0UL != uxCompareReg)
        {
            uxCompareReg--;
        }
        enErrorReg = PWM_Generator__enSetCompareValueByNumber(enModuleArg, enGeneratorArg, enOutputArg, uxCompareReg);
    }
    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enSetComparePorcentageByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nOUTPUT enOutputArg, UBase_t uxPorcentageArg)
{
    UBase_t uxGenMaskReg;
    UBase_t uxGenerator;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxGenerator = 0UL;
        uxGenMaskReg = (UBase_t) enGeneratorMaskArg;
        while((0UL != uxGenMaskReg) && (PWM_enERROR_OK == enErrorReg))
        {
            if(0UL != (1UL & uxGenMaskReg))
            {
                enErrorReg = PWM_Generator__enSetComparePorcentageByNumber(enModuleArg, (PWM_nGENERATOR) uxGenerator, enOutputArg, uxPorcentageArg);
            }
            uxGenMaskReg >>= 1UL;
            uxGenerator++;
        }
    }
    return (enErrorReg);
}


PWM_nERROR PWM_Generator__enGetComparePorcentageByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, UBase_t* puxPorcentageArg)
{
    UBase_t uxLoadReg;
    UBase_t uxPercentageReg[2UL];
    UBase_t uxCompareReg[2UL];
    PWM_nERROR enErrorReg;

    uxLoadReg = 0UL;
    uxCompareReg[0UL] = 0UL;
    uxCompareReg[1UL] = 0UL;
    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) puxPorcentageArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enOutputArg, (UBase_t) PWM_enOUTPUT_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = PWM_Generator__enGetLoadValueByNumber(enModuleArg, enGeneratorArg, &uxLoadReg);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = PWM_Generator__enGetCompareValueByNumber(enModuleArg, enGeneratorArg, enOutputArg, uxCompareReg);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxLoadReg++;

        if(0UL != ((UBase_t) PWM_enOUTPUT_A & (UBase_t) enOutputArg))
        {
            uxCompareReg[0UL] += 1UL;
            uxPercentageReg[0UL] = uxCompareReg[0UL];
            uxPercentageReg[0UL] *= 100UL;
            uxPercentageReg[0UL] /= uxLoadReg;
            *puxPorcentageArg = (UBase_t) uxPercentageReg[0UL];
            puxPorcentageArg += 1UL;
        }

        if(0UL != ((UBase_t) PWM_enOUTPUT_B & (UBase_t) enOutputArg))
        {
            uxCompareReg[1UL] += 1UL;
            uxPercentageReg[1UL] = uxCompareReg[1UL];
            uxPercentageReg[1UL] *= 100UL;
            uxPercentageReg[1UL] /= uxLoadReg;
            *puxPorcentageArg = (UBase_t) uxPercentageReg[1UL];
            puxPorcentageArg += 1UL;
        }
    }
    return (enErrorReg);
}
