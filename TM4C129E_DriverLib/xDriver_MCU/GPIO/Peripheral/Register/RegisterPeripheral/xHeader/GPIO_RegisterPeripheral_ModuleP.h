/**
 *
 * @file GPIO_RegisterPeripheral_ModuleP.h
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
 * @verbatim 9 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEP_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEP_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOP    ((GPIO_TypeDef*) (GPIOP_BASE))
#define GPIOP_AUX    ((GPIO_AUX_TypeDef*) (GPIOP_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOP DATA*/
#define GPIOP_DATA_MASK    ((GPIOPATA_MASK_TypeDef*) (GPIOP_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOP_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOP_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOP_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOP_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOP_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOP_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOP_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOP_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOP_DATA    ((GPIOPATA_TypeDef*) (GPIOP_BASE + GPIO_DATA_OFFSET))
#define GPIOP_DATA_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOP DIR*/
#define GPIOP_DIR    ((GPIOPIR_TypeDef*) (GPIOP_BASE + GPIO_DIR_OFFSET))
#define GPIOP_DIR_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOP IS*/
#define GPIOP_IS    ((GPIOIS_TypeDef*) (GPIOP_BASE + GPIO_IS_OFFSET))
#define GPIOP_IS_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOP IBE*/
#define GPIOP_IBE    ((GPIOIBE_TypeDef*) (GPIOP_BASE + GPIO_IBE_OFFSET))
#define GPIOP_IBE_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOP IEV*/
#define GPIOP_IEV    ((GPIOIEV_TypeDef*) (GPIOP_BASE + GPIO_IEV_OFFSET))
#define GPIOP_IEV_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOP IME*/
#define GPIOP_IM    ((GPIOIM_TypeDef*) (GPIOP_BASE + GPIO_IM_OFFSET))
#define GPIOP_IM_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOP RIS*/
#define GPIOP_RIS    ((GPIORIS_TypeDef*) (GPIOP_BASE + GPIO_RIS_OFFSET))
#define GPIOP_RIS_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOP MIS*/
#define GPIOP_MIS    ((GPIOMIS_TypeDef*) (GPIOP_BASE + GPIO_MIS_OFFSET))
#define GPIOP_MIS_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOP IC*/
#define GPIOP_ICR    ((GPIOICR_TypeDef*) (GPIOP_BASE + GPIO_ICR_OFFSET))
#define GPIOP_ICR_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOP AFSEL*/
#define GPIOP_AFSEL    ((GPIOPFSEL_TypeDef*) (GPIOP_BASE + GPIO_AFSEL_OFFSET))
#define GPIOP_AFSEL_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOP DRV2*/
#define GPIOP_DRR    ((GPIOPRR_ARRAY_TypeDef*) (GPIOP_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOP DRV2*/
#define GPIOP_DR2R    ((GPIOPR2R_TypeDef*) (GPIOP_BASE + GPIO_DR2R_OFFSET))
#define GPIOP_DR2R_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOP DRV4*/
#define GPIOP_DR4R    ((GPIOPR4R_TypeDef*) (GPIOP_BASE + GPIO_DR4R_OFFSET))
#define GPIOP_DR4R_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOP DRV8*/
#define GPIOP_DR8R    ((GPIOPR8R_TypeDef*) (GPIOP_BASE + GPIO_DR8R_OFFSET))
#define GPIOP_DR8R_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOP ODE*/
#define GPIOP_ODR    ((GPIOODR_TypeDef*) (GPIOP_BASE + GPIO_ODR_OFFSET))
#define GPIOP_ODR_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOP PUE*/
#define GPIOP_PUR    ((GPIOPUR_TypeDef*) (GPIOP_BASE + GPIO_PUR_OFFSET))
#define GPIOP_PUR_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOP PDE*/
#define GPIOP_PDR    ((GPIOPDR_TypeDef*) (GPIOP_BASE + GPIO_PDR_OFFSET))
#define GPIOP_PDR_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOP SLR*/
#define GPIOP_SLR    ((GPIOSLR_TypeDef*) (GPIOP_BASE + GPIO_SLR_OFFSET))
#define GPIOP_SLR_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOP DEN*/
#define GPIOP_DEN    ((GPIOPEN_TypeDef*) (GPIOP_BASE + GPIO_DEN_OFFSET))
#define GPIOP_DEN_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOP LOCK*/
#define GPIOP_LOCK    ((GPIOLOCK_TypeDef*) (GPIOP_BASE + GPIO_LOCK_OFFSET))
#define GPIOP_LOCK_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOP CR*/
#define GPIOP_CR    ((GPIOPR_TypeDef*) (GPIOP_BASE + GPIO_CR_OFFSET))
#define GPIOP_CR_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOP AMSEL*/
#define GPIOP_AMSEL    ((GPIOPMSEL_TypeDef*) (GPIOP_BASE + GPIO_AMSEL_OFFSET))
#define GPIOP_AMSEL_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOP PCTL*/
#define GPIOP_PCTL    ((GPIOPCTL_TypeDef*) (GPIOP_BASE + GPIO_PCTL_OFFSET))
#define GPIOP_PCTL_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOP ADCCTL*/
#define GPIOP_ADCCTL    ((GPIOPDCCTL_TypeDef*) (GPIOP_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOP_ADCCTL_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOP DMACTL*/
#define GPIOP_DMACTL    ((GPIOPMACTL_TypeDef*) (GPIOP_BASE + GPIO_DMACTL_OFFSET))
#define GPIOP_DMACTL_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOP SI*/
#define GPIOP_SI    ((GPIOSI_TypeDef*) (GPIOP_BASE + GPIO_SI_OFFSET))
#define GPIOP_SI_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOP DR12R*/
#define GPIOP_DR12R    ((GPIOPR12R_TypeDef*) (GPIOP_BASE + GPIO_DR12R_OFFSET))
#define GPIOP_DR12R_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOP WAKEPEN*/
#define GPIOP_WAKEPEN    ((GPIOWAKEPEN_TypeDef*) (GPIOP_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOP_WAKEPEN_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOP WAKELVL*/
#define GPIOP_WAKELVL    ((GPIOWAKELVL_TypeDef*) (GPIOP_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOP_WAKELVL_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOP WAKESTAT*/
#define GPIOP_WAKESTAT    ((GPIOWAKESTAT_TypeDef*) (GPIOP_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOP_WAKESTAT_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOP PP*/
#define GPIOP_PP    ((GPIOPP_TypeDef*) (GPIOP_BASE + GPIO_PP_OFFSET))
#define GPIOP_PP_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOP PC*/
#define GPIOP_PC    ((GPIOPC_TypeDef*) (GPIOP_BASE + GPIO_PC_OFFSET))
#define GPIOP_PC_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOP PID4*/
#define GPIOP_PeriphID4    ((GPIOPeriphID4_TypeDef*) (GPIOP_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOP_PeriphID4_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOP PID5*/
#define GPIOP_PeriphID5    ((GPIOPeriphID5_TypeDef*) (GPIOP_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOP_PeriphID5_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOP PID6*/
#define GPIOP_PeriphID6    ((GPIOPeriphID6_TypeDef*) (GPIOP_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOP_PeriphID6_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOP PID7*/
#define GPIOP_PeriphID7    ((GPIOPeriphID7_TypeDef*) (GPIOP_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOP_PeriphID7_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOP PID0*/
#define GPIOP_PeriphID0    ((GPIOPeriphID0_TypeDef*) (GPIOP_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOP_PeriphID0_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOP PID1*/
#define GPIOP_PeriphID1    ((GPIOPeriphID1_TypeDef*) (GPIOP_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOP_PeriphID1_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOP PID2*/
#define GPIOP_PeriphID2    ((GPIOPeriphID2_TypeDef*) (GPIOP_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOP_PeriphID2_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOP PID3*/
#define GPIOP_PeriphID3    ((GPIOPeriphID3_TypeDef*) (GPIOP_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOP_PeriphID3_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOP CID0*/
#define GPIOP_CellID0    ((GPIOPellID0_TypeDef*) (GPIOP_BASE + GPIO_CellID0_OFFSET))
#define GPIOP_CellID0_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOP CID1*/
#define GPIOP_CellID1    ((GPIOPellID1_TypeDef*) (GPIOP_BASE + GPIO_CellID1_OFFSET))
#define GPIOP_CellID1_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOP CID2*/
#define GPIOP_CellID2    ((GPIOPellID2_TypeDef*) (GPIOP_BASE + GPIO_CellID2_OFFSET))
#define GPIOP_CellID2_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOP CID3*/
#define GPIOP_CellID3    ((GPIOPellID3_TypeDef*) (GPIOP_BASE + GPIO_CellID3_OFFSET))
#define GPIOP_CellID3_R    (*((volatile uint32_t *) (GPIOP_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEP_H_ */
