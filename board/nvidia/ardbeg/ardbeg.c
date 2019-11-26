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

#include "pinmux-config-ardbeg.h"

/*
 * Routine: pinmux_init
 * Description: Do individual peripheral pinmux configs
 */
void pinmux_init(void)
{
	pinmux_clear_tristate_input_clamping();

	gpio_config_table(ardbeg_gpio_inits,
			  ARRAY_SIZE(ardbeg_gpio_inits));

	pinmux_config_pingrp_table(ardbeg_pingrps,
				   ARRAY_SIZE(ardbeg_pingrps));

	pinmux_config_drvgrp_table(ardbeg_drvgrps,
				   ARRAY_SIZE(ardbeg_drvgrps));
}

void pmic_enable_cpu_vdd(void)
{
}
