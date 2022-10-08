/**
 *
 * @file SCB_StructRegister.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_STRUCT_SCB_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_STRUCT_SCB_STRUCTREGISTER_H_

#include <xDriver_MCU/Core/SCB/Peripheral/xHeader/SCB_Enum.h>

typedef volatile struct
{
    volatile const UBase_t INTLINESNUM :5;
    const    UBase_t reserved :27;
}ICTLR_t;

typedef volatile struct
{
    volatile UBase_t DISMCYCINT :1;
    volatile UBase_t DISDEFWBUF :1;
    volatile UBase_t DISFOLD :1;
    const    UBase_t reserved :5;
    volatile UBase_t DISFPCA :1;
    volatile UBase_t DISOOFP :1;
    const    UBase_t reserved1 :22;
}ACTLR_t;

typedef volatile struct
{
    volatile const UBase_t REVISION :4;
    volatile const UBase_t PARTNO :12;
    volatile const UBase_t CON :4;
    volatile const UBase_t VARIANT :4;
    volatile const UBase_t IMPLEMENTER:8;
}CPUID_t;

typedef volatile struct
{
    volatile const UBase_t VECTACTIVE :8;
    const    UBase_t       reserved :3;
    volatile const UBase_t RETTOBASE :1;
    volatile const UBase_t VECTPENDING :8;
    const    UBase_t       reserved1 :2;
    volatile const UBase_t ISRPENDING :1;
    volatile const UBase_t ISRPREEMPT :1;
    const    UBase_t       reserved2 :1;
    volatile UBase_t       PENDSTCLR :1;
    volatile UBase_t       PENDSTSET :1;
    volatile UBase_t       PENDSVCLR :1;
    volatile UBase_t       PENDSVSET :1;
    const    UBase_t       reserved3 :2;
    volatile UBase_t       NMIPENDSET :1;
}ICSR_t   ;

typedef volatile struct
{
    const    UBase_t reserved :10;
    volatile UBase_t TBLOFF :22;
}VTOR_t;

typedef volatile struct
{
    volatile UBase_t      VECTRESET :1;
    volatile UBase_t      VECTCLRACTIVE :1;
    volatile UBase_t      SYSRESETREQ :1;
    const    UBase_t      reserved :5;
    volatile UBase_t      PRIGROUP :3;
    const    UBase_t      reserved1 :4;
    volatile const UBase_t ENDIANESS :1;
    volatile UBase_t      VECTKEY :16;
}AIRCR_t;

typedef volatile struct
{
    const    UBase_t reserved :1;
    volatile UBase_t SLEEPONEXIT :1;
    volatile UBase_t SLEEPDEEP :1;
    const    UBase_t reserved1 :1;
    volatile UBase_t SEVONPEND :1;
    const    UBase_t reserved2 :27;
}SCR_t;

typedef volatile struct
{
    volatile UBase_t NONBASETHREDENA :1;
    volatile UBase_t USERSETMPEND :1;
    const    UBase_t reserved :1;
    volatile UBase_t UNALIGN_TRP :1;
    volatile UBase_t DIV_0_TRP :1;
    const    UBase_t reserved1 :3;
    volatile UBase_t BFHFNMIGN :1;
    volatile UBase_t STKALIGN :1;
    const    UBase_t reserved2 :22;
}CCR_t;

typedef volatile struct
{
    const    UBase_t reserved :5;
    volatile UBase_t MEM :3;
    const    UBase_t reserved1 :5;
    volatile UBase_t BUS :3;
    const    UBase_t reserved2 :5;
    volatile UBase_t USAGE :3;
    const    UBase_t reserved3 :8;
}SHPR1_t;

typedef volatile struct
{
    const    UBase_t reserved :29 ;
    volatile UBase_t SVCALL :3;
}SHPR2_t;

typedef volatile struct
{
    const    UBase_t reserved :5;
    volatile UBase_t DEBUG :3;
    const    UBase_t reserved1 :13;
    volatile UBase_t PENDSV :3;
    const    UBase_t reserved2 :5;
    volatile UBase_t SYSTICK :3;
}SHPR3_t;

typedef volatile struct
{
    volatile UBase_t MEMFAULTACT :1;
    volatile UBase_t BUSFAULTACT :1;
    const    UBase_t reserved :1;
    volatile UBase_t USGFAULTACT :1;
    const    UBase_t reserved1 :3;
    volatile UBase_t SVCALLACT :1;
    volatile UBase_t MONITORACT :1;
    const    UBase_t reserved2 :1;
    volatile UBase_t PENDSVACT :1;
    volatile UBase_t SYSTICKACT :1;
    volatile UBase_t USGFAULTPENDED:1;
    volatile UBase_t MEMFAULTPENDED :1;
    volatile UBase_t BUSFAULTPENDED :1;
    volatile UBase_t SVCALLPENDED:1;
    volatile UBase_t MEMFAULTENA:1;
    volatile UBase_t BUSFAULTENA:1;
    volatile UBase_t USGFAULTENA:1;
    const    UBase_t reserved3 :13;
}SHCSR_t;

typedef volatile struct
{
    volatile UBase_t IACCVIOL :1;
    volatile UBase_t DACCVIOL :1;
    const    UBase_t reserved :1;
    volatile UBase_t MUNSTKERR :1;
    volatile UBase_t MSTKERR :1;
    volatile UBase_t MLSPERR :1;
    const    UBase_t reserved1 :1;
    volatile UBase_t MMARVALID :1;
    volatile UBase_t IBUSERR :1;
    volatile UBase_t PRECISERR :1;
    volatile UBase_t IMPRECISERR:1;
    volatile UBase_t UNSTKERR :1;
    volatile UBase_t STKERR :1;
    volatile UBase_t LSPERR :1;
    const    UBase_t reserved2 :1;
    volatile UBase_t BFARVALID :1;
    volatile UBase_t UNDEFINSTR :1;
    volatile UBase_t INVSTATE :1;
    volatile UBase_t INVPC :1;
    volatile UBase_t NOCP :1;
    const    UBase_t reserved3 :4;
    volatile UBase_t UNALIGNED :1;
    volatile UBase_t DIVBYZERO :1;
    const    UBase_t reserved4 :6;
}CFSR_t;

typedef volatile struct
{
  volatile UBase_t   IACCVIOL :1;
  volatile UBase_t   DACCVIOL :1;
  const    UBase_t   reserved :1;
  volatile UBase_t   MUNSTKERR :1;
  volatile UBase_t   MSTKERR :1;
  volatile UBase_t   MLSPERR :1;
  const    UBase_t   reserved1 :1;
  volatile UBase_t  MMARVALID :1;
  const    UBase_t   reserved2 : 24;
}MCFSR_t;

typedef volatile struct
{
    const    UBase_t   reserved :8;
    volatile UBase_t IBUSERR :1;
    volatile UBase_t PRECISERR :1;
    volatile UBase_t IMPRECISERR:1;
    volatile UBase_t UNSTKERR :1;
    volatile UBase_t STKERR :1;
    volatile UBase_t LSPERR :1;
    const    UBase_t reserved1 :1;
    volatile UBase_t BFARVALID :1;
    const    UBase_t   reserved2 :16;
}BCFSR_t;

typedef volatile struct
{
    const    UBase_t reserved :16;
    volatile UBase_t UNDEFINSTR :1;
    volatile UBase_t INVSTATE :1;
    volatile UBase_t INVPC :1;
    volatile UBase_t NOCP :1;
    const    UBase_t reserved1 :4;
    volatile UBase_t UNALIGNED :1;
    volatile UBase_t DIVBYZERO :1;
    const    UBase_t reserved2 :6;
}UCFSR_t;

typedef volatile struct
{
    const    UBase_t reserved :1;
    volatile UBase_t VECTTBL :1;
    const    UBase_t reserved1 :28;
    volatile UBase_t FORCED :1;
    volatile UBase_t DEBUGEVT :1;
}HFSR_t;

typedef volatile struct
{
    volatile UBase_t HALTED :1;
    volatile UBase_t BKPT :1;
    volatile UBase_t DWTTRAP :1;
    volatile UBase_t VCATCH :1;
    volatile UBase_t EXTERNAL :1;
    const    UBase_t reserved :27;
}DFSR_t;

typedef volatile struct
{
    volatile UBase_t ADDRESS :32;
}MMFAR_t;

typedef volatile struct
{
    volatile UBase_t ADDRESS :32;
}BFAR_t;

typedef volatile struct
{
    volatile UBase_t IMPDEF :32;
}AFSR_t;

typedef volatile struct
{
    volatile const UBase_t STATE0 :4;
    volatile const UBase_t STATE1 :4;
    const    UBase_t reserved :24;
}PFR0_t;

typedef volatile struct
{
    const    UBase_t reserved :8;
    volatile const UBase_t MICROCONTROLLER_PROGRAMMERS_MODEL :4;
    const    UBase_t reserved1 :20;
}PFR1_t;

typedef volatile struct
{
    const    UBase_t reserved :20;
    volatile const UBase_t MICROCONTROLLER_DEBUG_MODEL :4;
    const    UBase_t reserved1 :8;
}DFR0_t;

typedef volatile struct
{
    const    UBase_t reserved :32;
}AFR0_t;

typedef volatile struct
{
    const    UBase_t reserved :4;
    volatile const UBase_t PMSA_SUPPORT :4;
    volatile const UBase_t CACHE_COHERENCE_SUPPORT :4;
    volatile const UBase_t OUTER_NON_SHARABLE_SUPPORT :4;
    const    UBase_t reserved1 :4;
    volatile const UBase_t AUILIARY_REGISTER_SUPPORT :4;
    const    UBase_t reserved2 :8;
}MMFR0_t;

typedef volatile struct
{
    const    UBase_t reserved :32;
}MMFR1_t;

typedef volatile struct
{
    const    UBase_t reserved :24;
    volatile const UBase_t WAIT_FOR_INTERRUPT_STALLING :4;
    const    UBase_t reserved1 :4;
}MMFR2_t;

typedef volatile struct
{
    const    UBase_t reserved :32;
}MMFR3_t;

typedef volatile struct
{
    const    UBase_t reserved :4;
    volatile const UBase_t BITCOUNT_INSTRS :4;
    volatile const UBase_t BITFIELD_INSTRS :4;
    volatile const UBase_t CMPBRANCH_INSTRS:4;
    volatile const UBase_t COPROC_INSTRS :4;
    volatile const UBase_t DEBUG_INSTRS :4;
    volatile const UBase_t DIVIDE_INSTRS :4;
    const    UBase_t reserved1 :4;
}ISAR0_t;

typedef volatile struct
{
    const    UBase_t reserved :12;
    volatile const UBase_t ETEND_INSRS :4;
    volatile const UBase_t IFTHEN_INSTRS :4;
    volatile const UBase_t IMMEDIATE_INSTRS:4;
    volatile const UBase_t INTERWORK_INSTRS :4;
    const    UBase_t reserved1 :4;
}ISAR1_t;

typedef volatile struct
{
    volatile const UBase_t LOADSTORE_INSTRS :4;
    volatile const UBase_t MEMHINT_INSTRS :4;
    volatile const UBase_t MULTIACCESSINT_INSTRS:4;
    volatile const UBase_t MULT_INSTRS :4;
    volatile const UBase_t MULTS_INSTRS :4;
    volatile const UBase_t MULTU_INSTRS :4;
    const    UBase_t reserved :4;
    volatile const UBase_t REVERSAL_INSTRS :4;
}ISAR2_t;

typedef volatile struct
{
    volatile const UBase_t SATRUATE_INSTRS :4;
    volatile const UBase_t SIMD_INSTRS :4;
    volatile const UBase_t SVC_INSTRS:4;
    volatile const UBase_t SYNCPRIM_INSTRS :4;
    volatile const UBase_t TABBRANCH_INSTRS :4;
    volatile const UBase_t THUMBCOPY_INSTRS :4;
    volatile const UBase_t TRUENOP_INSTRS :4;
    const    UBase_t reserved :4;
}ISAR3_t;

typedef volatile struct
{
    volatile const UBase_t UNPRIV_INSTRS :4;
    volatile const UBase_t WITHSHIFTS_INSTRS :4;
    volatile const UBase_t WRITEBACK_INSTRS:4;
    const    UBase_t reserved :4;
    volatile const UBase_t BARRIER_INSTRS :4;
    volatile const UBase_t SYNCPRIM_INSTRS_FRAC :4;
    volatile const UBase_t PSR_M_INSTRS :4;
    const    UBase_t reserved1 :4;
}ISAR4_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_STRUCT_SCB_STRUCTREGISTER_H_ */
