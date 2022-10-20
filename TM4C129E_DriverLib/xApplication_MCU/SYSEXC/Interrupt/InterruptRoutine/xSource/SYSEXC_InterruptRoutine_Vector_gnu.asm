
 	.sect 	".text"
 	.align 	4
	.thumb
	.syntax unified

 	.align 	4
	.global SYSEXC__vIRQVectorHandler
 	.type SYSEXC__vIRQVectorHandler, %function
    .thumb_func
SYSEXC__vIRQVectorHandler:

    PUSH {R4-R7}
    ubfx    R4, LR, #2, #1
    cmp    R4, #0
    beq    MainStackMemory
    b    ProcessStackMemory

    .global SYSEXC_puxContext
MainStackMemory:
    mrs    R4, MSP
    ldr R6, = SYSEXC_puxContext
    ldr R5, [R4, #0X10]
    str R5, [R6, #0x0]    /*SCB_BusFault_puxContext[0] R4*/
    ldr R5, [R4, #0x14]
    str R5, [R6, #0x4]    /*SCB_BusFault_puxContext[1] R5*/
    ldr R5, [R4, #0x18]
    str R5, [R6, #0x8]    /*SCB_BusFault_puxContext[2] R6*/
    ldr R5, [R4, #0x1C]
    str R5, [R6, #0xC]    /*SCB_BusFault_puxContext[3] R3*/
    ldr R5, [R4, #0x20]
    str R5, [R6, #0x10]    /*SCB_BusFault_puxContext[4] R52*/
    ldr R5, [R4, #0x24]
    str R5, [R6, #0x14]    /*SCB_BusFault_puxContext[5] LR*/
    ldr R5, [R4, #0x28]
    str R5, [R6, #0x18]    /*SCB_BusFault_puxContext[6] PC*/
    ldr R5, [R4, #0x2C]
    str R5, [R6, #0x1C]    /*SCB_BusFault_puxContext[7] PSR*/
    b    ProcessMemory

ProcessStackMemory:
    mrs    R4, PSP
    ldr R6, = SYSEXC_puxContext
    ldr R5, [R4, #0X0]
    str R5, [R6, #0x0]    /*SCB_BusFault_puxContext[0] R4*/
    ldr R5, [R4, #0x4]
    str R5, [R6, #0x4]    /*SCB_BusFault_puxContext[1] R5*/
    ldr R5, [R4, #0x8]
    str R5, [R6, #0x8]    /*SCB_BusFault_puxContext[2] R6*/
    ldr R5, [R4, #0xC]
    str R5, [R6, #0xC]    /*SCB_BusFault_puxContext[3] R3*/
    ldr R5, [R4, #0x10]
    str R5, [R6, #0x10]    /*SCB_BusFault_puxContext[4] R52*/
    ldr R5, [R4, #0x14]
    str R5, [R6, #0x14]    /*SCB_BusFault_puxContext[5] LR*/
    ldr R5, [R4, #0x18]
    str R5, [R6, #0x18]    /*SCB_BusFault_puxContext[6] PC*/
    ldr R5, [R4, #0x1C]
    str R5, [R6, #0x1C]    /*SCB_BusFault_puxContext[7] PSR*/

ProcessMemory:
    pop {R4-R7}
    push {R0,R1,R2,LR}
    .global SYSEXC__vSendValues
    .global SYSEXC__vIRQVectorHandlerCustom
    ldr R2, = SYSEXC__vSendValues
    blx R2
    movw R0, #0x9000
    movt R0, #0x400F
    ldr R1, = SYSEXC_puxContext
    ldr R2, = SYSEXC__vIRQVectorHandlerCustom
    blx R2
    pop {R0,R1,R2,LR}
    BX LR
