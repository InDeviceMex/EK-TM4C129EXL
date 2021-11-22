/**
 *
 * @file QEI_StructRegister.h
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

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTREGISTER_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTREGISTER_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/**
 *  Global Struct Definitions for QEI
 */

typedef volatile struct
{
    volatile uint32_t ENABLE: 1;
    volatile uint32_t SWAP: 1;
    volatile uint32_t SIGMODE: 1;
    volatile uint32_t CAPMODE: 1;
    volatile uint32_t RESMODE: 1;
    volatile uint32_t VELEN: 1;
    volatile uint32_t VELDIV: 3;
    volatile uint32_t INVA: 1;
    volatile uint32_t INVB: 1;
    volatile uint32_t INVI: 1;
    volatile uint32_t STALLEN: 1;
    volatile uint32_t FILTEN: 1;
    const uint32_t reserved: 2;
    volatile uint32_t FILTCNT: 4;
    const uint32_t reserved2: 12;
}QEICTL_t;

typedef volatile struct
{
    volatile const uint32_t ERROR: 1;
    volatile const uint32_t DIRECTION: 1;
    const uint32_t reserved: 30;
}QEISTAT_t;

typedef volatile struct
{
    volatile uint32_t POSITION: 32;
}QEIPOS_t;

typedef volatile struct
{
    volatile uint32_t MAXPOS: 32;
}QEIMAXPOS_t;

typedef volatile struct
{
    volatile uint32_t LOAD: 32;
}QEILOAD_t;

typedef volatile struct
{
    volatile const uint32_t TIME: 32;
}QEITIME_t;

typedef volatile struct
{
    volatile const uint32_t COUNT: 32;
}QEICOUNT_t;

typedef volatile struct
{
    volatile const uint32_t SPEED: 32;
}QEISPEED_t;

typedef volatile struct
{
    volatile uint32_t INTINDEX: 1;
    volatile uint32_t INTTIMER: 1;
    volatile uint32_t INTDIR: 1;
    volatile uint32_t INTERROR: 1;
    const uint32_t reserved: 28;
}QEIINTEN_t;

typedef volatile struct
{
    volatile const uint32_t INTINDEX: 1;
    volatile const uint32_t INTTIMER: 1;
    volatile const uint32_t INTDIR: 1;
    volatile const uint32_t INTERROR: 1;
    const uint32_t reserved: 28;
}QEIRIS_t;

typedef volatile struct
{
    volatile uint32_t INTINDEX: 1;
    volatile uint32_t INTTIMER: 1;
    volatile uint32_t INTDIR: 1;
    volatile uint32_t INTERROR: 1;
    const uint32_t reserved: 28;
}QEIISC_t;

#endif /* XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTREGISTER_H_ */
