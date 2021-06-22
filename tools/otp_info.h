/*
 * Generated by info2header.py
 * Do not edit it.
 */

#define OTP_INFO_VER		"1.0.2"
#define OTP_REG_RESERVED	-1
#define OTP_REG_VALUE		-2
#define OTP_REG_VALID_BIT	-3

struct otpstrap_info {
	signed char bit_offset;
	signed char length;
	signed char value;
	char *information;
};

struct otpconf_info {
	signed char dw_offset;
	signed char bit_offset;
	signed char length;
	signed char value;
	char *information;
};

static const struct otpstrap_info a0_strap_info[] = {
	{ 0, 1, 0, "Disable Secure Boot" },
	{ 0, 1, 1, "Enable Secure Boot" },
	{ 1, 1, 0, "Disable boot from eMMC" },
	{ 1, 1, 1, "Enable boot from eMMC" },
	{ 2, 1, 0, "Disable Boot from debug SPI" },
	{ 2, 1, 1, "Enable Boot from debug SPI" },
	{ 3, 1, 0, "Enable ARM CM3" },
	{ 3, 1, 1, "Disable ARM CM3" },
	{ 4, 1, 0, "No VGA BIOS ROM, VGA BIOS is merged in the system BIOS" },
	{ 4, 1, 1, "Enable dedicated VGA BIOS ROM" },
	{ 5, 1, 0, "MAC 1 : RMII/NCSI" },
	{ 5, 1, 1, "MAC 1 : RGMII" },
	{ 6, 1, 0, "MAC 2 : RMII/NCSI" },
	{ 6, 1, 1, "MAC 2 : RGMII" },
	{ 7, 2, 0, "CPU Frequency : 1GHz" },
	{ 7, 2, 1, "CPU Frequency : 800MHz" },
	{ 7, 2, 2, "CPU Frequency : 1.2GHz" },
	{ 7, 2, 3, "CPU Frequency : 1.4GHz" },
	{ 10, 2, 0, "HCLK ratio AXI:AHB = default" },
	{ 10, 2, 1, "HCLK ratio AXI:AHB = 2:1" },
	{ 10, 2, 2, "HCLK ratio AXI:AHB = 3:1" },
	{ 10, 2, 3, "HCLK ratio AXI:AHB = 4:1" },
	{ 12, 2, 0, "VGA memory size : 8MB" },
	{ 12, 2, 1, "VGA memory size : 16MB" },
	{ 12, 2, 2, "VGA memory size : 32MB" },
	{ 12, 2, 3, "VGA memory size : 64MB" },
	{ 15, 1, 0, "CPU/AXI clock ratio : 2:1" },
	{ 15, 1, 1, "CPU/AXI clock ratio : 1:1" },
	{ 16, 1, 0, "Enable ARM JTAG debug" },
	{ 16, 1, 1, "Disable ARM JTAG debug" },
	{ 17, 1, 0, "VGA class code : vga_device" },
	{ 17, 1, 1, "VGA class code : video_device" },
	{ 18, 1, 0, "Enable debug interfaces 0" },
	{ 18, 1, 1, "Disable debug interfaces 0" },
	{ 19, 1, 0, "Boot from eMMC speed mode : normal" },
	{ 19, 1, 1, "Boot from eMMC speed mode : high" },
	{ 20, 1, 0, "Disable Pcie EHCI device" },
	{ 20, 1, 1, "Enable Pcie EHCI device" },
	{ 21, 1, 0, "Enable ARM JTAG trust world debug" },
	{ 21, 1, 1, "Disable ARM JTAG trust world debug" },
	{ 22, 1, 0, "Normal BMC mode" },
	{ 22, 1, 1, "Disable dedicated BMC functions for non-BMC application" },
	{ 23, 1, 0, "SSPRST# pin is for secondary processor dedicated reset pin" },
	{ 23, 1, 1, "SSPRST# pin is for PCIE root complex dedicated reset pin" },
	{ 24, 1, 0, "Enable watchdog to reset full chip" },
	{ 24, 1, 1, "Disable watchdog to reset full chip" },
	{ 25, 2, 0, "Internal bridge speed selection : 1x" },
	{ 25, 2, 1, "Internal bridge speed selection : 1/2x" },
	{ 25, 2, 2, "Internal bridge speed selection : 1/4x" },
	{ 25, 2, 3, "Internal bridge speed selection : 1/8x" },
	{ 29, 1, 0, "Enable RVAS function" },
	{ 29, 1, 1, "Disable RVAS function" },
	{ 32, 1, 0, "MAC 3 : RMII/NCSI" },
	{ 32, 1, 1, "MAC 3 : RGMII" },
	{ 33, 1, 0, "MAC 4 : RMII/NCSI" },
	{ 33, 1, 1, "MAC 4 : RGMII" },
	{ 34, 1, 0, "SuperIO configuration address : 0x2e" },
	{ 34, 1, 1, "SuperIO configuration address : 0x4e" },
	{ 35, 1, 0, "Enable LPC to decode SuperIO" },
	{ 35, 1, 1, "Disable LPC to decode SuperIO" },
	{ 36, 1, 0, "Enable debug interfaces 1" },
	{ 36, 1, 1, "Disable debug interfaces 1" },
	{ 37, 1, 0, "Disable ACPI function" },
	{ 37, 1, 1, "Enable ACPI function" },
	{ 38, 1, 0, "Select LPC/eSPI : eSPI" },
	{ 38, 1, 1, "Select LPC/eSPI : LPC" },
	{ 39, 1, 0, "Disable SAFS mode" },
	{ 39, 1, 1, "Enable SAFS mode" },
	{ 40, 1, 0, "Disable boot from uart5" },
	{ 40, 1, 1, "Enable boot from uart5" },
	{ 41, 1, 0, "Disable boot SPI 3B address mode auto-clear" },
	{ 41, 1, 1, "Enable boot SPI 3B address mode auto-clear" },
	{ 42, 1, 0, "Disable boot SPI 3B/4B address mode auto detection" },
	{ 42, 1, 1, "Enable boot SPI 3B/4B address mode auto detection" },
	{ 43, 1, 0, "Disable boot SPI or eMMC ABR" },
	{ 43, 1, 1, "Enable boot SPI or eMMC ABR" },
	{ 44, 1, 0, "Boot SPI ABR Mode : dual" },
	{ 44, 1, 1, "Boot SPI ABR Mode : single" },
	{ 45, 3, 0, "Boot SPI flash size : 0MB" },
	{ 45, 3, 1, "Boot SPI flash size : 2MB" },
	{ 45, 3, 2, "Boot SPI flash size : 4MB" },
	{ 45, 3, 3, "Boot SPI flash size : 8MB" },
	{ 45, 3, 4, "Boot SPI flash size : 16MB" },
	{ 45, 3, 5, "Boot SPI flash size : 32MB" },
	{ 45, 3, 6, "Boot SPI flash size : 64MB" },
	{ 45, 3, 7, "Boot SPI flash size : 128MB" },
	{ 48, 1, 0, "Disable host SPI ABR" },
	{ 48, 1, 1, "Enable host SPI ABR" },
	{ 49, 1, 0, "Disable host SPI ABR mode select pin" },
	{ 49, 1, 1, "Enable host SPI ABR mode select pin" },
	{ 50, 1, 0, "Host SPI ABR mode : dual" },
	{ 50, 1, 1, "Host SPI ABR mode : single" },
	{ 51, 3, 0, "Host SPI flash size : 0MB" },
	{ 51, 3, 1, "Host SPI flash size : 2MB" },
	{ 51, 3, 2, "Host SPI flash size : 4MB" },
	{ 51, 3, 3, "Host SPI flash size : 8MB" },
	{ 51, 3, 4, "Host SPI flash size : 16MB" },
	{ 51, 3, 5, "Host SPI flash size : 32MB" },
	{ 51, 3, 6, "Host SPI flash size : 64MB" },
	{ 51, 3, 7, "Host SPI flash size : 128MB" },
	{ 54, 1, 0, "Disable boot SPI auxiliary control pins" },
	{ 54, 1, 1, "Enable boot SPI auxiliary control pins" },
	{ 55, 2, 0, "Boot SPI CRTM size : 0KB" },
	{ 55, 2, 1, "Boot SPI CRTM size : 256KB" },
	{ 55, 2, 2, "Boot SPI CRTM size : 512KB" },
	{ 55, 2, 3, "Boot SPI CRTM size : 1024KB" },
	{ 57, 2, 0, "Host SPI CRTM size : 0KB" },
	{ 57, 2, 1, "Host SPI CRTM size : 1024KB" },
	{ 57, 2, 2, "Host SPI CRTM size : 2048KB" },
	{ 57, 2, 3, "Host SPI CRTM size : 4096KB" },
	{ 59, 1, 0, "Disable host SPI auxiliary control pins" },
	{ 59, 1, 1, "Enable host SPI auxiliary control pins" },
	{ 60, 1, 0, "Disable GPIO pass through" },
	{ 60, 1, 1, "Enable GPIO pass through" },
	{ 62, 1, 0, "Disable dedicate GPIO strap pins" },
	{ 62, 1, 1, "Enable dedicate GPIO strap pins" }
};

