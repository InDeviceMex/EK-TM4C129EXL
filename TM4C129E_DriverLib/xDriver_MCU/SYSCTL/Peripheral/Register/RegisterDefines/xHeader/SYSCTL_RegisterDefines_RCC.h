/**
 *
 * @file SYSCTL_RegisterDefines_RCC.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_RCC_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_RCC_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 8 RCC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCC_R_MOSCDIS_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC_R_MOSCDIS_BIT    (0UL)
#define SYSCTL_RCC_R_MOSCDIS_ENA    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_R_MOSCDIS_DIS    ((uint32_t) 0x00000001UL)

#define SYSCTL_RCC_MOSCDIS_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC_MOSCDIS_ENA    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_MOSCDIS_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_OSCSRC_MASK    ((uint32_t) 0x00000030UL)
#define SYSCTL_RCC_R_OSCSRC_BIT    (4UL)
#define SYSCTL_RCC_R_OSCSRC_MOSC    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_R_OSCSRC_PIOSC    ((uint32_t) 0x00000010UL)
#define SYSCTL_RCC_R_OSCSRC_PIOSC4    ((uint32_t) 0x00000020UL)
#define SYSCTL_RCC_R_OSCSRC_LFIOSC    ((uint32_t) 0x00000030UL)

#define SYSCTL_RCC_OSCSRC_MASK    ((uint32_t) 0x00000003UL)
#define SYSCTL_RCC_OSCSRC_MOSC    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_OSCSRC_PIOSC    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC_OSCSRC_PIOSC4    ((uint32_t) 0x00000002UL)
#define SYSCTL_RCC_OSCSRC_LFIOSC    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_XTAL_MASK    ((uint32_t) 0x000007C0UL)
#define SYSCTL_RCC_R_XTAL_BIT    (6UL)
#define SYSCTL_RCC_R_XTAL_4MHZ    ((uint32_t) 0x00000180UL)
#define SYSCTL_RCC_R_XTAL_4_096MHZ    ((uint32_t) 0x000001C0UL)
#define SYSCTL_RCC_R_XTAL_4_9152MHZ ((uint32_t) 0x00000200UL)
#define SYSCTL_RCC_R_XTAL_5MHZ    ((uint32_t) 0x00000240UL)
#define SYSCTL_RCC_R_XTAL_5_12MHZ    ((uint32_t) 0x00000280UL)
#define SYSCTL_RCC_R_XTAL_6MHZ    ((uint32_t) 0x000002C0UL)
#define SYSCTL_RCC_R_XTAL_6_144MHZ    ((uint32_t) 0x00000300UL)
#define SYSCTL_RCC_R_XTAL_7_3728MHZ ((uint32_t) 0x00000340UL)
#define SYSCTL_RCC_R_XTAL_8MHZ    ((uint32_t) 0x00000380UL)
#define SYSCTL_RCC_R_XTAL_8_192MHZ    ((uint32_t) 0x000003C0UL)
#define SYSCTL_RCC_R_XTAL_10MHZ    ((uint32_t) 0x00000400UL)
#define SYSCTL_RCC_R_XTAL_12MHZ    ((uint32_t) 0x00000440UL)
#define SYSCTL_RCC_R_XTAL_12_288MHZ ((uint32_t) 0x00000480UL)
#define SYSCTL_RCC_R_XTAL_13_56MHZ    ((uint32_t) 0x000004C0UL)
#define SYSCTL_RCC_R_XTAL_14_31818MHZ    ((uint32_t) 0x00000500UL)
#define SYSCTL_RCC_R_XTAL_16MHZ    ((uint32_t) 0x00000540UL)
#define SYSCTL_RCC_R_XTAL_16_384MHZ ((uint32_t) 0x00000580UL)
#define SYSCTL_RCC_R_XTAL_18MHZ    ((uint32_t) 0x000005C0UL)
#define SYSCTL_RCC_R_XTAL_20MHZ    ((uint32_t) 0x00000600UL)
#define SYSCTL_RCC_R_XTAL_24MHZ    ((uint32_t) 0x00000640UL)
#define SYSCTL_RCC_R_XTAL_25MHZ    ((uint32_t) 0x00000680UL)

#define SYSCTL_RCC_XTAL_MASK    ((uint32_t) 0x0000001FUL)
#define SYSCTL_RCC_XTAL_4MHZ    ((uint32_t) 0x00000006UL)
#define SYSCTL_RCC_XTAL_4_096MHZ    ((uint32_t) 0x00000007UL)
#define SYSCTL_RCC_XTAL_4_9152MHZ ((uint32_t) 0x00000008UL)
#define SYSCTL_RCC_XTAL_5MHZ    ((uint32_t) 0x00000009UL)
#define SYSCTL_RCC_XTAL_5_12MHZ    ((uint32_t) 0x0000000AUL)
#define SYSCTL_RCC_XTAL_6MHZ    ((uint32_t) 0x0000000BUL)
#define SYSCTL_RCC_XTAL_6_144MHZ    ((uint32_t) 0x0000000CUL)
#define SYSCTL_RCC_XTAL_7_3728MHZ ((uint32_t) 0x0000000DUL)
#define SYSCTL_RCC_XTAL_8MHZ    ((uint32_t) 0x0000000EUL)
#define SYSCTL_RCC_XTAL_8_192MHZ    ((uint32_t) 0x0000000FUL)
#define SYSCTL_RCC_XTAL_10MHZ    ((uint32_t) 0x00000010UL)
#define SYSCTL_RCC_XTAL_12MHZ    ((uint32_t) 0x00000011UL)
#define SYSCTL_RCC_XTAL_12_288MHZ ((uint32_t) 0x00000012UL)
#define SYSCTL_RCC_XTAL_13_56MHZ    ((uint32_t) 0x00000013UL)
#define SYSCTL_RCC_XTAL_14_31818MHZ    ((uint32_t) 0x00000014UL)
#define SYSCTL_RCC_XTAL_16MHZ    ((uint32_t) 0x00000015UL)
#define SYSCTL_RCC_XTAL_16_384MHZ ((uint32_t) 0x00000016UL)
#define SYSCTL_RCC_XTAL_18MHZ    ((uint32_t) 0x00000017UL)
#define SYSCTL_RCC_XTAL_20MHZ    ((uint32_t) 0x00000018UL)
#define SYSCTL_RCC_XTAL_24MHZ    ((uint32_t) 0x00000019UL)
#define SYSCTL_RCC_XTAL_25MHZ    ((uint32_t) 0x0000001AUL)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_BYPASS_MASK    ((uint32_t) 0x00000800UL)
#define SYSCTL_RCC_R_BYPASS_BIT    (11UL)
#define SYSCTL_RCC_R_BYPASS_PLL    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_R_BYPASS_OSC    ((uint32_t) 0x00000800UL)

#define SYSCTL_RCC_BYPASS_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC_BYPASS_PLL    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_BYPASS_OSC    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_PWRDN_MASK    ((uint32_t) 0x00002000UL)
#define SYSCTL_RCC_R_PWRDN_BIT    (13UL)
#define SYSCTL_RCC_R_PWRDN_ON    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_R_PWRDN_DOWN    ((uint32_t) 0x00002000UL)

#define SYSCTL_RCC_PWRDN_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC_PWRDN_ON    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_PWRDN_DOWN    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_PWMDIV_MASK    ((uint32_t) 0x000E0000UL)
#define SYSCTL_RCC_R_PWMDIV_BIT    (17UL)
#define SYSCTL_RCC_R_PWMDIV_2    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_R_PWMDIV_4    ((uint32_t) 0x00020000UL)
#define SYSCTL_RCC_R_PWMDIV_8    ((uint32_t) 0x00040000UL)
#define SYSCTL_RCC_R_PWMDIV_16    ((uint32_t) 0x00060000UL)
#define SYSCTL_RCC_R_PWMDIV_32    ((uint32_t) 0x00080000UL)
#define SYSCTL_RCC_R_PWMDIV_64    ((uint32_t) 0x000E0000UL)

#define SYSCTL_RCC_PWMDIV_MASK    ((uint32_t) 0x00000007UL)
#define SYSCTL_RCC_PWMDIV_2    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_PWMDIV_4    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC_PWMDIV_8    ((uint32_t) 0x00000002UL)
#define SYSCTL_RCC_PWMDIV_16    ((uint32_t) 0x00000003UL)
#define SYSCTL_RCC_PWMDIV_32    ((uint32_t) 0x00000004UL)
#define SYSCTL_RCC_PWMDIV_64    ((uint32_t) 0x00000007UL)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_USEPWMDIV_MASK    ((uint32_t) 0x00100000UL)
#define SYSCTL_RCC_R_USEPWMDIV_BIT    (20UL)
#define SYSCTL_RCC_R_USEPWMDIV_SYSCLK    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_R_USEPWMDIV_PWMDIV    ((uint32_t) 0x00100000UL)

#define SYSCTL_RCC_USEPWMDIV_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC_USEPWMDIV_SYSCLK    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_USEPWMDIV_PWMDIV    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_USESYSDIV_MASK    ((uint32_t) 0x00400000UL)
#define SYSCTL_RCC_R_USESYSDIV_BIT    (22UL)
#define SYSCTL_RCC_R_USESYSDIV_SYSCLK    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_R_USESYSDIV_SYSDIV    ((uint32_t) 0x00400000UL)

#define SYSCTL_RCC_USESYSDIV_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC_USESYSDIV_SYSCLK    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_USESYSDIV_SYSDIV    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_SYSDIV_MASK    ((uint32_t) 0x07800000UL)
#define SYSCTL_RCC_R_SYSDIV_BIT    (23UL)

#define SYSCTL_RCC_SYSDIV_MASK    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_ACG_MASK    ((uint32_t) 0x08000000UL)
#define SYSCTL_RCC_R_ACG_BIT    (27UL)
#define SYSCTL_RCC_R_ACG_RCGCn    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_R_ACG_SCGCn    ((uint32_t) 0x08000000UL)

#define SYSCTL_RCC_ACG_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC_ACG_RCGCn    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC_ACG_SCGCn    ((uint32_t) 0x00000001UL)
/*--------*/


