/**
 *
 * @file ADC_RegisterDefines_SSCTL.h
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
 * @verbatim 15 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SSCTL_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SSCTL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 16 SSCTL *********************************************
******************************************************************************************/
/*--------*/
#define ADC_SSCTL_R_D0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_R_D0_BIT    ((uint32_t) 0UL)
#define ADC_SSCTL_R_D0_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_D0_DIFF    ((uint32_t) 0x00000001UL)

#define ADC_SSCTL_D0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_D0_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_D0_DIFF    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_END0_MASK    ((uint32_t) 0x00000002UL)
#define ADC_SSCTL_R_END0_BIT    ((uint32_t) 1UL)
#define ADC_SSCTL_R_END0_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_END0_END    ((uint32_t) 0x00000002UL)

#define ADC_SSCTL_END0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_END0_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_END0_END    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_IE0_MASK    ((uint32_t) 0x00000004UL)
#define ADC_SSCTL_R_IE0_BIT    ((uint32_t) 2UL)
#define ADC_SSCTL_R_IE0_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_IE0_ENA    ((uint32_t) 0x00000004UL)

#define ADC_SSCTL_IE0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_IE0_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_IE0_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_TS0_MASK    ((uint32_t) 0x00000008UL)
#define ADC_SSCTL_R_TS0_BIT    ((uint32_t) 3UL)
#define ADC_SSCTL_R_TS0_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_TS0_TEMP    ((uint32_t) 0x00000008UL)

#define ADC_SSCTL_TS0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_TS0_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_TS0_TEMP    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_D1_MASK    ((uint32_t) 0x00000010UL)
#define ADC_SSCTL_R_D1_BIT    ((uint32_t) 4UL)
#define ADC_SSCTL_R_D1_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_D1_DIFF    ((uint32_t) 0x00000010UL)

#define ADC_SSCTL_D1_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_D1_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_D1_DIFF    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_END1_MASK    ((uint32_t) 0x00000020UL)
#define ADC_SSCTL_R_END1_BIT    ((uint32_t) 5UL)
#define ADC_SSCTL_R_END1_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_END1_END    ((uint32_t) 0x00000020UL)

#define ADC_SSCTL_END1_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_END1_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_END1_END    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_IE1_MASK    ((uint32_t) 0x00000040UL)
#define ADC_SSCTL_R_IE1_BIT    ((uint32_t) 6UL)
#define ADC_SSCTL_R_IE1_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_IE1_ENA    ((uint32_t) 0x00000040UL)

#define ADC_SSCTL_IE1_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_IE1_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_IE1_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_TS1_MASK    ((uint32_t) 0x00000080UL)
#define ADC_SSCTL_R_TS1_BIT    ((uint32_t) 7UL)
#define ADC_SSCTL_R_TS1_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_TS1_TEMP    ((uint32_t) 0x00000080UL)

#define ADC_SSCTL_TS1_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_TS1_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_TS1_TEMP    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_D2_MASK    ((uint32_t) 0x00000100UL)
#define ADC_SSCTL_R_D2_BIT    ((uint32_t) 8UL)
#define ADC_SSCTL_R_D2_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_D2_DIFF    ((uint32_t) 0x00000100UL)

#define ADC_SSCTL_D2_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_D2_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_D2_DIFF    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_END2_MASK    ((uint32_t) 0x00000200UL)
#define ADC_SSCTL_R_END2_BIT    ((uint32_t) 9UL)
#define ADC_SSCTL_R_END2_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_END2_END    ((uint32_t) 0x00000200UL)

#define ADC_SSCTL_END2_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_END2_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_END2_END    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_IE2_MASK    ((uint32_t) 0x00000400UL)
#define ADC_SSCTL_R_IE2_BIT    ((uint32_t) 10UL)
#define ADC_SSCTL_R_IE2_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_IE2_ENA    ((uint32_t) 0x00000400UL)

