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

    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        return (ACMP_enERROR_POINTER);
    }

    ACMP_nERROR enErrorReg;
    enErrorReg = (ACMP_nERROR) MCU__enCheckParams(enComparatorArg, (UBase_t) ACMP_enCOMP_MAX);
    if(ACMP_enERROR_OK != enErrorReg)
    {
        return (enErrorReg);
    }

    UBase_t uxComparatorReg;
    uxComparatorReg = (UBase_t) enComparatorArg;
    uxComparatorReg *= ACMP_COMP_REGISTER_NUM; /*Add offset for COMP ComparatorArg*/
    uxComparatorReg *= 4UL;
    pstRegisterDataArg->uptrAddress += uxComparatorReg;
    enErrorReg = ACMP__enWriteRegister(enModuleArg, pstRegisterDataArg);
    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetCompGeneric(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, ACMP_Register_t* pstRegisterDataArg)
{
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        return (ACMP_enERROR_POINTER);
    }

    ACMP_nERROR enErrorReg;
    enErrorReg = (ACMP_nERROR) MCU__enCheckParams(enComparatorArg, (UBase_t) ACMP_enCOMP_MAX);
    if(ACMP_enERROR_OK != enErrorReg)
    {
        return (enErrorReg);
    }

    UBase_t uxComparatorReg;
    uxComparatorReg = (UBase_t) enComparatorArg;
    uxComparatorReg *= ACMP_COMP_REGISTER_NUM; /*Add offset for COMP ComparatorArg*/
    uxComparatorReg *= 4UL;
    pstRegisterDataArg->uptrAddress += uxComparatorReg;
    enErrorReg = ACMP__enReadRegister(enModuleArg, pstRegisterDataArg);
    return (enErrorReg);
}

