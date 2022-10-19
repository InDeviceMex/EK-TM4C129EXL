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
}SSI_CR0_t;

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
}SSI_CR1_t;

typedef volatile struct
{
    volatile UBase_t DATA :16;
    const UBase_t reserved :16;
}SSI_DR_t;

typedef volatile struct
{
    volatile const UBase_t TFE :1;
    volatile const UBase_t TNF :1;
    volatile const UBase_t RNE :1;
    volatile const UBase_t RFF :1;
    volatile const UBase_t BSY :1;
    const UBase_t reserved :27;
}SSI_SR_t;

typedef volatile struct
{
    volatile UBase_t CPSDVSR :8;
    const UBase_t reserved :24;
}SSI_CPSR_t;

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
}SSI_IM_t;

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
}SSI_RIS_t;

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
}SSI_MIS_t;

typedef volatile struct
{
    volatile UBase_t RORIC :1;
    volatile UBase_t RTIC :1;
    const UBase_t reserved :2;
    volatile UBase_t DMARXIC :1;
    volatile UBase_t DMATXIC :1;
    volatile UBase_t EOTIC :1;
    const UBase_t reserved1 :25;
}SSI_ICR_t;

typedef volatile struct
{
    volatile UBase_t RXDMAE :1;
    volatile UBase_t TXDMAE :1;
    const UBase_t reserved :30;
}SSI_DMACTL_t;

typedef volatile struct
{
    volatile const UBase_t HSCLK :1;
    volatile const UBase_t MODE :2;
    volatile const UBase_t FSSHLDFRM :1;
    const UBase_t reserved :28;
}SSI_PP_t;

typedef volatile struct
{
    volatile UBase_t CS :4;
    UBase_t reserved : 28;
}SSI_CC_t;

typedef volatile struct
{
    volatile const UBase_t PID0 :8;
    const UBase_t reserved :24;
}SSI_PeriphID0_t;

typedef volatile struct
{
    volatile const UBase_t PID1 :8;
    const UBase_t reserved :24;
}SSI_PeriphID1_t;

typedef volatile struct
{
    volatile const UBase_t PID2 :8;
    const UBase_t reserved :24;
}SSI_PeriphID2_t;

typedef volatile struct
{
    volatile const UBase_t PID3 :8;
    const UBase_t reserved :24;
}SSI_PeriphID3_t;

typedef volatile struct
{
    volatile const UBase_t PID4 :8;
    const UBase_t reserved :24;
}SSI_PeriphID4_t;

typedef volatile struct
{
    volatile const UBase_t PID5 :8;
    const UBase_t reserved :24;
}SSI_PeriphID5_t;

typedef volatile struct
{
    volatile const UBase_t PID6 :8;
    const UBase_t reserved :24;
}SSI_PeriphID6_t;

typedef volatile struct
{
    volatile const UBase_t PID7 :8;
    const UBase_t reserved :24;
}SSI_PeriphID7_t;

typedef volatile struct
{
    volatile const UBase_t CID0 :8;
    const UBase_t reserved :24;
}SSI_PCellID0_t;

typedef volatile struct
{
    volatile const UBase_t CID1 :8;
    const UBase_t reserved :24;
}SSI_PCellID1_t;

typedef volatile struct
{
    volatile const UBase_t CID2 :8;
    const UBase_t reserved :24;
}SSI_PCellID2_t;

typedef volatile struct
{
    volatile const UBase_t CID3 :8;
    const UBase_t reserved :24;
}SSI_PCellID3_t;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTREGISTER_H_ */
