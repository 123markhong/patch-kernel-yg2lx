/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause)
 *
 * Copyright (C) 2021 Renesas Electronics Corp.
 */
#ifndef __DT_BINDINGS_CLOCK_R9A07G043_CPG_H__
#define __DT_BINDINGS_CLOCK_R9A07G043_CPG_H__

#include <dt-bindings/clock/renesas-cpg-mssr.h>

/* R9A07G043 CPG Core Clocks */
#define R9A07G043_CLK_I			0
#define R9A07G043_CLK_I2		1
#define R9A07G043_CLK_G			2
#define R9A07G043_CLK_S0		3
#define R9A07G043_CLK_S1		4
#define R9A07G043_CLK_SPI0		5
#define R9A07G043_CLK_SPI1		6
#define R9A07G043_CLK_SD0		7
#define R9A07G043_CLK_SD1		8
#define R9A07G043_CLK_M0		9
#define R9A07G043_CLK_M1		10
#define R9A07G043_CLK_M2		11
#define R9A07G043_CLK_M3		12
#define R9A07G043_CLK_M4		13
#define R9A07G043_CLK_HP		14
#define R9A07G043_CLK_TSU		15
#define R9A07G043_CLK_ZT		16
#define R9A07G043_CLK_P0		17
#define R9A07G043_CLK_P1		18
#define R9A07G043_CLK_P2		19
#define R9A07G043_CLK_AT		20
#define R9A07G043_OSCCLK		21
#define R9A07G043_CLK_P0_DIV2		22

/* R9A07G043 Module Clocks */
#define R9A07G043_CA55_SCLK		0
#define R9A07G043_CA55_PCLK		1
#define R9A07G043_CA55_ATCLK		2
#define R9A07G043_CA55_GICCLK		3
#define R9A07G043_CA55_PERICLK		4
#define R9A07G043_CA55_ACLK		5
#define R9A07G043_CA55_TSCLK		6
#define R9A07G043_GIC600_GICCLK		7
#define R9A07G043_IA55_CLK		8
#define R9A07G043_IA55_PCLK		9
#define R9A07G043_MHU_PCLK		10
#define R9A07G043_SYC_CNT_CLK		11
#define R9A07G043_DMAC_ACLK		12
#define R9A07G043_DMAC_PCLK		13
#define R9A07G043_OSTM0_PCLK		14
#define R9A07G043_OSTM1_PCLK		15
#define R9A07G043_OSTM2_PCLK		16
#define R9A07G043_MTU_X_MCK_MTU3	17
#define R9A07G043_POE3_CLKM_POE		18
#define R9A07G043_WDT0_PCLK		24
#define R9A07G043_WDT0_CLK		25
#define R9A07G043_WDT2_PCLK		28
#define R9A07G043_WDT2_CLK		29
#define R9A07G043_SPI_CLK2		30
#define R9A07G043_SPI_CLK		31
#define R9A07G043_SDHI0_IMCLK		32
#define R9A07G043_SDHI0_IMCLK2		33
#define R9A07G043_SDHI0_CLK_HS		34
#define R9A07G043_SDHI0_ACLK		35
#define R9A07G043_SDHI1_IMCLK		36
#define R9A07G043_SDHI1_IMCLK2		37
#define R9A07G043_SDHI1_CLK_HS		38
#define R9A07G043_SDHI1_ACLK		39
#define R9A07G043_ISU_ACLK		43
#define R9A07G043_ISU_PCLK		44
#define R9A07G043_CRU_SYSCLK		47
#define R9A07G043_CRU_VCLK		48
#define R9A07G043_CRU_PCLK		49
#define R9A07G043_CRU_ACLK		50
#define R9A07G043_LCDC_CLK_A		57
#define R9A07G043_LCDC_CLK_P		58
#define R9A07G043_LCDC_CLK_D		59
#define R9A07G043_SSI0_PCLK2		60
#define R9A07G043_SSI0_PCLK_SFR		61
#define R9A07G043_SSI1_PCLK2		62
#define R9A07G043_SSI1_PCLK_SFR		63
#define R9A07G043_SSI2_PCLK2		64
#define R9A07G043_SSI2_PCLK_SFR		65
#define R9A07G043_SSI3_PCLK2		66
#define R9A07G043_SSI3_PCLK_SFR		67
#define R9A07G043_SRC_CLKP		68
#define R9A07G043_USB_U2H0_HCLK		69
#define R9A07G043_USB_U2H1_HCLK		70
#define R9A07G043_USB_U2P_EXR_CPUCLK	71
#define R9A07G043_USB_PCLK		72
#define R9A07G043_ETH0_CLK_AXI		73
#define R9A07G043_ETH0_CLK_CHI		74
#define R9A07G043_ETH1_CLK_AXI		75
#define R9A07G043_ETH1_CLK_CHI		76
#define R9A07G043_I2C0_PCLK		77
#define R9A07G043_I2C1_PCLK		78
#define R9A07G043_I2C2_PCLK		79
#define R9A07G043_I2C3_PCLK		80
#define R9A07G043_SCIF0_CLK_PCK		81
#define R9A07G043_SCIF1_CLK_PCK		82
#define R9A07G043_SCIF2_CLK_PCK		83
#define R9A07G043_SCIF3_CLK_PCK		84
#define R9A07G043_SCIF4_CLK_PCK		85
#define R9A07G043_SCI0_CLKP		86
#define R9A07G043_SCI1_CLKP		87
#define R9A07G043_IRDA_CLKP		88
#define R9A07G043_RSPI0_CLKB		89
#define R9A07G043_RSPI1_CLKB		90
#define R9A07G043_RSPI2_CLKB		91
#define R9A07G043_CANFD_PCLK		92
#define R9A07G043_GPIO_HCLK		93
#define R9A07G043_ADC_ADCLK		94
#define R9A07G043_ADC_PCLK		95
#define R9A07G043_TSU_PCLK		96

