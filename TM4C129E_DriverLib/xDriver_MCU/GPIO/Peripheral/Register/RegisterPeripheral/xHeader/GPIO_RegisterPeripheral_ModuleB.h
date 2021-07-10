/**
 *
 * @file GPIO_RegisterPeripheral_ModuleB.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEB_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEB_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOB    ((GPIO_TypeDef*) (GPIOB_BASE))
#define GPIOB_AUX    ((GPIO_AUX_TypeDef*) (GPIOB_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOB DATA*/
#define GPIOB_DATA_MASK    ((GPIODATA_MASK_TypeDef*) (GPIOB_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOB_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOB_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOB_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOB_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOB_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOB_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOB_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOB_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOB_DATA    ((GPIODATA_TypeDef*) (GPIOB_BASE + GPIO_DATA_OFFSET))
#define GPIOB_DATA_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOB DIR*/
#define GPIOB_DIR    ((GPIODIR_TypeDef*) (GPIOB_BASE + GPIO_DIR_OFFSET))
#define GPIOB_DIR_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOB IS*/
#define GPIOB_IS    ((GPIOIS_TypeDef*) (GPIOB_BASE + GPIO_IS_OFFSET))
#define GPIOB_IS_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOB IBE*/
#define GPIOB_IBE    ((GPIOIBE_TypeDef*) (GPIOB_BASE + GPIO_IBE_OFFSET))
#define GPIOB_IBE_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOB IEV*/
#define GPIOB_IEV    ((GPIOIEV_TypeDef*) (GPIOB_BASE + GPIO_IEV_OFFSET))
#define GPIOB_IEV_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOB IME*/
#define GPIOB_IM    ((GPIOIM_TypeDef*) (GPIOB_BASE + GPIO_IM_OFFSET))
#define GPIOB_IM_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOB RIS*/
#define GPIOB_RIS    ((GPIORIS_TypeDef*) (GPIOB_BASE + GPIO_RIS_OFFSET))
#define GPIOB_RIS_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOB MIS*/
#define GPIOB_MIS    ((GPIOMIS_TypeDef*) (GPIOB_BASE + GPIO_MIS_OFFSET))
#define GPIOB_MIS_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOB IC*/
#define GPIOB_ICR    ((GPIOICR_TypeDef*) (GPIOB_BASE + GPIO_ICR_OFFSET))
#define GPIOB_ICR_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOB AFSEL*/
#define GPIOB_AFSEL    ((GPIOBFSEL_TypeDef*) (GPIOB_BASE + GPIO_AFSEL_OFFSET))
#define GPIOB_AFSEL_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOB DRV2*/
#define GPIOB_DRR    ((GPIODRR_ARRAY_TypeDef*) (GPIOB_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOB DRV2*/
#define GPIOB_DR2R    ((GPIODR2R_TypeDef*) (GPIOB_BASE + GPIO_DR2R_OFFSET))
#define GPIOB_DR2R_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOB DRV4*/
#define GPIOB_DR4R    ((GPIODR4R_TypeDef*) (GPIOB_BASE + GPIO_DR4R_OFFSET))
#define GPIOB_DR4R_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOB DRV8*/
#define GPIOB_DR8R    ((GPIODR8R_TypeDef*) (GPIOB_BASE + GPIO_DR8R_OFFSET))
#define GPIOB_DR8R_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOB ODE*/
#define GPIOB_ODR    ((GPIOODR_TypeDef*) (GPIOB_BASE + GPIO_ODR_OFFSET))
#define GPIOB_ODR_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOB PUE*/
#define GPIOB_PUR    ((GPIOPUR_TypeDef*) (GPIOB_BASE + GPIO_PUR_OFFSET))
#define GPIOB_PUR_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOB PDE*/
#define GPIOB_PDR    ((GPIOPDR_TypeDef*) (GPIOB_BASE + GPIO_PDR_OFFSET))
#define GPIOB_PDR_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOB SLR*/
#define GPIOB_SLR    ((GPIOSLR_TypeDef*) (GPIOB_BASE + GPIO_SLR_OFFSET))
#define GPIOB_SLR_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOB DEN*/
#define GPIOB_DEN    ((GPIODEN_TypeDef*) (GPIOB_BASE + GPIO_DEN_OFFSET))
#define GPIOB_DEN_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOB LOCK*/
#define GPIOB_LOCK    ((GPIOLOCK_TypeDef*) (GPIOB_BASE + GPIO_LOCK_OFFSET))
#define GPIOB_LOCK_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOB CR*/
#define GPIOB_CR    ((GPIOCR_TypeDef*) (GPIOB_BASE + GPIO_CR_OFFSET))
#define GPIOB_CR_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOB AMSEL*/
#define GPIOB_AMSEL    ((GPIOBMSEL_TypeDef*) (GPIOB_BASE + GPIO_AMSEL_OFFSET))
#define GPIOB_AMSEL_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOB PCTL*/
#define GPIOB_PCTL    ((GPIOPCTL_TypeDef*) (GPIOB_BASE + GPIO_PCTL_OFFSET))
#define GPIOB_PCTL_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOB ADCCTL*/
#define GPIOB_ADCCTL    ((GPIOBDCCTL_TypeDef*) (GPIOB_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOB_ADCCTL_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOB DMACTL*/
#define GPIOB_DMACTL    ((GPIODMACTL_TypeDef*) (GPIOB_BASE + GPIO_DMACTL_OFFSET))
#define GPIOB_DMACTL_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOB SI*/
#define GPIOB_SI    ((GPIOSI_TypeDef*) (GPIOB_BASE + GPIO_SI_OFFSET))
#define GPIOB_SI_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOB DR12R*/
#define GPIOB_DR12R    ((GPIODR12R_TypeDef*) (GPIOB_BASE + GPIO_DR12R_OFFSET))
#define GPIOB_DR12R_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOB WAKEPEN*/
#define GPIOB_WAKEPEN    ((GPIOWAKEPEN_TypeDef*) (GPIOB_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOB_WAKEPEN_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOB WAKELVL*/
#define GPIOB_WAKELVL    ((GPIOWAKELVL_TypeDef*) (GPIOB_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOB_WAKELVL_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOB WAKESTAT*/
#define GPIOB_WAKESTAT    ((GPIOWAKESTAT_TypeDef*) (GPIOB_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOB_WAKESTAT_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOB PP*/
#define GPIOB_PP    ((GPIOPP_TypeDef*) (GPIOB_BASE + GPIO_PP_OFFSET))
#define GPIOB_PP_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOB PC*/
#define GPIOB_PC    ((GPIOPC_TypeDef*) (GPIOB_BASE + GPIO_PC_OFFSET))
#define GPIOB_PC_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOB PID4*/
#define GPIOB_PeriphID4    ((GPIOPeriphID4_TypeDef*) (GPIOB_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOB_PeriphID4_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOB PID5*/
#define GPIOB_PeriphID5    ((GPIOPeriphID5_TypeDef*) (GPIOB_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOB_PeriphID5_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOB PID6*/
#define GPIOB_PeriphID6    ((GPIOPeriphID6_TypeDef*) (GPIOB_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOB_PeriphID6_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOB PID7*/
#define GPIOB_PeriphID7    ((GPIOPeriphID7_TypeDef*) (GPIOB_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOB_PeriphID7_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOB PID0*/
#define GPIOB_PeriphID0    ((GPIOPeriphID0_TypeDef*) (GPIOB_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOB_PeriphID0_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOB PID1*/
#define GPIOB_PeriphID1    ((GPIOPeriphID1_TypeDef*) (GPIOB_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOB_PeriphID1_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOB PID2*/
#define GPIOB_PeriphID2    ((GPIOPeriphID2_TypeDef*) (GPIOB_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOB_PeriphID2_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOB PID3*/
#define GPIOB_PeriphID3    ((GPIOPeriphID3_TypeDef*) (GPIOB_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOB_PeriphID3_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOB CID0*/
#define GPIOB_CellID0    ((GPIOCellID0_TypeDef*) (GPIOB_BASE + GPIO_CellID0_OFFSET))
#define GPIOB_CellID0_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOB CID1*/
#define GPIOB_CellID1    ((GPIOCellID1_TypeDef*) (GPIOB_BASE + GPIO_CellID1_OFFSET))
#define GPIOB_CellID1_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOB CID2*/
#define GPIOB_CellID2    ((GPIOCellID2_TypeDef*) (GPIOB_BASE + GPIO_CellID2_OFFSET))
#define GPIOB_CellID2_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOB CID3*/
#define GPIOB_CellID3    ((GPIOCellID3_TypeDef*) (GPIOB_BASE + GPIO_CellID3_OFFSET))
#define GPIOB_CellID3_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEB_H_ */
