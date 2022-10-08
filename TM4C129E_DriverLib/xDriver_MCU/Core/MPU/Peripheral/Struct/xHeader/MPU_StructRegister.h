/**
 *
 * @file MPU_StructRegister.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_STRUCT_MPU_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_STRUCT_MPU_STRUCTREGISTER_H_

#include <xDriver_MCU/Core/MPU/Peripheral/xHeader/MPU_Enum.h>

typedef volatile struct
{
    const UBase_t SEPARATE :1;
    const UBase_t reserved :7;
    const UBase_t DREGION :8;
    const UBase_t IREGION :8;
    const UBase_t reserved1 :8;
}MPU_TYPER_t;

typedef volatile struct
{
    volatile UBase_t ENABLE :1;
    volatile UBase_t HFNMIENA :1;
    volatile UBase_t PRIVDEFENA :1;
    const    UBase_t reserved :29;
}MPU_CTRL_t;

typedef volatile struct
{
    volatile UBase_t REGION :3;
    const    UBase_t reserved :29;
}MPU_RNR_t;

typedef volatile struct
{
    volatile UBase_t REGION :4;
    volatile UBase_t VALID :1;
    volatile UBase_t ADDR :27;
}MPU_RBAR_t;

typedef volatile struct
{
    volatile UBase_t ENABLE :1;
    volatile UBase_t SIZE :5;
    const    UBase_t reserved :2;
    volatile UBase_t SRD0 :1;
    volatile UBase_t SRD1 :1;
    volatile UBase_t SRD2 :1;
    volatile UBase_t SRD3 :1;
    volatile UBase_t SRD4 :1;
    volatile UBase_t SRD5 :1;
    volatile UBase_t SRD6 :1;
    volatile UBase_t SRD7 :1;
    volatile UBase_t B :1;
    volatile UBase_t C :1;
    volatile UBase_t S :1;
    volatile UBase_t TEX :3;
    const    UBase_t reserved1 :2;
    volatile UBase_t AP :3;
    const    UBase_t reserved2 :1;
    volatile UBase_t XN :1;
    const    UBase_t reserved3 :3;
}MPU_RASR_t;

typedef volatile struct
{
    volatile UBase_t ENABLE :1;
    volatile UBase_t SIZE :5;
    const    UBase_t reserved :2;
    volatile UBase_t SRD :8;
    volatile UBase_t B :1;
    volatile UBase_t C :1;
    volatile UBase_t S :1;
    volatile UBase_t TEX :3;
    const    UBase_t reserved1 :2;
    volatile UBase_t AP :3;
    const    UBase_t reserved2 :1;
    volatile UBase_t XN :1;
    const    UBase_t reserved3 :3;
}MPU_RASRb_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_STRUCT_MPU_STRUCTREGISTER_H_ */
