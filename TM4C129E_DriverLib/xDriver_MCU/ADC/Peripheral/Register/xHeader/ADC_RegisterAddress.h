/**
 *
 * @file ADC_RegisterAddress.h
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
 * @verbatim 21 oct. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 oct. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_XHEADER_ADC_REGISTERADDRESS_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_XHEADER_ADC_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define ADC_INPUT_REGISTER_NUM    ((uint32_t) 8UL)

#define ADC_BASE    ((uint32_t) 0x40038000UL)
#define ADC0_BASE    ((uint32_t) 0x40038000UL)
#define ADC1_BASE    ((uint32_t) 0x40039000UL)

#define ADC_OFFSET    ((uint32_t) 0x00038000UL)
#define ADC0_OFFSET    ((uint32_t) 0x00038000UL)
#define ADC1_OFFSET    ((uint32_t) 0x00039000UL)

#define ADC_BITBANDING_BASE    ((uint32_t) 0x42000000UL)

#define ADC_ACTSS_OFFSET    ((uint32_t) 0x0000UL)
#define ADC_RIS_OFFSET    ((uint32_t) 0x0004UL)
#define ADC_IM_OFFSET    ((uint32_t) 0x0008UL)
#define ADC_ISC_OFFSET    ((uint32_t) 0x000CUL)
#define ADC_OSTAT_OFFSET    ((uint32_t) 0x0010UL)
#define ADC_EMUX_OFFSET    ((uint32_t) 0x0014UL)
#define ADC_USTAT_OFFSET    ((uint32_t) 0x0018UL)
#define ADC_TSSEL_OFFSET    ((uint32_t) 0x001CUL)
#define ADC_SSPRI_OFFSET    ((uint32_t) 0x0020UL)
#define ADC_SPC_OFFSET    ((uint32_t) 0x0024UL)
#define ADC_PSSI_OFFSET    ((uint32_t) 0x0028UL)
#define ADC_SAC_OFFSET    ((uint32_t) 0x0030UL)
#define ADC_DCISC_OFFSET    ((uint32_t) 0x0034UL)
#define ADC_CTL_OFFSET    ((uint32_t) 0x0038UL)

#define ADC_SSMUX_OFFSET    ((uint32_t) 0x0000UL)
#define ADC_SSCTL_OFFSET    ((uint32_t) 0x0004UL)
#define ADC_SSFIFO_OFFSET    ((uint32_t) 0x0008UL)
#define ADC_SSFSTAT_OFFSET    ((uint32_t) 0x000CUL)
#define ADC_SSOP_OFFSET    ((uint32_t) 0x0010UL)
#define ADC_SSDC_OFFSET    ((uint32_t) 0x0014UL)
#define ADC_SSEMUX_OFFSET    ((uint32_t) 0x0018UL)
#define ADC_SSTSH_OFFSET    ((uint32_t) 0x001CUL)

#define ADC_INPUT_REGISTER_OFFSET    ((uint32_t) 0x0020UL)

#define ADC_SSMUX0_OFFSET    ((uint32_t) 0x0040UL)
#define ADC_SSCTL0_OFFSET    ((uint32_t) 0x0044UL)
#define ADC_SSFIFO0_OFFSET    ((uint32_t) 0x0048UL)
#define ADC_SSFSTAT0_OFFSET    ((uint32_t) 0x004CUL)
#define ADC_SSOP0_OFFSET    ((uint32_t) 0x0050UL)
#define ADC_SSDC0_OFFSET    ((uint32_t) 0x0054UL)
#define ADC_SSEMUX0_OFFSET    ((uint32_t) 0x0058UL)
#define ADC_SSTSH0_OFFSET    ((uint32_t) 0x005CUL)

#define ADC_SSMUX1_OFFSET    ((uint32_t) 0x0060UL)
#define ADC_SSCTL1_OFFSET    ((uint32_t) 0x0064UL)
#define ADC_SSFIFO1_OFFSET    ((uint32_t) 0x0068UL)
#define ADC_SSFSTAT1_OFFSET    ((uint32_t) 0x006CUL)
#define ADC_SSOP1_OFFSET    ((uint32_t) 0x0070UL)
#define ADC_SSDC1_OFFSET    ((uint32_t) 0x0074UL)
#define ADC_SSEMUX1_OFFSET    ((uint32_t) 0x0078UL)
#define ADC_SSTSH1_OFFSET    ((uint32_t) 0x007CUL)

#define ADC_SSMUX2_OFFSET    ((uint32_t) 0x0080UL)
#define ADC_SSCTL2_OFFSET    ((uint32_t) 0x0084UL)
#define ADC_SSFIFO2_OFFSET    ((uint32_t) 0x0088UL)
#define ADC_SSFSTAT2_OFFSET    ((uint32_t) 0x008CUL)
#define ADC_SSOP2_OFFSET    ((uint32_t) 0x0090UL)
#define ADC_SSDC2_OFFSET    ((uint32_t) 0x0094UL)
#define ADC_SSEMUX2_OFFSET    ((uint32_t) 0x0098UL)
#define ADC_SSTSH2_OFFSET    ((uint32_t) 0x009CUL)

#define ADC_SSMUX3_OFFSET    ((uint32_t) 0x00A0UL)
#define ADC_SSCTL3_OFFSET    ((uint32_t) 0x00A4UL)
#define ADC_SSFIFO3_OFFSET    ((uint32_t) 0x00A8UL)
#define ADC_SSFSTAT3_OFFSET    ((uint32_t) 0x00ACUL)
#define ADC_SSOP3_OFFSET    ((uint32_t) 0x00B0UL)
#define ADC_SSDC3_OFFSET    ((uint32_t) 0x00B4UL)
#define ADC_SSEMUX3_OFFSET    ((uint32_t) 0x00B8UL)
#define ADC_SSTSH3_OFFSET    ((uint32_t) 0x00BCUL)

#define ADC_DCRIC_OFFSET    ((uint32_t) 0x0D00UL)

#define ADC_DCCTL_OFFSET    ((uint32_t) 0x0E00UL)
#define ADC_DCCTL0_OFFSET    ((uint32_t) 0x0E00UL)
#define ADC_DCCTL1_OFFSET    ((uint32_t) 0x0E04UL)
#define ADC_DCCTL2_OFFSET    ((uint32_t) 0x0E08UL)
#define ADC_DCCTL3_OFFSET    ((uint32_t) 0x0E0CUL)
#define ADC_DCCTL4_OFFSET    ((uint32_t) 0x0E10UL)
#define ADC_DCCTL5_OFFSET    ((uint32_t) 0x0E14UL)
#define ADC_DCCTL6_OFFSET    ((uint32_t) 0x0E18UL)
#define ADC_DCCTL7_OFFSET    ((uint32_t) 0x0E1CUL)

#define ADC_DCCMP_OFFSET    ((uint32_t) 0x0E40UL)
#define ADC_DCCMP0_OFFSET    ((uint32_t) 0x0E40UL)
#define ADC_DCCMP1_OFFSET    ((uint32_t) 0x0E44UL)
#define ADC_DCCMP2_OFFSET    ((uint32_t) 0x0E48UL)
#define ADC_DCCMP3_OFFSET    ((uint32_t) 0x0E4CUL)
#define ADC_DCCMP4_OFFSET    ((uint32_t) 0x0E50UL)
#define ADC_DCCMP5_OFFSET    ((uint32_t) 0x0E54UL)
#define ADC_DCCMP6_OFFSET    ((uint32_t) 0x0E58UL)
#define ADC_DCCMP7_OFFSET    ((uint32_t) 0x0E5CUL)

#define ADC_PP_OFFSET    ((uint32_t) 0x0FC0UL)
#define ADC_PC_OFFSET    ((uint32_t) 0x0FC4UL)
#define ADC_CC_OFFSET    ((uint32_t) 0x0FC8UL)

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_XHEADER_ADC_REGISTERADDRESS_H_ */
