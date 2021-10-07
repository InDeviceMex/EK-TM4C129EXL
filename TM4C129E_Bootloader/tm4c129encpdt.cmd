/******************************************************************************
 *
 * Default Linker Command file for the Texas Instruments TM4C129ENCPDT
 *
 * This is derived from revision 15071 of the TivaWare Library.
 *
 *****************************************************************************/

--retain=g_pfnVectors

MEMORY
{
    FLASH_VTABLE (RX)   : origin = 0x00000000, length = 0x00000400
    FLASH_BANK01 (RX) : origin = 0x00000400, length = 0x0000B000
    FLASH_BANK23 (RX) : origin = 0x0000B400, length = 0x00004C00
    SRAM_VTABLE (RW) : origin = 0x20000000, length = 0x00000400
    SRAM_CODE (RWX) : origin = 0x20000400, length = 0x00000C00 /*5K*/
    SRAM (RW) : origin = 0x20001000, length = 0x00001C00
    SRAM_DYNAMIC (RW) : origin = 0x20002C00, length = 0x00000200 /*32K*/
    SRAM_MAIN_STACK (RW) : origin = 0x20002E00, length = 0x00000200
}

/* The following command line options are set as part of the CCS project.    */
/* If you are building using the command line, or for some reason want to    */
/* define them here, you can uncomment and modify these lines as needed.     */
/* If you are using CCS for building, it is probably better to make any such */
/* modifications in your CCS project and leave this file alone.              */
/*                                                                           */

--library=rtsv7M4_T_le_v4SPD16_xo_eabi.lib

/* Section allocation in memory */
--stack_size=0x00000200
--heap_size=0x00000200
SECTIONS
{
    .intvecs:   > 0x00000000
    .text   :   > FLASH_BANK01
    .switch :   > FLASH_BANK01
    .const  :   > FLASH_BANK23
    .cinit  :   > FLASH_BANK01
    .binit  :   > FLASH_BANK01
    .pinit  :   > FLASH_BANK01
    .init_array : > FLASH_BANK01
    .ARM.exidx : > FLASH_BANK01
    .ARM.extab : > FLASH_BANK01

    .vtable :   > SRAM_VTABLE

    .ramcode: LOAD = FLASH_BANK23,
                RUN = SRAM_CODE,
                LOAD_START(__ramcode_load__),
                RUN_START(__ramcode_start__),
                RUN_END(__ramcode_end__)

    .data   : LOAD = FLASH_BANK23,
                RUN = SRAM,
                LOAD_START(__data_load__),
                RUN_START(__data_start__),
                RUN_END(__data_end__)
    .bss    :  RUN = SRAM,
                RUN_START(__bss_start__),
                RUN_END(__bss_end__)

    .sysmem :   > SRAM_DYNAMIC

    .stack : ALIGN(0x8) {
        _stack = .;
        __stack = .;
    } > SRAM_MAIN_STACK
/*
    .stack_process : ALIGN(0x8) {
        _stack_process = .;
        __stack_process = .;
    } > SRAM_PROCESS_STACK
*/
/*
    .dma    :   > SRAM_DMA
    .dmaalt :   > SRAM_DMAALT
*/

}
/*
	__stack_process_end__ = _stack_process + SIZE(SRAM_PROCESS_STACK);
	__stack_process_size__ = SIZE(SRAM_PROCESS_STACK);
*/
	__stack_end__ = __stack + SIZE(SRAM_MAIN_STACK);
	__stack_size__ = SIZE(SRAM_MAIN_STACK);
