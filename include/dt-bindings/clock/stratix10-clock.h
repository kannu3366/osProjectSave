/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2017, Intel Corporation
 */

#ifndef __STRATIX10_CLOCK_H
#define __STRATIX10_CLOCK_H

/* fixed rate clocks */
#define STRATIX10_OSC1			0
#define STRATIX10_CB_INTOSC_HS_DIV2_CLK	1
#define STRATIX10_CB_INTOSC_LS_CLK	2
#define STRATIX10_F2S_FREE_CLK		3

/* fixed factor clocks */
#define STRATIX10_L4_SYS_FREE_CLK	4
#define STRATIX10_MPU_PERIPH_CLK	5
#define STRATIX10_MPU_L2RAM_CLK		6
#define STRATIX10_SDMMC_CIU_CLK		7

/* PLL clocks */
#define STRATIX10_MAIN_PLL_CLK		8
#define STRATIX10_PERIPH_PLL_CLK	9
#define STRATIX10_BOOT_CLK		10

/* Periph clocks */
#define STRATIX10_MAIN_MPU_BASE_CLK	11
#define STRATIX10_MAIN_NOC_BASE_CLK	12
#define STRATIX10_MAIN_EMACA_CLK	13
#define STRATIX10_MAIN_EMACB_CLK	14
#define STRATIX10_MAIN_EMAC_PTP_CLK	15
#define STRATIX10_MAIN_GPIO_DB_CLK	16
#define STRATIX10_MAIN_SDMMC_CLK	17
#define STRATIX10_MAIN_S2F_USR0_CLK	18
#define STRATIX10_MAIN_S2F_USR1_CLK	19
#define STRATIX10_MAIN_PSI_REF_CLK	20

#define STRATIX10_PERI_MPU_BASE_CLK	21
#define STRATIX10_PERI_NOC_BASE_CLK	22
#define STRATIX10_PERI_EMACA_CLK	23
#define STRATIX10_PERI_EMACB_CLK	24
#define STRATIX10_PERI_EMAC_PTP_CLK	25
#define STRATIX10_PERI_GPIO_DB_CLK	26
#define STRATIX10_PERI_SDMMC_CLK	27
#define STRATIX10_PERI_S2F_USR0_CLK	28
#define STRATIX10_PERI_S2F_USR1_CLK	29
#define STRATIX10_PERI_PSI_REF_CLK	30

#define STRATIX10_MPU_FREE_CLK		31
#define STRATIX10_NOC_FREE_CLK		32
#define STRATIX10_S2F_USR0_CLK		33
#define STRATIX10_NOC_CLK		34
#define STRATIX10_EMAC_A_FREE_CLK	35
#define STRATIX10_EMAC_B_FREE_CLK	36
#define STRATIX10_EMAC_PTP_FREE_CLK	37
#define STRATIX10_GPIO_DB_FREE_CLK	38
#define STRATIX10_SDMMC_FREE_CLK	39
#define STRATIX10_S2F_USER1_FREE_CLK	40
#define STRATIX10_PSI_REF_FREE_CLK	41

/* Gate clocks */
#define STRATIX10_MPU_CLK		42
#define STRATIX10_L4_MAIN_CLK		43
#define STRATIX10_L4_MP_CLK		44
#define STRATIX10_L4_SP_CLK		45
#define STRATIX10_CS_AT_CLK		46
#define STRATIX10_CS_TRACE_CLK		47
#define STRATIX10_CS_PDBG_CLK		48
#define STRATIX10_CS_TIMER_CLK		49
#define STRATIX10_S2F_USER0_CLK		50
#define STRATIX10_S2F_USER1_CLK		51
#define STRATIX10_EMAC0_CLK		52
#define STRATIX10_EMAC1_CLK		53
#define STRATIX10_EMAC2_CLK		54
#define STRATIX10_EMAC_PTP_CLK		55
#define STRATIX10_GPIO_DB_CLK		56
#define STRATIX10_SDMMC_CLK		57
#define STRATIX10_PSI_REF_CLK		58
#define STRATIX10_USB_CLK		59
#define STRATIX10_SPI_M_CLK		60
#define STRATIX10_NAND_CLK		61
#define STRATIX10_NAND_X_CLK		62
#define STRATIX10_NAND_ECC_CLK		63
#define STRATIX10_NUM_CLKS		64

#endif	/* __STRATIX10_CLOCK_H */
