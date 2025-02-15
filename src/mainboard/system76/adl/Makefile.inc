## SPDX-License-Identifier: GPL-2.0-only

CPPFLAGS_common += -I$(src)/mainboard/$(MAINBOARDDIR)/include
CPPFLAGS_common += -I$(src)/mainboard/$(MAINBOARDDIR)/variants/$(VARIANT_DIR)/include

bootblock-y += bootblock.c
bootblock-y += variants/$(VARIANT_DIR)/gpio_early.c

romstage-y += variants/$(VARIANT_DIR)/romstage.c

ramstage-y += ramstage.c
ramstage-y += variants/$(VARIANT_DIR)/hda_verb.c
ramstage-y += variants/$(VARIANT_DIR)/gpio.c
ramstage-$(CONFIG_DRIVERS_I2C_TAS5825M) += variants/$(VARIANT_DIR)/tas5825m.c

SPD_SOURCES = samsung-P4AAF165WA-BCWDE
