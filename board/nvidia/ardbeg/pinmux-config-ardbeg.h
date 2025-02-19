/*
 * Copyright (c) 2019, NVIDIA CORPORATION. All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0+
 */

/*
 * THIS FILE IS AUTO-GENERATED - DO NOT EDIT!
 *
 * To generate this file, use the tegra-pinmux-scripts tool available from
 * https://github.com/NVIDIA/tegra-pinmux-scripts
 * Run "board-to-uboot.py ardbeg".
 */

#ifndef _PINMUX_CONFIG_ARDBEG_H_
#define _PINMUX_CONFIG_ARDBEG_H_

#define GPIO_INIT(_port, _gpio, _init)			\
	{						\
		.gpio	= TEGRA_GPIO(_port, _gpio),	\
		.init	= TEGRA_GPIO_INIT_##_init,	\
	}

static const struct tegra_gpio_config ardbeg_gpio_inits[] = {
	/*        port, pin, init_val */
};

#define PINCFG(_pingrp, _mux, _pull, _tri, _io, _od, _rcv_sel)	\
	{							\
		.pingrp		= PMUX_PINGRP_##_pingrp,	\
		.func		= PMUX_FUNC_##_mux,		\
		.pull		= PMUX_PULL_##_pull,		\
		.tristate	= PMUX_TRI_##_tri,		\
		.io		= PMUX_PIN_##_io,		\
		.od		= PMUX_PIN_OD_##_od,		\
		.rcv_sel	= PMUX_PIN_RCV_SEL_##_rcv_sel,	\
		.lock		= PMUX_PIN_LOCK_DEFAULT,	\
		.ioreset	= PMUX_PIN_IO_RESET_DEFAULT,	\
	}

