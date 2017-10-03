/*
    ChibiOS - Copyright (C) 2006..2016 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/**
 * @file    SAMA5D2/armparams.h
 * @brief   ARM parameters for the SAMA5D2x.
 *
 * @defgroup ARM_SAMA5D2x Specific Parameters
 * @ingroup ARM_SPECIFIC
 * @details This file contains the ARM specific parameters for the
 *          SAMA5D2x platform.
 * @{
 */

#ifndef ARMPARAMS_H
#define ARMPARAMS_H

/**
 * @brief   ARM core model.
 */
#define ARM_CORE                ARM_CORE_CORTEX_A5

/**
 * @brief   Thumb-capable.
 */
#define ARM_SUPPORTS_THUMB      1

/**
 * @brief   Thumb2-capable.
 */
#define ARM_SUPPORTS_THUMB2     1

/**
 * @brief   Implementation of the wait-for-interrupt state enter.
 */
#define ARM_WFI_IMPL            asm volatile ("wfi")

#if !defined(_FROM_ASM_) || defined(__DOXYGEN__)
/**
 * @brief   Address of the IRQ vector register in the interrupt controller.
 */
#define ARM_IRQ_VECTOR_REG      0xF803C010U
#else
#define ARM_IRQ_VECTOR_REG      0xF803C010
#endif
#endif /* ARMPARAMS_H */

/** @} */