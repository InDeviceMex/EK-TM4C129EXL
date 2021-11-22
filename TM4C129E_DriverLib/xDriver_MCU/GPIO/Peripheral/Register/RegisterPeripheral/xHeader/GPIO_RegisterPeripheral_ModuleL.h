/**
 *
 * @file GPIO_RegisterPeripheral_ModuleL.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEL_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEL_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOL    ((GPIO_t*) (GPIOL_BASE))
#define GPIOL_AUX    ((GPIO_AUX_t*) (GPIOL_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOL DATA*/
#define GPIOL_DATA_MASK    ((GPIOLATA_MASK_t*) (GPIOL_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOL_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOL_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOL_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOL_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOL_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOL_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOL_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOL_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOL_DATA    ((GPIOLATA_t*) (GPIOL_BASE + GPIO_DATA_OFFSET))
#define GPIOL_DATA_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOL DIR*/
#define GPIOL_DIR    ((GPIOLIR_t*) (GPIOL_BASE + GPIO_DIR_OFFSET))
#define GPIOL_DIR_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOL IS*/
#define GPIOL_IS    ((GPIOIS_t*) (GPIOL_BASE + GPIO_IS_OFFSET))
#define GPIOL_IS_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOL IBE*/
#define GPIOL_IBE    ((GPIOIBE_t*) (GPIOL_BASE + GPIO_IBE_OFFSET))
#define GPIOL_IBE_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOL IEV*/
#define GPIOL_IEV    ((GPIOIEV_t*) (GPIOL_BASE + GPIO_IEV_OFFSET))
#define GPIOL_IEV_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOL IME*/
#define GPIOL_IM    ((GPIOIM_t*) (GPIOL_BASE + GPIO_IM_OFFSET))
#define GPIOL_IM_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOL RIS*/
#define GPIOL_RIS    ((GPIORIS_t*) (GPIOL_BASE + GPIO_RIS_OFFSET))
#define GPIOL_RIS_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOL MIS*/
#define GPIOL_MIS    ((GPIOMIS_t*) (GPIOL_BASE + GPIO_MIS_OFFSET))
#define GPIOL_MIS_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOL IC*/
#define GPIOL_ICR    ((GPIOICR_t*) (GPIOL_BASE + GPIO_ICR_OFFSET))
#define GPIOL_ICR_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOL AFSEL*/
#define GPIOL_AFSEL    ((GPIOLFSEL_t*) (GPIOL_BASE + GPIO_AFSEL_OFFSET))
#define GPIOL_AFSEL_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOL DRV2*/
#define GPIOL_DRR    ((GPIOLRR_ARRAY_t*) (GPIOL_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOL DRV2*/
#define GPIOL_DR2R    ((GPIOLR2R_t*) (GPIOL_BASE + GPIO_DR2R_OFFSET))
#define GPIOL_DR2R_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOL DRV4*/
#define GPIOL_DR4R    ((GPIOLR4R_t*) (GPIOL_BASE + GPIO_DR4R_OFFSET))
#define GPIOL_DR4R_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOL DRV8*/
#define GPIOL_DR8R    ((GPIOLR8R_t*) (GPIOL_BASE + GPIO_DR8R_OFFSET))
#define GPIOL_DR8R_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOL ODE*/
#define GPIOL_ODR    ((GPIOODR_t*) (GPIOL_BASE + GPIO_ODR_OFFSET))
#define GPIOL_ODR_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOL PUE*/
#define GPIOL_PUR    ((GPIOPUR_t*) (GPIOL_BASE + GPIO_PUR_OFFSET))
#define GPIOL_PUR_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOL PDE*/
#define GPIOL_PDR    ((GPIOPDR_t*) (GPIOL_BASE + GPIO_PDR_OFFSET))
#define GPIOL_PDR_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOL SLR*/
#define GPIOL_SLR    ((GPIOSLR_t*) (GPIOL_BASE + GPIO_SLR_OFFSET))
#define GPIOL_SLR_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOL DEN*/
#define GPIOL_DEN    ((GPIOLEN_t*) (GPIOL_BASE + GPIO_DEN_OFFSET))
#define GPIOL_DEN_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOL LOCK*/
#define GPIOL_LOCK    ((GPIOLOCK_t*) (GPIOL_BASE + GPIO_LOCK_OFFSET))
#define GPIOL_LOCK_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOL CR*/
#define GPIOL_CR    ((GPIOLR_t*) (GPIOL_BASE + GPIO_CR_OFFSET))
#define GPIOL_CR_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOL AMSEL*/
#define GPIOL_AMSEL    ((GPIOLMSEL_t*) (GPIOL_BASE + GPIO_AMSEL_OFFSET))
#define GPIOL_AMSEL_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOL PCTL*/
#define GPIOL_PCTL    ((GPIOPCTL_t*) (GPIOL_BASE + GPIO_PCTL_OFFSET))
#define GPIOL_PCTL_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOL ADCCTL*/
#define GPIOL_ADCCTL    ((GPIOLDCCTL_t*) (GPIOL_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOL_ADCCTL_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOL DMACTL*/
#define GPIOL_DMACTL    ((GPIOLMACTL_t*) (GPIOL_BASE + GPIO_DMACTL_OFFSET))
#define GPIOL_DMACTL_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOL SI*/
#define GPIOL_SI    ((GPIOSI_t*) (GPIOL_BASE + GPIO_SI_OFFSET))
#define GPIOL_SI_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOL DR12R*/
#define GPIOL_DR12R    ((GPIOLR12R_t*) (GPIOL_BASE + GPIO_DR12R_OFFSET))
#define GPIOL_DR12R_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOL WAKEPEN*/
#define GPIOL_WAKEPEN    ((GPIOWAKEPEN_t*) (GPIOL_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOL_WAKEPEN_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOL WAKELVL*/
#define GPIOL_WAKELVL    ((GPIOWAKELVL_t*) (GPIOL_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOL_WAKELVL_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOL WAKESTAT*/
#define GPIOL_WAKESTAT    ((GPIOWAKESTAT_t*) (GPIOL_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOL_WAKESTAT_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOL PP*/
#define GPIOL_PP    ((GPIOPP_t*) (GPIOL_BASE + GPIO_PP_OFFSET))
#define GPIOL_PP_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOL PC*/
#define GPIOL_PC    ((GPIOPC_t*) (GPIOL_BASE + GPIO_PC_OFFSET))
#define GPIOL_PC_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOL PID4*/
#define GPIOL_PeriphID4    ((GPIOPeriphID4_t*) (GPIOL_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOL_PeriphID4_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOL PID5*/
#define GPIOL_PeriphID5    ((GPIOPeriphID5_t*) (GPIOL_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOL_PeriphID5_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOL PID6*/
#define GPIOL_PeriphID6    ((GPIOPeriphID6_t*) (GPIOL_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOL_PeriphID6_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOL PID7*/
#define GPIOL_PeriphID7    ((GPIOPeriphID7_t*) (GPIOL_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOL_PeriphID7_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOL PID0*/
#define GPIOL_PeriphID0    ((GPIOPeriphID0_t*) (GPIOL_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOL_PeriphID0_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOL PID1*/
#define GPIOL_PeriphID1    ((GPIOPeriphID1_t*) (GPIOL_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOL_PeriphID1_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOL PID2*/
#define GPIOL_PeriphID2    ((GPIOPeriphID2_t*) (GPIOL_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOL_PeriphID2_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOL PID3*/
#define GPIOL_PeriphID3    ((GPIOPeriphID3_t*) (GPIOL_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOL_PeriphID3_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOL CID0*/
#define GPIOL_CellID0    ((GPIOLellID0_t*) (GPIOL_BASE + GPIO_CellID0_OFFSET))
#define GPIOL_CellID0_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOL CID1*/
#define GPIOL_CellID1    ((GPIOLellID1_t*) (GPIOL_BASE + GPIO_CellID1_OFFSET))
#define GPIOL_CellID1_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOL CID2*/
#define GPIOL_CellID2    ((GPIOLellID2_t*) (GPIOL_BASE + GPIO_CellID2_OFFSET))
#define GPIOL_CellID2_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOL CID3*/
#define GPIOL_CellID3    ((GPIOLellID3_t*) (GPIOL_BASE + GPIO_CellID3_OFFSET))
#define GPIOL_CellID3_R    (*((volatile uint32_t *) (GPIOL_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEL_H_ */
