/**
 *
 * @file TIMER_RegisterDefines_ModuleW_32_DMAEV.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 10 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERDEFINES_REGISTERDEFINES_MODULEW_32_XHEADER_TIMER_REGISTERDEFINES_MODULEW_32_DMAEV_H_
#define XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERDEFINES_REGISTERDEFINES_MODULEW_32_XHEADER_TIMER_REGISTERDEFINES_MODULEW_32_DMAEV_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 6 DMAEV *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TW_TnDMAEV_R_TnTODMAEN_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TW_TnDMAEV_R_TnTODMAEN_BIT    (0UL)
#define GPTM_TW_TnDMAEV_R_TnTODMAEN_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnDMAEV_R_TnTODMAEN_ENA    ((uint32_t) 0x00000001UL)

#define GPTM_TW_TnDMAEV_TnTODMAEN_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TW_TnDMAEV_TnTODMAEN_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnDMAEV_TnTODMAEN_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnDMAEV_R_CnMDMAEN_MASK    ((uint32_t) 0x00000002UL)
#define GPTM_TW_TnDMAEV_R_CnMDMAEN_BIT    (1UL)
#define GPTM_TW_TnDMAEV_R_CnMDMAEN_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnDMAEV_R_CnMDMAEN_ENA    ((uint32_t) 0x00000002UL)

#define GPTM_TW_TnDMAEV_CnMDMAEN_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TW_TnDMAEV_CnMDMAEN_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnDMAEV_CnMDMAEN_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnDMAEV_R_CnEDMAEN_MASK    ((uint32_t) 0x00000004UL)
#define GPTM_TW_TnDMAEV_R_CnEDMAEN_BIT    (2UL)
#define GPTM_TW_TnDMAEV_R_CnEDMAEN_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnDMAEV_R_CnEDMAEN_ENA    ((uint32_t) 0x00000004UL)

#define GPTM_TW_TnDMAEV_CnEDMAEN_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TW_TnDMAEV_CnEDMAEN_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnDMAEV_CnEDMAEN_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnDMAEV_R_RTCDMAEN_MASK    ((uint32_t) 0x00000008UL)
#define GPTM_TW_TnDMAEV_R_RTCDMAEN_BIT    (3UL)
#define GPTM_TW_TnDMAEV_R_RTCDMAEN_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnDMAEV_R_RTCDMAEN_OCCUR    ((uint32_t) 0x00000008UL)

#define GPTM_TW_TnDMAEV_RTCDMAEN_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TW_TnDMAEV_RTCDMAEN_NOOCCUR    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnDMAEV_RTCDMAEN_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TW_TnDMAEV_R_TnMDMAEN_MASK    ((uint32_t) 0x00000010UL)
#define GPTM_TW_TnDMAEV_R_TnMDMAEN_BIT    (4UL)
#define GPTM_TW_TnDMAEV_R_TnMDMAEN_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnDMAEV_R_TnMDMAEN_ENA    ((uint32_t) 0x00000010UL)

#define GPTM_TW_TnDMAEV_TnMDMAEN_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TW_TnDMAEV_TnMDMAEN_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TW_TnDMAEV_TnMDMAEN_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERDEFINES_REGISTERDEFINES_MODULEW_32_XHEADER_TIMER_REGISTERDEFINES_MODULEW_32_DMAEV_H_ */
