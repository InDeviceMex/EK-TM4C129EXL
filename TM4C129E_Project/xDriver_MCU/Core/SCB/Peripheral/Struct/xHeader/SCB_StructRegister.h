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

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
    volatile const uint32_t INTLINESNUM :5;
    const    uint32_t reserved :27;
}ICTLR_TypeDef;

typedef volatile struct
{
    volatile uint32_t DISMCYCINT :1;
    volatile uint32_t DISDEFWBUF :1;
    volatile uint32_t DISFOLD :1;
    const    uint32_t reserved :5;
    volatile uint32_t DISFPCA :1;
    volatile uint32_t DISOOFP :1;
    const    uint32_t reserved1 :22;
}ACTLR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t REVISION :4;
    volatile const uint32_t PARTNO :12;
    volatile const uint32_t CON :4;
    volatile const uint32_t VARIANT :4;
    volatile const uint32_t IMPLEMENTER:8;
}CPUID_TypeDef;

typedef volatile struct
{
    volatile const uint32_t VECTACTIVE :8;
    const    uint32_t       reserved :3;
    volatile const uint32_t RETTOBASE :1;
    volatile const uint32_t VECTPENDING :8;
    const    uint32_t       reserved1 :2;
    volatile const uint32_t ISRPENDING :1;
    volatile const uint32_t ISRPREEMPT :1;
    const    uint32_t       reserved2 :1;
    volatile uint32_t       PENDSTCLR :1;
    volatile uint32_t       PENDSTSET :1;
    volatile uint32_t       PENDSVCLR :1;
    volatile uint32_t       PENDSVSET :1;
    const    uint32_t       reserved3 :2;
    volatile uint32_t       NMIPENDSET :1;
}ICSR_TypeDef   ;

typedef volatile struct
{
    const    uint32_t reserved :10;
    volatile uint32_t TBLOFF :22;
}VTOR_TypeDef;

typedef volatile struct
{
    volatile uint32_t      VECTRESET :1;
    volatile uint32_t      VECTCLRACTIVE :1;
    volatile uint32_t      SYSRESETREQ :1;
    const    uint32_t      reserved :5;
    volatile uint32_t      PRIGROUP :3;
    const    uint32_t      reserved1 :4;
    volatile const uint32_t ENDIANESS :1;
    volatile uint32_t      VECTKEY :16;
}AIRCR_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved :1;
    volatile uint32_t SLEEPONEXIT :1;
    volatile uint32_t SLEEPDEEP :1;
    const    uint32_t reserved1 :1;
    volatile uint32_t SEVONPEND :1;
    const    uint32_t reserved2 :27;
}SCR_TypeDef;

typedef volatile struct
{
    volatile uint32_t NONBASETHREDENA :1;
    volatile uint32_t USERSETMPEND :1;
    const    uint32_t reserved :1;
    volatile uint32_t UNALIGN_TRP :1;
    volatile uint32_t DIV_0_TRP :1;
    const    uint32_t reserved1 :3;
    volatile uint32_t BFHFNMIGN :1;
    volatile uint32_t STKALIGN :1;
    const    uint32_t reserved2 :22;
}CCR_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved :5;
    volatile uint32_t MEM :3;
    const    uint32_t reserved1 :5;
    volatile uint32_t BUS :3;
    const    uint32_t reserved2 :5;
    volatile uint32_t USAGE :3;
    const    uint32_t reserved3 :8;
}SHPR1_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved :29 ;
    volatile uint32_t SVCALL :3;
}SHPR2_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved :5;
    volatile uint32_t DEBUG :3;
    const    uint32_t reserved1 :13;
    volatile uint32_t PENDSV :3;
    const    uint32_t reserved2 :5;
    volatile uint32_t SYSTICK :3;
}SHPR3_TypeDef;

