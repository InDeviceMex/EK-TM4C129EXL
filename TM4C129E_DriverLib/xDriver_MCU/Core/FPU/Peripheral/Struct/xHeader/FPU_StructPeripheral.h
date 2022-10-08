/**
 *
 * @file FPU_StructPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_STRUCT_FPU_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_STRUCT_FPU_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/Core/FPU/Peripheral/Struct/xHeader/FPU_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile UBase_t CPACR;
        FPU_CPACR_t CPACR_Bit;
    };
    UBase_t reserved[106UL];
    union
    {
        volatile UBase_t CCR;
        FPU_CCR_t CCR_Bit;
    };
    union
    {
        volatile UBase_t CAR;
        FPU_CAR_t CAR_Bit;
    };
    union
    {
        volatile UBase_t DSCR;
        FPU_DSCR_t DSCR_Bit;
    };
    union
    {
        const UBase_t MVFR0;
        FPU_MVFR0_t MVFR0_Bit;
    };
    union
    {
        const UBase_t MVFR1;
        FPU_MVFR1_t MVFR1_Bit;
    };
    const UBase_t MVFR2;
}FPU_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_STRUCT_FPU_STRUCTPERIPHERAL_H_ */
