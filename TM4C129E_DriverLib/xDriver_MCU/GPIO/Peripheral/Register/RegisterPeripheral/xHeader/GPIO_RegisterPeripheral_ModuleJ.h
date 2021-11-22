/**
 *
 * @file GPIO_RegisterPeripheral_ModuleJ.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEJ_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEJ_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOJ    ((GPIO_t*) (GPIOJ_BASE))
#define GPIOJ_AUX    ((GPIO_AUX_t*) (GPIOJ_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOJ DATA*/
#define GPIOJ_DATA_MASK    ((GPIOJATA_MASK_t*) (GPIOJ_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOJ_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOJ_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOJ_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOJ_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOJ_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOJ_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOJ_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOJ_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOJ_DATA    ((GPIOJATA_t*) (GPIOJ_BASE + GPIO_DATA_OFFSET))
#define GPIOJ_DATA_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOJ DIR*/
#define GPIOJ_DIR    ((GPIOJIR_t*) (GPIOJ_BASE + GPIO_DIR_OFFSET))
#define GPIOJ_DIR_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOJ IS*/
#define GPIOJ_IS    ((GPIOIS_t*) (GPIOJ_BASE + GPIO_IS_OFFSET))
#define GPIOJ_IS_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOJ IBE*/
#define GPIOJ_IBE    ((GPIOIBE_t*) (GPIOJ_BASE + GPIO_IBE_OFFSET))
#define GPIOJ_IBE_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOJ IEV*/
#define GPIOJ_IEV    ((GPIOIEV_t*) (GPIOJ_BASE + GPIO_IEV_OFFSET))
#define GPIOJ_IEV_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOJ IME*/
#define GPIOJ_IM    ((GPIOIM_t*) (GPIOJ_BASE + GPIO_IM_OFFSET))
#define GPIOJ_IM_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOJ RIS*/
#define GPIOJ_RIS    ((GPIORIS_t*) (GPIOJ_BASE + GPIO_RIS_OFFSET))
#define GPIOJ_RIS_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOJ MIS*/
#define GPIOJ_MIS    ((GPIOMIS_t*) (GPIOJ_BASE + GPIO_MIS_OFFSET))
#define GPIOJ_MIS_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOJ IC*/
#define GPIOJ_ICR    ((GPIOICR_t*) (GPIOJ_BASE + GPIO_ICR_OFFSET))
#define GPIOJ_ICR_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOJ AFSEL*/
#define GPIOJ_AFSEL    ((GPIOJFSEL_t*) (GPIOJ_BASE + GPIO_AFSEL_OFFSET))
#define GPIOJ_AFSEL_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOJ DRV2*/
#define GPIOJ_DRR    ((GPIOJRR_ARRAY_t*) (GPIOJ_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOJ DRV2*/
#define GPIOJ_DR2R    ((GPIOJR2R_t*) (GPIOJ_BASE + GPIO_DR2R_OFFSET))
#define GPIOJ_DR2R_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOJ DRV4*/
#define GPIOJ_DR4R    ((GPIOJR4R_t*) (GPIOJ_BASE + GPIO_DR4R_OFFSET))
#define GPIOJ_DR4R_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOJ DRV8*/
#define GPIOJ_DR8R    ((GPIOJR8R_t*) (GPIOJ_BASE + GPIO_DR8R_OFFSET))
#define GPIOJ_DR8R_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOJ ODE*/
#define GPIOJ_ODR    ((GPIOODR_t*) (GPIOJ_BASE + GPIO_ODR_OFFSET))
#define GPIOJ_ODR_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOJ PUE*/
#define GPIOJ_PUR    ((GPIOPUR_t*) (GPIOJ_BASE + GPIO_PUR_OFFSET))
#define GPIOJ_PUR_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOJ PDE*/
#define GPIOJ_PDR    ((GPIOPDR_t*) (GPIOJ_BASE + GPIO_PDR_OFFSET))
#define GPIOJ_PDR_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOJ SLR*/
#define GPIOJ_SLR    ((GPIOSLR_t*) (GPIOJ_BASE + GPIO_SLR_OFFSET))
#define GPIOJ_SLR_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOJ DEN*/
#define GPIOJ_DEN    ((GPIOJEN_t*) (GPIOJ_BASE + GPIO_DEN_OFFSET))
#define GPIOJ_DEN_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOJ LOCK*/
#define GPIOJ_LOCK    ((GPIOLOCK_t*) (GPIOJ_BASE + GPIO_LOCK_OFFSET))
#define GPIOJ_LOCK_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOJ CR*/
#define GPIOJ_CR    ((GPIOJR_t*) (GPIOJ_BASE + GPIO_CR_OFFSET))
#define GPIOJ_CR_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOJ AMSEL*/
#define GPIOJ_AMSEL    ((GPIOJMSEL_t*) (GPIOJ_BASE + GPIO_AMSEL_OFFSET))
#define GPIOJ_AMSEL_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOJ PCTL*/
#define GPIOJ_PCTL    ((GPIOPCTL_t*) (GPIOJ_BASE + GPIO_PCTL_OFFSET))
#define GPIOJ_PCTL_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOJ ADCCTL*/
#define GPIOJ_ADCCTL    ((GPIOJDCCTL_t*) (GPIOJ_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOJ_ADCCTL_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOJ DMACTL*/
#define GPIOJ_DMACTL    ((GPIOJMACTL_t*) (GPIOJ_BASE + GPIO_DMACTL_OFFSET))
#define GPIOJ_DMACTL_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOJ SI*/
#define GPIOJ_SI    ((GPIOSI_t*) (GPIOJ_BASE + GPIO_SI_OFFSET))
#define GPIOJ_SI_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOJ DR12R*/
#define GPIOJ_DR12R    ((GPIOJR12R_t*) (GPIOJ_BASE + GPIO_DR12R_OFFSET))
#define GPIOJ_DR12R_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOJ WAKEPEN*/
#define GPIOJ_WAKEPEN    ((GPIOWAKEPEN_t*) (GPIOJ_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOJ_WAKEPEN_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOJ WAKELVL*/
#define GPIOJ_WAKELVL    ((GPIOWAKELVL_t*) (GPIOJ_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOJ_WAKELVL_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOJ WAKESTAT*/
#define GPIOJ_WAKESTAT    ((GPIOWAKESTAT_t*) (GPIOJ_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOJ_WAKESTAT_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOJ PP*/
#define GPIOJ_PP    ((GPIOPP_t*) (GPIOJ_BASE + GPIO_PP_OFFSET))
#define GPIOJ_PP_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOJ PC*/
#define GPIOJ_PC    ((GPIOPC_t*) (GPIOJ_BASE + GPIO_PC_OFFSET))
#define GPIOJ_PC_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOJ PID4*/
#define GPIOJ_PeriphID4    ((GPIOPeriphID4_t*) (GPIOJ_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOJ_PeriphID4_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOJ PID5*/
#define GPIOJ_PeriphID5    ((GPIOPeriphID5_t*) (GPIOJ_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOJ_PeriphID5_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOJ PID6*/
#define GPIOJ_PeriphID6    ((GPIOPeriphID6_t*) (GPIOJ_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOJ_PeriphID6_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOJ PID7*/
#define GPIOJ_PeriphID7    ((GPIOPeriphID7_t*) (GPIOJ_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOJ_PeriphID7_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOJ PID0*/
#define GPIOJ_PeriphID0    ((GPIOPeriphID0_t*) (GPIOJ_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOJ_PeriphID0_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOJ PID1*/
#define GPIOJ_PeriphID1    ((GPIOPeriphID1_t*) (GPIOJ_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOJ_PeriphID1_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOJ PID2*/
#define GPIOJ_PeriphID2    ((GPIOPeriphID2_t*) (GPIOJ_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOJ_PeriphID2_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOJ PID3*/
#define GPIOJ_PeriphID3    ((GPIOPeriphID3_t*) (GPIOJ_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOJ_PeriphID3_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOJ CID0*/
#define GPIOJ_CellID0    ((GPIOJellID0_t*) (GPIOJ_BASE + GPIO_CellID0_OFFSET))
#define GPIOJ_CellID0_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOJ CID1*/
#define GPIOJ_CellID1    ((GPIOJellID1_t*) (GPIOJ_BASE + GPIO_CellID1_OFFSET))
#define GPIOJ_CellID1_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOJ CID2*/
#define GPIOJ_CellID2    ((GPIOJellID2_t*) (GPIOJ_BASE + GPIO_CellID2_OFFSET))
#define GPIOJ_CellID2_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOJ CID3*/
#define GPIOJ_CellID3    ((GPIOJellID3_t*) (GPIOJ_BASE + GPIO_CellID3_OFFSET))
#define GPIOJ_CellID3_R    (*((volatile uint32_t *) (GPIOJ_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEJ_H_ */