static const struct otpstrap_info a1_strap_info[] = {
	{ 0, 1, 0, "Disable Secure Boot" },
	{ 0, 1, 1, "Enable Secure Boot" },
	{ 1, 1, 0, "Disable boot from eMMC" },
	{ 1, 1, 1, "Enable boot from eMMC" },
	{ 2, 1, 0, "Disable Boot from debug SPI" },
	{ 2, 1, 1, "Enable Boot from debug SPI" },
	{ 3, 1, 0, "Enable ARM CM3" },
	{ 3, 1, 1, "Disable ARM CM3" },
	{ 4, 1, 0, "No VGA BIOS ROM, VGA BIOS is merged in the system BIOS" },
	{ 4, 1, 1, "Enable dedicated VGA BIOS ROM" },
	{ 5, 1, 0, "MAC 1 : RMII/NCSI" },
	{ 5, 1, 1, "MAC 1 : RGMII" },
	{ 6, 1, 0, "MAC 2 : RMII/NCSI" },
	{ 6, 1, 1, "MAC 2 : RGMII" },
	{ 7, 3, 0, "CPU Frequency : 1.2GHz" },
	{ 7, 3, 1, "CPU Frequency : 1.6MHz" },
	{ 7, 3, 2, "CPU Frequency : 1.2GHz" },
	{ 7, 3, 3, "CPU Frequency : 1.6GHz" },
	{ 7, 3, 4, "CPU Frequency : 800MHz" },
	{ 7, 3, 5, "CPU Frequency : 800MHz" },
	{ 7, 3, 6, "CPU Frequency : 800MHz" },
	{ 7, 3, 7, "CPU Frequency : 800MHz" },
	{ 10, 2, 0, "HCLK ratio AXI:AHB = default" },
	{ 10, 2, 1, "HCLK ratio AXI:AHB = 2:1" },
	{ 10, 2, 2, "HCLK ratio AXI:AHB = 3:1" },
	{ 10, 2, 3, "HCLK ratio AXI:AHB = 4:1" },
	{ 12, 2, 0, "VGA memory size : 8MB" },
	{ 12, 2, 1, "VGA memory size : 16MB" },
	{ 12, 2, 2, "VGA memory size : 32MB" },
	{ 12, 2, 3, "VGA memory size : 64MB" },
	{ 15, 1, 0, "CPU/AXI clock ratio : 2:1" },
	{ 15, 1, 1, "CPU/AXI clock ratio : 1:1" },
	{ 16, 1, 0, "Enable ARM JTAG debug" },
	{ 16, 1, 1, "Disable ARM JTAG debug" },
	{ 17, 1, 0, "VGA class code : vga_device" },
	{ 17, 1, 1, "VGA class code : video_device" },
	{ 18, 1, 0, "Enable debug interfaces 0" },
	{ 18, 1, 1, "Disable debug interfaces 0" },
	{ 19, 1, 0, "Boot from eMMC speed mode : normal" },
	{ 19, 1, 1, "Boot from eMMC speed mode : high" },
	{ 20, 1, 0, "Disable Pcie EHCI device" },
	{ 20, 1, 1, "Enable Pcie EHCI device" },
	{ 21, 1, 0, "Enable ARM JTAG trust world debug" },
	{ 21, 1, 1, "Disable ARM JTAG trust world debug" },
	{ 22, 1, 0, "Normal BMC mode" },
	{ 22, 1, 1, "Disable dedicated BMC functions for non-BMC application" },
	{ 23, 1, 0, "SSPRST# pin is for secondary processor dedicated reset pin" },
	{ 23, 1, 1, "SSPRST# pin is for PCIE root complex dedicated reset pin" },
	{ 24, 1, 0, "Enable watchdog to reset full chip" },
	{ 24, 1, 1, "Disable watchdog to reset full chip" },
	{ 25, 2, 0, "Internal bridge speed selection : 1x" },
	{ 25, 2, 1, "Internal bridge speed selection : 1/2x" },
	{ 25, 2, 2, "Internal bridge speed selection : 1/4x" },
	{ 25, 2, 3, "Internal bridge speed selection : 1/8x" },
	{ 29, 1, 0, "Enable RVAS function" },
	{ 29, 1, 1, "Disable RVAS function" },
	{ 32, 1, 0, "MAC 3 : RMII/NCSI" },
	{ 32, 1, 1, "MAC 3 : RGMII" },
	{ 33, 1, 0, "MAC 4 : RMII/NCSI" },
	{ 33, 1, 1, "MAC 4 : RGMII" },
	{ 34, 1, 0, "SuperIO configuration address : 0x2e" },
	{ 34, 1, 1, "SuperIO configuration address : 0x4e" },
	{ 35, 1, 0, "Enable LPC to decode SuperIO" },
	{ 35, 1, 1, "Disable LPC to decode SuperIO" },
	{ 36, 1, 0, "Enable debug interfaces 1" },
	{ 36, 1, 1, "Disable debug interfaces 1" },
	{ 37, 1, 0, "Disable ACPI function" },
	{ 37, 1, 1, "Enable ACPI function" },
	{ 38, 1, 0, "Select LPC/eSPI : eSPI" },
	{ 38, 1, 1, "Select LPC/eSPI : LPC" },
	{ 39, 1, 0, "Disable SAFS mode" },
	{ 39, 1, 1, "Enable SAFS mode" },
	{ 40, 1, 0, "Disable boot from uart5" },
	{ 40, 1, 1, "Enable boot from uart5" },
	{ 41, 1, 0, "Disable boot SPI 3B address mode auto-clear" },
	{ 41, 1, 1, "Enable boot SPI 3B address mode auto-clear" },
	{ 42, 1, 0, "Disable boot SPI 3B/4B address mode auto detection" },
	{ 42, 1, 1, "Enable boot SPI 3B/4B address mode auto detection" },
	{ 43, 1, 0, "Disable boot SPI or eMMC ABR" },
	{ 43, 1, 1, "Enable boot SPI or eMMC ABR" },
	{ 44, 1, 0, "Boot SPI ABR Mode : dual" },
	{ 44, 1, 1, "Boot SPI ABR Mode : single" },
	{ 45, 3, 0, "Boot SPI flash size : 0MB" },
	{ 45, 3, 1, "Boot SPI flash size : 2MB" },
	{ 45, 3, 2, "Boot SPI flash size : 4MB" },
	{ 45, 3, 3, "Boot SPI flash size : 8MB" },
	{ 45, 3, 4, "Boot SPI flash size : 16MB" },
	{ 45, 3, 5, "Boot SPI flash size : 32MB" },
	{ 45, 3, 6, "Boot SPI flash size : 64MB" },
	{ 45, 3, 7, "Boot SPI flash size : 128MB" },
	{ 48, 1, 0, "Disable host SPI ABR" },
	{ 48, 1, 1, "Enable host SPI ABR" },
	{ 49, 1, 0, "Disable host SPI ABR mode select pin" },
	{ 49, 1, 1, "Enable host SPI ABR mode select pin" },
	{ 50, 1, 0, "Host SPI ABR mode : dual" },
	{ 50, 1, 1, "Host SPI ABR mode : single" },
	{ 51, 3, 0, "Host SPI flash size : 0MB" },
	{ 51, 3, 1, "Host SPI flash size : 2MB" },
	{ 51, 3, 2, "Host SPI flash size : 4MB" },
	{ 51, 3, 3, "Host SPI flash size : 8MB" },
	{ 51, 3, 4, "Host SPI flash size : 16MB" },
	{ 51, 3, 5, "Host SPI flash size : 32MB" },
	{ 51, 3, 6, "Host SPI flash size : 64MB" },
	{ 51, 3, 7, "Host SPI flash size : 128MB" },
	{ 54, 1, 0, "Disable boot SPI auxiliary control pins" },
	{ 54, 1, 1, "Enable boot SPI auxiliary control pins" },
	{ 55, 2, 0, "Boot SPI CRTM size : 0KB" },
	{ 55, 2, 1, "Boot SPI CRTM size : 256KB" },
	{ 55, 2, 2, "Boot SPI CRTM size : 512KB" },
	{ 55, 2, 3, "Boot SPI CRTM size : 1024KB" },
	{ 57, 2, 0, "Host SPI CRTM size : 0KB" },
	{ 57, 2, 1, "Host SPI CRTM size : 1024KB" },
	{ 57, 2, 2, "Host SPI CRTM size : 2048KB" },
	{ 57, 2, 3, "Host SPI CRTM size : 4096KB" },
	{ 59, 1, 0, "Disable host SPI auxiliary control pins" },
	{ 59, 1, 1, "Enable host SPI auxiliary control pins" },
	{ 60, 1, 0, "Disable GPIO pass through" },
	{ 60, 1, 1, "Enable GPIO pass through" },
	{ 62, 1, 0, "Disable dedicate GPIO strap pins" },
	{ 62, 1, 1, "Enable dedicate GPIO strap pins" }
};

