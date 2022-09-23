 /**
 *
 * @file SCB_InterruptRoutine_BusFault.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 15 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_BusFault.h>

#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_Source.h>
#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Dependencies.h>

uint32_t SCB_BusFault_pu32Context[8UL] = {0UL};

UART_CONTROL_t enUartBusControl =
{
    UART_enEOT_ALL,
    UART_enLOOPBACK_DIS,
    UART_enLINE_ENA,
    UART_enLINE_ENA,
    UART_enRTS_MODE_SOFT,
    UART_enCTS_MODE_SOFT,
    UART_enLINE_DIS,
    UART_enLINE_DIS,
    UART_enLINE_DIS,
    UART_enLINE_DIS,
};

UART_LINE_CONTROL_t enUartBusLineControl =
{
 UART_enFIFO_ENA,
 UART_enSTOP_ONE,
 UART_enPARITY_DIS,
 UART_enPARITY_TYPE_EVEN,
 UART_enPARITY_STICK_DIS ,
 UART_enLENGTH_8BITS,
};

UART_LINE_t enUartBusLine =
{
 UART_enLINE_SELECT_PRIMARY,
 UART_enLINE_SELECT_PRIMARY,
 UART_enLINE_SELECT_PRIMARY,
 UART_enLINE_SELECT_PRIMARY,
 UART_enLINE_SELECT_PRIMARY,
 UART_enLINE_SELECT_PRIMARY,
 UART_enLINE_SELECT_PRIMARY,
 UART_enLINE_SELECT_PRIMARY,
};

void BusFault__vSendValues(void)
{
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOA);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUART0);
    UART__vInit();
    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_STOP);
    UART__enSetConfig(UART_enMODULE_0, UART_enMODE_NORMAL, &enUartBusControl, &enUartBusLineControl, 921600UL, &enUartBusLine );
    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_START);

    UART__u32Printf(UART_enMODULE_0, "BUS FAULT exception Detected\n\r"
                    "Core Register dump:\n\r"
                    "R0: %X, R1: %X\n\r"
                    "R2: %X, R3: %X\n\r"
                    "R12: %X xPSR: %X\n\r"
                    "LR: %X, PC: %X\n\r",
                    SCB_BusFault_pu32Context[0UL],
                    SCB_BusFault_pu32Context[1UL],
                    SCB_BusFault_pu32Context[2UL],
                    SCB_BusFault_pu32Context[3UL],
                    SCB_BusFault_pu32Context[4UL],
                    SCB_BusFault_pu32Context[7UL],
                    SCB_BusFault_pu32Context[5UL],
                    SCB_BusFault_pu32Context[6UL]);
}


__attribute__((naked))
void BusFault__vIRQVectorHandler(void)
{
    __asm volatile(
    " PUSH {R4-R7}\n"
    " ubfx    R4, LR, #2, #1 \n"
    " cmp    R4, #0 \n"
    " beq    MainStackBus \n"
    " b    ProcessStackBus \n"

    "MainStackBus: \n"
    " mrs    R4, MSP \n"
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    " movw R6, SCB_BusFault_pu32Context\n"
    " movt R6, SCB_BusFault_pu32Context\n"
#elif defined (__GNUC__ )
    " ldr R6, = SCB_BusFault_pu32Context\n"
#endif
    " ldr R5, [R4, #0X10]\n"
    " str R5, [R6, #0x0]\n"/*SCB_BusFault_pu32Context[0] R4*/
    " ldr R5, [R4, #0x14]\n"
    " str R5, [R6, #0x4]\n"/*SCB_BusFault_pu32Context[1] R5*/
    " ldr R5, [R4, #0x18]\n"
    " str R5, [R6, #0x8]\n"/*SCB_BusFault_pu32Context[2] R6*/
    " ldr R5, [R4, #0x1C]\n"
    " str R5, [R6, #0xC]\n"/*SCB_BusFault_pu32Context[3] R3*/
    " ldr R5, [R4, #0x20]\n"
    " str R5, [R6, #0x10]\n"/*SCB_BusFault_pu32Context[4] R52*/
    " ldr R5, [R4, #0x24]\n"
    " str R5, [R6, #0x14]\n"/*SCB_BusFault_pu32Context[5] LR*/
    " ldr R5, [R4, #0x28]\n"
    " str R5, [R6, #0x18]\n"/*SCB_BusFault_pu32Context[6] PC*/
    " ldr R5, [R4, #0x2C]\n"
    " str R5, [R6, #0x1C]\n"/*SCB_BusFault_pu32Context[7] PSR*/
    " b    ProcessBus \n"

    "ProcessStackBus: \n"
    " mrs    R4, PSP \n"
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    " movw R6, SCB_BusFault_pu32Context\n"
    " movt R6, SCB_BusFault_pu32Context\n"
