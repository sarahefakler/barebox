/*
 * Copyright (C) 2014 Altera Corporation <www.altera.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef _ARRIA10_HARDWARE_H_
#define _ARRIA10_HARDWARE_H_

#define ARRIA10_EMAC0_ADDR				(0xff800000)
#define ARRIA10_EMAC1_ADDR				(0xff802000)
#define ARRIA10_EMAC2_ADDR				(0xff804000)
#define ARRIA10_SDMMC_ADDR				(0xff808000)
#define ARRIA10_QSPIREGS_ADDR				(0xff809000)
#define ARRIA10_ECC_OCRAM_ADDR				(0xff8c3000)
#define ARRIA10_QSPIDATA_ADDR				(0xffa00000)
#define ARRIA10_UART0_ADDR				(0xffc02000)
#define ARRIA10_UART1_ADDR				(0xffc02100)
#define ARRIA10_I2C0_ADDR				(0xffc02200)
#define ARRIA10_I2C1_ADDR				(0xffc02300)
#define ARRIA10_GPIO0_ADDR				(0xffc02900)
#define ARRIA10_GPIO1_ADDR				(0xffc02a00)
#define ARRIA10_GPIO2_ADDR				(0xffc02b00)
#define ARRIA10_HMC_MMR_IO48_ADDR			(0xffcfa000)
#define ARRIA10_SDR_ADDR				(0xffcfb000)
#define ARRIA10_FPGAMGRDATA_ADDR			(0xffcfe400)
#define ARRIA10_OSC1TIMER0_ADDR				(0xffd00000)
#define ARRIA10_L4WD0_ADDR				(0xffd00200)
#define ARRIA10_FPGAMGRREGS_ADDR			(0xffd03000)
#define ARRIA10_CLKMGR_ADDR				(0xffd04000)
#define ARRIA10_RSTMGR_ADDR				(0xffd05000)
#define ARRIA10_SYSMGR_ADDR				(0xffd06000)
#define ARRIA10_PINMUX_SHARED_3V_IO_GRP_ADDR		(0xffd07000)
#define ARRIA10_PINMUX_DEDICATED_IO_GRP_ADDR		(0xffd07200)
#define ARRIA10_PINMUX_CFG_DEDICATED_IO_GRP_ADDR	(0xffd07300)
#define ARRIA10_PINMUX_FPGA_INTERFACE_ADDR		(0xffd07400)
#define ARRIA10_NOC_L4_PRIV_L4_PRIV_FILTER_ADDR		(0xffd11000)
#define ARRIA10_SDR_SCHEDULER_ADDR			(0xffd12400)
#define ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR		(0xffd13000)
#define ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_ADDR		(0xffd13200)
#define ARRIA10_SDR_FW_MPU_FPGA_ADDR			(0xffd13300)
#define ARRIA10_NOC_FW_DDR_L3_DDR_SCR_ADDR		(0xffd13400)
#define ARRIA10_NOC_FW_SOC2FPGA_SOC2FPGA_SCR_ADDR	(0xffd13500)
#define ARRIA10_DMANONSECURE_ADDR			(0xffda0000)
#define ARRIA10_DMASECURE_ADDR				(0xffda1000)
#define ARRIA10_MPUSCU_ADDR				(0xffffc000)
#define ARRIA10_MPUL2_ADDR				(0xfffff000)

/* L2 cache controller */
#define ARRIA10_MPUL2_ADRFLTR_START			(ARRIA10_MPUL2_ADDR + 0xC00)

/* NOC L4 Priv */
#define ARRIA10_NOC_L4_PRIV_L4_PRIV_L4_PRIV		(ARRIA10_NOC_L4_PRIV_L4_PRIV_FILTER_ADDR + 0x00)
#define ARRIA10_NOC_L4_PRIV_L4_PRIV_L4_PRIV_SET		(ARRIA10_NOC_L4_PRIV_L4_PRIV_FILTER_ADDR + 0x04)
#define ARRIA10_NOC_L4_PRIV_L4_PRIV_L4_PRIV_CLR		(ARRIA10_NOC_L4_PRIV_L4_PRIV_FILTER_ADDR + 0x08)

