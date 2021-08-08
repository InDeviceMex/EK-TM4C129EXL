/**
 *
 * @file SSI_Format.h
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
#ifndef XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_XHEADER_SSI_FORMAT_H_
#define XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_XHEADER_SSI_FORMAT_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

SSI_nFORMAT SSI__enGetFormat(SSI_nMODULE enModule);
void SSI__vSetFormat(SSI_nMODULE enModule, SSI_nFORMAT enFormatArg);

#endif /* XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_XHEADER_SSI_FORMAT_H_ */
