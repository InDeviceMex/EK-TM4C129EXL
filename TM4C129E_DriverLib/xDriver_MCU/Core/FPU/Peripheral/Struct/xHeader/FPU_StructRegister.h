/**
 *
 * @file FPU_StructRegister.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_STRUCT_FPU_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_STRUCT_FPU_STRUCTREGISTER_H_

#include <xDriver_MCU/Core/FPU/Peripheral/xHeader/FPU_Enum.h>

typedef volatile struct
{
    const    UBase_t reserved :20;
    volatile UBase_t CP10 :2;
    volatile UBase_t CP11 :2;
    const    UBase_t reserved1 :8;
}FPU_CPACR_t;

typedef volatile struct
{
    volatile UBase_t LSPACT :1;
    volatile UBase_t USER :1;
    const    UBase_t reserved :1;
    volatile UBase_t THREAD :1;
    volatile UBase_t HFRDY :1;
    volatile UBase_t MMRDY :1;
    volatile UBase_t BFRDY :1;
    const    UBase_t reserved1 :1;
    volatile UBase_t MONRDY :1;
    const    UBase_t reserved2 :21;
    volatile UBase_t LSPEN :1;
    volatile UBase_t ASPEN :1;
}FPU_CCR_t;

typedef volatile struct
{
    const    UBase_t reserved :3;
    volatile UBase_t ADDRESS :29;
}FPU_CAR_t;

typedef volatile struct
{
    volatile UBase_t IOC :1;
    volatile UBase_t DZC :1;
    volatile UBase_t OFC :1;
    volatile UBase_t UFC :1;
    volatile UBase_t IXC :1;
    const    UBase_t reserved :2;
    volatile UBase_t IDC :1;
    const    UBase_t reserved1 :14;
    volatile UBase_t RMODE :2;
    volatile UBase_t FZ :1;
    volatile UBase_t DN :1;
    volatile UBase_t AHP :1;
    const    UBase_t reserved2 :1;
    volatile UBase_t V :1;
    volatile UBase_t C :1;
    volatile UBase_t Z :1;
    volatile UBase_t N :1;
}FPU_SCR_t;

typedef volatile struct
{
    const    UBase_t reserved :22;
    volatile UBase_t RMODE :2;
    volatile UBase_t FZ :1;
    volatile UBase_t DN :1;
    volatile UBase_t AHP :1;
    const    UBase_t reserved1 :5;
}FPU_DSCR_t;

typedef volatile struct
{
    const  UBase_t A_SIMD_registers :4;
    const  UBase_t Single_precision :4;
    const  UBase_t Double_precision :4;
    const  UBase_t FP_excep_trapping :4;
    const  UBase_t Divide :4;
    const  UBase_t Square_root :4;
    const  UBase_t Short_vectors :4;
    const  UBase_t P_rounding_modes :4;
}FPU_MVFR0_t;

typedef volatile struct
{
    const  UBase_t FtZ_mode :4;
    const  UBase_t D_NaN_mode :4;
    const  UBase_t reserved :16;
    const  UBase_t FP_HPFP :4;
    const  UBase_t FP_fused_MAC :4;
}FPU_MVFR1_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_STRUCT_FPU_STRUCTREGISTER_H_ */