#elif defined (__GNUC__ )
    " ldr R6, = SCB_BusFault_pu32Context\n"
#endif
    " ldr R5, [R4, #0X0]\n"
    " str R5, [R6, #0x0]\n"/*SCB_BusFault_pu32Context[0] R4*/
    " ldr R5, [R4, #0x4]\n"
    " str R5, [R6, #0x4]\n"/*SCB_BusFault_pu32Context[1] R5*/
    " ldr R5, [R4, #0x8]\n"
    " str R5, [R6, #0x8]\n"/*SCB_BusFault_pu32Context[2] R6*/
    " ldr R5, [R4, #0xC]\n"
    " str R5, [R6, #0xC]\n"/*SCB_BusFault_pu32Context[3] R3*/
    " ldr R5, [R4, #0x10]\n"
    " str R5, [R6, #0x10]\n"/*SCB_BusFault_pu32Context[4] R52*/
    " ldr R5, [R4, #0x14]\n"
    " str R5, [R6, #0x14]\n"/*SCB_BusFault_pu32Context[5] LR*/
    " ldr R5, [R4, #0x18]\n"
    " str R5, [R6, #0x18]\n"/*SCB_BusFault_pu32Context[6] PC*/
    " ldr R5, [R4, #0x1C]\n"
    " str R5, [R6, #0x1C]\n"/*SCB_BusFault_pu32Context[7] PSR*/

    "ProcessBus: \n"
    " pop {R4-R7}\n"
    " push {R0,R1,R2,LR} \n"
    " .global BusFault__vSendValues \n"
    " .global BusFault__vIRQVectorHandlerCustom \n"
    " .global BusFault__vSendValues \n"
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    " movw R2, BusFault__vSendValues\n"
    " movt R2, BusFault__vSendValues\n"
#elif defined (__GNUC__ )
    " ldr R2, = BusFault__vSendValues\n"
#endif
    " blx R2 \n"
    " movw R0, #0xE000\n"
    " movt R0, #0xE000\n"
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    " movw R1, SCB_BusFault_pu32Context\n"
    " movt R1, SCB_BusFault_pu32Context\n"
#elif defined (__GNUC__ )
    " ldr R1, = SCB_BusFault_pu32Context\n"
#endif
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    " movw R2, BusFault__vIRQVectorHandlerCustom\n"
    " movt R2, BusFault__vIRQVectorHandlerCustom\n"
#elif defined (__GNUC__ )
    " ldr R2, = BusFault__vIRQVectorHandlerCustom\n"
#endif
    " blx R2 \n"
    " pop {R0,R1,R2,LR} \n"
    " BX LR \n");
}