typedef volatile struct
{
    volatile uint32_t MEMFAULTACT :1;
    volatile uint32_t BUSFAULTACT :1;
    const    uint32_t reserved :1;
    volatile uint32_t USGFAULTACT :1;
    const    uint32_t reserved1 :3;
    volatile uint32_t SVCALLACT :1;
    volatile uint32_t MONITORACT :1;
    const    uint32_t reserved2 :1;
    volatile uint32_t PENDSVACT :1;
    volatile uint32_t SYSTICKACT :1;
    volatile uint32_t USGFAULTPENDED:1;
    volatile uint32_t MEMFAULTPENDED :1;
    volatile uint32_t BUSFAULTPENDED :1;
    volatile uint32_t SVCALLPENDED:1;
    volatile uint32_t MEMFAULTENA:1;
    volatile uint32_t BUSFAULTENA:1;
    volatile uint32_t USGFAULTENA:1;
    const    uint32_t reserved3 :13;
}SHCSR_TypeDef;

typedef volatile struct
{
    volatile uint32_t IACCVIOL :1;
    volatile uint32_t DACCVIOL :1;
    const    uint32_t reserved :1;
    volatile uint32_t MUNSTKERR :1;
    volatile uint32_t MSTKERR :1;
    volatile uint32_t MLSPERR :1;
    const    uint32_t reserved1 :1;
    volatile uint32_t MMARVALID :1;
    volatile uint32_t IBUSERR :1;
    volatile uint32_t PRECISERR :1;
    volatile uint32_t IMPRECISERR:1;
    volatile uint32_t UNSTKERR :1;
    volatile uint32_t STKERR :1;
    volatile uint32_t LSPERR :1;
    const    uint32_t reserved2 :1;
    volatile uint32_t BFARVALID :1;
    volatile uint32_t UNDEFINSTR :1;
    volatile uint32_t INVSTATE :1;
    volatile uint32_t INVPC :1;
    volatile uint32_t NOCP :1;
    const    uint32_t reserved3 :4;
    volatile uint32_t UNALIGNED :1;
    volatile uint32_t DIVBYZERO :1;
    const    uint32_t reserved4 :6;
}CFSR_TypeDef;

typedef volatile struct
{
  volatile uint32_t   IACCVIOL :1;
  volatile uint32_t   DACCVIOL :1;
  const    uint32_t   reserved :1;
  volatile uint32_t   MUNSTKERR :1;
  volatile uint32_t   MSTKERR :1;
  volatile uint32_t   MLSPERR :1;
  const    uint32_t   reserved1 :1;
  volatile uint32_t  MMARVALID :1;
  const    uint32_t   reserved2 : 24;
}MCFSR_TypeDef;

typedef volatile struct
{
    const    uint32_t   reserved :8;
    volatile uint32_t IBUSERR :1;
    volatile uint32_t PRECISERR :1;
    volatile uint32_t IMPRECISERR:1;
    volatile uint32_t UNSTKERR :1;
    volatile uint32_t STKERR :1;
    volatile uint32_t LSPERR :1;
    const    uint32_t reserved1 :1;
    volatile uint32_t BFARVALID :1;
    const    uint32_t   reserved2 :16;
}BCFSR_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved :16;
    volatile uint32_t UNDEFINSTR :1;
    volatile uint32_t INVSTATE :1;
    volatile uint32_t INVPC :1;
    volatile uint32_t NOCP :1;
    const    uint32_t reserved1 :4;
    volatile uint32_t UNALIGNED :1;
    volatile uint32_t DIVBYZERO :1;
    const    uint32_t reserved2 :6;
}UCFSR_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved :1;
    volatile uint32_t VECTTBL :1;
    const    uint32_t reserved1 :28;
    volatile uint32_t FORCED :1;
    volatile uint32_t DEBUGEVT :1;
}HFSR_TypeDef;

typedef volatile struct
{
    volatile uint32_t HALTED :1;
    volatile uint32_t BKPT :1;
    volatile uint32_t DWTTRAP :1;
    volatile uint32_t VCATCH :1;
    volatile uint32_t EXTERNAL :1;
    const    uint32_t reserved :27;
}DFSR_TypeDef;