static const struct otpstrap_info a2_strap_info[] = {
	{ 0, 1, 0, "Disable Secure Boot" },
	{ 0, 1, 1, "Enable Secure Boot" },
	{ 1, 1, 0, "Disable boot from eMMC" },
	{ 1, 1, 1, "Enable boot from eMMC" },
	{ 2, 1, 0, "Disable Boot from debug SPI" },
	{ 2, 1, 1, "Enable Boot from debug SPI" },
	{ 3, 1, 0, "Enable ARM CM3" },
	{ 3, 1, 1, "Disable ARM CM3" },
	{ 4, 1, 0, "No VGA BIOS ROM, VGA BIOS is merged in the system BIOS" },
	{ 4, 1, 1, "Enable dedicated VGA BIOS ROM" },
	{ 5, 1, 0, "MAC 1 : RMII/NCSI" },
	{ 5, 1, 1, "MAC 1 : RGMII" },
	{ 6, 1, 0, "MAC 2 : RMII/NCSI" },
	{ 6, 1, 1, "MAC 2 : RGMII" },
	{ 7, 3, 0, "CPU Frequency : 1.2GHz" },
	{ 7, 3, 1, "CPU Frequency : 1.6MHz" },
	{ 7, 3, 2, "CPU Frequency : 1.2GHz" },
	{ 7, 3, 3, "CPU Frequency : 1.6GHz" },
	{ 7, 3, 4, "CPU Frequency : 800MHz" },
	{ 7, 3, 5, "CPU Frequency : 800MHz" },
	{ 7, 3, 6, "CPU Frequency : 800MHz" },
	{ 7, 3, 7, "CPU Frequency : 800MHz" },
	{ 10, 2, 0, "HCLK ratio AXI:AHB = default" },
	{ 10, 2, 1, "HCLK ratio AXI:AHB = 2:1" },
	{ 10, 2, 2, "HCLK ratio AXI:AHB = 3:1" },
	{ 10, 2, 3, "HCLK ratio AXI:AHB = 4:1" },
	{ 12, 2, 0, "VGA memory size : 8MB" },
	{ 12, 2, 1, "VGA memory size : 16MB" },
	{ 12, 2, 2, "VGA memory size : 32MB" },
	{ 12, 2, 3, "VGA memory size : 64MB" },
	{ 15, 1, 0, "CPU/AXI clock ratio : 2:1" },
	{ 15, 1, 1, "CPU/AXI clock ratio : 1:1" },
	{ 16, 1, 0, "Enable ARM JTAG debug" },
	{ 16, 1, 1, "Disable ARM JTAG debug" },
	{ 17, 1, 0, "VGA class code : vga_device" },
	{ 17, 1, 1, "VGA class code : video_device" },
	{ 18, 1, 0, "Enable debug interfaces 0" },
	{ 18, 1, 1, "Disable debug interfaces 0" },
	{ 19, 1, 0, "Boot from eMMC speed mode : normal" },
	{ 19, 1, 1, "Boot from eMMC speed mode : high" },
	{ 20, 1, 0, "Disable Pcie EHCI device" },
	{ 20, 1, 1, "Enable Pcie EHCI device" },
	{ 21, 1, 0, "Enable ARM JTAG trust world debug" },
	{ 21, 1, 1, "Disable ARM JTAG trust world debug" },
	{ 22, 1, 0, "Normal BMC mode" },
	{ 22, 1, 1, "Disable dedicated BMC functions for non-BMC application" },
	{ 23, 1, 0, "SSPRST# pin is for secondary processor dedicated reset pin" },
	{ 23, 1, 1, "SSPRST# pin is for PCIE root complex dedicated reset pin" },
	{ 24, 1, 0, "Enable watchdog to reset full chip" },
	{ 24, 1, 1, "Disable watchdog to reset full chip" },
	{ 25, 2, 0, "Internal bridge speed selection : 1x" },
	{ 25, 2, 1, "Internal bridge speed selection : 1/2x" },
	{ 25, 2, 2, "Internal bridge speed selection : 1/4x" },
	{ 25, 2, 3, "Internal bridge speed selection : 1/8x" },
	{ 29, 1, 0, "Enable RVAS function" },
	{ 29, 1, 1, "Disable RVAS function" },
	{ 32, 1, 0, "MAC 3 : RMII/NCSI" },
	{ 32, 1, 1, "MAC 3 : RGMII" },
	{ 33, 1, 0, "MAC 4 : RMII/NCSI" },
	{ 33, 1, 1, "MAC 4 : RGMII" },
	{ 34, 1, 0, "SuperIO configuration address : 0x2e" },
	{ 34, 1, 1, "SuperIO configuration address : 0x4e" },
	{ 35, 1, 0, "Enable LPC to decode SuperIO" },
	{ 35, 1, 1, "Disable LPC to decode SuperIO" },
	{ 36, 1, 0, "Enable debug interfaces 1" },
	{ 36, 1, 1, "Disable debug interfaces 1" },
	{ 37, 1, 0, "Disable ACPI function" },
	{ 37, 1, 1, "Enable ACPI function" },
	{ 38, 1, 0, "Select LPC/eSPI : eSPI" },
	{ 38, 1, 1, "Select LPC/eSPI : LPC" },
	{ 39, 1, 0, "Disable SAFS mode" },
	{ 39, 1, 1, "Enable SAFS mode" },
	{ 40, 1, 0, "Disable boot from uart5" },
	{ 40, 1, 1, "Enable boot from uart5" },
	{ 41, 1, 0, "Disable boot SPI 3B address mode auto-clear" },
	{ 41, 1, 1, "Enable boot SPI 3B address mode auto-clear" },
	{ 42, 1, 0, "Disable boot SPI 3B/4B address mode auto detection" },
	{ 42, 1, 1, "Enable boot SPI 3B/4B address mode auto detection" },
	{ 43, 1, 0, "Disable boot SPI or eMMC ABR" },
	{ 43, 1, 1, "Enable boot SPI or eMMC ABR" },
	{ 44, 1, 0, "Boot SPI ABR Mode : dual" },
	{ 44, 1, 1, "Boot SPI ABR Mode : single" },
	{ 45, 3, 0, "Boot SPI flash size : 0MB" },
	{ 45, 3, 1, "Boot SPI flash size : 2MB" },
	{ 45, 3, 2, "Boot SPI flash size : 4MB" },
	{ 45, 3, 3, "Boot SPI flash size : 8MB" },
	{ 45, 3, 4, "Boot SPI flash size : 16MB" },
	{ 45, 3, 5, "Boot SPI flash size : 32MB" },
	{ 45, 3, 6, "Boot SPI flash size : 64MB" },
	{ 45, 3, 7, "Boot SPI flash size : 128MB" },
	{ 48, 1, 0, "Disable host SPI ABR" },
	{ 48, 1, 1, "Enable host SPI ABR" },
	{ 49, 1, 0, "Disable host SPI ABR mode select pin" },
	{ 49, 1, 1, "Enable host SPI ABR mode select pin" },
	{ 50, 1, 0, "Host SPI ABR mode : dual" },
	{ 50, 1, 1, "Host SPI ABR mode : single" },
	{ 51, 3, 0, "Host SPI flash size : 0MB" },
	{ 51, 3, 1, "Host SPI flash size : 2MB" },
	{ 51, 3, 2, "Host SPI flash size : 4MB" },
	{ 51, 3, 3, "Host SPI flash size : 8MB" },
	{ 51, 3, 4, "Host SPI flash size : 16MB" },
	{ 51, 3, 5, "Host SPI flash size : 32MB" },
	{ 51, 3, 6, "Host SPI flash size : 64MB" },
	{ 51, 3, 7, "Host SPI flash size : 128MB" },
	{ 54, 1, 0, "Disable boot SPI auxiliary control pins" },
	{ 54, 1, 1, "Enable boot SPI auxiliary control pins" },
	{ 55, 2, 0, "Boot SPI CRTM size : 0KB" },
	{ 55, 2, 1, "Boot SPI CRTM size : 256KB" },
	{ 55, 2, 2, "Boot SPI CRTM size : 512KB" },
	{ 55, 2, 3, "Boot SPI CRTM size : 1024KB" },
	{ 57, 2, 0, "Host SPI CRTM size : 0KB" },
	{ 57, 2, 1, "Host SPI CRTM size : 1024KB" },
	{ 57, 2, 2, "Host SPI CRTM size : 2048KB" },
	{ 57, 2, 3, "Host SPI CRTM size : 4096KB" },
	{ 59, 1, 0, "Disable host SPI auxiliary control pins" },
	{ 59, 1, 1, "Enable host SPI auxiliary control pins" },
	{ 60, 1, 0, "Disable GPIO pass through" },
	{ 60, 1, 1, "Enable GPIO pass through" },
	{ 62, 1, 0, "Disable dedicate GPIO strap pins" },
	{ 62, 1, 1, "Enable dedicate GPIO strap pins" }
};

