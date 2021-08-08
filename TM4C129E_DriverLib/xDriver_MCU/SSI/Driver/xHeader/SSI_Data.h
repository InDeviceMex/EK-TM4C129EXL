/**
 *
 * @file SSI_Data.h
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
#ifndef XDRIVER_MCU_SSI_DRIVER_XHEADER_SSI_DATA_H_
#define XDRIVER_MCU_SSI_DRIVER_XHEADER_SSI_DATA_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>
#include <xUtils/Standard/Standard.h>

uint32_t SSI__u32SetData(SSI_nMODULE enModule, uint32_t u32Data);
uint32_t SSI__u32GetData(SSI_nMODULE enModule);
uint32_t SSI__u32GetDataWithStatus(SSI_nMODULE enModule);

uint32_t SSI__u32GetFifoData(SSI_nMODULE enModule, uint32_t* pu32FifoArray);
uint32_t SSI__u32SetFifoDataConst(SSI_nMODULE enModule, const uint32_t u32FifoValue, uint32_t u32SizeBuffer);
uint32_t SSI__u32GetFifoDataByte(SSI_nMODULE enModule, uint8_t* pu8FifoArray);

uint32_t SSI__u32SetFifoData(SSI_nMODULE enModule, const uint32_t* pu32FifoArray, uint32_t u32SizeBuffer);
uint32_t SSI__u32SetFifoDataByte(SSI_nMODULE enModule, const uint8_t* pu8FifoArray, uint32_t u32SizeBuffer);

#endif /* XDRIVER_MCU_SSI_DRIVER_XHEADER_SSI_DATA_H_ */
