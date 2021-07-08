/**
 *
 * @file OS_TCB_Size.h
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
 * @verbatim Mar 23, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 23, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TCB_XHEADER_OS_TCB_SIZE_H_
#define XOS_TCB_XHEADER_OS_TCB_SIZE_H_

#include <xOS/TCB/xHeader/OS_TCB_Defines.h>

uint32_t OS_TCB__u32GetSize(const OS_TCB_TypeDef* const pstTCB);
OS_TCB_nSTATUS OS_TCB__enIsEmpty(const OS_TCB_TypeDef* const pstTCB);


#endif /* XOS_TCB_XHEADER_OS_TCB_SIZE_H_ */