static const struct otpconf_info a0_conf_info[] = {
	{ 0, 1, 1, 0, "Disable Secure Boot" },
	{ 0, 1, 1, 1, "Enable Secure Boot" },
	{ 0, 3, 1, 0, "User region ECC disable" },
	{ 0, 3, 1, 1, "User region ECC enable" },
	{ 0, 4, 1, 0, "Secure Region ECC disable" },
	{ 0, 4, 1, 1, "Secure Region ECC enable" },
	{ 0, 5, 1, 0, "Enable low security key" },
	{ 0, 5, 1, 1, "Disable low security key" },
	{ 0, 6, 1, 0, "Do not ignore Secure Boot hardware strap" },
	{ 0, 6, 1, 1, "Ignore Secure Boot hardware strap" },
	{ 0, 7, 1, 0, "Secure Boot Mode: Mode_GCM" },
	{ 0, 7, 1, 1, "Secure Boot Mode: Mode_2" },
	{ 0, 10, 2, 0, "RSA mode : RSA1024" },
	{ 0, 10, 2, 1, "RSA mode : RSA2048" },
	{ 0, 10, 2, 2, "RSA mode : RSA3072" },
	{ 0, 10, 2, 3, "RSA mode : RSA4096" },
	{ 0, 12, 2, 0, "SHA mode : SHA224" },
	{ 0, 12, 2, 1, "SHA mode : SHA256" },
	{ 0, 12, 2, 2, "SHA mode : SHA384" },
	{ 0, 12, 2, 3, "SHA mode : SHA512" },
	{ 0, 14, 1, 0, "Enable patch code" },
	{ 0, 14, 1, 1, "Disable patch code" },
	{ 0, 15, 1, 0, "Enable Boot from Uart" },
	{ 0, 15, 1, 1, "Disable Boot from Uart" },
	{ 0, 16, 6, OTP_REG_VALUE, "Secure Region size (DW): 0x%x" },
	{ 0, 22, 1, 0, "Secure Region : Writable" },
	{ 0, 22, 1, 1, "Secure Region : Write Protect" },
	{ 0, 23, 1, 0, "User Region : Writable" },
	{ 0, 23, 1, 1, "User Region : Write Protect" },
	{ 0, 24, 1, 0, "Configure Region : Writable" },
	{ 0, 24, 1, 1, "Configure Region : Write Protect" },
	{ 0, 25, 1, 0, "OTP strap Region : Writable" },
	{ 0, 25, 1, 1, "OTP strap Region : Write Protect" },
	{ 0, 26, 1, 0, "Disable Copy Boot Image to Internal SRAM" },
	{ 0, 26, 1, 1, "Copy Boot Image to Internal SRAM" },
	{ 0, 27, 1, 0, "Disable image encryption" },
	{ 0, 27, 1, 1, "Enable image encryption" },
	{ 0, 29, 1, 0, "OTP key retire Region : Writable" },
	{ 0, 29, 1, 1, "OTP key retire Region : Write Protect" },
	{ 0, 31, 1, 0, "OTP memory lock disable" },
	{ 0, 31, 1, 1, "OTP memory lock enable" },
	{ 2, 0, 16, OTP_REG_VALUE, "Vender ID : 0x%x" },
	{ 2, 16, 16, OTP_REG_VALUE, "Key Revision : 0x%x" },
	{ 3, 0, 16, OTP_REG_VALUE, "Secure boot header offset : 0x%x" },
	{ 4, 0, 8, OTP_REG_VALID_BIT, "Keys retire : %s" },
	{ 5, 0, 32, OTP_REG_VALUE, "User define data, random number low : 0x%x" },
	{ 6, 0, 32, OTP_REG_VALUE, "User define data, random number high : 0x%x" },
	{ 10, 0, 64, OTP_REG_VALUE, "Manifest ID : 0x%x" },
	{ 14, 0, 11, OTP_REG_VALUE, "Patch code location (DW): 0x%x" },
	{ 14, 11, 6, OTP_REG_VALUE, "Patch code size (DW): 0x%x" }
};

