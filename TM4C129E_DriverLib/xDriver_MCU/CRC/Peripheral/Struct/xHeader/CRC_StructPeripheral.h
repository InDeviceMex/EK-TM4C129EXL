/**
 *
 * @file CRC_StructPeripheral.h
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

#ifndef XDRIVER_MCU_CRC_PERIPHERAL_STRUCT_XHEADER_CRC_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_CRC_PERIPHERAL_STRUCT_XHEADER_CRC_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/CRC/Peripheral/Struct/xHeader/CRC_StructRegister.h>

typedef volatile struct
{
    const uint32_t reserved [256UL];
    union
    {
        volatile uint32_t CTRL;
        CRC_CTRL_t CTRL_Bit;
    };
    const uint32_t reserved1 [3UL];
    union
    {
        volatile uint32_t SEED;
        CRC_SEED_t SEED_Bit;
    };
    union
    {
        volatile uint32_t DIN;
        CRC_DIN_t DIN_Bit;
    };
    union
    {
        volatile const uint32_t RSLTPP;
        CRC_RSLTPP_t RSLTPP_Bit;
    };
    const uint32_t reserved2 [761UL];
}CRC_t;

#endif /* XDRIVER_MCU_CRC_PERIPHERAL_STRUCT_XHEADER_CRC_STRUCTPERIPHERAL_H_ */
