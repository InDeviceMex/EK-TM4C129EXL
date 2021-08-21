/**
 *
 * @file ACMP_StructRegister.h
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
 * @verbatim 28 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTREGISTER_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTREGISTER_H_

#include <xUtils/Standard/Standard.h>

/**
 *  Global Struct Definitions for ACMP
 */

typedef volatile struct
{
    volatile uint32_t IN0: 1;
    volatile uint32_t IN1: 1;
    const uint32_t reserved: 30;
}ACMIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t IN0: 1;
    volatile const uint32_t IN1: 1;
    const uint32_t reserved: 30;
}ACRIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t IN0: 1;
    volatile uint32_t IN1: 1;
    const uint32_t reserved: 30;
}ACINTEN_TypeDef;

typedef volatile struct
{
    volatile uint32_t VREF: 4;
    const uint32_t reserved: 4;
    volatile uint32_t RNG: 1;
    volatile uint32_t EN: 1;
    const uint32_t reserved1: 22;
}ACREFCTL_TypeDef;

typedef volatile struct
{
    const uint32_t reserved: 1;
    volatile const uint32_t OVAL: 1;
    const uint32_t reserved1: 30;
}ACSTAT_TypeDef;

typedef volatile struct
{
    const uint32_t reserved: 1;
    volatile uint32_t CINV: 1;
    volatile uint32_t ISEN: 2;
    volatile uint32_t ISLVAL: 1;
    volatile uint32_t TSEN: 2;
    volatile uint32_t TSLVAL: 1;
    const uint32_t reserved1: 1;
    volatile uint32_t ASRCP: 2;
    volatile uint32_t TOEN: 1;
    const uint32_t reserved2: 20;
}ACCTL_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CMP0: 1;
    volatile const uint32_t CMP1: 1;
    const uint32_t reserved: 14;
    volatile const uint32_t C0O: 1;
    volatile const uint32_t C1O: 1;
    const uint32_t reserved1: 14;
}ACMPPP_TypeDef;

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTREGISTER_H_ */
