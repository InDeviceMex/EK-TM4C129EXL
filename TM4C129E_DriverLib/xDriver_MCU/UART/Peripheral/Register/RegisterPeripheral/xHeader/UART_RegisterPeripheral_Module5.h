/**
 *
 * @file UART_RegisterPeripheral_Module5.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 22 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_UART_REGISTERPERIPHERAL_MODULE5_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_UART_REGISTERPERIPHERAL_MODULE5_H_

#include <xDriver_MCU/UART/Peripheral/Register/xHeader/UART_RegisterAddress.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterDefines/UART_RegisterDefines.h>
#include <xDriver_MCU/UART/Peripheral/Struct/xHeader/UART_StructPeripheral.h>

/******************************************************************************************
************************************ UART5 *********************************************
******************************************************************************************/

#define UART5    ((UART_TypeDef*) (UART5_BASE))

/******************************************************************************************
************************************ 1 DR *********************************************
******************************************************************************************/
#define UART5_DR    ((UARTDR_TypeDef*) (UART5_BASE + UART_DR_OFFSET ))
#define UART5_DR_R    (*((volatile uint32_t*) (UART5_BASE + UART_DR_OFFSET)))

/******************************************************************************************
************************************ 2 RSR *********************************************
************************************ 2 ECR *********************************************
******************************************************************************************/
#define UART5_RSR    ((UARTRSR_TypeDef*) (UART5_BASE + UART_RSR_OFFSET ))
#define UART5_RSR_R    (*((volatile const uint32_t*) (UART5_BASE + UART_RSR_OFFSET)))
#define UART5_ECR    ((UARTECR_TypeDef*) (UART5_BASE + UART_ECR_OFFSET ))
#define UART5_ECR_R    (*((volatile uint32_t*) (UART5_BASE + UART_ECR_OFFSET)))

/******************************************************************************************
************************************ 3 FR *********************************************
******************************************************************************************/
#define UART5_FR    ((UARTFR_TypeDef*) (UART5_BASE + UART_FR_OFFSET ))
#define UART5_FR_R    (*((volatile const uint32_t*) (UART5_BASE + UART_FR_OFFSET)))

/******************************************************************************************
************************************ 4 ILPR *********************************************
******************************************************************************************/
#define UART5_ILPR    ((UARTILPR_TypeDef*) (UART5_BASE + UART_ILPR_OFFSET ))
#define UART5_ILPR_R    (*((volatile uint32_t*) (UART5_BASE + UART_ILPR_OFFSET)))

/******************************************************************************************
************************************ 5 IBRD *********************************************
******************************************************************************************/
#define UART5_IBRD    ((UARTIBRD_TypeDef*) (UART5_BASE + UART_IBRD_OFFSET ))
#define UART5_IBRD_R    (*((volatile uint32_t*) (UART5_BASE + UART_IBRD_OFFSET)))

/******************************************************************************************
************************************ 6 FBRD *********************************************
******************************************************************************************/
#define UART5_FBRD    ((UARTFBRD_TypeDef*) (UART5_BASE + UART_FBRD_OFFSET ))
#define UART5_FBRD_R    (*((volatile uint32_t*) (UART5_BASE + UART_FBRD_OFFSET)))

/******************************************************************************************
************************************ 7 LCRH *********************************************
******************************************************************************************/
#define UART5_LCRH    ((UARTLCRH_TypeDef*) (UART5_BASE + UART_LCRH_OFFSET ))
#define UART5_LCRH_R    (*((volatile uint32_t*) (UART5_BASE + UART_LCRH_OFFSET)))

/******************************************************************************************
************************************ 8 DMACTL *********************************************
******************************************************************************************/
#define UART5_DMACTL    ((UARTDMACTL_TypeDef*) (UART5_BASE + UART_DMACTL_OFFSET ))
#define UART5_DMACTL_R    (*((volatile uint32_t*) (UART5_BASE + UART_DMACTL_OFFSET)))

