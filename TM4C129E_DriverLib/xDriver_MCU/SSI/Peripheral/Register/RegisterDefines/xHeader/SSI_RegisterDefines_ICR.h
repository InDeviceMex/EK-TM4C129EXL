/**
 *
 * @file SSI_RegisterDefines_ICR.h
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_ICR_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_ICR_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/

/*--------*/
#define SSI_ICR_R_RORIC_MASK    ((UBase_t) 0x00000001UL)
#define SSI_ICR_R_RORIC_BIT    ((UBase_t) 0UL)
#define SSI_ICR_R_RORIC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define SSI_ICR_R_RORIC_CLEAR    ((UBase_t) 0x00000001UL)

#define SSI_ICR_RORIC_MASK    ((UBase_t) 0x00000001UL)
#define SSI_ICR_RORIC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define SSI_ICR_RORIC_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_ICR_R_RTIC_MASK    ((UBase_t) 0x00000002UL)
#define SSI_ICR_R_RTIC_BIT    ((UBase_t) 1UL)
#define SSI_ICR_R_RTIC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define SSI_ICR_R_RTIC_CLEAR    ((UBase_t) 0x00000002UL)

#define SSI_ICR_RTIC_MASK    ((UBase_t) 0x00000001UL)
#define SSI_ICR_RTIC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define SSI_ICR_RTIC_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_ICR_R_DMARXIC_MASK    ((UBase_t) 0x00000010UL)
#define SSI_ICR_R_DMARXIC_BIT    ((UBase_t) 4UL)
#define SSI_ICR_R_DMARXIC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define SSI_ICR_R_DMARXIC_CLEAR    ((UBase_t) 0x00000010UL)

#define SSI_IC_DMARXIC_MASK    ((UBase_t) 0x00000001UL)
#define SSI_IC_DMARXIC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define SSI_IC_DMARXIC_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_ICR_R_DMATXIC_MASK    ((UBase_t) 0x00000020UL)
#define SSI_ICR_R_DMATXIC_BIT    ((UBase_t) 5UL)
#define SSI_ICR_R_DMATXIC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define SSI_ICR_R_DMATXIC_CLEAR    ((UBase_t) 0x00000020UL)

#define SSI_IC_DMATXIC_MASK    ((UBase_t) 0x00000001UL)
#define SSI_IC_DMATXIC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define SSI_IC_DMATXIC_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_ICR_R_EOTIC_MASK    ((UBase_t) 0x00000040UL)
#define SSI_ICR_R_EOTIC_BIT    ((UBase_t) 6UL)
#define SSI_ICR_R_EOTIC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define SSI_ICR_R_EOTIC_CLEAR    ((UBase_t) 0x00000040UL)

#define SSI_IC_EOTIC_MASK    ((UBase_t) 0x00000001UL)
#define SSI_IC_EOTIC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define SSI_IC_EOTIC_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_ICR_H_ */
