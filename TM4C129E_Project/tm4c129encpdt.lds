/******************************************************************************
 *
 * Default Linker script for the Texas Instruments TM4C129ENCPDT
 *
 * This is derived from revision 15071 of the TivaWare Library.
 *
 *****************************************************************************/

MEMORY
{

    FLASH_VTABLE (RX)   : ORIGIN = 0x00000000, LENGTH = 0x00000400
    FLASH_BANK01 (RX) : ORIGIN = 0x00000400, LENGTH = 0x0007FC00
    FLASH_BANK23 (RX) : ORIGIN = 0x00080000, LENGTH = 0x00080000
    SRAM_VTABLE (RWX) : ORIGIN = 0x20000000, LENGTH = 0x00000400 /*1K*/
    SRAM_DMA (RW) : ORIGIN = 0x20000400, LENGTH = 0x00000200
    SRAM_DMAALT (RW) : ORIGIN = 0x20000600, LENGTH = 0x00000200
    SRAM_CODE (RWX) : ORIGIN = 0x20000800, LENGTH = 0x00001000 /*5K*/
    SRAM (RW) : ORIGIN = 0x20001800, LENGTH = 0x00000C00
    SRAM_DYNAMIC (RW) : ORIGIN = 0x20002400, LENGTH = 0x0003D800 /*32K*/
    SRAM_MAIN_STACK (RW) : ORIGIN = 0x2003FC00, LENGTH = 0x00000400 /*1.5K*/
}

ENTRY(ResetISR);

SECTIONS {

    PROVIDE (_intvecs_base_address = 0x0);

    .intvecs (_intvecs_base_address) : AT (_intvecs_base_address) {
        KEEP (*(.intvecs))
    } > FLASH_VTABLE

    PROVIDE (_vtable_base_address = 0x20000000);

    .vtable (_vtable_base_address) : AT (_vtable_base_address) {
        . = ALIGN(4);
        KEEP (*(.vtable))
        . = ALIGN(4);
    } > SRAM_VTABLE

    .text : {
        CREATE_OBJECT_SYMBOLS
        *(.text)
        *(.text.*)
        . = ALIGN(0x4);
        KEEP (*(.ctors))
        . = ALIGN(0x4);
        KEEP (*(.dtors))
        . = ALIGN(0x4);
        __init_array_start = .;
        KEEP (*(.init_array*))
        __init_array_end = .;
        *(.init)
        *(.fini*)
        _etext = .
        __etext = .
        etext = .
    } > FLASH_BANK01

    PROVIDE (__etext = .);
    PROVIDE (_etext = .);
    PROVIDE (etext = .);

    .ARM.exidx : {
        __exidx_start = .;
        *(.ARM.exidx* .gnu.linkonce.armexidx.*)
        __exidx_end = .;
    } > FLASH_BANK01

    .ARM.extab : {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } > FLASH_BANK01


    .ramcode : {
        . = ALIGN(4);
        __ramcode_load__ = LOADADDR (.ramcode);
        __ramcode_start__ = .;
        *(.RamFunc)        /* .RamFunc sections */
        *(.RamFunc*)       /* .RamFunc* sections */
        *(.ramcode)
        *(.ramcode*)
        . = ALIGN (4);
        __ramcode_end__ = .;
    } > SRAM_CODE AT> FLASH_BANK23

    .rodata : {
        *(.rodata)
        *(.rodata*)
    } > FLASH_BANK23

    .data : ALIGN (4) {
        __data_load__ = LOADADDR (.data);
        __data_start__ = .;
        *(.data)
        *(.data*)
        . = ALIGN (4);
        __data_end__ = .;
    } > SRAM AT> FLASH_BANK23

    .dma : {
        . = ALIGN(4);
        __dma_start__ = .;
        *(.shdma)
        *(.dma)
        *(.dma.*)
        . = ALIGN (4);
        __dma_end__ = .;
    } > SRAM_DMA

    .dmaalt : {
        . = ALIGN(4);
        __dmaalt_start__ = .;
        *(.shdmaalt)
        *(.dmaalt)
        *(.dmaalt.*)
        . = ALIGN (4);
        __dmaalt_end__ = .;
    } > SRAM_DMAALT

    .bss : {
        __bss_start__ = .;
        *(.shbss)
        *(.bss)
        *(.bss.*)
        *(COMMON)
        . = ALIGN (4);
        __bss_end__ = .;
    } > SRAM

    .heap : {
        __heap_start__ = .;
        end = __heap_start__;
        _end = end;
        __end = end;
        KEEP(*(.heap))
        __heap_end__ = .;
        __HeapLimit = __heap_end__;
    } > SRAM_DYNAMIC

/*
    .stack_process : ALIGN(0x8) {
        _stack_process = .;
        __stack_process = .;
        KEEP(*(.stack_process))
        __stack_process_end__ = .;
    } > SRAM_PROCESS_STACK
*/

    .stack : ALIGN(0x8) {
        _stack = .;
        __stack = .;
        KEEP(*(.stack))
        __stack_end__ = .;
    } > SRAM_MAIN_STACK

}