/* R9A07G043 Resets */
#define R9A07G043_CA55_RST_1_0		0
#define R9A07G043_CA55_RST_1_1		1
#define R9A07G043_CA55_RST_3_0		2
#define R9A07G043_CA55_RST_3_1		3
#define R9A07G043_CA55_RST_4		4
#define R9A07G043_CA55_RST_5		5
#define R9A07G043_CA55_RST_6		6
#define R9A07G043_CA55_RST_7		7
#define R9A07G043_CA55_RST_8		8
#define R9A07G043_CA55_RST_9		9
#define R9A07G043_CA55_RST_10		10
#define R9A07G043_CA55_RST_11		11
#define R9A07G043_CA55_RST_12		12
#define R9A07G043_GIC600_GICRESET_N	13
#define R9A07G043_GIC600_DBG_GICRESET_N	14
#define R9A07G043_IA55_RESETN		15
#define R9A07G043_MHU_RESETN		16
#define R9A07G043_DMAC_ARESETN		17
#define R9A07G043_DMAC_RST_ASYNC	18
#define R9A07G043_SYC_RESETN		19
#define R9A07G043_OSTM0_PRESETZ		20
#define R9A07G043_OSTM1_PRESETZ		21
#define R9A07G043_OSTM2_PRESETZ		22
#define R9A07G043_MTU_X_PRESET_MTU3	23
#define R9A07G043_POE3_RST_M_REG	24
#define R9A07G043_WDT0_PRESETN		30
#define R9A07G043_WDT2_PRESETN		32
#define R9A07G043_SPI_RST		33
#define R9A07G043_SDHI0_IXRST		34
#define R9A07G043_SDHI1_IXRST		35
#define R9A07G043_ISU_ARESETN		39
#define R9A07G043_ISU_PRESETN		40
#define R9A07G043_CRU_CMN_RSTB		43
#define R9A07G043_CRU_PRESETN		44
#define R9A07G043_CRU_ARESETN		45
#define R9A07G043_LCDC_RESET_N		49
#define R9A07G043_SSI0_RST_M2_REG	50
#define R9A07G043_SSI1_RST_M2_REG	51
#define R9A07G043_SSI2_RST_M2_REG	52
#define R9A07G043_SSI3_RST_M2_REG	53
#define R9A07G043_SRC_RST		54
#define R9A07G043_USB_U2H0_HRESETN	55
#define R9A07G043_USB_U2H1_HRESETN	56
#define R9A07G043_USB_U2P_EXL_SYSRST	57
#define R9A07G043_USB_PRESETN		58
#define R9A07G043_ETH0_RST_HW_N		59
#define R9A07G043_ETH1_RST_HW_N		60
#define R9A07G043_I2C0_MRST		61
#define R9A07G043_I2C1_MRST		62
#define R9A07G043_I2C2_MRST		63
#define R9A07G043_I2C3_MRST		64
#define R9A07G043_SCIF0_RST_SYSTEM_N	65
#define R9A07G043_SCIF1_RST_SYSTEM_N	66
#define R9A07G043_SCIF2_RST_SYSTEM_N	67
#define R9A07G043_SCIF3_RST_SYSTEM_N	68
#define R9A07G043_SCIF4_RST_SYSTEM_N	69
#define R9A07G043_SCI0_RST		70
#define R9A07G043_SCI1_RST		71
#define R9A07G043_IRDA_RST		72
#define R9A07G043_RSPI0_RST		73
#define R9A07G043_RSPI1_RST		74
#define R9A07G043_RSPI2_RST		75
#define R9A07G043_CANFD_RSTP_N		76
#define R9A07G043_CANFD_RSTC_N		77
#define R9A07G043_GPIO_RSTN		78
#define R9A07G043_GPIO_PORT_RESETN	79
#define R9A07G043_GPIO_SPARE_RESETN	80
#define R9A07G043_ADC_PRESETN		81
#define R9A07G043_ADC_ADRST_N		82
#define R9A07G043_TSU_PRESETN		83

#endif /* __DT_BINDINGS_CLOCK_R9A07G043_CPG_H__ */