#define ADC_SSCTL_IE2_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_IE2_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_IE2_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_TS2_MASK    ((uint32_t) 0x00000800UL)
#define ADC_SSCTL_R_TS2_BIT    ((uint32_t) 11UL)
#define ADC_SSCTL_R_TS2_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_TS2_TEMP    ((uint32_t) 0x00000800UL)

#define ADC_SSCTL_TS2_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_TS2_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_TS2_TEMP    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_D3_MASK    ((uint32_t) 0x00001000UL)
#define ADC_SSCTL_R_D3_BIT    ((uint32_t) 12UL)
#define ADC_SSCTL_R_D3_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_D3_DIFF    ((uint32_t) 0x00001000UL)

#define ADC_SSCTL_D3_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_D3_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_D3_DIFF    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_END3_MASK    ((uint32_t) 0x00002000UL)
#define ADC_SSCTL_R_END3_BIT    ((uint32_t) 13UL)
#define ADC_SSCTL_R_END3_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_END3_END    ((uint32_t) 0x00002000UL)

#define ADC_SSCTL_END3_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_END3_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_END3_END    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_IE3_MASK    ((uint32_t) 0x00004000UL)
#define ADC_SSCTL_R_IE3_BIT    ((uint32_t) 14UL)
#define ADC_SSCTL_R_IE3_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_IE3_ENA    ((uint32_t) 0x00004000UL)

#define ADC_SSCTL_IE3_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_IE3_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_IE3_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_TS3_MASK    ((uint32_t) 0x00008000UL)
#define ADC_SSCTL_R_TS3_BIT    ((uint32_t) 15UL)
#define ADC_SSCTL_R_TS3_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_TS3_TEMP    ((uint32_t) 0x00008000UL)

#define ADC_SSCTL_TS3_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_TS3_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_TS3_TEMP    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_D4_MASK    ((uint32_t) 0x00010000UL)
#define ADC_SSCTL_R_D4_BIT    ((uint32_t) 16UL)
#define ADC_SSCTL_R_D4_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_D4_DIFF    ((uint32_t) 0x00010000UL)

#define ADC_SSCTL_D4_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_D4_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_D4_DIFF    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_END4_MASK    ((uint32_t) 0x00020000UL)
#define ADC_SSCTL_R_END4_BIT    ((uint32_t) 17UL)
#define ADC_SSCTL_R_END4_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_END4_END    ((uint32_t) 0x00020000UL)

#define ADC_SSCTL_END4_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_END4_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_END4_END    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_IE4_MASK    ((uint32_t) 0x00040000UL)
#define ADC_SSCTL_R_IE4_BIT    ((uint32_t) 18UL)
#define ADC_SSCTL_R_IE4_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_IE4_ENA    ((uint32_t) 0x00040000UL)

#define ADC_SSCTL_IE4_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_IE4_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_IE4_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_TS4_MASK    ((uint32_t) 0x00080000UL)
#define ADC_SSCTL_R_TS4_BIT    ((uint32_t) 19UL)
#define ADC_SSCTL_R_TS4_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_TS4_TEMP    ((uint32_t) 0x00080000UL)

#define ADC_SSCTL_TS4_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_TS4_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_TS4_TEMP    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_D5_MASK    ((uint32_t) 0x00100000UL)
#define ADC_SSCTL_R_D5_BIT    ((uint32_t) 20UL)
#define ADC_SSCTL_R_D5_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_D5_DIFF    ((uint32_t) 0x00100000UL)

#define ADC_SSCTL_D5_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_D5_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_D5_DIFF    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_END5_MASK    ((uint32_t) 0x00200000UL)
#define ADC_SSCTL_R_END5_BIT    ((uint32_t) 21UL)
#define ADC_SSCTL_R_END5_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_END5_END    ((uint32_t) 0x00200000UL)

