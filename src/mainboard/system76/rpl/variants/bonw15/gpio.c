/* SPDX-License-Identifier: GPL-2.0-only */

#include <mainboard/gpio.h>
#include <soc/gpio.h>

static const struct pad_config gpio_table[] = {
	/* ------- GPIO Group GPD ------- */
	PAD_CFG_NF(GPD0, UP_20K, PWROK, NF1), // PM_BATLOW#
	PAD_CFG_NF(GPD1, NATIVE, PWROK, NF1), // AC_PRESENT
	_PAD_CFG_STRUCT(GPD2, 0x42880100, 0x0000), // PCH_LAN_WAKE#
	PAD_CFG_NF(GPD3, UP_20K, PWROK, NF1), // PWR_BTN#
	PAD_CFG_NF(GPD4, NONE, PWROK, NF1), // SUSB#_PCH
	PAD_CFG_NF(GPD5, NONE, PWROK, NF1), // SUSC#_PCH
	PAD_CFG_NF(GPD6, NONE, PWROK, NF1), // SLP_A#_N
	PAD_CFG_GPI(GPD7, NONE, PWROK), // GPD_7
	PAD_CFG_NF(GPD8, NONE, PWROK, NF1), // CNVI_SUSCLK
	PAD_CFG_GPO(GPD9, 0, PWROK), // SLP_WLAN_N
	PAD_CFG_NF(GPD10, NONE, PWROK, NF1), // SLP_S5#
	PAD_CFG_GPO(GPD11, 0, DEEP), // LANPHYPC
	PAD_CFG_GPO(GPD12, 0, DEEP), // TP_GPD_12

	/* ------- GPIO Group GPP_A ------- */
	PAD_CFG_NF(GPP_A0, UP_20K, DEEP, NF1), // ESPI_IO0_EC
	PAD_CFG_NF(GPP_A1, UP_20K, DEEP, NF1), // ESPI_IO1_EC
	PAD_CFG_NF(GPP_A2, UP_20K, DEEP, NF1), // ESPI_IO2_EC
	PAD_CFG_NF(GPP_A3, UP_20K, DEEP, NF1), // ESPI_IO3_EC
	PAD_CFG_NF(GPP_A4, UP_20K, DEEP, NF1), // ESPI_CS_EC#
	PAD_CFG_NF(GPP_A5, DN_20K, DEEP, NF1), // ESPI_CLK_EC
	PAD_CFG_NF(GPP_A6, NONE, DEEP, NF1), // ESPI_RESET_N
	PAD_CFG_GPO(GPP_A7, 0, DEEP),
	PAD_CFG_GPO(GPP_A8, 0, DEEP),
	PAD_CFG_GPO(GPP_A9, 0, DEEP),
	PAD_CFG_NF(GPP_A10, NONE, DEEP, NF1), // ESPI_ALERT0#
	PAD_CFG_GPI(GPP_A11, UP_20K, DEEP), // GPIO4_GC6_NVDD_EN_R
	PAD_CFG_GPO(GPP_A12, 0, DEEP),
	PAD_CFG_GPO(GPP_A13, 0, DEEP),
	PAD_CFG_GPO(GPP_A14, 0, DEEP),

	/* ------- GPIO Group GPP_B ------- */
	_PAD_CFG_STRUCT(GPP_B0, 0x82900100, 0x0000), // TPM_PIRQ#
	PAD_CFG_GPO(GPP_B1, 0, DEEP),
	PAD_CFG_GPI(GPP_B2, NONE, DEEP), // CNVI_WAKE#
	PAD_CFG_GPO(GPP_B3, 1, DEEP), // PCH_BT_EN
	PAD_CFG_GPO(GPP_B4, 0, DEEP),
	PAD_CFG_GPO(GPP_B5, 0, DEEP),
	PAD_CFG_GPO(GPP_B6, 0, DEEP),
	PAD_CFG_GPO(GPP_B7, 0, DEEP),
	PAD_CFG_GPO(GPP_B8, 0, DEEP),
	PAD_CFG_GPO(GPP_B9, 0, DEEP),
	PAD_CFG_GPO(GPP_B10, 0, DEEP),
	PAD_CFG_GPO(GPP_B11, 0, DEEP),
	PAD_CFG_NF(GPP_B12, NONE, DEEP, NF1), // SLP_S0#
	PAD_CFG_NF(GPP_B13, NONE, DEEP, NF1), // PLT_RST#
	PAD_CFG_NF(GPP_B14, NONE, DEEP, NF1), // HDA_SPKR
	PAD_CFG_GPO(GPP_B15, 0, DEEP), // PS8461_SW
	PAD_CFG_GPO(GPP_B16, 0, DEEP),
	PAD_CFG_GPO(GPP_B17, 1, RSMRST), // @.5G_LAN_EN
	PAD_CFG_NF(GPP_B18, NONE, RSMRST, NF1), // PMCALERT#
	PAD_CFG_GPO(GPP_B19, 1, DEEP), // PCH_WLAN_EN
	PAD_CFG_GPO(GPP_B20, 0, DEEP),
	PAD_CFG_GPO(GPP_B21, 0, DEEP), // GPP_B21
	PAD_CFG_GPO(GPP_B22, 1, DEEP), // LAN_RST#
	PAD_CFG_GPI(GPP_B23, NONE, DEEP), // GPP_B23

	/* ------- GPIO Group GPP_C ------- */
	PAD_CFG_NF(GPP_C0, NONE, DEEP, NF1), // SMB_CLK
	PAD_CFG_NF(GPP_C1, NONE, DEEP, NF1), // SMB_DATA
	PAD_CFG_GPI(GPP_C2, NONE, PLTRST), // PCH_PORT80_LED
	PAD_CFG_GPO(GPP_C3, 0, DEEP), // GPPC_I2C2_SDA
	PAD_CFG_GPO(GPP_C4, 0, DEEP), // GPPC_I2C2_SCL
	PAD_CFG_NF(GPP_C5, NONE, DEEP, NF1), // GPP_C_5_SML0ALERT_N
	PAD_CFG_GPO(GPP_C6, 0, DEEP),
	PAD_CFG_GPO(GPP_C7, 0, DEEP),
	PAD_CFG_GPI(GPP_C8, NONE, DEEP), // TPM_DET
	PAD_CFG_GPO(GPP_C9, 0, DEEP),
	PAD_CFG_GPO(GPP_C10, 0, DEEP),
	PAD_CFG_GPO(GPP_C11, 0, DEEP),
	PAD_CFG_GPO(GPP_C12, 0, DEEP),
	PAD_CFG_GPO(GPP_C13, 0, DEEP),
	PAD_CFG_GPO(GPP_C14, 0, DEEP),
	PAD_CFG_GPO(GPP_C15, 0, DEEP),
	PAD_CFG_NF(GPP_C16, NONE, DEEP, NF1), // I2C_SDA_TP
	PAD_CFG_NF(GPP_C17, NONE, DEEP, NF1), // I2C_SCL_TP
	PAD_CFG_NF(GPP_C18, NONE, DEEP, NF1), // PCH_I2C_SDA
	PAD_CFG_NF(GPP_C19, NONE, DEEP, NF1), // PCH_I2C_SCL
	// GPP_C20 (UART2_RXD) configured in bootblock
	// GPP_C21 (UART2_TXD) configured in bootblock
	PAD_CFG_GPO(GPP_C22, 0, DEEP), // ROM_I2C_EN
	PAD_CFG_GPO(GPP_C23, 0, DEEP),

	/* ------- GPIO Group GPP_D ------- */
	PAD_CFG_GPO(GPP_D0, 0, DEEP),
	PAD_CFG_GPO(GPP_D1, 0, DEEP),
	PAD_CFG_GPO(GPP_D2, 0, DEEP),
	PAD_CFG_GPO(GPP_D3, 0, DEEP), // GFX_DETECT_STRAP
	PAD_CFG_GPO(GPP_D4, 0, DEEP), // GPP_D4_SML1CLK
	PAD_CFG_GPO(GPP_D5, 1, DEEP), // M.2_BT_PCMFRM_CRF_RST_N
	// GPP_D6 (M.2_BT_PCMOUT_CLKREQ0) configured by FSP
	PAD_CFG_GPO(GPP_D7, 0, DEEP), // GPP_D7
	PAD_NC(GPP_D8, NONE), // GPP_D8
	PAD_CFG_NF(GPP_D9, NATIVE, DEEP, NF1), // GPP_D9_SML0CLK
	PAD_CFG_NF(GPP_D10, NATIVE, DEEP, NF1), // GPP_D10_SML0DATA
	PAD_CFG_NF(GPP_D11, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D12, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D13, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D14, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D15, NATIVE, DEEP, NF1), // GPP_D15_SML1DATA
	PAD_CFG_NF(GPP_D16, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D17, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D18, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D19, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D20, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_D21, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_D22, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_D23, NONE, DEEP, NF1),

	/* ------- GPIO Group GPP_E ------- */
	PAD_CFG_GPO(GPP_E0, 0, DEEP),
	PAD_CFG_GPO(GPP_E1, 0, DEEP),
	PAD_CFG_GPO(GPP_E2, 0, DEEP),
	PAD_CFG_GPO(GPP_E3, 0, DEEP),
	PAD_CFG_GPO(GPP_E4, 0, DEEP),
	PAD_CFG_GPO(GPP_E5, 0, DEEP),
	PAD_CFG_GPO(GPP_E6, 0, DEEP),
	PAD_CFG_GPI_INT(GPP_E7, NONE, PLTRST, LEVEL), // TP_ATTN#
	PAD_CFG_NF(GPP_E8, NONE, DEEP, NF1), // SATA_LED#
	PAD_NC(GPP_E9, NONE), // GPP_E_9_USB_OC0_N
	PAD_NC(GPP_E10, NONE), // GPP_E_10_USB_OC1_N
	PAD_NC(GPP_E11, NONE), // GPP_E_11_USB_OC2_N
	PAD_NC(GPP_E12, NONE), // GPP_E_12_USB_OC3_N
	PAD_CFG_GPO(GPP_E13, 0, DEEP),
	PAD_CFG_GPO(GPP_E14, 0, DEEP),
	PAD_CFG_GPO(GPP_E15, 0, DEEP),
	PAD_CFG_GPO(GPP_E16, 0, DEEP),
	PAD_CFG_GPO(GPP_E17, 0, DEEP),
	PAD_CFG_GPO(GPP_E18, 1, DEEP), // SB_BLON
	PAD_CFG_GPO(GPP_E19, 0, DEEP),
	PAD_CFG_GPO(GPP_E20, 0, DEEP),
	PAD_CFG_GPO(GPP_E21, 0, DEEP),

	/* ------- GPIO Group GPP_F ------- */
	PAD_CFG_GPO(GPP_F0, 0, DEEP),
	PAD_CFG_GPO(GPP_F1, 0, DEEP),
	PAD_CFG_GPO(GPP_F2, 0, DEEP),
	PAD_CFG_GPO(GPP_F3, 0, DEEP),
	PAD_CFG_GPO(GPP_F4, 0, DEEP),
	PAD_CFG_GPO(GPP_F5, 0, PLTRST), // GPP_F5_TBT_RTD3
	PAD_CFG_GPO(GPP_F6, 0, DEEP),
	PAD_CFG_GPO(GPP_F7, 0, DEEP),
	PAD_CFG_GPI(GPP_F8, NONE, DEEP), // GC6_FB_EN_PCH
	_PAD_CFG_STRUCT(GPP_F9, 0x42880100, 0x0000), // GPP_F9_TBT_WAKE#
	PAD_CFG_GPO(GPP_F10, 0, DEEP),
	PAD_CFG_GPO(GPP_F11, 0, DEEP),
	PAD_CFG_GPO(GPP_F12, 0, DEEP),
	PAD_CFG_GPO(GPP_F13, 0, DEEP),
	PAD_CFG_GPO(GPP_F14, 0, DEEP), // PS_ON#
	PAD_CFG_GPI(GPP_F15, NONE, DEEP), // H_SKTOCC_N
	PAD_CFG_GPO(GPP_F16, 0, DEEP), // GPP_F16_TBT_RST#
	PAD_CFG_GPO(GPP_F17, 0, DEEP),
	PAD_CFG_GPO(GPP_F18, 0, DEEP), // CCD_FW_WP#
	PAD_CFG_NF(GPP_F19, NONE, DEEP, NF1), // NB_ENAVDD
	PAD_CFG_NF(GPP_F20, NONE, DEEP, NF1), // BLON
	PAD_CFG_NF(GPP_F21, NONE, DEEP, NF1), // EDP_BRIGHTNESS
	// GPP_F22 (DGPU_PWR_EN) configured in bootblock
	PAD_CFG_GPO(GPP_F23, 0, DEEP),

	/* ------- GPIO Group GPP_G ------- */
	PAD_CFG_GPO(GPP_G0, 0, RSMRST), // TBT_USB_FORCE_PWR
	PAD_CFG_GPI(GPP_G1, NONE, DEEP), // GPP_G1
	PAD_CFG_GPI(GPP_G2, DN_20K, DEEP), // DNX_FORCE_RELOAD
	PAD_CFG_GPI(GPP_G3, NONE, DEEP), // GPP_G3
	PAD_CFG_GPI(GPP_G4, NONE, DEEP), // GPP_G4
	PAD_CFG_NF(GPP_G5, NONE, DEEP, NF1), // SLP_DRAM_N
	PAD_CFG_GPI(GPP_G6, NONE, DEEP), // GPP_G6
	_PAD_CFG_STRUCT(GPP_G7, 0x42800100, 0x0000), // TBCIO_PLUG_EVENT#

	/* ------- GPIO Group GPP_H ------- */
	PAD_CFG_GPI(GPP_H0, NONE, DEEP), // VAL_SV_ADVANCE_STRAP
	PAD_CFG_GPO(GPP_H1, 0, DEEP),
	PAD_CFG_GPI(GPP_H2, NONE, DEEP), // WLAN_WAKE_N
	// GPP_H3 (WLAN_CLKREQ9#) configured by FSP
	// GPP_H4 (SSD1_CLKREQ10#) configured by FSP
	// GPP_H5 (SSD2_CLKREQ11#) configured by FSP
	// GPP_H6 (SSD3_CLKREQ12#) configured by FSP
	// GPP_H7 (GLAN_CLKREQ13#) configured by FSP
	// GPP_H8 (GPU_PCIE_CLKREQ14#) configured by FSP
	// GPP_H9 (TBT_CLKREQ15#) configured by FSP
	PAD_CFG_NF(GPP_H10, NONE, DEEP, NF1), // GPP_H10_SML2CLK
	PAD_CFG_NF(GPP_H11, NONE, DEEP, NF1), // GPP_H11_SML2DATA
	PAD_CFG_GPI(GPP_H12, NONE, DEEP), // GPP_H12
	PAD_CFG_NF(GPP_H13, NONE, DEEP, NF1), // GPP_H13_SML3CLK
	PAD_CFG_NF(GPP_H14, NONE, DEEP, NF1), // GPP_H14_SML3DATA
	PAD_CFG_GPI(GPP_H15, NONE, DEEP), // GPP_H_15_SML3ALERT_N
	PAD_CFG_GPI(GPP_H16, NONE, DEEP),
	PAD_CFG_GPO(GPP_H17, 1, DEEP), // M.2_PLT_RST_CNTRL3#
	PAD_CFG_GPI(GPP_H18, NONE, DEEP), // GPP_H18
	PAD_CFG_GPO(GPP_H19, 0, DEEP),
	PAD_CFG_GPO(GPP_H20, 0, DEEP),
	PAD_CFG_GPO(GPP_H21, 1, DEEP), // TBT_MRESET_PCH
	PAD_CFG_GPO(GPP_H22, 0, DEEP),
	PAD_CFG_GPI(GPP_H23, NONE, DEEP), // TIME_SYNC0

	/* ------- GPIO Group GPP_I ------- */
	PAD_CFG_GPO(GPP_I0, 0, DEEP),
	_PAD_CFG_STRUCT(GPP_I1, 0x86880100, 0x0000), // G_DP_DHPD_E
	_PAD_CFG_STRUCT(GPP_I2, 0x86880100, 0x0000), // DP_D_HPD
	_PAD_CFG_STRUCT(GPP_I3, 0x86880100, 0x0000), // HDMI_HPD
	_PAD_CFG_STRUCT(GPP_I4, 0x86880100, 0x0000), // DP_A_HPD
	PAD_CFG_GPO(GPP_I5, 0, DEEP),
	PAD_CFG_GPO(GPP_I6, 0, DEEP),
	PAD_CFG_GPO(GPP_I7, 0, DEEP),
	PAD_CFG_GPO(GPP_I8, 0, DEEP),
	PAD_CFG_GPO(GPP_I9, 0, DEEP),
	PAD_CFG_GPO(GPP_I10, 0, DEEP),
	PAD_NC(GPP_I11, NONE), // GPP_I_11_USB_OC4_N
	PAD_NC(GPP_I12, NONE), // GPP_I_12_USB_OC5_N
	PAD_NC(GPP_I13, NONE), // GPP_I_13_USB_OC6_N
	PAD_NC(GPP_I14, NONE), // GPP_I_14_USB_OC7_N
	PAD_CFG_GPO(GPP_I15, 0, DEEP),
	PAD_CFG_GPO(GPP_I16, 0, DEEP),
	PAD_CFG_GPO(GPP_I17, 0, DEEP),
	PAD_CFG_GPI(GPP_I18, NONE, DEEP), // GPP_I18
	PAD_CFG_GPO(GPP_I19, 0, DEEP),
	PAD_CFG_GPO(GPP_I20, 0, DEEP),
	PAD_CFG_GPO(GPP_I21, 0, DEEP),
	PAD_CFG_GPI(GPP_I22, NONE, DEEP), // GPP_I22

	/* ------- GPIO Group GPP_J ------- */
	PAD_CFG_NF(GPP_J0, NONE, DEEP, NF1), // CNVI_GNSS_PA_BLANKING
	PAD_CFG_NF(GPP_J1, NONE, DEEP, NF1), // CPU_C10_GATE#
	PAD_CFG_NF(GPP_J2, NONE, DEEP, NF1), // CNVI_BRI_DT_R
	PAD_CFG_NF(GPP_J3, UP_20K, DEEP, NF1), // CNVI_BRI_RSP
	PAD_CFG_NF(GPP_J4, NONE, DEEP, NF1), // CNVI_RGI_DT_R
	PAD_CFG_NF(GPP_J5, UP_20K, DEEP, NF1), // CNVI_RGI_RSP
	PAD_CFG_NF(GPP_J6, NONE, DEEP, NF1), // CNVI_MFUART2_RXD
	PAD_CFG_NF(GPP_J7, NONE, DEEP, NF1), // CNVI_MFUART2_TXD
	PAD_CFG_GPI(GPP_J8, NONE, DEEP), // VAL_TEST_SETUP_MENU
	PAD_CFG_GPO(GPP_J9, 0, DEEP),
	PAD_CFG_GPO(GPP_J10, 0, DEEP),
	PAD_CFG_GPO(GPP_J11, 0, DEEP),

	/* ------- GPIO Group GPP_K ------- */
	PAD_CFG_GPO(GPP_K0, 0, DEEP),
	PAD_CFG_GPO(GPP_K1, 0, DEEP),
	PAD_CFG_GPO(GPP_K2, 0, DEEP),
	PAD_CFG_GPO(GPP_K3, 0, DEEP),
	PAD_CFG_GPO(GPP_K4, 0, DEEP),
	PAD_CFG_GPO(GPP_K5, 0, DEEP),
	PAD_CFG_NF(GPP_K6, NONE, DEEP, NF2),
	PAD_CFG_NF(GPP_K7, NONE, DEEP, NF2),
	PAD_CFG_NF(GPP_K8, NONE, DEEP, NF1), // GPP_K_8_CORE_VID_0
	PAD_CFG_NF(GPP_K9, NONE, DEEP, NF1), // GPP_K_9_CORE_VID_1
	PAD_CFG_NF(GPP_K10, NONE, DEEP, NF2),
	PAD_CFG_GPO(GPP_K11, 0, DEEP),

	/* ------- GPIO Group GPP_R ------- */
	PAD_CFG_NF(GPP_R0, NONE, DEEP, NF1), // HDA_BITCLK
	PAD_CFG_NF(GPP_R1, NATIVE, DEEP, NF1), // HDA_SYNC
	PAD_CFG_NF(GPP_R2, NATIVE, DEEP, NF1), // HDA_SDOUT
	PAD_CFG_NF(GPP_R3, NATIVE, DEEP, NF1), // HDA_SDIN0
	PAD_CFG_NF(GPP_R4, NONE, DEEP, NF1), // HDA_RST#
	PAD_CFG_GPO(GPP_R5, 0, DEEP),
	PAD_CFG_GPO(GPP_R6, 0, DEEP),
	PAD_CFG_GPO(GPP_R7, 0, DEEP),
	PAD_CFG_GPI(GPP_R8, NONE, DEEP), // DGPU_PWRGD
	PAD_CFG_NF(GPP_R9, NONE, DEEP, NF1), // EDP_HPD
	PAD_CFG_GPO(GPP_R10, 0, DEEP),
	PAD_CFG_GPO(GPP_R11, 0, DEEP),
	PAD_CFG_GPO(GPP_R12, 0, DEEP),
	PAD_CFG_GPO(GPP_R13, 0, DEEP),
	PAD_CFG_GPO(GPP_R14, 0, DEEP),
	PAD_CFG_GPO(GPP_R15, 0, DEEP),
	// GPP_R16 (DGPU_RST#_PCH) configured in bootblock
	PAD_CFG_GPO(GPP_R17, 0, DEEP),
	PAD_CFG_GPO(GPP_R18, 0, DEEP),
	PAD_CFG_GPO(GPP_R19, 0, DEEP),
	PAD_CFG_GPO(GPP_R20, 0, DEEP),
	PAD_CFG_GPO(GPP_R21, 0, DEEP),

	/* ------- GPIO Group GPP_S ------- */
	PAD_CFG_GPO(GPP_S0, 0, DEEP),
	PAD_CFG_GPO(GPP_S1, 0, DEEP),
	PAD_CFG_GPO(GPP_S2, 0, DEEP),
	PAD_CFG_GPO(GPP_S3, 0, DEEP),
	PAD_CFG_GPO(GPP_S4, 0, DEEP), // GPPS_DMIC_CLK
	PAD_CFG_GPO(GPP_S5, 0, DEEP), // GPPS_DMIC_DATA
	PAD_CFG_GPO(GPP_S6, 0, DEEP),
	PAD_CFG_GPO(GPP_S7, 0, DEEP),
};

void mainboard_configure_gpios(void)
{
	gpio_configure_pads(gpio_table, ARRAY_SIZE(gpio_table));
}
