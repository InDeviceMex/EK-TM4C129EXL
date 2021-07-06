/**
 *
 * @file SYSTICK_Enable.c
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
 * @verbatim 18 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_Enable.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>

void SYSTICK__vSetEnable(SYSTICK_nENABLE enEnableState)
{
    MCU__vWriteRegister(SYSTICK_BASE, SYSTICK_CSR_OFFSET, (uint32_t) enEnableState,
                        SYSTICK_CSR_ENABLE_MASK, SYSTICK_CSR_R_ENABLE_BIT);
}

void SYSTICK__vEnable(void)
{
    SYSTICK__vSetEnable(SYSTICK_enENABLE_ENA);
}

void SYSTICK__vDisable(void)
{
    SYSTICK__vSetEnable(SYSTICK_enENABLE_DIS);
}

SYSTICK_nENABLE SYSTICK__enGetEnable(void)
{
    SYSTICK_nENABLE enReturn = SYSTICK_enENABLE_DIS;
    enReturn = (SYSTICK_nENABLE)  MCU__u32ReadRegister(SYSTICK_BASE, SYSTICK_CSR_OFFSET,
                                           SYSTICK_CSR_ENABLE_MASK, SYSTICK_CSR_R_ENABLE_BIT);
    return (enReturn);
}


