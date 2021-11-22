/**
 *
 * @file SSI_StructRegister.h
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
 * @verbatim 16 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date       Author     Version     Description
 * 16 feb. 2021     vyldram    1.0     initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTREGISTER_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTREGISTER_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef volatile struct
{
    volatile uint32_t DSS :4;
    volatile uint32_t FRF :2;
    volatile uint32_t SPO :1;
    volatile uint32_t SPH :1;
    volatile uint32_t SCR :8;
    const uint32_t reserved :16;
} SSICR0_t;

typedef volatile struct
{
    volatile uint32_t LBM :1;
    volatile uint32_t SSE :1;
    volatile uint32_t MS :1;
    const uint32_t reserved :1;
    volatile uint32_t EOT :1;
    const uint32_t reserved1 :1;
    volatile uint32_t MODE :2;
    volatile uint32_t DIR :1;
    volatile uint32_t HSCLKEN :1;
    volatile uint32_t FSSHLDFRM :1;
    volatile uint32_t EOM :1;
    const uint32_t reserved2 :20;
} SSICR1_t;

typedef volatile struct
{
    volatile uint32_t DATA :16;
    const uint32_t reserved :16;
} SSIDR_t;

typedef volatile struct
{
    volatile const uint32_t TFE :1;
    volatile const uint32_t TNF :1;
    volatile const uint32_t RNE :1;
    volatile const uint32_t RFF :1;
    volatile const uint32_t BSY :1;
    const uint32_t reserved :27;
} SSISR_t;

typedef volatile struct
{
    volatile uint32_t CPSDVSR :8;
    const uint32_t reserved :24;
} SSICPSR_t;

typedef volatile struct
{
    volatile uint32_t RORIM :1;
    volatile uint32_t RTIM :1;
    volatile uint32_t RXIM :1;
    volatile uint32_t TXIM :1;
    volatile uint32_t DMARXIM :1;
    volatile uint32_t DMATXIM :1;
    volatile uint32_t EOTIM :1;
    const uint32_t reserved :25;
} SSIIM_t;

typedef volatile struct
{
    volatile const uint32_t RORRIS :1;
    volatile const uint32_t RTRIS :1;
    volatile const uint32_t RXRIS :1;
    volatile const uint32_t TXRIS :1;
    volatile const uint32_t DMARXRIS :1;
    volatile const uint32_t DMATXRIS :1;
    volatile const uint32_t EOTRIS :1;
    const uint32_t reserved :25;
} SSIRIS_t;

typedef volatile struct
{
    volatile const uint32_t RORMIS :1;
    volatile const uint32_t RTMIS :1;
    volatile const uint32_t RXMIS :1;
    volatile const uint32_t TXMIS :1;
    volatile const uint32_t DMARXMIS :1;
    volatile const uint32_t DMATXMIS :1;
    volatile const uint32_t EOTMIS :1;
    const uint32_t reserved :25;
} SSIMIS_t;

typedef volatile struct
{
    volatile uint32_t RORIC :1;
    volatile uint32_t RTIC :1;
    const uint32_t reserved :2;
    volatile uint32_t DMARXIC :1;
    volatile uint32_t DMATXIC :1;
    volatile uint32_t EOTIC :1;
    const uint32_t reserved1 :25;
} SSIICR_t;

typedef volatile struct
{
    volatile uint32_t RXDMAE :1;
    volatile uint32_t TXDMAE :1;
    const uint32_t reserved :30;
} SSIDMACTL_t;

typedef volatile struct
{
    volatile const uint32_t HSCLK :1;
    volatile const uint32_t MODE :2;
    volatile const uint32_t FSSHLDFRM :1;
    const uint32_t reserved :28;
} SSIPP_t;

typedef volatile struct
{
    volatile uint32_t CS :4;
    uint32_t reserved : 28;
} SSICC_t;

typedef volatile struct
{
    volatile const uint32_t PID0 :8;
    const uint32_t reserved :24;
}SSIPeriphID0_t;

typedef volatile struct
{
    volatile const uint32_t PID1 :8;
    const uint32_t reserved :24;
}SSIPeriphID1_t;

typedef volatile struct
{
    volatile const uint32_t PID2 :8;
    const uint32_t reserved :24;
}SSIPeriphID2_t;

typedef volatile struct
{
    volatile const uint32_t PID3 :8;
    const uint32_t reserved :24;
}SSIPeriphID3_t;

typedef volatile struct
{
    volatile const uint32_t PID4 :8;
    const uint32_t reserved :24;
}SSIPeriphID4_t;

typedef volatile struct
{
    volatile const uint32_t PID5 :8;
    const uint32_t reserved :24;
}SSIPeriphID5_t;

typedef volatile struct
{
    volatile const uint32_t PID6 :8;
    const uint32_t reserved :24;
}SSIPeriphID6_t;

typedef volatile struct
{
    volatile const uint32_t PID7 :8;
    const uint32_t reserved :24;
}SSIPeriphID7_t;

typedef volatile struct
{
    volatile const uint32_t CID0 :8;
    const uint32_t reserved :24;
}SSICellID0_t;

typedef volatile struct
{
    volatile const uint32_t CID1 :8;
    const uint32_t reserved :24;
}SSICellID1_t;

typedef volatile struct
{
    volatile const uint32_t CID2 :8;
    const uint32_t reserved :24;
}SSICellID2_t;

typedef volatile struct
{
    volatile const uint32_t CID3 :8;
    const uint32_t reserved :24;
}SSICellID3_t;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTREGISTER_H_ */
