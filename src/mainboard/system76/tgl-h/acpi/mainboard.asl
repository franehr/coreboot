/* SPDX-License-Identifier: GPL-2.0-only */

#include <variant/dgpu.h>

#define EC_GPE_SCI 0x6E
#define EC_GPE_SWI 0x6B
#include <ec/system76/ec/acpi/ec.asl>

Scope (\_SB) {
	#include "sleep.asl"
	Scope (PCI0) {
		#include "backlight.asl"
		Scope (PEG1) {
			#include <drivers/gfx/nvidia/acpi/tigerlake.asl>
		}
	}
}
