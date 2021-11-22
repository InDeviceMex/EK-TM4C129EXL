/**
 *
 * @file QEI_StructRegister_Bitbanding.h
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
 * @verbatim Apr 5, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 5, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTREGISTER_BITBANDING_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/**
 *  Global Struct Definitions for QEI
 */

typedef volatile struct
{
    volatile uint32_t ENABLE;
    volatile uint32_t SWAP;
    volatile uint32_t SIGMODE;
    volatile uint32_t CAPMODE;
    volatile uint32_t RESMODE;
    volatile uint32_t VELEN;
    volatile uint32_t VELDIV [3UL];
    volatile uint32_t INVA;
    volatile uint32_t INVB;
    volatile uint32_t INVI;
    volatile uint32_t STALLEN;
    volatile uint32_t FILTEN;
    const uint32_t reserved [2UL];
    volatile uint32_t FILTCNT [4UL];
    const uint32_t reserved2 [12UL];
}BITBANDING_QEICTL_t;

typedef volatile struct
{
    volatile const uint32_t ERROR;
    volatile const uint32_t DIRECTION;
    const uint32_t reserved [30UL];
}BITBANDING_QEISTAT_t;

typedef volatile struct
{
    volatile uint32_t POSITION [32UL];
}BITBANDING_QEIPOS_t;

typedef volatile struct
{
    volatile uint32_t MAXPOS [32UL];
}BITBANDING_QEIMAXPOS_t;

typedef volatile struct
{
    volatile uint32_t LOAD [32UL];
}BITBANDING_QEILOAD_t;

typedef volatile struct
{
    volatile const uint32_t TIME [32UL];
}BITBANDING_QEITIME_t;

typedef volatile struct
{
    volatile const uint32_t COUNT [32UL];
}BITBANDING_QEICOUNT_t;

typedef volatile struct
{
    volatile const uint32_t SPEED [32UL];
}BITBANDING_QEISPEED_t;

typedef volatile struct
{
    volatile uint32_t INTINDEX;
    volatile uint32_t INTTIMER;
    volatile uint32_t INTDIR;
    volatile uint32_t INTERROR;
    const uint32_t reserved [28UL];
}BITBANDING_QEIINTEN_t;

typedef volatile struct
{
    volatile const uint32_t INTINDEX;
    volatile const uint32_t INTTIMER;
    volatile const uint32_t INTDIR;
    volatile const uint32_t INTERROR;
    const uint32_t reserved [28UL];
}BITBANDING_QEIRIS_t;

typedef volatile struct
{
    volatile uint32_t INTINDEX;
    volatile uint32_t INTTIMER;
    volatile uint32_t INTDIR;
    volatile uint32_t INTERROR;
    const uint32_t reserved [28UL];
}BITBANDING_QEIISC_t;

#endif /* XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTREGISTER_BITBANDING_H_ */
