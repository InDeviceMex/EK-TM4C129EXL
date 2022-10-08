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

UBase_t SSI__uxSetData(SSI_nMODULE enModule, UBase_t uxData);
UBase_t SSI__uxGetData(SSI_nMODULE enModule);
UBase_t SSI__uxGetDataWithStatus(SSI_nMODULE enModule);

UBase_t SSI__uxGetFifoData(SSI_nMODULE enModule, UBase_t* puxFifoArray);
UBase_t SSI__uxSetFifoDataConst(SSI_nMODULE enModule,
                                  const UBase_t uxFifoValue, UBase_t uxSizeBuffer);
UBase_t SSI__uxGetFifoDataByte(SSI_nMODULE enModule, uint8_t* pu8FifoArray);

UBase_t SSI__uxSetFifoData(SSI_nMODULE enModule,
                             const UBase_t* puxFifoArray, UBase_t uxSizeBuffer);
UBase_t SSI__uxSetFifoDataByte(SSI_nMODULE enModule,
                                 const uint8_t* pu8FifoArray, UBase_t uxSizeBuffer);

#endif /* XDRIVER_MCU_SSI_DRIVER_XHEADER_SSI_DATA_H_ */