static const struct otpconf_info a1_conf_info[] = {
	{ 0, 1, 1, 0, "Disable Secure Boot" },
	{ 0, 1, 1, 1, "Enable Secure Boot" },
	{ 0, 3, 1, 0, "User region ECC disable" },
	{ 0, 3, 1, 1, "User region ECC enable" },
	{ 0, 4, 1, 0, "Secure Region ECC disable" },
	{ 0, 4, 1, 1, "Secure Region ECC enable" },
	{ 0, 5, 1, 0, "Enable low security key" },
	{ 0, 5, 1, 1, "Disable low security key" },
	{ 0, 6, 1, 0, "Do not ignore Secure Boot hardware strap" },
	{ 0, 6, 1, 1, "Ignore Secure Boot hardware strap" },
	{ 0, 7, 1, 0, "Secure Boot Mode: Mode_GCM" },
	{ 0, 7, 1, 1, "Secure Boot Mode: Mode_2" },
	{ 0, 10, 2, 0, "RSA mode : RSA1024" },
	{ 0, 10, 2, 1, "RSA mode : RSA2048" },
	{ 0, 10, 2, 2, "RSA mode : RSA3072" },
	{ 0, 10, 2, 3, "RSA mode : RSA4096" },
	{ 0, 12, 2, 0, "SHA mode : SHA224" },
	{ 0, 12, 2, 1, "SHA mode : SHA256" },
	{ 0, 12, 2, 2, "SHA mode : SHA384" },
	{ 0, 12, 2, 3, "SHA mode : SHA512" },
	{ 0, 14, 1, 0, "Disable patch code" },
	{ 0, 14, 1, 1, "Enable patch code" },
	{ 0, 15, 1, 0, "Enable Boot from Uart" },
	{ 0, 15, 1, 1, "Disable Boot from Uart" },
	{ 0, 16, 6, OTP_REG_VALUE, "Secure Region size (DW): 0x%x" },
	{ 0, 22, 1, 0, "Secure Region : Writable" },
	{ 0, 22, 1, 1, "Secure Region : Write Protect" },
	{ 0, 23, 1, 0, "User Region : Writable" },
	{ 0, 23, 1, 1, "User Region : Write Protect" },
	{ 0, 24, 1, 0, "Configure Region : Writable" },
	{ 0, 24, 1, 1, "Configure Region : Write Protect" },
	{ 0, 25, 1, 0, "OTP strap Region : Writable" },
	{ 0, 25, 1, 1, "OTP strap Region : Write Protect" },
	{ 0, 26, 1, 0, "Disable Copy Boot Image to Internal SRAM" },
	{ 0, 26, 1, 1, "Copy Boot Image to Internal SRAM" },
	{ 0, 27, 1, 0, "Disable image encryption" },
	{ 0, 27, 1, 1, "Enable image encryption" },
	{ 0, 29, 1, 0, "OTP key retire Region : Writable" },
	{ 0, 29, 1, 1, "OTP key retire Region : Write Protect" },
	{ 0, 31, 1, 0, "OTP memory lock disable" },
	{ 0, 31, 1, 1, "OTP memory lock enable" },
	{ 2, 0, 16, OTP_REG_VALUE, "Vender ID : 0x%x" },
	{ 2, 16, 16, OTP_REG_VALUE, "Key Revision : 0x%x" },
	{ 3, 0, 16, OTP_REG_VALUE, "Secure boot header offset : 0x%x" },
	{ 4, 0, 8, OTP_REG_VALID_BIT, "Keys retire : %s" },
	{ 5, 0, 32, OTP_REG_VALUE, "User define data, random number low : 0x%x" },
	{ 6, 0, 32, OTP_REG_VALUE, "User define data, random number high : 0x%x" },
	{ 10, 0, 64, OTP_REG_VALUE, "Manifest ID : 0x%x" },
	{ 14, 0, 11, OTP_REG_VALUE, "Patch code location (DW): 0x%x" },
	{ 14, 11, 6, OTP_REG_VALUE, "Patch code size (DW): 0x%x" }
};

