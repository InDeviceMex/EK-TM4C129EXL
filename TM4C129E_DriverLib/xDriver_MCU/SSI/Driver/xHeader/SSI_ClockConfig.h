/**
 *
 * @file SSI_ClockConfig.h
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_SSI_DRIVER_XHEADER_SSI_CLOCKCONFIG_H_
#define XDRIVER_MCU_SSI_DRIVER_XHEADER_SSI_CLOCKCONFIG_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

SSI_nERROR SSI__enSetClockSource(SSI_nMODULE enModuleArg, SSI_nCLOCK enClockArg);
SSI_nERROR SSI__enGetClockSource(SSI_nMODULE enModuleArg, SSI_nCLOCK* penClockArg);

SSI_nERROR SSI__enSetClockPrescaler(SSI_nMODULE enModuleArg, UBase_t uxPrescalerArg);
SSI_nERROR SSI__enGetClockPrescaler(SSI_nMODULE enModuleArg, UBase_t* puxPrescalerArg);

#endif /* XDRIVER_MCU_SSI_DRIVER_XHEADER_SSI_CLOCKCONFIG_H_ */
