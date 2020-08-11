/*
 * arch/arm/mach-exynos/include/mach/cci-regs.h
 *
 * Copyright(c) 2013-2015 Allwinnertech Co., Ltd.
 *         http://www.allwinnertech.com
 *
 * Author: sunny <sunny@allwinnertech.com>
 *
 * allwinner sunxi soc platform CCI(Cache Coherent Interconnect) register defines.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __ASM_ARCH_CCI_REGS_H
#define __ASM_ARCH_CCI_REGS_H __FILE__

/* Control interface register offsets */
#define CTLR_OVERRIDE_REG	0x0
#define SPEC_CTLR_REG		0x4
#define SECURE_ACCESS_REG	0x8
#define STATUS_REG		0xc
#define IMPRECISE_ERR_REG	0x10
#define PERF_MON_CTRL_REG	0x100

/* Slave interface */
#define CCI_A15_SL_IFACE(x)	((x) + 0x5000)
#define CCI_A7_SL_IFACE(x)	((x) + 0x4000)

/* Slave interface register */
#define SNOOP_CTLR_REG		0x0

/* CORE_MISC SFR */
#define BACKBONE_SEL_REG	0x0
#define MDMA_SHARED_CTRL	0x10
#define SSS_SHARED_CTRL		0x20
#define G2D_SHARED_CTRL		0x30

#endif /* __ASM_ARCH_CCI_REGS_H */