void BusFault__vIRQVectorHandlerCustom(uintptr_t uptrModuleArg, void* pvArgument)
{
    SCB_t* pstSCBReg;
    uint32_t u32BusFault;
    SCB_pvfIRQSourceHandler_t pvfCallback;
    uint32_t u32BusAddressValid;
    uint32_t u32BusAddressFault;
    uint32_t* pu32Context;
    uint32_t* pu32ContextOffset;

    pstSCBReg = (SCB_t*) uptrModuleArg;
    pu32Context = (uint32_t*) pvArgument;

    u32BusAddressValid = 0UL;
    u32BusFault = pstSCBReg->CFSR;
    u32BusFault >>= 8UL;
    u32BusFault &= (uint32_t) SCB_enBUS_ALL;
    if(0UL == ((uint32_t) SCB_enBUS_ALL & u32BusFault))
    {
        UART__u32Printf(UART_enMODULE_0, "Bus Fault Exception triggered by Software \n\r");
        pvfCallback = SCB_BusFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enBUS_BIT_SW);
        pvfCallback(SCB_BASE, (void*) SCB_enBUS_BIT_SW);
    }
    else
    {
        if((uint32_t) SCB_enBUS_LSPERR & u32BusFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_LSPERR_CLEAR;
            UART__u32Printf(UART_enMODULE_0, "Bus Fault on FPU Lazy State Preservation \n\r");
            pvfCallback = SCB_BusFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enBUS_BIT_LSPERR);
            pvfCallback(SCB_BASE, (void*) SCB_enBUS_BIT_LSPERR);
        }
        if((uint32_t) SCB_enBUS_STKERR & u32BusFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_STKERR_CLEAR;
            UART__u32Printf(UART_enMODULE_0,"Stacking Bus Fault, it occurred on an Exception/IRQ entry\n\r"
                                            "Context Values cannot be valid\n\r");
            pvfCallback = SCB_BusFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enBUS_BIT_STKERR);
            pvfCallback(SCB_BASE, (void*) SCB_enBUS_BIT_STKERR);
        }
        if((uint32_t) SCB_enBUS_UNSTKERR & u32BusFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_UNSTKERR_CLEAR;
            UART__u32Printf(UART_enMODULE_0,"Un-stacking Bus Fault, it occurred on an Exception/IRQ exit\n\r"
                                            "Context Values are related to the previous context\n\r");
            pvfCallback = SCB_BusFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enBUS_BIT_UNSTKERR);
            pvfCallback(SCB_BASE, (void*) SCB_enBUS_BIT_UNSTKERR);
        }
        if((uint32_t) SCB_enBUS_IMPRECISERR & u32BusFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_IMPRECISERR_CLEAR;
            pu32ContextOffset = pu32Context;
            pu32ContextOffset += 6UL;
            u32BusAddressFault = *pu32ContextOffset;
            UART__u32Printf(UART_enMODULE_0, "Imprecise Data Bus Fault\n\r"
                            "Fault Address (Possible or near): %X\n\r", u32BusAddressFault);
            pvfCallback = SCB_BusFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enBUS_BIT_IMPRECISERR);
            pvfCallback(SCB_BASE, (void*) SCB_enBUS_BIT_IMPRECISERR);
        }
        if((uint32_t) SCB_enBUS_BFARVALID & u32BusFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_BFARVALID_CLEAR;
            u32BusAddressValid = 1UL;
            pvfCallback = SCB_BusFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enBUS_BIT_BFARVALID);
            pvfCallback(SCB_BASE, (void*) SCB_enBUS_BIT_BFARVALID);
        }
        if((uint32_t) SCB_enBUS_PRECISERR & u32BusFault)
        {

            pstSCBReg->CFSR = SCB_CFSR_R_PRECISERR_CLEAR;
            UART__u32Printf(UART_enMODULE_0, "Precise Data Bus Fault\n\r");
            if(1UL == u32BusAddressValid)
            {
                u32BusAddressFault = pstSCBReg->BFAR;
                UART__u32Printf(UART_enMODULE_0, "Fault Address (Exact): %X\n\r", u32BusAddressFault);
            }
            pu32ContextOffset = pu32Context;
            pu32ContextOffset += 6UL;
            u32BusAddressFault = *pu32ContextOffset;
            UART__u32Printf(UART_enMODULE_0, "Fault Address (Possible): %X\n\r", u32BusAddressFault);
            pvfCallback = SCB_BusFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enBUS_BIT_PRECISERR);
            pvfCallback(SCB_BASE, (void*) SCB_enBUS_BIT_PRECISERR);
        }
        if((uint32_t) SCB_enBUS_IBUSERR & u32BusFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_IBUSERR_CLEAR;
            pu32ContextOffset = pu32Context;
            pu32ContextOffset += 6UL;
            u32BusAddressFault = *pu32ContextOffset;
            UART__u32Printf(UART_enMODULE_0, "Instruction Bus Access Fault Address: %X\n\r", u32BusAddressFault);
            pvfCallback = SCB_BusFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enBUS_BIT_IBUSERR);
            pvfCallback(SCB_BASE, (void*) SCB_enBUS_BIT_IBUSERR);
        }
    }

}


