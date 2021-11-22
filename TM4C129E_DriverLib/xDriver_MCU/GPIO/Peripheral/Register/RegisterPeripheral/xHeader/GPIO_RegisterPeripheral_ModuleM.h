/**
 *
 * @file GPIO_RegisterPeripheral_ModuleM.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEM_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEM_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOM    ((GPIO_t*) (GPIOM_BASE))
#define GPIOM_AUX    ((GPIO_AUX_t*) (GPIOM_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOM DATA*/
#define GPIOM_DATA_MASK    ((GPIOMATA_MASK_t*) (GPIOM_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOM_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOM_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOM_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOM_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOM_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOM_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOM_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOM_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOM_DATA    ((GPIOMATA_t*) (GPIOM_BASE + GPIO_DATA_OFFSET))
#define GPIOM_DATA_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOM DIR*/
#define GPIOM_DIR    ((GPIOMIR_t*) (GPIOM_BASE + GPIO_DIR_OFFSET))
#define GPIOM_DIR_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOM IS*/
#define GPIOM_IS    ((GPIOIS_t*) (GPIOM_BASE + GPIO_IS_OFFSET))
#define GPIOM_IS_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOM IBE*/
#define GPIOM_IBE    ((GPIOIBE_t*) (GPIOM_BASE + GPIO_IBE_OFFSET))
#define GPIOM_IBE_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOM IEV*/
#define GPIOM_IEV    ((GPIOIEV_t*) (GPIOM_BASE + GPIO_IEV_OFFSET))
#define GPIOM_IEV_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOM IME*/
#define GPIOM_IM    ((GPIOIM_t*) (GPIOM_BASE + GPIO_IM_OFFSET))
#define GPIOM_IM_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOM RIS*/
#define GPIOM_RIS    ((GPIORIS_t*) (GPIOM_BASE + GPIO_RIS_OFFSET))
#define GPIOM_RIS_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOM MIS*/
#define GPIOM_MIS    ((GPIOMIS_t*) (GPIOM_BASE + GPIO_MIS_OFFSET))
#define GPIOM_MIS_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOM IC*/
#define GPIOM_ICR    ((GPIOICR_t*) (GPIOM_BASE + GPIO_ICR_OFFSET))
#define GPIOM_ICR_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOM AFSEL*/
#define GPIOM_AFSEL    ((GPIOMFSEL_t*) (GPIOM_BASE + GPIO_AFSEL_OFFSET))
#define GPIOM_AFSEL_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOM DRV2*/
#define GPIOM_DRR    ((GPIOMRR_ARRAY_t*) (GPIOM_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOM DRV2*/
#define GPIOM_DR2R    ((GPIOMR2R_t*) (GPIOM_BASE + GPIO_DR2R_OFFSET))
#define GPIOM_DR2R_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOM DRV4*/
#define GPIOM_DR4R    ((GPIOMR4R_t*) (GPIOM_BASE + GPIO_DR4R_OFFSET))
#define GPIOM_DR4R_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOM DRV8*/
#define GPIOM_DR8R    ((GPIOMR8R_t*) (GPIOM_BASE + GPIO_DR8R_OFFSET))
#define GPIOM_DR8R_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOM ODE*/
#define GPIOM_ODR    ((GPIOODR_t*) (GPIOM_BASE + GPIO_ODR_OFFSET))
#define GPIOM_ODR_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOM PUE*/
#define GPIOM_PUR    ((GPIOPUR_t*) (GPIOM_BASE + GPIO_PUR_OFFSET))
#define GPIOM_PUR_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOM PDE*/
#define GPIOM_PDR    ((GPIOPDR_t*) (GPIOM_BASE + GPIO_PDR_OFFSET))
#define GPIOM_PDR_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOM SLR*/
#define GPIOM_SLR    ((GPIOSLR_t*) (GPIOM_BASE + GPIO_SLR_OFFSET))
#define GPIOM_SLR_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOM DEN*/
#define GPIOM_DEN    ((GPIOMEN_t*) (GPIOM_BASE + GPIO_DEN_OFFSET))
#define GPIOM_DEN_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOM LOCK*/
#define GPIOM_LOCK    ((GPIOLOCK_t*) (GPIOM_BASE + GPIO_LOCK_OFFSET))
#define GPIOM_LOCK_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOM CR*/
#define GPIOM_CR    ((GPIOMR_t*) (GPIOM_BASE + GPIO_CR_OFFSET))
#define GPIOM_CR_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOM AMSEL*/
#define GPIOM_AMSEL    ((GPIOMMSEL_t*) (GPIOM_BASE + GPIO_AMSEL_OFFSET))
#define GPIOM_AMSEL_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOM PCTL*/
#define GPIOM_PCTL    ((GPIOPCTL_t*) (GPIOM_BASE + GPIO_PCTL_OFFSET))
#define GPIOM_PCTL_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOM ADCCTL*/
#define GPIOM_ADCCTL    ((GPIOMDCCTL_t*) (GPIOM_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOM_ADCCTL_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOM DMACTL*/
#define GPIOM_DMACTL    ((GPIOMMACTL_t*) (GPIOM_BASE + GPIO_DMACTL_OFFSET))
#define GPIOM_DMACTL_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOM SI*/
#define GPIOM_SI    ((GPIOSI_t*) (GPIOM_BASE + GPIO_SI_OFFSET))
#define GPIOM_SI_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOM DR12R*/
#define GPIOM_DR12R    ((GPIOMR12R_t*) (GPIOM_BASE + GPIO_DR12R_OFFSET))
#define GPIOM_DR12R_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOM WAKEPEN*/
#define GPIOM_WAKEPEN    ((GPIOWAKEPEN_t*) (GPIOM_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOM_WAKEPEN_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOM WAKELVL*/
#define GPIOM_WAKELVL    ((GPIOWAKELVL_t*) (GPIOM_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOM_WAKELVL_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOM WAKESTAT*/
#define GPIOM_WAKESTAT    ((GPIOWAKESTAT_t*) (GPIOM_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOM_WAKESTAT_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOM PP*/
#define GPIOM_PP    ((GPIOPP_t*) (GPIOM_BASE + GPIO_PP_OFFSET))
#define GPIOM_PP_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOM PC*/
#define GPIOM_PC    ((GPIOPC_t*) (GPIOM_BASE + GPIO_PC_OFFSET))
#define GPIOM_PC_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOM PID4*/
#define GPIOM_PeriphID4    ((GPIOPeriphID4_t*) (GPIOM_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOM_PeriphID4_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOM PID5*/
#define GPIOM_PeriphID5    ((GPIOPeriphID5_t*) (GPIOM_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOM_PeriphID5_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOM PID6*/
#define GPIOM_PeriphID6    ((GPIOPeriphID6_t*) (GPIOM_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOM_PeriphID6_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOM PID7*/
#define GPIOM_PeriphID7    ((GPIOPeriphID7_t*) (GPIOM_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOM_PeriphID7_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOM PID0*/
#define GPIOM_PeriphID0    ((GPIOPeriphID0_t*) (GPIOM_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOM_PeriphID0_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOM PID1*/
#define GPIOM_PeriphID1    ((GPIOPeriphID1_t*) (GPIOM_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOM_PeriphID1_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOM PID2*/
#define GPIOM_PeriphID2    ((GPIOPeriphID2_t*) (GPIOM_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOM_PeriphID2_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOM PID3*/
#define GPIOM_PeriphID3    ((GPIOPeriphID3_t*) (GPIOM_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOM_PeriphID3_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOM CID0*/
#define GPIOM_CellID0    ((GPIOMellID0_t*) (GPIOM_BASE + GPIO_CellID0_OFFSET))
#define GPIOM_CellID0_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOM CID1*/
#define GPIOM_CellID1    ((GPIOMellID1_t*) (GPIOM_BASE + GPIO_CellID1_OFFSET))
#define GPIOM_CellID1_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOM CID2*/
#define GPIOM_CellID2    ((GPIOMellID2_t*) (GPIOM_BASE + GPIO_CellID2_OFFSET))
#define GPIOM_CellID2_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOM CID3*/
#define GPIOM_CellID3    ((GPIOMellID3_t*) (GPIOM_BASE + GPIO_CellID3_OFFSET))
#define GPIOM_CellID3_R    (*((volatile uint32_t *) (GPIOM_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEM_H_ */