#define ADC_SSCTL_END5_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_END5_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_END5_END    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_IE5_MASK    ((uint32_t) 0x00400000UL)
#define ADC_SSCTL_R_IE5_BIT    ((uint32_t) 22UL)
#define ADC_SSCTL_R_IE5_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_IE5_ENA    ((uint32_t) 0x00400000UL)

#define ADC_SSCTL_IE5_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_IE5_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_IE5_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_TS5_MASK    ((uint32_t) 0x00800000UL)
#define ADC_SSCTL_R_TS5_BIT    ((uint32_t) 23UL)
#define ADC_SSCTL_R_TS5_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_TS5_TEMP    ((uint32_t) 0x00800000UL)

#define ADC_SSCTL_TS5_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_TS5_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_TS5_TEMP    ((uint32_t) 0x00000001UL)
/*--------*/


/*--------*/
#define ADC_SSCTL_R_D6_MASK    ((uint32_t) 0x01000000UL)
#define ADC_SSCTL_R_D6_BIT    ((uint32_t) 24UL)
#define ADC_SSCTL_R_D6_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_D6_DIFF    ((uint32_t) 0x01000000UL)

#define ADC_SSCTL_D6_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_D6_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_D6_DIFF    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_END6_MASK    ((uint32_t) 0x02000000UL)
#define ADC_SSCTL_R_END6_BIT    ((uint32_t) 25UL)
#define ADC_SSCTL_R_END6_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_END6_END    ((uint32_t) 0x02000000UL)

#define ADC_SSCTL_END6_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_END6_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_END6_END    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_IE6_MASK    ((uint32_t) 0x04000000UL)
#define ADC_SSCTL_R_IE6_BIT    ((uint32_t) 26UL)
#define ADC_SSCTL_R_IE6_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_IE6_ENA    ((uint32_t) 0x04000000UL)

#define ADC_SSCTL_IE6_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_IE6_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_IE6_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_TS6_MASK    ((uint32_t) 0x0800000UL)
#define ADC_SSCTL_R_TS6_BIT    ((uint32_t) 27UL)
#define ADC_SSCTL_R_TS6_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_TS6_TEMP    ((uint32_t) 0x08000000UL)

#define ADC_SSCTL_TS6_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_TS6_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_TS6_TEMP    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_D7_MASK    ((uint32_t) 0x10000000UL)
#define ADC_SSCTL_R_D7_BIT    ((uint32_t) 28UL)
#define ADC_SSCTL_R_D7_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_D7_DIFF    ((uint32_t) 0x10000000UL)

#define ADC_SSCTL_D7_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_D7_SINGLE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_D7_DIFF    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_END7_MASK    ((uint32_t) 0x20000000UL)
#define ADC_SSCTL_R_END7_BIT    ((uint32_t) 29UL)
#define ADC_SSCTL_R_END7_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_END7_END    ((uint32_t) 0x20000000UL)

#define ADC_SSCTL_END7_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_END7_CONTINUE    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_END7_END    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_IE7_MASK    ((uint32_t) 0x40000000UL)
#define ADC_SSCTL_R_IE7_BIT    ((uint32_t) 30UL)
#define ADC_SSCTL_R_IE7_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_IE7_ENA    ((uint32_t) 0x40000000UL)

#define ADC_SSCTL_IE7_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_IE7_DIS    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_IE7_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SSCTL_R_TS7_MASK    ((uint32_t) 0x8000000UL)
#define ADC_SSCTL_R_TS7_BIT    ((uint32_t) 31UL)
#define ADC_SSCTL_R_TS7_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_R_TS7_TEMP    ((uint32_t) 0x80000000UL)

#define ADC_SSCTL_TS7_MASK    ((uint32_t) 0x00000001UL)
#define ADC_SSCTL_TS7_INPUT    ((uint32_t) 0x00000000UL)
#define ADC_SSCTL_TS7_TEMP    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SSCTL_H_ */
