/**
 *
 * @file GPIO_RegisterPeripheral_ModuleK.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEK_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEK_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOK    ((GPIO_t*) (GPIOK_BASE))
#define GPIOK_AUX    ((GPIO_AUX_t*) (GPIOK_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOK DATA*/
#define GPIOK_DATA_MASK    ((GPIO_DATA_MASK_t*) (GPIOK_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOK_DATA_PINMASK0_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DATA_PINMASK0_OFFSET )))
#define GPIOK_DATA_PINMASK1_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DATA_PINMASK1_OFFSET )))
#define GPIOK_DATA_PINMASK2_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DATA_PINMASK2_OFFSET )))
#define GPIOK_DATA_PINMASK3_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DATA_PINMASK3_OFFSET )))
#define GPIOK_DATA_PINMASK4_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DATA_PINMASK4_OFFSET )))
#define GPIOK_DATA_PINMASK5_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DATA_PINMASK5_OFFSET )))
#define GPIOK_DATA_PINMASK6_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DATA_PINMASK6_OFFSET )))
#define GPIOK_DATA_PINMASK7_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DATA_PINMASK7_OFFSET )))

#define GPIOK_DATA    ((GPIO_DATA_t*) (GPIOK_BASE + GPIO_DATA_OFFSET))
#define GPIOK_DATA_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOK DIR*/
#define GPIOK_DIR    ((GPIO_DIR_t*) (GPIOK_BASE + GPIO_DIR_OFFSET))
#define GPIOK_DIR_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOK IS*/
#define GPIOK_IS    ((GPIO_IS_t*) (GPIOK_BASE + GPIO_IS_OFFSET))
#define GPIOK_IS_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOK IBE*/
#define GPIOK_IBE    ((GPIO_IBE_t*) (GPIOK_BASE + GPIO_IBE_OFFSET))
#define GPIOK_IBE_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOK IEV*/
#define GPIOK_IEV    ((GPIO_IEV_t*) (GPIOK_BASE + GPIO_IEV_OFFSET))
#define GPIOK_IEV_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOK IME*/
#define GPIOK_IM    ((GPIO_IM_t*) (GPIOK_BASE + GPIO_IM_OFFSET))
#define GPIOK_IM_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOK RIS*/
#define GPIOK_RIS    ((GPIO_RIS_t*) (GPIOK_BASE + GPIO_RIS_OFFSET))
#define GPIOK_RIS_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOK MIS*/
#define GPIOK_MIS    ((GPIO_MIS_t*) (GPIOK_BASE + GPIO_MIS_OFFSET))
#define GPIOK_MIS_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOK IC*/
#define GPIOK_ICR    ((GPIO_ICR_t*) (GPIOK_BASE + GPIO_ICR_OFFSET))
#define GPIOK_ICR_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOK AFSEL*/
#define GPIOK_AFSEL    ((GPIO_AFSEL_t*) (GPIOK_BASE + GPIO_AFSEL_OFFSET))
#define GPIOK_AFSEL_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOK DRV2*/
#define GPIOK_DRR    ((GPIO_DRR_ARRAY_t*) (GPIOK_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOK DRV2*/
#define GPIOK_DR2R    ((GPIO_DR2R_t*) (GPIOK_BASE + GPIO_DR2R_OFFSET))
#define GPIOK_DR2R_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOK DRV4*/
#define GPIOK_DR4R    ((GPIO_DR4R_t*) (GPIOK_BASE + GPIO_DR4R_OFFSET))
#define GPIOK_DR4R_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOK DRV8*/
#define GPIOK_DR8R    ((GPIO_DR8R_t*) (GPIOK_BASE + GPIO_DR8R_OFFSET))
#define GPIOK_DR8R_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOK ODE*/
#define GPIOK_ODR    ((GPIO_ODR_t*) (GPIOK_BASE + GPIO_ODR_OFFSET))
#define GPIOK_ODR_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOK PUE*/
#define GPIOK_PUR    ((GPIO_PUR_t*) (GPIOK_BASE + GPIO_PUR_OFFSET))
#define GPIOK_PUR_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOK PDE*/
#define GPIOK_PDR    ((GPIO_PDR_t*) (GPIOK_BASE + GPIO_PDR_OFFSET))
#define GPIOK_PDR_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOK SLR*/
#define GPIOK_SLR    ((GPIO_SLR_t*) (GPIOK_BASE + GPIO_SLR_OFFSET))
#define GPIOK_SLR_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOK DEN*/
#define GPIOK_DEN    ((GPIO_DEN_t*) (GPIOK_BASE + GPIO_DEN_OFFSET))
#define GPIOK_DEN_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOK LOCK*/
#define GPIOK_LOCK    ((GPIO_LOCK_t*) (GPIOK_BASE + GPIO_LOCK_OFFSET))
#define GPIOK_LOCK_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOK CR*/
#define GPIOK_CR    ((GPIO_CR_t*) (GPIOK_BASE + GPIO_CR_OFFSET))
#define GPIOK_CR_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOK AMSEL*/
#define GPIOK_AMSEL    ((GPIO_AMSEL_t*) (GPIOK_BASE + GPIO_AMSEL_OFFSET))
#define GPIOK_AMSEL_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOK PCTL*/
#define GPIOK_PCTL    ((GPIO_PCTL_t*) (GPIOK_BASE + GPIO_PCTL_OFFSET))
#define GPIOK_PCTL_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOK ADCCTL*/
#define GPIOK_ADCCTL    ((GPIO_ADCCTL_t*) (GPIOK_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOK_ADCCTL_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOK DMACTL*/
#define GPIOK_DMACTL    ((GPIO_DMACTL_t*) (GPIOK_BASE + GPIO_DMACTL_OFFSET))
#define GPIOK_DMACTL_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOK SI*/
#define GPIOK_SI    ((GPIO_SI_t*) (GPIOK_BASE + GPIO_SI_OFFSET))
#define GPIOK_SI_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOK DR12R*/
#define GPIOK_DR12R    ((GPIO_DR12R_t*) (GPIOK_BASE + GPIO_DR12R_OFFSET))
#define GPIOK_DR12R_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOK WAKEPEN*/
#define GPIOK_WAKEPEN    ((GPIO_WAKEPEN_t*) (GPIOK_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOK_WAKEPEN_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOK WAKELVL*/
#define GPIOK_WAKELVL    ((GPIO_WAKELVL_t*) (GPIOK_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOK_WAKELVL_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOK WAKESTAT*/
#define GPIOK_WAKESTAT    ((GPIO_WAKESTAT_t*) (GPIOK_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOK_WAKESTAT_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOK PP*/
#define GPIOK_PP    ((GPIO_PP_t*) (GPIOK_BASE + GPIO_PP_OFFSET))
#define GPIOK_PP_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOK PC*/
#define GPIOK_PC    ((GPIO_PC_t*) (GPIOK_BASE + GPIO_PC_OFFSET))
#define GPIOK_PC_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOK PID4*/
#define GPIOK_PeriphID4    ((GPIO_PeriphID4_t*) (GPIOK_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOK_PeriphID4_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOK PID5*/
#define GPIOK_PeriphID5    ((GPIO_PeriphID5_t*) (GPIOK_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOK_PeriphID5_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOK PID6*/
#define GPIOK_PeriphID6    ((GPIO_PeriphID6_t*) (GPIOK_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOK_PeriphID6_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOK PID7*/
#define GPIOK_PeriphID7    ((GPIO_PeriphID7_t*) (GPIOK_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOK_PeriphID7_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOK PID0*/
#define GPIOK_PeriphID0    ((GPIO_PeriphID0_t*) (GPIOK_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOK_PeriphID0_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOK PID1*/
#define GPIOK_PeriphID1    ((GPIO_PeriphID1_t*) (GPIOK_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOK_PeriphID1_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOK PID2*/
#define GPIOK_PeriphID2    ((GPIO_PeriphID2_t*) (GPIOK_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOK_PeriphID2_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOK PID3*/
#define GPIOK_PeriphID3    ((GPIO_PeriphID3_t*) (GPIOK_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOK_PeriphID3_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOK CID0*/
#define GPIOK_PCellID0    ((GPIO_PCellID0_t*) (GPIOK_BASE + GPIO_PCellID0_OFFSET))
#define GPIOK_PCellID0_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOK CID1*/
#define GPIOK_PCellID1    ((GPIO_PCellID1_t*) (GPIOK_BASE + GPIO_PCellID1_OFFSET))
#define GPIOK_PCellID1_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOK CID2*/
#define GPIOK_PCellID2    ((GPIO_PCellID2_t*) (GPIOK_BASE + GPIO_PCellID2_OFFSET))
#define GPIOK_PCellID2_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOK CID3*/
#define GPIOK_PCellID3    ((GPIO_PCellID3_t*) (GPIOK_BASE + GPIO_PCellID3_OFFSET))
#define GPIOK_PCellID3_R    (*((volatile uint32_t *) (GPIOK_BASE + GPIO_PCellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEK_H_ */
