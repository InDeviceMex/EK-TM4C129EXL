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

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

typedef volatile struct
{
    volatile UBase_t DSS :4;
    volatile UBase_t FRF :2;
    volatile UBase_t SPO :1;
    volatile UBase_t SPH :1;
    volatile UBase_t SCR :8;
    const UBase_t reserved :16;
} SSICR0_t;

typedef volatile struct
{
    volatile UBase_t LBM :1;
    volatile UBase_t SSE :1;
    volatile UBase_t MS :1;
    const UBase_t reserved :1;
    volatile UBase_t EOT :1;
    const UBase_t reserved1 :1;
    volatile UBase_t MODE :2;
    volatile UBase_t DIR :1;
    volatile UBase_t HSCLKEN :1;
    volatile UBase_t FSSHLDFRM :1;
    volatile UBase_t EOM :1;
    const UBase_t reserved2 :20;
} SSICR1_t;

typedef volatile struct
{
    volatile UBase_t DATA :16;
    const UBase_t reserved :16;
} SSIDR_t;

typedef volatile struct
{
    volatile const UBase_t TFE :1;
    volatile const UBase_t TNF :1;
    volatile const UBase_t RNE :1;
    volatile const UBase_t RFF :1;
    volatile const UBase_t BSY :1;
    const UBase_t reserved :27;
} SSISR_t;

typedef volatile struct
{
    volatile UBase_t CPSDVSR :8;
    const UBase_t reserved :24;
} SSICPSR_t;

typedef volatile struct
{
    volatile UBase_t RORIM :1;
    volatile UBase_t RTIM :1;
    volatile UBase_t RXIM :1;
    volatile UBase_t TXIM :1;
    volatile UBase_t DMARXIM :1;
    volatile UBase_t DMATXIM :1;
    volatile UBase_t EOTIM :1;
    const UBase_t reserved :25;
} SSIIM_t;

typedef volatile struct
{
    volatile const UBase_t RORRIS :1;
    volatile const UBase_t RTRIS :1;
    volatile const UBase_t RXRIS :1;
    volatile const UBase_t TXRIS :1;
    volatile const UBase_t DMARXRIS :1;
    volatile const UBase_t DMATXRIS :1;
    volatile const UBase_t EOTRIS :1;
    const UBase_t reserved :25;
} SSIRIS_t;

typedef volatile struct
{
    volatile const UBase_t RORMIS :1;
    volatile const UBase_t RTMIS :1;
    volatile const UBase_t RXMIS :1;
    volatile const UBase_t TXMIS :1;
    volatile const UBase_t DMARXMIS :1;
    volatile const UBase_t DMATXMIS :1;
    volatile const UBase_t EOTMIS :1;
    const UBase_t reserved :25;
} SSIMIS_t;

typedef volatile struct
{
    volatile UBase_t RORIC :1;
    volatile UBase_t RTIC :1;
    const UBase_t reserved :2;
    volatile UBase_t DMARXIC :1;
    volatile UBase_t DMATXIC :1;
    volatile UBase_t EOTIC :1;
    const UBase_t reserved1 :25;
} SSIICR_t;

typedef volatile struct
{
    volatile UBase_t RXDMAE :1;
    volatile UBase_t TXDMAE :1;
    const UBase_t reserved :30;
} SSIDMACTL_t;

typedef volatile struct
{
    volatile const UBase_t HSCLK :1;
    volatile const UBase_t MODE :2;
    volatile const UBase_t FSSHLDFRM :1;
    const UBase_t reserved :28;
} SSIPP_t;

typedef volatile struct
{
    volatile UBase_t CS :4;
    UBase_t reserved : 28;
} SSICC_t;

typedef volatile struct
{
    volatile const UBase_t PID0 :8;
    const UBase_t reserved :24;
}SSIPeriphID0_t;

typedef volatile struct
{
    volatile const UBase_t PID1 :8;
    const UBase_t reserved :24;
}SSIPeriphID1_t;

typedef volatile struct
{
    volatile const UBase_t PID2 :8;
    const UBase_t reserved :24;
}SSIPeriphID2_t;

typedef volatile struct
{
    volatile const UBase_t PID3 :8;
    const UBase_t reserved :24;
}SSIPeriphID3_t;

typedef volatile struct
{
    volatile const UBase_t PID4 :8;
    const UBase_t reserved :24;
}SSIPeriphID4_t;

typedef volatile struct
{
    volatile const UBase_t PID5 :8;
    const UBase_t reserved :24;
}SSIPeriphID5_t;

typedef volatile struct
{
    volatile const UBase_t PID6 :8;
    const UBase_t reserved :24;
}SSIPeriphID6_t;

typedef volatile struct
{
    volatile const UBase_t PID7 :8;
    const UBase_t reserved :24;
}SSIPeriphID7_t;

typedef volatile struct
{
    volatile const UBase_t CID0 :8;
    const UBase_t reserved :24;
}SSICellID0_t;

typedef volatile struct
{
    volatile const UBase_t CID1 :8;
    const UBase_t reserved :24;
}SSICellID1_t;

typedef volatile struct
{
    volatile const UBase_t CID2 :8;
    const UBase_t reserved :24;
}SSICellID2_t;

typedef volatile struct
{
    volatile const UBase_t CID3 :8;
    const UBase_t reserved :24;
}SSICellID3_t;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTREGISTER_H_ */
