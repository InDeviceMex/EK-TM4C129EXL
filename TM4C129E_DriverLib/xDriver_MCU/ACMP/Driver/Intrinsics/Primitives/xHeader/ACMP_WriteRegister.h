/**
 *
 * @file ACMP_WriteRegister.h
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
 * @verbatim Mar 31, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 31, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ACMP_WRITEREGISTER_H_
#define XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ACMP_WRITEREGISTER_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

ACMP_nERROR ACMP__enWriteRegister(ACMP_nMODULE enModuleArg, ACMP_Register_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ACMP_WRITEREGISTER_H_ */
