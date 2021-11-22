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

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef volatile struct
{
    volatile uint32_t DSS [4UL];
    volatile uint32_t FRF [2UL];
    volatile uint32_t SPO;
    volatile uint32_t SPH;
    volatile uint32_t SCR [8UL];
    const uint32_t reserved [16UL];
}BITBANDING_SSICR0_t;

typedef volatile struct
{
    volatile uint32_t LBM;
    volatile uint32_t SSE;
    volatile uint32_t MS;
    const uint32_t reserved;
    volatile uint32_t EOT;
    const uint32_t reserved1;
    volatile uint32_t MODE [2UL];
    volatile uint32_t DIR;
    volatile uint32_t HSCLKEN;
    volatile uint32_t FSSHLDFRM;
    volatile uint32_t EOM;
    const uint32_t reserved2 [20UL];
}BITBANDING_SSICR1_t;

typedef volatile struct
{
    volatile uint32_t DATA [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_SSIDR_t;

typedef volatile struct
{
    volatile const uint32_t TFE;
    volatile const uint32_t TNF;
    volatile const uint32_t RNE;
    volatile const uint32_t RFF;
    volatile const uint32_t BSY;
    const uint32_t reserved [27UL];
}BITBANDING_SSISR_t;

typedef volatile struct
{
    volatile uint32_t CPSDVSR [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_SSICPSR_t;

typedef volatile struct
{
    volatile uint32_t RORIM;
    volatile uint32_t RTIM;
    volatile uint32_t RXIM;
    volatile uint32_t TXIM;
    volatile uint32_t DMARXIM;
    volatile uint32_t DMATXIM;
    volatile uint32_t EOTIM;
    const uint32_t reserved [25UL];
}BITBANDING_SSIIM_t;

typedef volatile struct
{
    volatile const uint32_t RORRIS;
    volatile const uint32_t RTRIS;
    volatile const uint32_t RXRIS;
    volatile const uint32_t TXRIS;
    volatile const uint32_t DMARXRIS;
    volatile const uint32_t DMATXRIS;
    volatile const uint32_t EOTRIS;
    const uint32_t reserved [25UL];
}BITBANDING_SSIRIS_t;

typedef volatile struct
{
    volatile const uint32_t RORMIS;
    volatile const uint32_t RTMIS;
    volatile const uint32_t RXMIS;
    volatile const uint32_t TXMIS;
    volatile const uint32_t DMARXMIS;
    volatile const uint32_t DMATXMIS;
    volatile const uint32_t EOTMIS;
    const uint32_t reserved [25UL];
}BITBANDING_SSIMIS_t;

typedef volatile struct
{
    volatile uint32_t RORIC;
    volatile uint32_t RTIC;
    const uint32_t reserved [2UL];
    volatile uint32_t DMARXIC;
    volatile uint32_t DMATXIC;
    volatile uint32_t EOTIC;
    const uint32_t reserved1 [25UL];
}BITBANDING_SSIICR_t;

typedef volatile struct
{
    volatile uint32_t RXDMAE;
    volatile uint32_t TXDMAE;
    const uint32_t reserved [30UL];
}BITBANDING_SSIDMACTL_t;

typedef volatile struct
{
    volatile const uint32_t HSCLK;
    volatile const uint32_t MODE [2UL];
    volatile const uint32_t FSSHLDFRM;
    const uint32_t reserved [28UL];
}BITBANDING_SSIPP_t;

typedef volatile struct
{
    volatile uint32_t CS [4UL];
    uint32_t reserved : 28;
}BITBANDING_SSICC_t;

typedef volatile struct
{
    volatile const uint32_t PID0 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_SSIPeriphID0_t;

typedef volatile struct
{
    volatile const uint32_t PID1 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_SSIPeriphID1_t;

typedef volatile struct
{
    volatile const uint32_t PID2 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_SSIPeriphID2_t;

typedef volatile struct
{
    volatile const uint32_t PID3 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_SSIPeriphID3_t;

typedef volatile struct
{
    volatile const uint32_t PID4 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_SSIPeriphID4_t;

typedef volatile struct
{
    volatile const uint32_t PID5 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_SSIPeriphID5_t;

typedef volatile struct
{
    volatile const uint32_t PID6 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_SSIPeriphID6_t;

typedef volatile struct
{
    volatile const uint32_t PID7 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_SSIPeriphID7_t;

typedef volatile struct
{
    volatile const uint32_t CID0 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_SSICellID0_t;

typedef volatile struct
{
    volatile const uint32_t CID1 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_SSICellID1_t;

typedef volatile struct
{
    volatile const uint32_t CID2 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_SSICellID2_t;

typedef volatile struct
{
    volatile const uint32_t CID3 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_SSICellID3_t;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTREGISTER_BITBANDING_H_ */