/* NOC L4 Permissions */
#define ARRIA10_NOC_FW_L4_PER_SCR_NAND_REG		(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x00)
#define ARRIA10_NOC_FW_L4_PER_SCR_NAND_DATA		(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x04)
#define ARRIA10_NOC_FW_L4_PER_SCR_QSPI_DATA		(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x08)
#define ARRIA10_NOC_FW_L4_PER_SCR_USB0_REG		(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x0c)
#define ARRIA10_NOC_FW_L4_PER_SCR_USB1_REG		(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x10)
#define ARRIA10_NOC_FW_L4_PER_SCR_DMA_NONSECURE		(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x14)
#define ARRIA10_NOC_FW_L4_PER_SCR_DMA_SECURE		(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x18)
#define ARRIA10_NOC_FW_L4_PER_SCR_SPIM0			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x1c)
#define ARRIA10_NOC_FW_L4_PER_SCR_SPIM1			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x20)
#define ARRIA10_NOC_FW_L4_PER_SCR_SPIS0			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x24)
#define ARRIA10_NOC_FW_L4_PER_SCR_SPIS1			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x28)
#define ARRIA10_NOC_FW_L4_PER_SCR_EMAC0			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x2c)
#define ARRIA10_NOC_FW_L4_PER_SCR_EMAC1			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x30)
#define ARRIA10_NOC_FW_L4_PER_SCR_EMAC2			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x34)
#define ARRIA10_NOC_FW_L4_PER_SCR_EMAC3			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x38)
#define ARRIA10_NOC_FW_L4_PER_SCR_QSPI			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x3c)
#define ARRIA10_NOC_FW_L4_PER_SCR_SDMMC			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x40)
#define ARRIA10_NOC_FW_L4_PER_SCR_GPIO0			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x44)
#define ARRIA10_NOC_FW_L4_PER_SCR_GPIO1			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x48)
#define ARRIA10_NOC_FW_L4_PER_SCR_GPIO2			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x4c)
#define ARRIA10_NOC_FW_L4_PER_SCR_I2C0			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x50)
#define ARRIA10_NOC_FW_L4_PER_SCR_I2C1			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x54)
#define ARRIA10_NOC_FW_L4_PER_SCR_I2C2			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x58)
#define ARRIA10_NOC_FW_L4_PER_SCR_I2C3			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x5c)
#define ARRIA10_NOC_FW_L4_PER_SCR_I2C4			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x60)
#define ARRIA10_NOC_FW_L4_PER_SCR_SPTIMER0		(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x64)
#define ARRIA10_NOC_FW_L4_PER_SCR_SPTIMER1		(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x68)
#define ARRIA10_NOC_FW_L4_PER_SCR_UART0			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x6c)
#define ARRIA10_NOC_FW_L4_PER_SCR_UART1			(ARRIA10_NOC_L4_PER_L4_PER_SCR_ADDR + 0x70)

#define ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_EN		(ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_ADDR + 0x00)
#define ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_EN_SET		(ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_ADDR + 0x04)
#define ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_EN_CLR		(ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_ADDR + 0x08)
#define ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_REGION0		(ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_ADDR + 0x0c)
#define ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_REGION1		(ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_ADDR + 0x10)
#define ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_REGION2		(ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_ADDR + 0x14)
#define ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_REGION3		(ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_ADDR + 0x18)
#define ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_REGION4		(ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_ADDR + 0x1c)
#define ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_REGION5		(ARRIA10_NOC_FW_OCRAM_OCRAM_SCR_ADDR + 0x20)

#define ARRIA10_NOC_FW_DDR_L3_DDR_SCR_EN		(ARRIA10_NOC_FW_DDR_L3_DDR_SCR_ADDR + 0x00)
#define ARRIA10_NOC_FW_DDR_L3_DDR_SCR_EN_SET		(ARRIA10_NOC_FW_DDR_L3_DDR_SCR_ADDR + 0x04)
#define ARRIA10_NOC_FW_DDR_L3_DDR_SCR_EN_CLR		(ARRIA10_NOC_FW_DDR_L3_DDR_SCR_ADDR + 0x08)
#define ARRIA10_NOC_FW_DDR_L3_DDR_SCR_REGION0		(ARRIA10_NOC_FW_DDR_L3_DDR_SCR_ADDR + 0x0c)
#define ARRIA10_NOC_FW_DDR_L3_DDR_SCR_REGION1		(ARRIA10_NOC_FW_DDR_L3_DDR_SCR_ADDR + 0x10)
#define ARRIA10_NOC_FW_DDR_L3_DDR_SCR_REGION2		(ARRIA10_NOC_FW_DDR_L3_DDR_SCR_ADDR + 0x14)
#define ARRIA10_NOC_FW_DDR_L3_DDR_SCR_REGION3		(ARRIA10_NOC_FW_DDR_L3_DDR_SCR_ADDR + 0x18)
#define ARRIA10_NOC_FW_DDR_L3_DDR_SCR_REGION4		(ARRIA10_NOC_FW_DDR_L3_DDR_SCR_ADDR + 0x1c)
#define ARRIA10_NOC_FW_DDR_L3_DDR_SCR_REGION5		(ARRIA10_NOC_FW_DDR_L3_DDR_SCR_ADDR + 0x20)
#define ARRIA10_NOC_FW_DDR_L3_DDR_SCR_REGION6		(ARRIA10_NOC_FW_DDR_L3_DDR_SCR_ADDR + 0x24)
#define ARRIA10_NOC_FW_DDR_L3_DDR_SCR_REGION7		(ARRIA10_NOC_FW_DDR_L3_DDR_SCR_ADDR + 0x28)
#define ARRIA10_NOC_FW_DDR_L3_DDR_SCR_GLOBAL		(ARRIA10_NOC_FW_DDR_L3_DDR_SCR_ADDR + 0x2c)

#define ARRIA10_NOC_FW_SOC2FPGA_SOC2FPGA_SCR_LWSOC2FPGA	(ARRIA10_NOC_FW_SOC2FPGA_SOC2FPGA_SCR_ADDR + 0x00)
#define ARRIA10_NOC_FW_SOC2FPGA_SOC2FPGA_SCR_SOC2FPGA	(ARRIA10_NOC_FW_SOC2FPGA_SOC2FPGA_SCR_ADDR + 0x04)

#endif