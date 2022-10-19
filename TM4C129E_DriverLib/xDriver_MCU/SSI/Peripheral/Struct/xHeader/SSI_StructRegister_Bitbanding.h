/**
 *
 * @file SSI_StructRegister_Bitbanding.h
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

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTREGISTER_BITBANDING_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

typedef volatile struct
{
    volatile UBase_t DSS [4UL];
    volatile UBase_t FRF [2UL];
    volatile UBase_t SPO;
    volatile UBase_t SPH;
    volatile UBase_t SCR [8UL];
    const UBase_t reserved [16UL];
}SSI_BITBANDING_CR0_t;

typedef volatile struct
{
    volatile UBase_t LBM;
    volatile UBase_t SSE;
    volatile UBase_t MS;
    const UBase_t reserved;
    volatile UBase_t EOT;
    const UBase_t reserved1;
    volatile UBase_t MODE [2UL];
    volatile UBase_t DIR;
    volatile UBase_t HSCLKEN;
    volatile UBase_t FSSHLDFRM;
    volatile UBase_t EOM;
    const UBase_t reserved2 [20UL];
}SSI_BITBANDING_CR1_t;

typedef volatile struct
{
    volatile UBase_t DATA [16UL];
    const UBase_t reserved [16UL];
}SSI_BITBANDING_DR_t;

typedef volatile struct
{
    volatile const UBase_t TFE;
    volatile const UBase_t TNF;
    volatile const UBase_t RNE;
    volatile const UBase_t RFF;
    volatile const UBase_t BSY;
    const UBase_t reserved [27UL];
}SSI_BITBANDING_SR_t;

typedef volatile struct
{
    volatile UBase_t CPSDVSR [8UL];
    const UBase_t reserved [24UL];
}SSI_BITBANDING_CPSR_t;

typedef volatile struct
{
    volatile UBase_t RORIM;
    volatile UBase_t RTIM;
    volatile UBase_t RXIM;
    volatile UBase_t TXIM;
    volatile UBase_t DMARXIM;
    volatile UBase_t DMATXIM;
    volatile UBase_t EOTIM;
    const UBase_t reserved [25UL];
}SSI_BITBANDING_IM_t;

typedef volatile struct
{
    volatile const UBase_t RORRIS;
    volatile const UBase_t RTRIS;
    volatile const UBase_t RXRIS;
    volatile const UBase_t TXRIS;
    volatile const UBase_t DMARXRIS;
    volatile const UBase_t DMATXRIS;
    volatile const UBase_t EOTRIS;
    const UBase_t reserved [25UL];
}SSI_BITBANDING_RIS_t;

typedef volatile struct
{
    volatile const UBase_t RORMIS;
    volatile const UBase_t RTMIS;
    volatile const UBase_t RXMIS;
    volatile const UBase_t TXMIS;
    volatile const UBase_t DMARXMIS;
    volatile const UBase_t DMATXMIS;
    volatile const UBase_t EOTMIS;
    const UBase_t reserved [25UL];
}SSI_BITBANDING_MIS_t;

typedef volatile struct
{
    volatile UBase_t RORIC;
    volatile UBase_t RTIC;
    const UBase_t reserved [2UL];
    volatile UBase_t DMARXIC;
    volatile UBase_t DMATXIC;
    volatile UBase_t EOTIC;
    const UBase_t reserved1 [25UL];
}SSI_BITBANDING_ICR_t;

typedef volatile struct
{
    volatile UBase_t RXDMAE;
    volatile UBase_t TXDMAE;
    const UBase_t reserved [30UL];
}SSI_BITBANDING_DMACTL_t;

typedef volatile struct
{
    volatile const UBase_t HSCLK;
    volatile const UBase_t MODE [2UL];
    volatile const UBase_t FSSHLDFRM;
    const UBase_t reserved [28UL];
}SSI_BITBANDING_PP_t;

typedef volatile struct
{
    volatile UBase_t CS [4UL];
    UBase_t reserved : 28;
}SSI_BITBANDING_CC_t;

typedef volatile struct
{
    volatile const UBase_t PID0 [8UL];
    const UBase_t reserved [24UL];
}SSI_BITBANDING_PeriphID0_t;

typedef volatile struct
{
    volatile const UBase_t PID1 [8UL];
    const UBase_t reserved [24UL];
}SSI_BITBANDING_PeriphID1_t;

typedef volatile struct
{
    volatile const UBase_t PID2 [8UL];
    const UBase_t reserved [24UL];
}SSI_BITBANDING_PeriphID2_t;

typedef volatile struct
{
    volatile const UBase_t PID3 [8UL];
    const UBase_t reserved [24UL];
}SSI_BITBANDING_PeriphID3_t;

typedef volatile struct
{
    volatile const UBase_t PID4 [8UL];
    const UBase_t reserved [24UL];
}SSI_BITBANDING_PeriphID4_t;

typedef volatile struct
{
    volatile const UBase_t PID5 [8UL];
    const UBase_t reserved [24UL];
}SSI_BITBANDING_PeriphID5_t;

typedef volatile struct
{
    volatile const UBase_t PID6 [8UL];
    const UBase_t reserved [24UL];
}SSI_BITBANDING_PeriphID6_t;

typedef volatile struct
{
    volatile const UBase_t PID7 [8UL];
    const UBase_t reserved [24UL];
}SSI_BITBANDING_PeriphID7_t;

typedef volatile struct
{
    volatile const UBase_t CID0 [8UL];
    const UBase_t reserved [24UL];
}SSI_BITBANDING_PCellID0_t;

typedef volatile struct
{
    volatile const UBase_t CID1 [8UL];
    const UBase_t reserved [24UL];
}SSI_BITBANDING_PCellID1_t;

typedef volatile struct
{
    volatile const UBase_t CID2 [8UL];
    const UBase_t reserved [24UL];
}SSI_BITBANDING_PCellID2_t;

typedef volatile struct
{
    volatile const UBase_t CID3 [8UL];
    const UBase_t reserved [24UL];
}SSI_BITBANDING_PCellID3_t;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTREGISTER_BITBANDING_H_ */
