/**
 *
 * @file GPIO_RegisterPeripheral_ModuleC.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEC_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEC_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOC    ((GPIO_t*) (GPIOC_BASE))
#define GPIOC_AUX    ((GPIO_AUX_t*) (GPIOC_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOC DATA*/
#define GPIOC_DATA_MASK    ((GPIO_DATA_MASK_t*) (GPIOC_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOC_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOC_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOC_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOC_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOC_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOC_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOC_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOC_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOC_DATA    ((GPIO_DATA_t*) (GPIOC_BASE + GPIO_DATA_OFFSET))
#define GPIOC_DATA_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOC DIR*/
#define GPIOC_DIR    ((GPIO_DIR_t*) (GPIOC_BASE + GPIO_DIR_OFFSET))
#define GPIOC_DIR_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOC IS*/
#define GPIOC_IS    ((GPIO_IS_t*) (GPIOC_BASE + GPIO_IS_OFFSET))
#define GPIOC_IS_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOC IBE*/
#define GPIOC_IBE    ((GPIO_IBE_t*) (GPIOC_BASE + GPIO_IBE_OFFSET))
#define GPIOC_IBE_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOC IEV*/
#define GPIOC_IEV    ((GPIO_IEV_t*) (GPIOC_BASE + GPIO_IEV_OFFSET))
#define GPIOC_IEV_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOC IME*/
#define GPIOC_IM    ((GPIO_IM_t*) (GPIOC_BASE + GPIO_IM_OFFSET))
#define GPIOC_IM_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOC RIS*/
#define GPIOC_RIS    ((GPIO_RIS_t*) (GPIOC_BASE + GPIO_RIS_OFFSET))
#define GPIOC_RIS_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOC MIS*/
#define GPIOC_MIS    ((GPIO_MIS_t*) (GPIOC_BASE + GPIO_MIS_OFFSET))
#define GPIOC_MIS_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOC IC*/
#define GPIOC_ICR    ((GPIO_ICR_t*) (GPIOC_BASE + GPIO_ICR_OFFSET))
#define GPIOC_ICR_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOC AFSEL*/
#define GPIOC_AFSEL    ((GPIOCFSEL_t*) (GPIOC_BASE + GPIO_AFSEL_OFFSET))
#define GPIOC_AFSEL_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOC DRV2*/
#define GPIOC_DRR    ((GPIO_DRR_ARRAY_t*) (GPIOC_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOC DRV2*/
#define GPIOC_DR2R    ((GPIO_DR2R_t*) (GPIOC_BASE + GPIO_DR2R_OFFSET))
#define GPIOC_DR2R_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOC DRV4*/
#define GPIOC_DR4R    ((GPIO_DR4R_t*) (GPIOC_BASE + GPIO_DR4R_OFFSET))
#define GPIOC_DR4R_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOC DRV8*/
#define GPIOC_DR8R    ((GPIO_DR8R_t*) (GPIOC_BASE + GPIO_DR8R_OFFSET))
#define GPIOC_DR8R_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOC ODE*/
#define GPIOC_ODR    ((GPIO_ODR_t*) (GPIOC_BASE + GPIO_ODR_OFFSET))
#define GPIOC_ODR_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOC PUE*/
#define GPIOC_PUR    ((GPI0_PUR_t*) (GPIOC_BASE + GPIO_PUR_OFFSET))
#define GPIOC_PUR_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOC PDE*/
#define GPIOC_PDR    ((GPIO_PDR_t*) (GPIOC_BASE + GPIO_PDR_OFFSET))
#define GPIOC_PDR_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOC SLR*/
#define GPIOC_SLR    ((GPIO_SLR_t*) (GPIOC_BASE + GPIO_SLR_OFFSET))
#define GPIOC_SLR_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOC DEN*/
#define GPIOC_DEN    ((GPIO_DEN_t*) (GPIOC_BASE + GPIO_DEN_OFFSET))
#define GPIOC_DEN_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOC LOCK*/
#define GPIOC_LOCK    ((GPIO_LOCK_t*) (GPIOC_BASE + GPIO_LOCK_OFFSET))
#define GPIOC_LOCK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOC CR*/
#define GPIOC_CR    ((GPIO_CR_t*) (GPIOC_BASE + GPIO_CR_OFFSET))
#define GPIOC_CR_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOC AMSEL*/
#define GPIOC_AMSEL    ((GPIOCMSEL_t*) (GPIOC_BASE + GPIO_AMSEL_OFFSET))
#define GPIOC_AMSEL_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOC PCTL*/
#define GPIOC_PCTL    ((GPIO_PCTL_t*) (GPIOC_BASE + GPIO_PCTL_OFFSET))
#define GPIOC_PCTL_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOC ADCCTL*/
#define GPIOC_ADCCTL    ((GPIOCDCCTL_t*) (GPIOC_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOC_ADCCTL_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOC DMACTL*/
#define GPIOC_DMACTL    ((GPIO_DMACTL_t*) (GPIOC_BASE + GPIO_DMACTL_OFFSET))
#define GPIOC_DMACTL_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOC SI*/
#define GPIOC_SI    ((GPIO_SI_t*) (GPIOC_BASE + GPIO_SI_OFFSET))
#define GPIOC_SI_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOC DR12R*/
#define GPIOC_DR12R    ((GPIO_DR12R_t*) (GPIOC_BASE + GPIO_DR12R_OFFSET))
#define GPIOC_DR12R_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOC WAKEPEN*/
#define GPIOC_WAKEPEN    ((GPIO_WAKEPEN_t*) (GPIOC_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOC_WAKEPEN_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOC WAKELVL*/
#define GPIOC_WAKELVL    ((GPIO_WAKELVL_t*) (GPIOC_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOC_WAKELVL_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOC WAKESTAT*/
#define GPIOC_WAKESTAT    ((GPIO_WAKESTAT_t*) (GPIOC_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOC_WAKESTAT_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOC PP*/
#define GPIOC_PP    ((GPIO_PP_t*) (GPIOC_BASE + GPIO_PP_OFFSET))
#define GPIOC_PP_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOC PC*/
#define GPIOC_PC    ((GPIO_PC_t*) (GPIOC_BASE + GPIO_PC_OFFSET))
#define GPIOC_PC_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOC PID4*/
#define GPIOC_PeriphID4    ((GPIO_PeriphID4_t*) (GPIOC_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOC_PeriphID4_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOC PID5*/
#define GPIOC_PeriphID5    ((GPIO_PeriphID5_t*) (GPIOC_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOC_PeriphID5_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOC PID6*/
#define GPIOC_PeriphID6    ((GPIO_PeriphID6_t*) (GPIOC_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOC_PeriphID6_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOC PID7*/
#define GPIOC_PeriphID7    ((GPIO_PeriphID7_t*) (GPIOC_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOC_PeriphID7_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOC PID0*/
#define GPIOC_PeriphID0    ((GPIO_PeriphID0_t*) (GPIOC_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOC_PeriphID0_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOC PID1*/
#define GPIOC_PeriphID1    ((GPIO_PeriphID1_t*) (GPIOC_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOC_PeriphID1_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOC PID2*/
#define GPIOC_PeriphID2    ((GPIO_PeriphID2_t*) (GPIOC_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOC_PeriphID2_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOC PID3*/
#define GPIOC_PeriphID3    ((GPIO_PeriphID3_t*) (GPIOC_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOC_PeriphID3_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOC CID0*/
#define GPIOC_PCellID0    ((GPIO_PCellID0_t*) (GPIOC_BASE + GPIO_PCellID0_OFFSET))
#define GPIOC_PCellID0_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOC CID1*/
#define GPIOC_PCellID1    ((GPIO_PCellID1_t*) (GPIOC_BASE + GPIO_PCellID1_OFFSET))
#define GPIOC_PCellID1_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOC CID2*/
#define GPIOC_PCellID2    ((GPIO_PCellID2_t*) (GPIOC_BASE + GPIO_PCellID2_OFFSET))
#define GPIOC_PCellID2_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOC CID3*/
#define GPIOC_PCellID3    ((GPIO_PCellID3_t*) (GPIOC_BASE + GPIO_PCellID3_OFFSET))
#define GPIOC_PCellID3_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PCellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEC_H_ */
