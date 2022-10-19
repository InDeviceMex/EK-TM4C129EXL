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

SSI_nERROR SSI__enSetData(SSI_nMODULE enModuleArg, UBase_t uxDataArg);
SSI_nERROR SSI__enSetDataByte(SSI_nMODULE enModuleArg, uint8_t u8DataArg);
SSI_nERROR SSI__enSetDataHalfWord(SSI_nMODULE enModuleArg, uint16_t u16DataArg);

SSI_nERROR SSI__enSetDataTimeOut(SSI_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t uxTimeoutArg);
SSI_nERROR SSI__enSetDataByteTimeOut(SSI_nMODULE enModuleArg, uint8_t u8DataArg, UBase_t uxTimeoutArg);
SSI_nERROR SSI__enSetDataHalfWordTimeOut(SSI_nMODULE enModuleArg, uint16_t u16DataArg, UBase_t uxTimeoutArg);

SSI_nERROR SSI__enSetFifoDataTimeOut(SSI_nMODULE enModuleArg, const UBase_t* puxDataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);
SSI_nERROR SSI__enSetFifoDataByteTimeOut(SSI_nMODULE enModuleArg, const uint8_t* pu8DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);
SSI_nERROR SSI__enSetFifoDataHalfWordTimeOut(SSI_nMODULE enModuleArg, const uint16_t* pu16DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);

SSI_nERROR SSI__enSetFifoData(SSI_nMODULE enModuleArg, const UBase_t* puxDataArg, UBase_t* puxCount);
SSI_nERROR SSI__enSetFifoDataByte(SSI_nMODULE enModuleArg, const uint8_t* pu8DataArg, UBase_t* puxCount);
SSI_nERROR SSI__enSetFifoDataHalfWord(SSI_nMODULE enModuleArg, const uint16_t* pu16DataArg, UBase_t* puxCount);

SSI_nERROR SSI__enSetFifoDataConstTimeOut(SSI_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);
SSI_nERROR SSI__enSetFifoDataConstByteTimeOut(SSI_nMODULE enModuleArg, uint8_t u8DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);
SSI_nERROR SSI__enSetFifoDataConstHalfWordTimeOut(SSI_nMODULE enModuleArg, uint16_t u16DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);

SSI_nERROR SSI__enSetFifoDataConst(SSI_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t* puxCount);
SSI_nERROR SSI__enSetFifoDataConstByte(SSI_nMODULE enModuleArg, uint8_t u8DataArg, UBase_t* puxCount);
SSI_nERROR SSI__enSetFifoDataConstHalfWord(SSI_nMODULE enModuleArg, uint16_t u16DataArg, UBase_t* puxCount);

SSI_nERROR SSI__enGetData(SSI_nMODULE enModuleArg, UBase_t* puxDataArg);
SSI_nERROR SSI__enGetDataByte(SSI_nMODULE enModuleArg, uint8_t* pu8DataArg);
SSI_nERROR SSI__enGetDataHalfWord(SSI_nMODULE enModuleArg, uint16_t* pu16DataArg);

SSI_nERROR SSI__enGetDataTimeOut(SSI_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t uxTimeoutArg);
SSI_nERROR SSI__enGetDataByteTimeOut(SSI_nMODULE enModuleArg, uint8_t* pu8DataArg, UBase_t uxTimeoutArg);
SSI_nERROR SSI__enGetDataHalfWordTimeOut(SSI_nMODULE enModuleArg, uint16_t* pu16DataArg, UBase_t uxTimeoutArg);


SSI_nERROR SSI__enGetFifoDataTimeOut(SSI_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);
SSI_nERROR SSI__enGetFifoDataByteTimeOut(SSI_nMODULE enModuleArg, uint8_t* pu8DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);
SSI_nERROR SSI__enGetFifoDataHalfWordTimeOut(SSI_nMODULE enModuleArg, uint16_t* pu16DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);

SSI_nERROR SSI__enGetFifoData(SSI_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t* puxCount);
SSI_nERROR SSI__enGetFifoDataByte(SSI_nMODULE enModuleArg, uint8_t* pu8DataArg, UBase_t* puxCount);
SSI_nERROR SSI__enGetFifoDataHalfWord(SSI_nMODULE enModuleArg, uint16_t* pu16DataArg, UBase_t* puxCount);


#endif /* XDRIVER_MCU_SSI_DRIVER_XHEADER_SSI_DATA_H_ */