static const struct pmux_pingrp_config ardbeg_pingrps[] = {
	/*     pingrp,                 mux,          pull,   tri,      e_input, od,      rcv_sel */
	PINCFG(CLK_32K_OUT_PA0,        SOC,          UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(UART3_CTS_N_PA1,        UARTC,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(DAP2_FS_PA2,            I2S1,         NORMAL, TRISTATE, INPUT,   DEFAULT, DEFAULT),
	PINCFG(DAP2_SCLK_PA3,          I2S1,         NORMAL, TRISTATE, INPUT,   DEFAULT, DEFAULT),
	PINCFG(DAP2_DIN_PA4,           I2S1,         NORMAL, TRISTATE, INPUT,   DEFAULT, DEFAULT),
	PINCFG(DAP2_DOUT_PA5,          I2S1,         NORMAL, TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(SDMMC3_CLK_PA6,         SDMMC3,       NORMAL, NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC3_CMD_PA7,         SDMMC3,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PB0,                    UARTD,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PB1,                    UARTD,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC3_DAT3_PB4,        SDMMC3,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC3_DAT2_PB5,        SDMMC3,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC3_DAT1_PB6,        SDMMC3,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC3_DAT0_PB7,        SDMMC3,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(UART3_RTS_N_PC0,        UARTC,        UP,     NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(UART2_TXD_PC2,          IRDA,         UP,     NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(UART2_RXD_PC3,          IRDA,         UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(GEN1_I2C_SCL_PC4,       I2C1,         NORMAL, NORMAL,   INPUT,   DISABLE, DEFAULT),
	PINCFG(GEN1_I2C_SDA_PC5,       I2C1,         NORMAL, NORMAL,   INPUT,   DISABLE, DEFAULT),
	PINCFG(PC7,                    RSVD1,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PG0,                    RSVD4,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PG1,                    RSVD4,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PG2,                    RSVD4,        DOWN,   NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PG3,                    RSVD4,        DOWN,   NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PG4,                    SPI4,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PG5,                    SPI4,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PG6,                    SPI4,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PG7,                    SPI4,         NORMAL, NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PH0,                    DTV,          DOWN,   TRISTATE, INPUT,   DEFAULT, DEFAULT),
	PINCFG(PH1,                    PWM1,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PH2,                    GMI,          NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PH3,                    GMI,          NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PH4,                    GMI,          UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PH5,                    GMI,          NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PH6,                    DTV,          DOWN,   TRISTATE, INPUT,   DEFAULT, DEFAULT),
	PINCFG(PH7,                    DTV,          DOWN,   TRISTATE, INPUT,   DEFAULT, DEFAULT),
	PINCFG(PI0,                    RSVD4,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PI1,                    RSVD1,        DOWN,   NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PI2,                    GMI,          DOWN,   NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PI3,                    SPI4,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PI4,                    GMI,          NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PI5,                    GMI,          UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PI6,                    RSVD1,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PI7,                    DTV,          DOWN,   TRISTATE, INPUT,   DEFAULT, DEFAULT),
	PINCFG(PJ0,                    RSVD1,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PJ2,                    SOC,          UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(UART2_CTS_N_PJ5,        UARTB,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(UART2_RTS_N_PJ6,        UARTB,        UP,     NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PJ7,                    UARTD,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PK0,                    RSVD1,        DOWN,   NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PK1,                    GMI,          NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PK2,                    RSVD4,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PK3,                    GMI,          UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PK4,                    GMI,          NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(SPDIF_OUT_PK5,          RSVD3,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(SPDIF_IN_PK6,           RSVD3,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PK7,                    UARTD,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(DAP1_FS_PN0,            I2S0,         NORMAL, TRISTATE, INPUT,   DEFAULT, DEFAULT),
	PINCFG(DAP1_DIN_PN1,           I2S0,         NORMAL, TRISTATE, INPUT,   DEFAULT, DEFAULT),
	PINCFG(DAP1_DOUT_PN2,          I2S0,         NORMAL, TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(DAP1_SCLK_PN3,          I2S0,         NORMAL, TRISTATE, INPUT,   DEFAULT, DEFAULT),
	PINCFG(USB_VBUS_EN0_PN4,       USB,          UP,     NORMAL,   INPUT,   DISABLE, DEFAULT),
	PINCFG(USB_VBUS_EN1_PN5,       USB,          UP,     NORMAL,   INPUT,   DISABLE, DEFAULT),
	PINCFG(HDMI_INT_PN7,           RSVD4,        DOWN,   NORMAL,   INPUT,   DEFAULT, NORMAL),
	PINCFG(ULPI_DATA7_PO0,         SPI2,         UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(ULPI_DATA0_PO1,         SPI3,         DOWN,   TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(ULPI_DATA1_PO2,         SPI3,         UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(ULPI_DATA2_PO3,         SPI3,         UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(ULPI_DATA3_PO4,         SPI3,         DOWN,   TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(ULPI_DATA4_PO5,         SPI2,         DOWN,   NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(ULPI_DATA5_PO6,         SPI2,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(ULPI_DATA6_PO7,         SPI2,         UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(DAP3_FS_PP0,            I2S2,         DOWN,   TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(DAP3_DIN_PP1,           I2S2,         DOWN,   TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(DAP3_DOUT_PP2,          I2S2,         DOWN,   TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(DAP3_SCLK_PP3,          I2S2,         DOWN,   TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(DAP4_FS_PP4,            I2S3,         NORMAL, TRISTATE, INPUT,   DEFAULT, DEFAULT),
	PINCFG(DAP4_DIN_PP5,           I2S3,         NORMAL, TRISTATE, INPUT,   DEFAULT, DEFAULT),
	PINCFG(DAP4_DOUT_PP6,          I2S3,         NORMAL, TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(DAP4_SCLK_PP7,          I2S3,         NORMAL, TRISTATE, INPUT,   DEFAULT, DEFAULT),
	PINCFG(KB_COL0_PQ0,            RSVD4,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(KB_COL1_PQ1,            RSVD4,        NORMAL, NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(KB_COL2_PQ2,            RSVD4,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(KB_COL3_PQ3,            KBC,          DOWN,   TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(KB_COL4_PQ4,            SDMMC3,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(KB_COL5_PQ5,            RSVD4,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(KB_COL6_PQ6,            RSVD2,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(KB_COL7_PQ7,            RSVD2,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(KB_ROW0_PR0,            RSVD4,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(KB_ROW1_PR1,            RSVD4,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(KB_ROW2_PR2,            RSVD4,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(KB_ROW3_PR3,            SYS,          NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(KB_ROW4_PR4,            RSVD3,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(KB_ROW5_PR5,            RSVD3,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(KB_ROW6_PR6,            DISPLAYA_ALT, NORMAL, NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(KB_ROW7_PR7,            RSVD2,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(KB_ROW8_PS0,            RSVD2,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(KB_ROW9_PS1,            UARTA,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(KB_ROW10_PS2,           UARTA,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(KB_ROW11_PS3,           RSVD3,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(KB_ROW12_PS4,           RSVD3,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(KB_ROW13_PS5,           RSVD4,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(KB_ROW14_PS6,           RSVD4,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(KB_ROW15_PS7,           SOC,          UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(KB_ROW16_PT0,           KBC,          DOWN,   TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(KB_ROW17_PT1,           KBC,          DOWN,   TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(GEN2_I2C_SCL_PT5,       I2C2,         NORMAL, NORMAL,   INPUT,   ENABLE,  DEFAULT),
	PINCFG(GEN2_I2C_SDA_PT6,       I2C2,         NORMAL, NORMAL,   INPUT,   ENABLE,  DEFAULT),
	PINCFG(SDMMC4_CMD_PT7,         SDMMC4,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PU0,                    RSVD4,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PU1,                    RSVD4,        DOWN,   NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PU2,                    RSVD4,        DOWN,   NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PU3,                    PWM0,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PU4,                    PWM1,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PU5,                    PWM2,         UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PU6,                    RSVD3,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PV0,                    RSVD1,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PV1,                    RSVD1,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC3_CD_N_PV2,        SDMMC3,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC1_WP_N_PV3,        SDMMC1,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(DDC_SCL_PV4,            I2C4,         NORMAL, NORMAL,   INPUT,   DEFAULT, NORMAL),
	PINCFG(DDC_SDA_PV5,            I2C4,         NORMAL, NORMAL,   INPUT,   DEFAULT, NORMAL),
	PINCFG(GPIO_W2_AUD_PW2,        RSVD2,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(GPIO_W3_AUD_PW3,        SPI1,         UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(DAP_MCLK1_PW4,          EXTPERIPH1,   NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(CLK2_OUT_PW5,           EXTPERIPH2,   NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(UART3_TXD_PW6,          UARTC,        UP,     NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(UART3_RXD_PW7,          UARTC,        UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(DVFS_PWM_PX0,           CLDVFS,       NORMAL, TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(GPIO_X1_AUD_PX1,        SPI6,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(DVFS_CLK_PX2,           CLDVFS,       NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(GPIO_X3_AUD_PX3,        SPI6,         UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(GPIO_X4_AUD_PX4,        SPI1,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(GPIO_X5_AUD_PX5,        SPI1,         UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(GPIO_X6_AUD_PX6,        SPI1,         UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(GPIO_X7_AUD_PX7,        SPI1,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(ULPI_CLK_PY0,           SPI1,         UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(ULPI_DIR_PY1,           SPI1,         UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(ULPI_NXT_PY2,           SPI1,         UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(ULPI_STP_PY3,           SPI1,         UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC1_DAT3_PY4,        SDMMC1,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC1_DAT2_PY5,        SDMMC1,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC1_DAT1_PY6,        SDMMC1,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC1_DAT0_PY7,        SDMMC1,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC1_CLK_PZ0,         SDMMC1,       NORMAL, NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC1_CMD_PZ1,         SDMMC1,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PWR_I2C_SCL_PZ6,        I2CPWR,       NORMAL, NORMAL,   INPUT,   ENABLE,  DEFAULT),
	PINCFG(PWR_I2C_SDA_PZ7,        I2CPWR,       NORMAL, NORMAL,   INPUT,   ENABLE,  DEFAULT),
	PINCFG(SDMMC4_DAT0_PAA0,       SDMMC4,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC4_DAT1_PAA1,       SDMMC4,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC4_DAT2_PAA2,       SDMMC4,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC4_DAT3_PAA3,       SDMMC4,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC4_DAT4_PAA4,       SDMMC4,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC4_DAT5_PAA5,       SDMMC4,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC4_DAT6_PAA6,       SDMMC4,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC4_DAT7_PAA7,       SDMMC4,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PBB0,                   VIMCLK2_ALT,  NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(CAM_I2C_SCL_PBB1,       I2C3,         NORMAL, NORMAL,   INPUT,   ENABLE,  DEFAULT),
	PINCFG(CAM_I2C_SDA_PBB2,       I2C3,         NORMAL, NORMAL,   INPUT,   ENABLE,  DEFAULT),
	PINCFG(PBB3,                   VGP3,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PBB4,                   VGP4,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PBB5,                   VGP5,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PBB6,                   I2S4,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PBB7,                   I2S4,         NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(CAM_MCLK_PCC0,          VI_ALT3,      NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PCC1,                   I2S4,         DOWN,   NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(PCC2,                   I2S4,         DOWN,   NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC4_CLK_PCC4,        SDMMC4,       NORMAL, NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(CLK2_REQ_PCC5,          DAP,          NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PEX_L0_RST_N_PDD1,      PE0,          DOWN,   TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PEX_L0_CLKREQ_N_PDD2,   PE0,          DOWN,   TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PEX_WAKE_N_PDD3,        PE,           DOWN,   TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PEX_L1_RST_N_PDD5,      PE1,          DOWN,   TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PEX_L1_CLKREQ_N_PDD6,   PE1,          DOWN,   TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(CLK3_OUT_PEE0,          EXTPERIPH3,   NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(CLK3_REQ_PEE1,          RSVD4,        NORMAL, TRISTATE, OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(DAP_MCLK1_REQ_PEE2,     DAP,          DOWN,   NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(HDMI_CEC_PEE3,          CEC,          NORMAL, NORMAL,   INPUT,   ENABLE,  DEFAULT),
	PINCFG(SDMMC3_CLK_LB_OUT_PEE4, SDMMC3,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(SDMMC3_CLK_LB_IN_PEE5,  SDMMC3,       UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(DP_HPD_PFF0,            DP,           NORMAL, NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(USB_VBUS_EN2_PFF1,      USB,          UP,     NORMAL,   INPUT,   DISABLE, DEFAULT),
	PINCFG(PFF2,                   RSVD2,        DOWN,   TRISTATE, OUTPUT,  DISABLE, DEFAULT),
	PINCFG(CORE_PWR_REQ,           PWRON,        NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(CPU_PWR_REQ,            CPU,          NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(PWR_INT_N,              PMI,          UP,     NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(RESET_OUT_N,            RESET_OUT_N,  NORMAL, NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
	PINCFG(OWR,                    RSVD2,        DOWN,   TRISTATE, OUTPUT,  DEFAULT, NORMAL),
	PINCFG(CLK_32K_IN,             CLK,          NORMAL, NORMAL,   INPUT,   DEFAULT, DEFAULT),
	PINCFG(JTAG_RTCK,              RTCK,         UP,     NORMAL,   OUTPUT,  DEFAULT, DEFAULT),
};

#define DRVCFG(_drvgrp, _slwf, _slwr, _drvup, _drvdn, _lpmd, _schmt, _hsm) \
	{						\
		.drvgrp = PMUX_DRVGRP_##_drvgrp,	\
		.slwf   = _slwf,			\
		.slwr   = _slwr,			\
		.drvup  = _drvup,			\
		.drvdn  = _drvdn,			\
		.lpmd   = PMUX_LPMD_##_lpmd,		\
		.schmt  = PMUX_SCHMT_##_schmt,		\
		.hsm    = PMUX_HSM_##_hsm,		\
	}

static const struct pmux_drvgrp_config ardbeg_drvgrps[] = {
};

#endif /* PINMUX_CONFIG_ARDBEG_H */
