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

#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Enum.h>

/**
 *  Global Struct Definitions for QEI
 */

typedef volatile struct
{
    volatile UBase_t ENABLE;
    volatile UBase_t SWAP;
    volatile UBase_t SIGMODE;
    volatile UBase_t CAPMODE;
    volatile UBase_t RESMODE;
    volatile UBase_t VELEN;
    volatile UBase_t VELDIV [3UL];
    volatile UBase_t INVA;
    volatile UBase_t INVB;
    volatile UBase_t INVI;
    volatile UBase_t STALLEN;
    volatile UBase_t FILTEN;
    const UBase_t reserved [2UL];
    volatile UBase_t FILTCNT [4UL];
    const UBase_t reserved2 [12UL];
}QEI_BITBANDING_CTL_t;

typedef volatile struct
{
    volatile const UBase_t ERROR;
    volatile const UBase_t DIRECTION;
    const UBase_t reserved [30UL];
}QEI_BITBANDING_STAT_t;

typedef volatile struct
{
    volatile UBase_t POSITION [32UL];
}QEI_BITBANDING_POS_t;

typedef volatile struct
{
    volatile UBase_t MAXPOS [32UL];
}QEI_BITBANDING_MAXPOS_t;

typedef volatile struct
{
    volatile UBase_t LOAD [32UL];
}QEI_BITBANDING_LOAD_t;

typedef volatile struct
{
    volatile const UBase_t TIME [32UL];
}QEI_BITBANDING_TIME_t;

typedef volatile struct
{
    volatile const UBase_t COUNT [32UL];
}QEI_BITBANDING_COUNT_t;

typedef volatile struct
{
    volatile const UBase_t SPEED [32UL];
}QEI_BITBANDING_SPEED_t;

typedef volatile struct
{
    volatile UBase_t INTINDEX;
    volatile UBase_t INTTIMER;
    volatile UBase_t INTDIR;
    volatile UBase_t INTERROR;
    const UBase_t reserved [28UL];
}QEI_BITBANDING_INTEN_t;

typedef volatile struct
{
    volatile const UBase_t INTINDEX;
    volatile const UBase_t INTTIMER;
    volatile const UBase_t INTDIR;
    volatile const UBase_t INTERROR;
    const UBase_t reserved [28UL];
}QEI_BITBANDING_RIS_t;

typedef volatile struct
{
    volatile UBase_t INTINDEX;
    volatile UBase_t INTTIMER;
    volatile UBase_t INTDIR;
    volatile UBase_t INTERROR;
    const UBase_t reserved [28UL];
}QEI_BITBANDING_ISC_t;

#endif /* XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTREGISTER_BITBANDING_H_ */
