/**
 *
 * @file CAN_RegisterPeripheral_Bitbanding.c
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
 * @verbatim May 28, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * May 28, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/CAN/Peripheral/Register/RegisterPeripheral_Bitbanding/CAN_RegisterPeripheral_Bitbanding.h>

CAN_BITBANDING_TypeDef *CAN_BITBANDING_BLOCK[(uint32_t) CAN_enMODULE_MAX] =
{ CAN0_BITBANDING,
/*CAN1_BITBANDING,*/
};



