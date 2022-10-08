/**
 *
 * @file CRC_StructRegister.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 30 oct. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 oct. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CRC_PERIPHERAL_STRUCT_XHEADER_CRC_STRUCTREGISTER_H_
#define XDRIVER_MCU_CRC_PERIPHERAL_STRUCT_XHEADER_CRC_STRUCTREGISTER_H_

#include <xDriver_MCU/CRC/Peripheral/xHeader/CRC_Enum.h>

typedef volatile struct
{
    volatile UBase_t TYPE :4;
    volatile UBase_t ENDIAN :2;
    const UBase_t reserved :1;
    volatile UBase_t BR :1;
    volatile UBase_t OBR :1;
    volatile UBase_t RESINV :1;
    const UBase_t reserved1 :2;
    volatile UBase_t SIZE :1;
    volatile UBase_t INIT :2;
    const UBase_t reserved2 :17;
}CRC_CTRL_t;

typedef volatile struct
{
    volatile UBase_t SEED :32;
}CRC_SEED_t;

typedef volatile struct
{
    volatile UBase_t DATAIN :32;
}CRC_DIN_t;

typedef volatile struct
{
    volatile const UBase_t RSLTPP :32;
}CRC_RSLTPP_t;

#endif /* XDRIVER_MCU_CRC_PERIPHERAL_STRUCT_XHEADER_CRC_STRUCTREGISTER_H_ */
