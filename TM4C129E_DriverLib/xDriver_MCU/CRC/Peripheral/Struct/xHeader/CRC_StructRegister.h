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

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef volatile struct
{
    volatile uint32_t TYPE :4;
    volatile uint32_t ENDIAN :2;
    const uint32_t reserved :1;
    volatile uint32_t BR :1;
    volatile uint32_t OBR :1;
    volatile uint32_t RESINV :1;
    const uint32_t reserved1 :2;
    volatile uint32_t SIZE :1;
    volatile uint32_t INIT :2;
    const uint32_t reserved2 :17;
}CRCCTRL_t;

typedef volatile struct
{
    volatile uint32_t SEED :32;
}CRCSEED_t;

typedef volatile struct
{
    volatile uint32_t DATAIN :32;
}CRCDIN_t;

typedef volatile struct
{
    volatile const uint32_t RSLTPP :32;
}CRCRSLTPP_t;

#endif /* XDRIVER_MCU_CRC_PERIPHERAL_STRUCT_XHEADER_CRC_STRUCTREGISTER_H_ */
