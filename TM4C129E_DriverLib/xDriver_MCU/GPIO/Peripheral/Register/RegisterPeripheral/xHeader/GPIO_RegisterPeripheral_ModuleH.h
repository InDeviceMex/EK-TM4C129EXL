/**
 *
 * @file GPIO_RegisterPeripheral_ModuleH.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEH_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEH_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOH    ((GPIO_t*) (GPIOH_BASE))
#define GPIOH_AUX    ((GPIO_AUX_t*) (GPIOH_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOH DATA*/
#define GPIOH_DATA_MASK    ((GPIOHATA_MASK_t*) (GPIOH_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOH_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOH_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOH_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOH_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOH_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOH_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOH_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOH_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOH_DATA    ((GPIOHATA_t*) (GPIOH_BASE + GPIO_DATA_OFFSET))
#define GPIOH_DATA_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOH DIR*/
#define GPIOH_DIR    ((GPIOHIR_t*) (GPIOH_BASE + GPIO_DIR_OFFSET))
#define GPIOH_DIR_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOH IS*/
#define GPIOH_IS    ((GPIOIS_t*) (GPIOH_BASE + GPIO_IS_OFFSET))
#define GPIOH_IS_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOH IBE*/
#define GPIOH_IBE    ((GPIOIBE_t*) (GPIOH_BASE + GPIO_IBE_OFFSET))
#define GPIOH_IBE_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOH IEV*/
#define GPIOH_IEV    ((GPIOIEV_t*) (GPIOH_BASE + GPIO_IEV_OFFSET))
#define GPIOH_IEV_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOH IME*/
#define GPIOH_IM    ((GPIOIM_t*) (GPIOH_BASE + GPIO_IM_OFFSET))
#define GPIOH_IM_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOH RIS*/
#define GPIOH_RIS    ((GPIORIS_t*) (GPIOH_BASE + GPIO_RIS_OFFSET))
#define GPIOH_RIS_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOH MIS*/
#define GPIOH_MIS    ((GPIOMIS_t*) (GPIOH_BASE + GPIO_MIS_OFFSET))
#define GPIOH_MIS_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOH IC*/
#define GPIOH_ICR    ((GPIOICR_t*) (GPIOH_BASE + GPIO_ICR_OFFSET))
#define GPIOH_ICR_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOH AFSEL*/
#define GPIOH_AFSEL    ((GPIOHFSEL_t*) (GPIOH_BASE + GPIO_AFSEL_OFFSET))
#define GPIOH_AFSEL_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOH DRV2*/
#define GPIOH_DRR    ((GPIOHRR_ARRAY_t*) (GPIOH_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOH DRV2*/
#define GPIOH_DR2R    ((GPIOHR2R_t*) (GPIOH_BASE + GPIO_DR2R_OFFSET))
#define GPIOH_DR2R_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOH DRV4*/
#define GPIOH_DR4R    ((GPIOHR4R_t*) (GPIOH_BASE + GPIO_DR4R_OFFSET))
#define GPIOH_DR4R_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOH DRV8*/
#define GPIOH_DR8R    ((GPIOHR8R_t*) (GPIOH_BASE + GPIO_DR8R_OFFSET))
#define GPIOH_DR8R_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOH ODE*/
#define GPIOH_ODR    ((GPIOODR_t*) (GPIOH_BASE + GPIO_ODR_OFFSET))
#define GPIOH_ODR_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOH PUE*/
#define GPIOH_PUR    ((GPIOPUR_t*) (GPIOH_BASE + GPIO_PUR_OFFSET))
#define GPIOH_PUR_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOH PDE*/
#define GPIOH_PDR    ((GPIOPDR_t*) (GPIOH_BASE + GPIO_PDR_OFFSET))
#define GPIOH_PDR_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOH SLR*/
#define GPIOH_SLR    ((GPIOSLR_t*) (GPIOH_BASE + GPIO_SLR_OFFSET))
#define GPIOH_SLR_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOH DEN*/
#define GPIOH_DEN    ((GPIOHEN_t*) (GPIOH_BASE + GPIO_DEN_OFFSET))
#define GPIOH_DEN_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOH LOCK*/
#define GPIOH_LOCK    ((GPIOLOCK_t*) (GPIOH_BASE + GPIO_LOCK_OFFSET))
#define GPIOH_LOCK_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOH CR*/
#define GPIOH_CR    ((GPIOHR_t*) (GPIOH_BASE + GPIO_CR_OFFSET))
#define GPIOH_CR_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOH AMSEL*/
#define GPIOH_AMSEL    ((GPIOHMSEL_t*) (GPIOH_BASE + GPIO_AMSEL_OFFSET))
#define GPIOH_AMSEL_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOH PCTL*/
#define GPIOH_PCTL    ((GPIOPCTL_t*) (GPIOH_BASE + GPIO_PCTL_OFFSET))
#define GPIOH_PCTL_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOH ADCCTL*/
#define GPIOH_ADCCTL    ((GPIOHDCCTL_t*) (GPIOH_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOH_ADCCTL_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOH DMACTL*/
#define GPIOH_DMACTL    ((GPIOHMACTL_t*) (GPIOH_BASE + GPIO_DMACTL_OFFSET))
#define GPIOH_DMACTL_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOH SI*/
#define GPIOH_SI    ((GPIOSI_t*) (GPIOH_BASE + GPIO_SI_OFFSET))
#define GPIOH_SI_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOH DR12R*/
#define GPIOH_DR12R    ((GPIOHR12R_t*) (GPIOH_BASE + GPIO_DR12R_OFFSET))
#define GPIOH_DR12R_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOH WAKEPEN*/
#define GPIOH_WAKEPEN    ((GPIOWAKEPEN_t*) (GPIOH_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOH_WAKEPEN_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOH WAKELVL*/
#define GPIOH_WAKELVL    ((GPIOWAKELVL_t*) (GPIOH_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOH_WAKELVL_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOH WAKESTAT*/
#define GPIOH_WAKESTAT    ((GPIOWAKESTAT_t*) (GPIOH_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOH_WAKESTAT_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOH PP*/
#define GPIOH_PP    ((GPIOPP_t*) (GPIOH_BASE + GPIO_PP_OFFSET))
#define GPIOH_PP_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOH PC*/
#define GPIOH_PC    ((GPIOPC_t*) (GPIOH_BASE + GPIO_PC_OFFSET))
#define GPIOH_PC_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOH PID4*/
#define GPIOH_PeriphID4    ((GPIOPeriphID4_t*) (GPIOH_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOH_PeriphID4_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOH PID5*/
#define GPIOH_PeriphID5    ((GPIOPeriphID5_t*) (GPIOH_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOH_PeriphID5_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOH PID6*/
#define GPIOH_PeriphID6    ((GPIOPeriphID6_t*) (GPIOH_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOH_PeriphID6_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOH PID7*/
#define GPIOH_PeriphID7    ((GPIOPeriphID7_t*) (GPIOH_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOH_PeriphID7_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOH PID0*/
#define GPIOH_PeriphID0    ((GPIOPeriphID0_t*) (GPIOH_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOH_PeriphID0_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOH PID1*/
#define GPIOH_PeriphID1    ((GPIOPeriphID1_t*) (GPIOH_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOH_PeriphID1_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOH PID2*/
#define GPIOH_PeriphID2    ((GPIOPeriphID2_t*) (GPIOH_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOH_PeriphID2_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOH PID3*/
#define GPIOH_PeriphID3    ((GPIOPeriphID3_t*) (GPIOH_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOH_PeriphID3_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOH CID0*/
#define GPIOH_CellID0    ((GPIOHellID0_t*) (GPIOH_BASE + GPIO_CellID0_OFFSET))
#define GPIOH_CellID0_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOH CID1*/
#define GPIOH_CellID1    ((GPIOHellID1_t*) (GPIOH_BASE + GPIO_CellID1_OFFSET))
#define GPIOH_CellID1_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOH CID2*/
#define GPIOH_CellID2    ((GPIOHellID2_t*) (GPIOH_BASE + GPIO_CellID2_OFFSET))
#define GPIOH_CellID2_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOH CID3*/
#define GPIOH_CellID3    ((GPIOHellID3_t*) (GPIOH_BASE + GPIO_CellID3_OFFSET))
#define GPIOH_CellID3_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEH_H_ */
