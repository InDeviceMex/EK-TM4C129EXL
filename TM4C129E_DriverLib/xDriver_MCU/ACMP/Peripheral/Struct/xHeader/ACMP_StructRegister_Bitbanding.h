/**
 *
 * @file ACMP_StructRegister_Bitbanding.h
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
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTREGISTER_BITBANDING_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

/**
 *  Global Struct Definitions for ACMP
 */

typedef volatile struct
{
    volatile uint32_t IN0;
    volatile uint32_t IN1;
    volatile uint32_t IN2;
    const uint32_t reserved [29UL];
}ACMP_BITBANDING_MIS_t;

typedef volatile struct
{
    volatile const uint32_t IN0;
    volatile const uint32_t IN1;
    volatile const uint32_t IN2;
    const uint32_t reserved [29UL];
}ACMP_BITBANDING_RIS_t;

typedef volatile struct
{
    volatile uint32_t IN0;
    volatile uint32_t IN1;
    volatile uint32_t IN2;
    const uint32_t reserved [29UL];
}ACMP_BITBANDING_INTEN_t;

typedef volatile struct
{
    volatile uint32_t VREF [4UL];
    const uint32_t reserved [4UL];
    volatile uint32_t RNG;
    volatile uint32_t EN;
    const uint32_t reserved1 [22UL];
}ACMP_BITBANDING_REFCTL_t;

typedef volatile struct
{
    const uint32_t reserved;
    volatile const uint32_t OVAL;
    const uint32_t reserved1 [30UL];
}ACMP_BITBANDING_STAT_t;

typedef volatile struct
{
    const uint32_t reserved;
    volatile uint32_t CINV;
    volatile uint32_t ISEN [2UL];
    volatile uint32_t ISLVAL;
    volatile uint32_t TSEN [2UL];
    volatile uint32_t TSLVAL;
    const uint32_t reserved1;
    volatile uint32_t ASRCP [2UL];
    volatile uint32_t TOEN;
    const uint32_t reserved2 [20UL];
}ACMP_BITBANDING_CTL_t;

typedef volatile struct
{
    volatile const uint32_t CMP0;
    volatile const uint32_t CMP1;
    volatile const uint32_t CMP2;
    const uint32_t reserved [13UL];
    volatile const uint32_t C0O;
    volatile const uint32_t C1O;
    volatile const uint32_t C2O;
    const uint32_t reserved1 [13UL];
}ACMP_BITBANDING_PP_t;

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTREGISTER_BITBANDING_H_ */
