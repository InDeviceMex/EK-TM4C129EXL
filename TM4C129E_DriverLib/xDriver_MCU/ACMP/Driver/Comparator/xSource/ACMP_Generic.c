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

void ACMP__vSetCompGeneric(uint32_t u32Module, uint32_t  u32ComparatorArg,
                           uint32_t u32OffsetRegister, uint32_t u32FeatureValue,
                           uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32ComparatorReg = 0UL;

    u32ComparatorReg = MCU__u32CheckParams(u32ComparatorArg, (uint32_t) ACMP_enCOMP_MAX);

    u32ComparatorReg *= ACMP_COMP_REGISTER_NUM; /*Add offset for COMP ComparatorArg*/
    u32ComparatorReg *= 4UL;
    u32ComparatorReg += u32OffsetRegister;

    ACMP__vWriteRegister((ACMP_nMODULE) u32Module , u32ComparatorReg,
                         u32FeatureValue, u32MaskFeature, u32BitFeature);
}

uint32_t ACMP__u32GetCompGeneric(uint32_t u32Module, uint32_t  u32ComparatorArg,
                                 uint32_t u32OffsetRegister, uint32_t u32MaskFeature,
                                 uint32_t u32BitFeature)
{
    uint32_t u32Feature = 0UL;
    uint32_t u32ComparatorReg = 0UL;

    u32ComparatorReg = MCU__u32CheckParams(u32ComparatorArg, (uint32_t) ACMP_enCOMP_MAX);

    u32ComparatorReg *= ACMP_COMP_REGISTER_NUM; /*Add offset for COMP ComparatorArg*/
    u32ComparatorReg *= 4UL;
    u32ComparatorReg += u32OffsetRegister;

    u32Feature = ACMP__u32ReadRegister((ACMP_nMODULE) u32Module , u32ComparatorReg,
                                       u32MaskFeature, u32BitFeature);
    return (u32Feature);
}

