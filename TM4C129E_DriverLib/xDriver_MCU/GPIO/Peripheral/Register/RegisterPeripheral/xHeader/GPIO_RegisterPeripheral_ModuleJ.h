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
#define GPIOJ_DATA_MASK    ((GPIO_DATA_MASK_t*) (GPIOJ_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOJ_DATA_PINMASK0_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DATA_PINMASK0_OFFSET )))
#define GPIOJ_DATA_PINMASK1_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DATA_PINMASK1_OFFSET )))
#define GPIOJ_DATA_PINMASK2_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DATA_PINMASK2_OFFSET )))
#define GPIOJ_DATA_PINMASK3_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DATA_PINMASK3_OFFSET )))
#define GPIOJ_DATA_PINMASK4_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DATA_PINMASK4_OFFSET )))
#define GPIOJ_DATA_PINMASK5_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DATA_PINMASK5_OFFSET )))
#define GPIOJ_DATA_PINMASK6_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DATA_PINMASK6_OFFSET )))
#define GPIOJ_DATA_PINMASK7_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DATA_PINMASK7_OFFSET )))

#define GPIOJ_DATA    ((GPIO_DATA_t*) (GPIOJ_BASE + GPIO_DATA_OFFSET))
#define GPIOJ_DATA_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOJ DIR*/
#define GPIOJ_DIR    ((GPIO_DIR_t*) (GPIOJ_BASE + GPIO_DIR_OFFSET))
#define GPIOJ_DIR_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOJ IS*/
#define GPIOJ_IS    ((GPIO_IS_t*) (GPIOJ_BASE + GPIO_IS_OFFSET))
#define GPIOJ_IS_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOJ IBE*/
#define GPIOJ_IBE    ((GPIO_IBE_t*) (GPIOJ_BASE + GPIO_IBE_OFFSET))
#define GPIOJ_IBE_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOJ IEV*/
#define GPIOJ_IEV    ((GPIO_IEV_t*) (GPIOJ_BASE + GPIO_IEV_OFFSET))
#define GPIOJ_IEV_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOJ IME*/
#define GPIOJ_IM    ((GPIO_IM_t*) (GPIOJ_BASE + GPIO_IM_OFFSET))
#define GPIOJ_IM_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOJ RIS*/
#define GPIOJ_RIS    ((GPIO_RIS_t*) (GPIOJ_BASE + GPIO_RIS_OFFSET))
#define GPIOJ_RIS_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOJ MIS*/
#define GPIOJ_MIS    ((GPIO_MIS_t*) (GPIOJ_BASE + GPIO_MIS_OFFSET))
#define GPIOJ_MIS_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOJ IC*/
#define GPIOJ_ICR    ((GPIO_ICR_t*) (GPIOJ_BASE + GPIO_ICR_OFFSET))
#define GPIOJ_ICR_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOJ AFSEL*/
#define GPIOJ_AFSEL    ((GPIO_AFSEL_t*) (GPIOJ_BASE + GPIO_AFSEL_OFFSET))
#define GPIOJ_AFSEL_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOJ DRV2*/
#define GPIOJ_DRR    ((GPIO_DRR_ARRAY_t*) (GPIOJ_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOJ DRV2*/
#define GPIOJ_DR2R    ((GPIO_DR2R_t*) (GPIOJ_BASE + GPIO_DR2R_OFFSET))
#define GPIOJ_DR2R_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOJ DRV4*/
#define GPIOJ_DR4R    ((GPIO_DR4R_t*) (GPIOJ_BASE + GPIO_DR4R_OFFSET))
#define GPIOJ_DR4R_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOJ DRV8*/
#define GPIOJ_DR8R    ((GPIO_DR8R_t*) (GPIOJ_BASE + GPIO_DR8R_OFFSET))
#define GPIOJ_DR8R_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOJ ODE*/
#define GPIOJ_ODR    ((GPIO_ODR_t*) (GPIOJ_BASE + GPIO_ODR_OFFSET))
#define GPIOJ_ODR_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOJ PUE*/
#define GPIOJ_PUR    ((GPIO_PUR_t*) (GPIOJ_BASE + GPIO_PUR_OFFSET))
#define GPIOJ_PUR_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOJ PDE*/
#define GPIOJ_PDR    ((GPIO_PDR_t*) (GPIOJ_BASE + GPIO_PDR_OFFSET))
#define GPIOJ_PDR_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOJ SLR*/
#define GPIOJ_SLR    ((GPIO_SLR_t*) (GPIOJ_BASE + GPIO_SLR_OFFSET))
#define GPIOJ_SLR_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOJ DEN*/
#define GPIOJ_DEN    ((GPIO_DEN_t*) (GPIOJ_BASE + GPIO_DEN_OFFSET))
#define GPIOJ_DEN_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOJ LOCK*/
#define GPIOJ_LOCK    ((GPIO_LOCK_t*) (GPIOJ_BASE + GPIO_LOCK_OFFSET))
#define GPIOJ_LOCK_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOJ CR*/
#define GPIOJ_CR    ((GPIO_CR_t*) (GPIOJ_BASE + GPIO_CR_OFFSET))
#define GPIOJ_CR_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOJ AMSEL*/
#define GPIOJ_AMSEL    ((GPIO_AMSEL_t*) (GPIOJ_BASE + GPIO_AMSEL_OFFSET))
#define GPIOJ_AMSEL_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOJ PCTL*/
#define GPIOJ_PCTL    ((GPIO_PCTL_t*) (GPIOJ_BASE + GPIO_PCTL_OFFSET))
#define GPIOJ_PCTL_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOJ ADCCTL*/
#define GPIOJ_ADCCTL    ((GPIO_ADCCTL_t*) (GPIOJ_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOJ_ADCCTL_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOJ DMACTL*/
#define GPIOJ_DMACTL    ((GPIO_DMACTL_t*) (GPIOJ_BASE + GPIO_DMACTL_OFFSET))
#define GPIOJ_DMACTL_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOJ SI*/
#define GPIOJ_SI    ((GPIO_SI_t*) (GPIOJ_BASE + GPIO_SI_OFFSET))
#define GPIOJ_SI_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOJ DR12R*/
#define GPIOJ_DR12R    ((GPIO_DR12R_t*) (GPIOJ_BASE + GPIO_DR12R_OFFSET))
#define GPIOJ_DR12R_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOJ WAKEPEN*/
#define GPIOJ_WAKEPEN    ((GPIO_WAKEPEN_t*) (GPIOJ_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOJ_WAKEPEN_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOJ WAKELVL*/
#define GPIOJ_WAKELVL    ((GPIO_WAKELVL_t*) (GPIOJ_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOJ_WAKELVL_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOJ WAKESTAT*/
#define GPIOJ_WAKESTAT    ((GPIO_WAKESTAT_t*) (GPIOJ_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOJ_WAKESTAT_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOJ PP*/
#define GPIOJ_PP    ((GPIO_PP_t*) (GPIOJ_BASE + GPIO_PP_OFFSET))
#define GPIOJ_PP_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOJ PC*/
#define GPIOJ_PC    ((GPIO_PC_t*) (GPIOJ_BASE + GPIO_PC_OFFSET))
#define GPIOJ_PC_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOJ PID4*/
#define GPIOJ_PeriphID4    ((GPIO_PeriphID4_t*) (GPIOJ_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOJ_PeriphID4_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOJ PID5*/
#define GPIOJ_PeriphID5    ((GPIO_PeriphID5_t*) (GPIOJ_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOJ_PeriphID5_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOJ PID6*/
#define GPIOJ_PeriphID6    ((GPIO_PeriphID6_t*) (GPIOJ_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOJ_PeriphID6_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOJ PID7*/
#define GPIOJ_PeriphID7    ((GPIO_PeriphID7_t*) (GPIOJ_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOJ_PeriphID7_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOJ PID0*/
#define GPIOJ_PeriphID0    ((GPIO_PeriphID0_t*) (GPIOJ_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOJ_PeriphID0_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOJ PID1*/
#define GPIOJ_PeriphID1    ((GPIO_PeriphID1_t*) (GPIOJ_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOJ_PeriphID1_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOJ PID2*/
#define GPIOJ_PeriphID2    ((GPIO_PeriphID2_t*) (GPIOJ_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOJ_PeriphID2_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOJ PID3*/
#define GPIOJ_PeriphID3    ((GPIO_PeriphID3_t*) (GPIOJ_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOJ_PeriphID3_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOJ CID0*/
#define GPIOJ_PCellID0    ((GPIO_PCellID0_t*) (GPIOJ_BASE + GPIO_PCellID0_OFFSET))
#define GPIOJ_PCellID0_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOJ CID1*/
#define GPIOJ_PCellID1    ((GPIO_PCellID1_t*) (GPIOJ_BASE + GPIO_PCellID1_OFFSET))
#define GPIOJ_PCellID1_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOJ CID2*/
#define GPIOJ_PCellID2    ((GPIO_PCellID2_t*) (GPIOJ_BASE + GPIO_PCellID2_OFFSET))
#define GPIOJ_PCellID2_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOJ CID3*/
#define GPIOJ_PCellID3    ((GPIO_PCellID3_t*) (GPIOJ_BASE + GPIO_PCellID3_OFFSET))
#define GPIOJ_PCellID3_R    (*((volatile UBase_t *) (GPIOJ_BASE + GPIO_PCellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEJ_H_ */
