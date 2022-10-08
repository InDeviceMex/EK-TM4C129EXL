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
}BITBANDING_SSICR0_t;

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
}BITBANDING_SSICR1_t;

typedef volatile struct
{
    volatile UBase_t DATA [16UL];
    const UBase_t reserved [16UL];
}BITBANDING_SSIDR_t;

typedef volatile struct
{
    volatile const UBase_t TFE;
    volatile const UBase_t TNF;
    volatile const UBase_t RNE;
    volatile const UBase_t RFF;
    volatile const UBase_t BSY;
    const UBase_t reserved [27UL];
}BITBANDING_SSISR_t;

typedef volatile struct
{
    volatile UBase_t CPSDVSR [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_SSICPSR_t;

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
}BITBANDING_SSIIM_t;

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
}BITBANDING_SSIRIS_t;

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
}BITBANDING_SSIMIS_t;

typedef volatile struct
{
    volatile UBase_t RORIC;
    volatile UBase_t RTIC;
    const UBase_t reserved [2UL];
    volatile UBase_t DMARXIC;
    volatile UBase_t DMATXIC;
    volatile UBase_t EOTIC;
    const UBase_t reserved1 [25UL];
}BITBANDING_SSIICR_t;

typedef volatile struct
{
    volatile UBase_t RXDMAE;
    volatile UBase_t TXDMAE;
    const UBase_t reserved [30UL];
}BITBANDING_SSIDMACTL_t;

typedef volatile struct
{
    volatile const UBase_t HSCLK;
    volatile const UBase_t MODE [2UL];
    volatile const UBase_t FSSHLDFRM;
    const UBase_t reserved [28UL];
}BITBANDING_SSIPP_t;

typedef volatile struct
{
    volatile UBase_t CS [4UL];
    UBase_t reserved : 28;
}BITBANDING_SSICC_t;

typedef volatile struct
{
    volatile const UBase_t PID0 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_SSIPeriphID0_t;

typedef volatile struct
{
    volatile const UBase_t PID1 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_SSIPeriphID1_t;

typedef volatile struct
{
    volatile const UBase_t PID2 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_SSIPeriphID2_t;

typedef volatile struct
{
    volatile const UBase_t PID3 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_SSIPeriphID3_t;

typedef volatile struct
{
    volatile const UBase_t PID4 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_SSIPeriphID4_t;

typedef volatile struct
{
    volatile const UBase_t PID5 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_SSIPeriphID5_t;

typedef volatile struct
{
    volatile const UBase_t PID6 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_SSIPeriphID6_t;

typedef volatile struct
{
    volatile const UBase_t PID7 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_SSIPeriphID7_t;

typedef volatile struct
{
    volatile const UBase_t CID0 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_SSICellID0_t;

typedef volatile struct
{
    volatile const UBase_t CID1 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_SSICellID1_t;

typedef volatile struct
{
    volatile const UBase_t CID2 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_SSICellID2_t;

typedef volatile struct
{
    volatile const UBase_t CID3 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_SSICellID3_t;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTREGISTER_BITBANDING_H_ */
