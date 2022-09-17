/**
 *
 * @file GPIO_RegisterPeripheral_ModuleN.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEN_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEN_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPION    ((GPIO_t*) (GPION_BASE))
#define GPION_AUX    ((GPIO_AUX_t*) (GPION_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPION DATA*/
#define GPION_DATA_MASK    ((GPIONATA_MASK_t*) (GPION_BASE + GPIO_DATA_MASK_OFFSET))
#define GPION_DATA_PINMASK0_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DATA_PINMASK0_OFFSET )))
#define GPION_DATA_PINMASK1_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DATA_PINMASK1_OFFSET )))
#define GPION_DATA_PINMASK2_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DATA_PINMASK2_OFFSET )))
#define GPION_DATA_PINMASK3_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DATA_PINMASK3_OFFSET )))
#define GPION_DATA_PINMASK4_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DATA_PINMASK4_OFFSET )))
#define GPION_DATA_PINMASK5_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DATA_PINMASK5_OFFSET )))
#define GPION_DATA_PINMASK6_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DATA_PINMASK6_OFFSET )))
#define GPION_DATA_PINMASK7_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DATA_PINMASK7_OFFSET )))

#define GPION_DATA    ((GPIONATA_t*) (GPION_BASE + GPIO_DATA_OFFSET))
#define GPION_DATA_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPION DIR*/
#define GPION_DIR    ((GPIONIR_t*) (GPION_BASE + GPIO_DIR_OFFSET))
#define GPION_DIR_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPION IS*/
#define GPION_IS    ((GPIO_IS_t*) (GPION_BASE + GPIO_IS_OFFSET))
#define GPION_IS_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPION IBE*/
#define GPION_IBE    ((GPIO_IBE_t*) (GPION_BASE + GPIO_IBE_OFFSET))
#define GPION_IBE_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPION IEV*/
#define GPION_IEV    ((GPIO_IEV_t*) (GPION_BASE + GPIO_IEV_OFFSET))
#define GPION_IEV_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPION IME*/
#define GPION_IM    ((GPIO_IM_t*) (GPION_BASE + GPIO_IM_OFFSET))
#define GPION_IM_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPION RIS*/
#define GPION_RIS    ((GPIO_RIS_t*) (GPION_BASE + GPIO_RIS_OFFSET))
#define GPION_RIS_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPION MIS*/
#define GPION_MIS    ((GPIO_MIS_t*) (GPION_BASE + GPIO_MIS_OFFSET))
#define GPION_MIS_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPION IC*/
#define GPION_ICR    ((GPIO_ICR_t*) (GPION_BASE + GPIO_ICR_OFFSET))
#define GPION_ICR_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPION AFSEL*/
#define GPION_AFSEL    ((GPIONFSEL_t*) (GPION_BASE + GPIO_AFSEL_OFFSET))
#define GPION_AFSEL_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPION DRV2*/
#define GPION_DRR    ((GPIONRR_ARRAY_t*) (GPION_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPION DRV2*/
#define GPION_DR2R    ((GPIONR2R_t*) (GPION_BASE + GPIO_DR2R_OFFSET))
#define GPION_DR2R_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPION DRV4*/
#define GPION_DR4R    ((GPIONR4R_t*) (GPION_BASE + GPIO_DR4R_OFFSET))
#define GPION_DR4R_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPION DRV8*/
#define GPION_DR8R    ((GPIONR8R_t*) (GPION_BASE + GPIO_DR8R_OFFSET))
#define GPION_DR8R_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPION ODE*/
#define GPION_ODR    ((GPIO_ODR_t*) (GPION_BASE + GPIO_ODR_OFFSET))
#define GPION_ODR_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPION PUE*/
#define GPION_PUR    ((GPI0_PUR_t*) (GPION_BASE + GPIO_PUR_OFFSET))
#define GPION_PUR_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPION PDE*/
#define GPION_PDR    ((GPIO_PDR_t*) (GPION_BASE + GPIO_PDR_OFFSET))
#define GPION_PDR_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPION SLR*/
#define GPION_SLR    ((GPIO_SLR_t*) (GPION_BASE + GPIO_SLR_OFFSET))
#define GPION_SLR_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPION DEN*/
#define GPION_DEN    ((GPIONEN_t*) (GPION_BASE + GPIO_DEN_OFFSET))
#define GPION_DEN_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPION LOCK*/
#define GPION_LOCK    ((GPIO_LOCK_t*) (GPION_BASE + GPIO_LOCK_OFFSET))
#define GPION_LOCK_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPION CR*/
#define GPION_CR    ((GPIONR_t*) (GPION_BASE + GPIO_CR_OFFSET))
#define GPION_CR_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPION AMSEL*/
#define GPION_AMSEL    ((GPIONMSEL_t*) (GPION_BASE + GPIO_AMSEL_OFFSET))
#define GPION_AMSEL_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPION PCTL*/
#define GPION_PCTL    ((GPIO_PCTL_t*) (GPION_BASE + GPIO_PCTL_OFFSET))
#define GPION_PCTL_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPION ADCCTL*/
#define GPION_ADCCTL    ((GPIONDCCTL_t*) (GPION_BASE + GPIO_ADCCTL_OFFSET))
#define GPION_ADCCTL_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPION DMACTL*/
#define GPION_DMACTL    ((GPIONMACTL_t*) (GPION_BASE + GPIO_DMACTL_OFFSET))
#define GPION_DMACTL_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPION SI*/
#define GPION_SI    ((GPIO_SI_t*) (GPION_BASE + GPIO_SI_OFFSET))
#define GPION_SI_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPION DR12R*/
#define GPION_DR12R    ((GPIONR12R_t*) (GPION_BASE + GPIO_DR12R_OFFSET))
#define GPION_DR12R_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPION WAKEPEN*/
#define GPION_WAKEPEN    ((GPIO_WAKEPEN_t*) (GPION_BASE + GPIO_WAKEPEN_OFFSET))
#define GPION_WAKEPEN_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPION WAKELVL*/
#define GPION_WAKELVL    ((GPIO_WAKELVL_t*) (GPION_BASE + GPIO_WAKELVL_OFFSET))
#define GPION_WAKELVL_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPION WAKESTAT*/
#define GPION_WAKESTAT    ((GPIO_WAKESTAT_t*) (GPION_BASE + GPIO_WAKESTAT_OFFSET))
#define GPION_WAKESTAT_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPION PP*/
#define GPION_PP    ((GPIO_PP_t*) (GPION_BASE + GPIO_PP_OFFSET))
#define GPION_PP_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPION PC*/
#define GPION_PC    ((GPIO_PC_t*) (GPION_BASE + GPIO_PC_OFFSET))
#define GPION_PC_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPION PID4*/
#define GPION_PeriphID4    ((GPIO_PeriphID4_t*) (GPION_BASE + GPIO_PeriphID4_OFFSET))
#define GPION_PeriphID4_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPION PID5*/
#define GPION_PeriphID5    ((GPIO_PeriphID5_t*) (GPION_BASE + GPIO_PeriphID5_OFFSET))
#define GPION_PeriphID5_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPION PID6*/
#define GPION_PeriphID6    ((GPIO_PeriphID6_t*) (GPION_BASE + GPIO_PeriphID6_OFFSET))
#define GPION_PeriphID6_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPION PID7*/
#define GPION_PeriphID7    ((GPIO_PeriphID7_t*) (GPION_BASE + GPIO_PeriphID7_OFFSET))
#define GPION_PeriphID7_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPION PID0*/
#define GPION_PeriphID0    ((GPIO_PeriphID0_t*) (GPION_BASE + GPIO_PeriphID0_OFFSET))
#define GPION_PeriphID0_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPION PID1*/
#define GPION_PeriphID1    ((GPIO_PeriphID1_t*) (GPION_BASE + GPIO_PeriphID1_OFFSET))
#define GPION_PeriphID1_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPION PID2*/
#define GPION_PeriphID2    ((GPIO_PeriphID2_t*) (GPION_BASE + GPIO_PeriphID2_OFFSET))
#define GPION_PeriphID2_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPION PID3*/
#define GPION_PeriphID3    ((GPIO_PeriphID3_t*) (GPION_BASE + GPIO_PeriphID3_OFFSET))
#define GPION_PeriphID3_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPION CID0*/
#define GPION_PCellID0    ((GPIO_PCellID0_t*) (GPION_BASE + GPIO_PCellID0_OFFSET))
#define GPION_PCellID0_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPION CID1*/
#define GPION_PCellID1    ((GPIO_PCellID1_t*) (GPION_BASE + GPIO_PCellID1_OFFSET))
#define GPION_PCellID1_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPION CID2*/
#define GPION_PCellID2    ((GPIO_PCellID2_t*) (GPION_BASE + GPIO_PCellID2_OFFSET))
#define GPION_PCellID2_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPION CID3*/
#define GPION_PCellID3    ((GPIO_PCellID3_t*) (GPION_BASE + GPIO_PCellID3_OFFSET))
#define GPION_PCellID3_R    (*((volatile uint32_t *) (GPION_BASE + GPIO_PCellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEN_H_ */
