/**
 *
 * @file ACMP_VmaxSource.c
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
#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_VmaxSource.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_ControlGeneric.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

ACMP_nERROR ACMP__enSetComparatorVmaxSource(ACMP_nMODULE enModuleArg,
                                    ACMP_nCOMP enComparatorArg,
                                    ACMP_nVMAX_SOURCE enVmaxPinSourceArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    stRegister.u8Shift = ACMP_CTL_R_ASRCP_BIT;
    stRegister.u32Mask = ACMP_CTL_ASRCP_MASK;
    stRegister.uptrAddress = ACMP_CTL_OFFSET;
    stRegister.u32Value = (uint32_t) enVmaxPinSourceArg;
    enErrorReg = ACMP__enGetCompGeneric(enModuleArg, enComparatorArg, &stRegister);

    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetComparatorVmaxSource(ACMP_nMODULE enModuleArg,
                                                  ACMP_nCOMP enComparatorArg,
                                                  ACMP_nVMAX_SOURCE* penVmaxPinSourceArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    if(0UL != (uintptr_t) penVmaxPinSourceArg)
    {
        stRegister.u8Shift = ACMP_CTL_R_ASRCP_BIT;
        stRegister.u32Mask = ACMP_CTL_ASRCP_MASK;
        stRegister.uptrAddress = ACMP_CTL_OFFSET;
        enErrorReg = ACMP__enGetCompGeneric(enModuleArg, enComparatorArg, &stRegister);

        *penVmaxPinSourceArg = (ACMP_nVMAX_SOURCE) stRegister.u32Value;
    }
    else
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    return (enErrorReg);
}
