// SPDX-License-Identifier: GPL-2.0+
/*
 * (C) Copyright 2014
 * NVIDIA Corporation <www.nvidia.com>
 */

#include <common.h>
#include <dm.h>
#include <power/as3722.h>
#include <power/pmic.h>

#include <asm/arch/gpio.h>
#include <asm/arch/pinmux.h>

#include "pinmux-config-tn8.h"

/*
 * Routine: pinmux_init
 * Description: Do individual peripheral pinmux configs
 */
void pinmux_init(void)
{
	pinmux_clear_tristate_input_clamping();

	gpio_config_table(tn8_gpio_inits,
			  ARRAY_SIZE(tn8_gpio_inits));

	pinmux_config_pingrp_table(tn8_pingrps,
				   ARRAY_SIZE(tn8_pingrps));

	pinmux_config_drvgrp_table(tn8_drvgrps,
				   ARRAY_SIZE(tn8_drvgrps));
}

void pmic_enable_cpu_vdd(void)
{
}
