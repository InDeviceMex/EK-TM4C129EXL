/**
 *
 * @file MPU_StructPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_STRUCT_MPU_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_STRUCT_MPU_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/Core/MPU/Peripheral/Struct/xHeader/MPU_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile UBase_t TYPER;
        MPU_TYPER_t TYPE_Bit;
    };
    union
    {
        volatile UBase_t CTRL;
        MPU_CTRL_t CTRL_Bit;
    };
    union
    {
        volatile UBase_t RNR;
        MPU_RNR_t RNR_Bit;
    };
    union
    {
        volatile UBase_t RBAR;
        MPU_RBAR_t RBAR_Bit;
    };
    union
    {
        volatile UBase_t RASR;
        MPU_RASR_t RASR_Bit;
    };
    union
    {
        volatile UBase_t RBAR1;
        MPU_RBAR_t RBAR1_Bit;
    };
    union
    {
        volatile UBase_t RASR1;
        MPU_RASR_t RASR1_Bit;
    };
    union
    {
        volatile UBase_t RBAR2;
        MPU_RBAR_t RBAR2_Bit;
    };
    union
    {
        volatile UBase_t RASR2;
        MPU_RASR_t RASR2_Bit;
    };
    union
    {
        volatile UBase_t RBAR3;
        MPU_RBAR_t RBAR3_Bit;
    };
    union
    {
        volatile UBase_t RASR3;
        MPU_RASR_t RASR3_Bit;
    };
}MPU_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_STRUCT_MPU_STRUCTPERIPHERAL_H_ */
