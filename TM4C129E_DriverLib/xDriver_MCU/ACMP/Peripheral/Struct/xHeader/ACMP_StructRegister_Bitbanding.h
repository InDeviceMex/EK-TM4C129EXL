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
    volatile UBase_t IN0;
    volatile UBase_t IN1;
    volatile UBase_t IN2;
    const UBase_t reserved [29UL];
}ACMP_BITBANDING_MIS_t;

typedef volatile struct
{
    volatile const UBase_t IN0;
    volatile const UBase_t IN1;
    volatile const UBase_t IN2;
    const UBase_t reserved [29UL];
}ACMP_BITBANDING_RIS_t;

typedef volatile struct
{
    volatile UBase_t IN0;
    volatile UBase_t IN1;
    volatile UBase_t IN2;
    const UBase_t reserved [29UL];
}ACMP_BITBANDING_INTEN_t;

typedef volatile struct
{
    volatile UBase_t VREF [4UL];
    const UBase_t reserved [4UL];
    volatile UBase_t RNG;
    volatile UBase_t EN;
    const UBase_t reserved1 [22UL];
}ACMP_BITBANDING_REFCTL_t;

typedef volatile struct
{
    const UBase_t reserved;
    volatile const UBase_t OVAL;
    const UBase_t reserved1 [30UL];
}ACMP_BITBANDING_STAT_t;

typedef volatile struct
{
    const UBase_t reserved;
    volatile UBase_t CINV;
    volatile UBase_t ISEN [2UL];
    volatile UBase_t ISLVAL;
    volatile UBase_t TSEN [2UL];
    volatile UBase_t TSLVAL;
    const UBase_t reserved1;
    volatile UBase_t ASRCP [2UL];
    volatile UBase_t TOEN;
    const UBase_t reserved2 [20UL];
}ACMP_BITBANDING_CTL_t;

typedef volatile struct
{
    volatile const UBase_t CMP0;
    volatile const UBase_t CMP1;
    volatile const UBase_t CMP2;
    const UBase_t reserved [13UL];
    volatile const UBase_t C0O;
    volatile const UBase_t C1O;
    volatile const UBase_t C2O;
    const UBase_t reserved1 [13UL];
}ACMP_BITBANDING_PP_t;

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTREGISTER_BITBANDING_H_ */