/******************************************************************************************
************************************ 9 IFLS *********************************************
******************************************************************************************/
#define UART5_IFLS    ((UARTIFLS_TypeDef*) (UART5_BASE + UART_IFLS_OFFSET ))
#define UART5_IFLS_R    (*((volatile uint32_t*) (UART5_BASE + UART_IFLS_OFFSET)))

/******************************************************************************************
************************************ 10 IM *********************************************
******************************************************************************************/
#define UART5_IM    ((UARTIM_TypeDef*) (UART5_BASE + UART_IM_OFFSET ))
#define UART5_IM_R    (*((volatile uint32_t*) (UART5_BASE + UART_IM_OFFSET)))

/******************************************************************************************
************************************ 11 RIS *********************************************
******************************************************************************************/
#define UART5_RIS    ((UARTRIS_TypeDef*) (UART5_BASE + UART_RIS_OFFSET ))
#define UART5_RIS_R    (*((volatile const uint32_t*) (UART5_BASE + UART_RIS_OFFSET)))

/******************************************************************************************
************************************ 12 MIS *********************************************
******************************************************************************************/
#define UART5_MIS    ((UARTMIS_TypeDef*) (UART5_BASE + UART_MIS_OFFSET ))
#define UART5_MIS_R    (*((volatile const uint32_t*) (UART5_BASE + UART_MIS_OFFSET)))

/******************************************************************************************
************************************ 13 ICR *********************************************
******************************************************************************************/
#define UART5_ICR    ((UARTICR_TypeDef*) (UART5_BASE + UART_ICR_OFFSET ))
#define UART5_ICR_R    (*((volatile uint32_t*) (UART5_BASE + UART_ICR_OFFSET)))

/******************************************************************************************
************************************ 14 DMACTL *********************************************
******************************************************************************************/
#define UART5_DMACTL    ((UARTDMACTL_TypeDef*) (UART5_BASE + UART_DMACTL_OFFSET ))
#define UART5_DMACTL_R    (*((volatile uint32_t*) (UART5_BASE + UART_DMACTL_OFFSET)))

/******************************************************************************************
************************************ 15 9BITADDR *********************************************
******************************************************************************************/
#define UART5_9BITADDR    ((UART9BITADDR8_TypeDef*) (UART5_BASE + UART_9BITADDR_OFFSET ))
#define UART5_9BITADDR_R    (*((volatile uint32_t*) (UART5_BASE + UART_9BITADDR_OFFSET)))

/******************************************************************************************
************************************ 16 9BITAMASK *********************************************
******************************************************************************************/
#define UART5_9BITAMASK    ((UART9BITAMASK8_TypeDef*) (UART5_BASE + UART_9BITAMASK_OFFSET ))
#define UART5_9BITAMASK_R    (*((volatile uint32_t*) (UART5_BASE + UART_9BITAMASK_OFFSET)))

/******************************************************************************************
************************************ 17 PP *********************************************
******************************************************************************************/
#define UART5_PP    ((UARTPP_TypeDef*) (UART5_BASE + UART_PP_OFFSET ))
#define UART5_PP_R    (*((volatile const uint32_t*) (UART5_BASE + UART_PP_OFFSET)))

/******************************************************************************************
************************************ 18 CC *********************************************
******************************************************************************************/
#define UART5_CC    ((UARTCC_TypeDef*) (UART5_BASE + UART_CC_OFFSET ))
#define UART5_CC_R    (*((volatile uint32_t*) (UART5_BASE + UART_CC_OFFSET)))


/******************************************************************************************
 ************************************ 19 PeriphID4 *********************************************
 ******************************************************************************************/
/* UART5 PID4*/
#define UART5_PeriphID4    ((UARTPeriphID4_TypeDef*) (UART5_BASE + UART_PeriphID4_OFFSET))
#define UART5_PeriphID4_R    (*((volatile const uint32_t*) (UART5_BASE + UART_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 20 PeriphID5 *********************************************
 ******************************************************************************************/
