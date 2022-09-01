/**
 *
 * @file ACMP_Generic.c
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
 * @verbatim Apr 2, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 2, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Comparator/xHeader/ACMP_Generic.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/ACMP_Primitives.h>

ACMP_nERROR ACMP__enSetCompGeneric(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, ACMP_Register_t* pstRegisterDataArg)
{
    uint32_t u32ComparatorReg;
    ACMP_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = (ACMP_nERROR) MCU__enCheckParams(enComparatorArg, (uint32_t) ACMP_enCOMP_MAX);
        if(ACMP_enERROR_OK == enErrorReg)
        {
            u32ComparatorReg = (uint32_t) enComparatorArg;
            u32ComparatorReg *= ACMP_COMP_REGISTER_NUM; /*Add offset for COMP ComparatorArg*/
            u32ComparatorReg *= 4UL;
            pstRegisterDataArg->uptrAddress += u32ComparatorReg;
            enErrorReg = ACMP__enWriteRegister(enModuleArg, pstRegisterDataArg);
        }
    }
    else
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetCompGeneric(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, ACMP_Register_t* pstRegisterDataArg)
{
    uint32_t u32ComparatorReg;
    ACMP_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = (ACMP_nERROR) MCU__enCheckParams(enComparatorArg, (uint32_t) ACMP_enCOMP_MAX);
        if(ACMP_enERROR_OK == enErrorReg)
        {
            u32ComparatorReg = (uint32_t) enComparatorArg;
            u32ComparatorReg *= ACMP_COMP_REGISTER_NUM; /*Add offset for COMP ComparatorArg*/
            u32ComparatorReg *= 4UL;
            pstRegisterDataArg->uptrAddress += u32ComparatorReg;
            enErrorReg = ACMP__enReadRegister(enModuleArg, pstRegisterDataArg);
        }
    }
    else
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    return (enErrorReg);
}

