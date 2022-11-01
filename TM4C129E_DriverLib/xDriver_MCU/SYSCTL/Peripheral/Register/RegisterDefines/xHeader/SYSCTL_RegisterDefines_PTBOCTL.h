/**
 *
 * @file SYSCTL_RegisterDefines_PTBOCTL.h
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PTBOCTL_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PTBOCTL_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 3 PTBOCTL *********************************************
******************************************************************************************/
/*--------*/
#define PTBO_CTL_R_VDD_UBOR_MASK    ((UBase_t) 0x00000003UL)
#define PTBO_CTL_R_VDD_UBOR_BIT    (0UL)
#define PTBO_CTL_R_VDD_UBOR_NOACTION    ((UBase_t) 0x00000000UL)
#define PTBO_CTL_R_VDD_UBOR_SYSINT    ((UBase_t) 0x00000001UL)
#define PTBO_CTL_R_VDD_UBOR_NMI    ((UBase_t) 0x00000002UL)
#define PTBO_CTL_R_VDD_UBOR_RESET ((UBase_t) 0x00000003UL)

#define PTBO_CTL_VDD_UBOR_MASK    ((UBase_t) 0x00000003UL)
#define PTBO_CTL_VDD_UBOR_NOACTION    ((UBase_t) 0x00000000UL)
#define PTBO_CTL_VDD_UBOR_SYSINT    ((UBase_t) 0x00000001UL)
#define PTBO_CTL_VDD_UBOR_NMI    ((UBase_t) 0x00000002UL)
#define PTBO_CTL_VDD_UBOR_RESET    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PTBO_CTL_R_VDDA_UBOR_MASK    ((UBase_t) 0x00000300UL)
#define PTBO_CTL_R_VDDA_UBOR_BIT    (8UL)
#define PTBO_CTL_R_VDDA_UBOR_NOACTION    ((UBase_t) 0x00000000UL)
#define PTBO_CTL_R_VDDA_UBOR_SYSINT    ((UBase_t) 0x00000100UL)
#define PTBO_CTL_R_VDDA_UBOR_NMI    ((UBase_t) 0x00000200UL)
#define PTBO_CTL_R_VDDA_UBOR_RESET ((UBase_t) 0x00000300UL)

#define PTBO_CTL_VDDA_UBOR_MASK    ((UBase_t) 0x00000003UL)
#define PTBO_CTL_VDDA_UBOR_NOACTION    ((UBase_t) 0x00000000UL)
#define PTBO_CTL_VDDA_UBOR_SYSINT    ((UBase_t) 0x00000001UL)
#define PTBO_CTL_VDDA_UBOR_NMI    ((UBase_t) 0x00000002UL)
#define PTBO_CTL_VDDA_UBOR_RESET    ((UBase_t) 0x00000003UL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PTBOCTL_H_ */