/* UART5 PID5*/
#define UART5_PeriphID5    ((UARTPeriphID5_TypeDef*) (UART5_BASE + UART_PeriphID5_OFFSET))
#define UART5_PeriphID5_R    (*((volatile const uint32_t*) (UART5_BASE + UART_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 21 PeriphID6 *********************************************
 ******************************************************************************************/
/* UART5 PID6*/
#define UART5_PeriphID6    ((UARTPeriphID6_TypeDef*) (UART5_BASE + UART_PeriphID6_OFFSET))
#define UART5_PeriphID6_R    (*((volatile const uint32_t*) (UART5_BASE + UART_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 22 PeriphID7 *********************************************
 ******************************************************************************************/
/* UART5 PID7*/
#define UART5_PeriphID7    ((UARTPeriphID7_TypeDef*) (UART5_BASE + UART_PeriphID7_OFFSET))
#define UART5_PeriphID7_R    (*((volatile const uint32_t*) (UART5_BASE + UART_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 23 PeriphID0 *********************************************
 ******************************************************************************************/
/* UART5 PID0*/
#define UART5_PeriphID0    ((UARTPeriphID0_TypeDef*) (UART5_BASE + UART_PeriphID0_OFFSET))
#define UART5_PeriphID0_R    (*((volatile const uint32_t*) (UART5_BASE + UART_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 24 PeriphID1 *********************************************
 ******************************************************************************************/
/* UART5 PID1*/
#define UART5_PeriphID1    ((UARTPeriphID1_TypeDef*) (UART5_BASE + UART_PeriphID1_OFFSET))
#define UART5_PeriphID1_R    (*((volatile const uint32_t*) (UART5_BASE + UART_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 25 PeriphID2 *********************************************
 ******************************************************************************************/
/* UART5 PID2*/
#define UART5_PeriphID2    ((UARTPeriphID2_TypeDef*) (UART5_BASE + UART_PeriphID2_OFFSET))
#define UART5_PeriphID2_R    (*((volatile const uint32_t*) (UART5_BASE + UART_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 26 PeriphID3 *********************************************
 ******************************************************************************************/
/* UART5 PID3*/
#define UART5_PeriphID3    ((UARTPeriphID3_TypeDef*) (UART5_BASE + UART_PeriphID3_OFFSET))
#define UART5_PeriphID3_R    (*((volatile const uint32_t*) (UART5_BASE + UART_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 27 CellID0 *********************************************
 ******************************************************************************************/
/* UART5 CID0*/
#define UART5_CellID0    ((UARTCellID0_TypeDef*) (UART5_BASE + UART_CellID0_OFFSET))
#define UART5_CellID0_R    (*((volatile const uint32_t*) (UART5_BASE + UART_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 28 CellID1 *********************************************
 ******************************************************************************************/
/* UART5 CID1*/
#define UART5_CellID1    ((UARTCellID1_TypeDef*) (UART5_BASE + UART_CellID1_OFFSET))
#define UART5_CellID1_R    (*((volatile const uint32_t*) (UART5_BASE + UART_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 29 CellID2 *********************************************
 ******************************************************************************************/
/* UART5 CID2*/
#define UART5_CellID2    ((UARTCellID2_TypeDef*) (UART5_BASE + UART_CellID2_OFFSET))
#define UART5_CellID2_R    (*((volatile const uint32_t*) (UART5_BASE + UART_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 30 CellID3 *********************************************
 ******************************************************************************************/
/* UART5 CID3*/
#define UART5_CellID3    ((UARTCellID3_TypeDef*) (UART5_BASE + UART_CellID3_OFFSET))
#define UART5_CellID3_R    (*((volatile const uint32_t*) (UART5_BASE + UART_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_UART_REGISTERPERIPHERAL_MODULE5_H_ */