typedef volatile struct
{
    volatile uint32_t ADDRESS :32;
}MMFAR_TypeDef;

typedef volatile struct
{
    volatile uint32_t ADDRESS :32;
}BFAR_TypeDef;

typedef volatile struct
{
    volatile uint32_t IMPDEF :32;
}AFSR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t STATE0 :4;
    volatile const uint32_t STATE1 :4;
    const    uint32_t reserved :24;
}PFR0_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved :8;
    volatile const uint32_t MICROCONTROLLER_PROGRAMMERS_MODEL :4;
    const    uint32_t reserved1 :20;
}PFR1_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved :20;
    volatile const uint32_t MICROCONTROLLER_DEBUG_MODEL :4;
    const    uint32_t reserved1 :8;
}DFR0_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved :32;
}AFR0_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved :4;
    volatile const uint32_t PMSA_SUPPORT :4;
    volatile const uint32_t CACHE_COHERENCE_SUPPORT :4;
    volatile const uint32_t OUTER_NON_SHARABLE_SUPPORT :4;
    const    uint32_t reserved1 :4;
    volatile const uint32_t AUILIARY_REGISTER_SUPPORT :4;
    const    uint32_t reserved2 :8;
}MMFR0_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved :32;
}MMFR1_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved :24;
    volatile const uint32_t WAIT_FOR_INTERRUPT_STALLING :4;
    const    uint32_t reserved1 :4;
}MMFR2_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved :32;
}MMFR3_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved :4;
    volatile const uint32_t BITCOUNT_INSTRS :4;
    volatile const uint32_t BITFIELD_INSTRS :4;
    volatile const uint32_t CMPBRANCH_INSTRS:4;
    volatile const uint32_t COPROC_INSTRS :4;
    volatile const uint32_t DEBUG_INSTRS :4;
    volatile const uint32_t DIVIDE_INSTRS :4;
    const    uint32_t reserved1 :4;
}ISAR0_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved :12;
    volatile const uint32_t ETEND_INSRS :4;
    volatile const uint32_t IFTHEN_INSTRS :4;
    volatile const uint32_t IMMEDIATE_INSTRS:4;
    volatile const uint32_t INTERWORK_INSTRS :4;
    const    uint32_t reserved1 :4;
}ISAR1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t LOADSTORE_INSTRS :4;
    volatile const uint32_t MEMHINT_INSTRS :4;
    volatile const uint32_t MULTIACCESSINT_INSTRS:4;
    volatile const uint32_t MULT_INSTRS :4;
    volatile const uint32_t MULTS_INSTRS :4;
    volatile const uint32_t MULTU_INSTRS :4;
    const    uint32_t reserved :4;
    volatile const uint32_t REVERSAL_INSTRS :4;
}ISAR2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t SATRUATE_INSTRS :4;
    volatile const uint32_t SIMD_INSTRS :4;
    volatile const uint32_t SVC_INSTRS:4;
    volatile const uint32_t SYNCPRIM_INSTRS :4;
    volatile const uint32_t TABBRANCH_INSTRS :4;
    volatile const uint32_t THUMBCOPY_INSTRS :4;
    volatile const uint32_t TRUENOP_INSTRS :4;
    const    uint32_t reserved :4;
}ISAR3_TypeDef;

typedef volatile struct
{
    volatile const uint32_t UNPRIV_INSTRS :4;
    volatile const uint32_t WITHSHIFTS_INSTRS :4;
    volatile const uint32_t WRITEBACK_INSTRS:4;
    const    uint32_t reserved :4;
    volatile const uint32_t BARRIER_INSTRS :4;
    volatile const uint32_t SYNCPRIM_INSTRS_FRAC :4;
    volatile const uint32_t PSR_M_INSTRS :4;
    const    uint32_t reserved1 :4;
}ISAR4_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_STRUCT_SCB_STRUCTREGISTER_H_ */