static const struct otpconf_info a2_conf_info[] = {
	{ 0, 0, 1, 0, "Enable OTP Memory BIST Mode" },
	{ 0, 0, 1, 1, "Disable OTP Memory BIST Mode" },
	{ 0, 1, 1, 0, "Disable Secure Boot" },
	{ 0, 1, 1, 1, "Enable Secure Boot" },
	{ 0, 3, 1, 0, "User region ECC disable" },
	{ 0, 3, 1, 1, "User region ECC enable" },
	{ 0, 4, 1, 0, "Secure Region ECC disable" },
	{ 0, 4, 1, 1, "Secure Region ECC enable" },
	{ 0, 5, 1, 0, "Enable low security key" },
	{ 0, 5, 1, 1, "Disable low security key" },
	{ 0, 6, 1, 0, "Do not ignore Secure Boot hardware strap" },
	{ 0, 6, 1, 1, "Ignore Secure Boot hardware strap" },
	{ 0, 7, 1, 0, "Secure Boot Mode: Mode_GCM" },
	{ 0, 7, 1, 1, "Secure Boot Mode: Mode_2" },
	{ 0, 9, 1, 0, "ROM code will dump boot messages" },
	{ 0, 9, 1, 1, "ROM code message is disabled" },
	{ 0, 10, 2, 0, "RSA mode : RSA1024" },
	{ 0, 10, 2, 1, "RSA mode : RSA2048" },
	{ 0, 10, 2, 2, "RSA mode : RSA3072" },
	{ 0, 10, 2, 3, "RSA mode : RSA4096" },
	{ 0, 12, 2, 0, "SHA mode : SHA224" },
	{ 0, 12, 2, 1, "SHA mode : SHA256" },
	{ 0, 12, 2, 2, "SHA mode : SHA384" },
	{ 0, 12, 2, 3, "SHA mode : SHA512" },
	{ 0, 14, 1, 0, "Enable patch code" },
	{ 0, 14, 1, 1, "Disable patch code" },
	{ 0, 15, 1, 0, "Enable Boot from Uart" },
	{ 0, 15, 1, 1, "Disable Boot from Uart" },
	{ 0, 16, 6, OTP_REG_VALUE, "Secure Region size (DW): 0x%x" },
	{ 0, 22, 1, 0, "Secure Region : Writable" },
	{ 0, 22, 1, 1, "Secure Region : Write Protect" },
	{ 0, 23, 1, 0, "User Region : Writable" },
	{ 0, 23, 1, 1, "User Region : Write Protect" },
	{ 0, 24, 1, 0, "Configure Region : Writable" },
	{ 0, 24, 1, 1, "Configure Region : Write Protect" },
	{ 0, 25, 1, 0, "OTP strap Region : Writable" },
	{ 0, 25, 1, 1, "OTP strap Region : Write Protect" },
	{ 0, 26, 1, 0, "Disable Copy Boot Image to Internal SRAM" },
	{ 0, 26, 1, 1, "Copy Boot Image to Internal SRAM" },
	{ 0, 27, 1, 0, "Disable image encryption" },
	{ 0, 27, 1, 1, "Enable image encryption" },
	{ 0, 29, 1, 0, "OTP key retire Region : Writable" },
	{ 0, 29, 1, 1, "OTP key retire Region : Write Protect" },
	{ 0, 30, 1, 0, "Boot from UART/VUART when normal boot is fail" },
	{ 0, 30, 1, 1, "Disable auto UART/VUART boot option" },
	{ 0, 31, 1, 0, "OTP memory lock disable" },
	{ 0, 31, 1, 1, "OTP memory lock enable" },
	{ 2, 0, 16, OTP_REG_VALUE, "Vender ID : 0x%x" },
	{ 2, 16, 16, OTP_REG_VALUE, "Key Revision : 0x%x" },
	{ 3, 0, 16, OTP_REG_VALUE, "Secure boot header offset : 0x%x" },
	{ 3, 16, 1, 0, "Boot from UART using: UART5" },
	{ 3, 16, 1, 1, "Boot from UART using: UART1" },
	{ 3, 17, 1, 0, "Enable Auto Boot from UART or VUART" },
	{ 3, 17, 1, 1, "Disable Auto Boot from UART or VUART" },
	{ 3, 18, 1, 0, "Enable Auto Boot from VUART2 over PCIE" },
	{ 3, 18, 1, 1, "Disable Auto Boot from VUART2 over PCIE" },
	{ 3, 19, 1, 0, "Enable Auto Boot from VUART2 over LPC" },
	{ 3, 19, 1, 1, "Disable Auto Boot from VUART2 over LPC" },
	{ 3, 20, 1, 0, "Enable ROM code based programming control" },
	{ 3, 20, 1, 1, "Disable ROM code based programming control" },
	{ 3, 21, 3, OTP_REG_VALUE, "Rollback prevention shift bit : 0x%x" },
	{ 3, 24, 6, OTP_REG_VALUE, "Extra Data Write Protection Region size (DW): 0x%x" },
	{ 3, 30, 1, 0, "Do not erase signature data after secure boot check" },
	{ 3, 30, 1, 1, "Erase signature data after secure boot check" },
	{ 3, 31, 1, 0, "Do not erase RSA public key after secure boot check" },
	{ 3, 31, 1, 1, "Erase RSA public key after secure boot check" },
	{ 4, 0, 8, OTP_REG_VALID_BIT, "Keys retire : %s" },
	{ 5, 0, 32, OTP_REG_VALUE, "User define data, random number low : 0x%x" },
	{ 6, 0, 32, OTP_REG_VALUE, "User define data, random number high : 0x%x" },
	{ 10, 0, 64, OTP_REG_VALUE, "Manifest ID : 0x%x" },
	{ 14, 0, 11, OTP_REG_VALUE, "Patch code location (DW): 0x%x" },
	{ 14, 11, 6, OTP_REG_VALUE, "Patch code size (DW): 0x%x" }
};

