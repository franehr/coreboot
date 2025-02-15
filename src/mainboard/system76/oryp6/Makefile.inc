CPPFLAGS_common += -I$(src)/mainboard/$(MAINBOARDDIR)/variants/$(VARIANT_DIR)/include

bootblock-y += bootblock.c
bootblock-y += variants/$(VARIANT_DIR)/gpio_early.c

romstage-y += romstage.c
romstage-y += variants/$(VARIANT_DIR)/romstage.c

ramstage-y += ramstage.c
ramstage-y += tas5825m.c
ramstage-y += variants/$(VARIANT_DIR)/gpio.c
ramstage-y += variants/$(VARIANT_DIR)/hda_verb.c
