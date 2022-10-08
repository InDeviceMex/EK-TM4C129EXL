/**
 *
 * @file ACMP_Output.c
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
#include <xDriver_MCU/ACMP/Driver/Comparator/xHeader/ACMP_Output.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/xHeader/ACMP_Generic.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>


ACMP_nERROR ACMP__enGetComparatorOutput(ACMP_nMODULE enModuleArg, ACMP_nCOMP  enComparatorArg, ACMP_nOUTPUT_VALUE* penOutputValArg)
{
    ACMP_Register_t stRegister;
    ACMP_nERROR enErrorReg;

    enErrorReg = ACMP_enERROR_OK;
    if(0UL == (uintptr_t) penOutputValArg)
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = ACMP_STAT_R_OVAL_BIT;
        stRegister.uxMask = ACMP_STAT_OVAL_MASK;
        stRegister.uptrAddress = ACMP_STAT_OFFSET;
        enErrorReg = ACMP__enGetCompGeneric(enModuleArg, enComparatorArg, &stRegister);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        *penOutputValArg = (ACMP_nOUTPUT_VALUE) stRegister.uxValue;
    }
    return (enErrorReg);
}
