/* 360-T6GS */

#define BOARD_PID		"360-T6GS"
#define BOARD_NAME		"360-T6GS"
#define BOARD_DESC		"Qihoo 360 T6GS Wireless Router"
#define BOARD_VENDOR_NAME	"Qihoo 360"
#define BOARD_VENDOR_URL	"http://www.360.cn/"
#define BOARD_MODEL_URL		"http://life.360.cn/"
#define BOARD_BOOT_TIME		20
#define BOARD_FLASH_TIME	120
#define BOARD_HAS_5G_11AC		1
#define BOARD_HAS_5G_11AX		1
#define BOARD_HAS_2G_11AX		1
#define BOARD_NUM_ANT_5G_TX		2
#define BOARD_NUM_ANT_5G_RX		2
#define BOARD_NUM_ANT_2G_TX		2
#define BOARD_NUM_ANT_2G_RX		2
#define BOARD_NUM_ETH_LEDS		0
#define BOARD_NUM_ETH_EPHY		4
#define BOARD_HAS_EPHY_L1000	1
#define BOARD_HAS_EPHY_W1000	1

/* GPIO 映射配置（提取自 DTS） */
#define BOARD_GPIO_BTN_RESET		7
#define BOARD_GPIO_BTN_WPS		6
#define BOARD_GPIO_LED_ALL_ON		0	/* 低电平点亮 */

#define BOARD_GPIO_LED_STATUS_GREEN	15
#define BOARD_GPIO_LED_STATUS_RED	13
#define BOARD_GPIO_LED_STATUS_BLUE	10

/* 强制指定 LAN 与 WAN 的 MAC */
#define BOARD_CONFIG_DEFAULT_MAC "02:29:F4:7A:B1:C8"

/* 设置无线 MAC 偏移量（让 Wi-Fi MAC 基于主 MAC 自动递增） */
#define BOARD_CONFIG_WIFI_MAC_OFFSET 1

/* 显式定义 2.4G 和 5G 的独立 MAC */
#define BOARD_CONFIG_WIFI2_MAC "02:29:F4:7A:B1:C9"
#define BOARD_CONFIG_WIFI5_MAC "02:29:F4:7A:B1:CA"