/******************************************************************************************
************************************ 10 RCC2 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCC2_R_OSCSRC2_MASK    ((uint32_t) 0x00000070UL)
#define SYSCTL_RCC2_R_OSCSRC2_BIT    (4UL)
#define SYSCTL_RCC2_R_OSCSRC2_MOSC    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC2_R_OSCSRC2_PIOSC    ((uint32_t) 0x00000010UL)
#define SYSCTL_RCC2_R_OSCSRC2_PIOSC4    ((uint32_t) 0x00000020UL)
#define SYSCTL_RCC2_R_OSCSRC2_LFIOSC    ((uint32_t) 0x00000030UL)
#define SYSCTL_RCC2_R_OSCSRC2_32_768KHZ    ((uint32_t) 0x00000070UL)

#define SYSCTL_RCC2_OSCSRC2_MASK    ((uint32_t) 0x00000007UL)
#define SYSCTL_RCC2_OSCSRC2_MOSC    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC2_OSCSRC2_PIOSC    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC2_OSCSRC2_PIOSC4    ((uint32_t) 0x00000002UL)
#define SYSCTL_RCC2_OSCSRC2_LFIOSC    ((uint32_t) 0x00000003UL)
#define SYSCTL_RCC2_OSCSRC2_32_768KHZ    ((uint32_t) 0x00000007UL)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_BYPASS2_MASK    ((uint32_t) 0x00000800UL)
#define SYSCTL_RCC2_R_BYPASS2_BIT    (11UL)
#define SYSCTL_RCC2_R_BYPASS2_PLL    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC2_R_BYPASS2_OSC    ((uint32_t) 0x00000800UL)

#define SYSCTL_RCC2_BYPASS2_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC2_BYPASS2_PLL    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC2_BYPASS2_OSC    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_PWRDN2_MASK    ((uint32_t) 0x00002000UL)
#define SYSCTL_RCC2_R_PWRDN2_BIT    (13UL)
#define SYSCTL_RCC2_R_PWRDN2_ON    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC2_R_PWRDN2_DOWN    ((uint32_t) 0x00002000UL)

#define SYSCTL_RCC2_PWRDN2_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC2_PWRDN2_ON    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC2_PWRDN2_DOWN    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_USBPWRDN_MASK    ((uint32_t) 0x00004000UL)
#define SYSCTL_RCC2_R_USBPWRDN_BIT    (14UL)
#define SYSCTL_RCC2_R_USBPWRDN_ON    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC2_R_USBPWRDN_DOWN    ((uint32_t) 0x00004000UL)

#define SYSCTL_RCC2_USBPWRDN_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC2_USBPWRDN_ON    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC2_USBPWRDN_DOWN    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_SYSDIV2LSB_MASK    ((uint32_t) 0x00400000UL)
#define SYSCTL_RCC2_R_SYSDIV2LSB_BIT    (22UL)
#define SYSCTL_RCC2_R_SYSDIV2LSB_CLEAR    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC2_R_SYSDIV2LSB_SET    ((uint32_t) 0x00400000UL)

#define SYSCTL_RCC2_SYSDIV2LSB_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC2_SYSDIV2LSB_CLEAR    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC2_SYSDIV2LSB_SET    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_SYSDIV2_MASK    ((uint32_t) 0x1F800000UL)
#define SYSCTL_RCC2_R_SYSDIV2_BIT    (23UL)

#define SYSCTL_RCC2_SYSDIV2_MASK    ((uint32_t) 0x0000003FUL)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_DIV400_MASK    ((uint32_t) 0x40000000UL)
#define SYSCTL_RCC2_R_DIV400_BIT    (30UL)
#define SYSCTL_RCC2_R_DIV400_200MHZ    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC2_R_DIV400_400MHZ    ((uint32_t) 0x40000000UL)

#define SYSCTL_RCC2_DIV400_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC2_DIV400_200MHZ    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC2_DIV400_400MHZ    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_USERCC2_MASK    ((uint32_t) 0x80000000UL)
#define SYSCTL_RCC2_R_USERCC2_BIT    (31UL)
#define SYSCTL_RCC2_R_USERCC2_RCC    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC2_R_USERCC2_RCC2    ((uint32_t) 0x80000000UL)

#define SYSCTL_RCC2_USERCC2_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_RCC2_USERCC2_RCC    ((uint32_t) 0x00000000UL)
#define SYSCTL_RCC2_USERCC2_RCC2    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_RCC_H_ */
