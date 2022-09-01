/**
 *
 * @file ACMP_OutputInvert.c
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
#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_OutputInvert.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_ControlGeneric.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

ACMP_nERROR ACMP__enSetComparatorOutputInvert(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, ACMP_nSTATE enOutputInvertArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    stRegister.u8Shift = ACMP_CTL_R_CINV_BIT;
    stRegister.u32Mask = ACMP_CTL_CINV_MASK;
    stRegister.uptrAddress = ACMP_CTL_OFFSET;
    stRegister.u32Value = (uint32_t) enOutputInvertArg;
    enErrorReg = ACMP__enGetCompGeneric(enModuleArg, enComparatorArg, &stRegister);

    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetComparatorOutputInvert(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, ACMP_nSTATE* penOutputInvertArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    if(0UL != (uintptr_t) penOutputInvertArg)
    {
        stRegister.u8Shift = ACMP_CTL_R_CINV_BIT;
        stRegister.u32Mask = ACMP_CTL_CINV_MASK;
        stRegister.uptrAddress = ACMP_CTL_OFFSET;
        enErrorReg = ACMP__enGetCompGeneric(enModuleArg, enComparatorArg, &stRegister);

        *penOutputInvertArg = (ACMP_nSTATE) stRegister.u32Value;
    }
    else
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    return (enErrorReg);
}
