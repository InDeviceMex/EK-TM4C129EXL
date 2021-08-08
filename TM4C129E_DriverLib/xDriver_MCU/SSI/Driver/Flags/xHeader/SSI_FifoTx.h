/**
 *
 * @file SSI_FifoTx.h
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
#ifndef XDRIVER_MCU_SSI_DRIVER_FLAGS_XHEADER_SSI_FIFOTX_H_
#define XDRIVER_MCU_SSI_DRIVER_FLAGS_XHEADER_SSI_FIFOTX_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

SSI_nFIFO_EMPTY SSI__enIsFifoTransmitEmpty(SSI_nMODULE enModule);
SSI_nFIFO_FULL SSI__enIsFifoTransmitFull(SSI_nMODULE enModule);

#endif /* XDRIVER_MCU_SSI_DRIVER_FLAGS_XHEADER_SSI_FIFOTX_H_ */
