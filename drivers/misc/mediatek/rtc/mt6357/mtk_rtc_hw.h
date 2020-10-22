/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef __MT_RTC_HW_H__
#define __MT_RTC_HW_H__

#include <mach/upmu_hw.h>
extern unsigned int pmic_config_interface_nolock(unsigned int RegNum,
	unsigned int val, unsigned int MASK, unsigned int SHIFT);

/* RTC registers */
#define RTC_BBPU					(PMIC_PWREN_ADDR)
#define RTC_BBPU_PWREN			\
	(PMIC_PWREN_MASK << PMIC_PWREN_SHIFT)
#define RTC_BBPU_CLR			\
	(PMIC_BBPU_CLR_MASK << PMIC_BBPU_CLR_SHIFT)
#define RTC_BBPU_INIT			\
	(PMIC_BBPU_INIT_MASK << PMIC_BBPU_INIT_SHIFT)
#define RTC_BBPU_AUTO			\
	(PMIC_AUTO_MASK << PMIC_AUTO_SHIFT)
#define RTC_BBPU_CLRPKY			\
	(PMIC_CLRPKY_MASK << PMIC_CLRPKY_SHIFT)
#define RTC_BBPU_RELOAD			\
	(PMIC_RELOAD_MASK << PMIC_RELOAD_SHIFT)
#define RTC_BBPU_CBUSY			\
	(PMIC_CBUSY_MASK << PMIC_CBUSY_SHIFT)
#define RTC_BBPU_KEY			\
	(0x43 << PMIC_KEY_BBPU_SHIFT)

#define RTC_IRQ_STA					(PMIC_ALSTA_ADDR)
#define RTC_IRQ_STA_AL			\
	(PMIC_ALSTA_MASK << PMIC_ALSTA_SHIFT)
#define RTC_IRQ_STA_TC			\
	(PMIC_TCSTA_MASK << PMIC_TCSTA_SHIFT)
#define RTC_IRQ_STA_LP			\
	(PMIC_LPSTA_MASK << PMIC_LPSTA_SHIFT)

#define RTC_IRQ_EN					(PMIC_AL_EN_ADDR)
#define RTC_IRQ_EN_AL			\
	(PMIC_AL_EN_MASK << PMIC_AL_EN_SHIFT)
#define RTC_IRQ_EN_TC			\
	(PMIC_TC_EN_MASK << PMIC_TC_EN_SHIFT)
#define RTC_IRQ_EN_ONESHOT		\
	(PMIC_ONESHOT_MASK << PMIC_ONESHOT_SHIFT)
#define RTC_IRQ_EN_LP			\
	(PMIC_LP_EN_MASK << PMIC_LP_EN_SHIFT)
#define RTC_IRQ_EN_ONESHOT_AL		\
	(RTC_IRQ_EN_ONESHOT | RTC_IRQ_EN_AL)

#define RTC_CII_EN					(PMIC_SECCII_ADDR)
#define RTC_CII_SEC			\
		(PMIC_SECCII_MASK << PMIC_SECCII_SHIFT)
#define RTC_CII_MIN			\
		(PMIC_MINCII_MASK << PMIC_MINCII_SHIFT)
#define RTC_CII_HOU			\
		(PMIC_HOUCII_MASK << PMIC_HOUCII_SHIFT)
#define RTC_CII_DOM			\
		(PMIC_DOMCII_MASK << PMIC_DOMCII_SHIFT)
#define RTC_CII_DOW			\
		(PMIC_DOWCII_MASK << PMIC_DOWCII_SHIFT)
#define RTC_CII_MTH			\
		(PMIC_MTHCII_MASK << PMIC_MTHCII_SHIFT)
#define RTC_CII_YEA			\
		(PMIC_YEACII_MASK << PMIC_YEACII_SHIFT)
#define RTC_CII_1_2_SEC			\
	(PMIC_SECCII_1_2_MASK << PMIC_SECCII_1_2_SHIFT)
#define RTC_CII_1_4_SEC			\
	(PMIC_SECCII_1_4_MASK << PMIC_SECCII_1_4_SHIFT)
#define RTC_CII_1_8_SEC			\
	(PMIC_SECCII_1_8_MASK << PMIC_SECCII_1_8_SHIFT)

#define RTC_AL_MASK				(PMIC_SEC_MSK_ADDR)
#define RTC_AL_MASK_SEC			\
	(PMIC_SEC_MSK_MASK << PMIC_SEC_MSK_SHIFT)
#define RTC_AL_MASK_MIN			\
	(PMIC_MIN_MSK_MASK << PMIC_MIN_MSK_SHIFT)
#define RTC_AL_MASK_HOU			\
	(PMIC_HOU_MSK_MASK << PMIC_HOU_MSK_SHIFT)
#define RTC_AL_MASK_DOM			\
	(PMIC_DOM_MSK_MASK << PMIC_DOM_MSK_SHIFT)
#define RTC_AL_MASK_DOW			\
	(PMIC_DOW_MSK_MASK << PMIC_DOW_MSK_SHIFT)
#define RTC_AL_MASK_MTH			\
	(PMIC_MTH_MSK_MASK << PMIC_MTH_MSK_SHIFT)
#define RTC_AL_MASK_YEA				\
	(PMIC_YEA_MSK_MASK << PMIC_YEA_MSK_SHIFT)

#define RTC_TC_SEC					(PMIC_TC_SECOND_ADDR)

#define RTC_TC_MIN					(PMIC_TC_MINUTE_ADDR)

#define RTC_TC_HOU					(PMIC_TC_HOUR_ADDR)

#define RTC_TC_DOM					(PMIC_TC_DOM_ADDR)

#define RTC_TC_DOW					(PMIC_TC_DOW_ADDR)

#define RTC_TC_MTH					(PMIC_TC_MONTH_ADDR)
#define RTC_TC_MTH_MASK				(PMIC_TC_MONTH_MASK)
#define RTC_TC_YEA					(PMIC_TC_YEAR_ADDR)

#define RTC_AL_SEC					(PMIC_AL_SECOND_ADDR)
#define RTC_AL_SEC_MASK				(PMIC_AL_SECOND_MASK)
#define RTC_BBPU_AUTO_PDN_SEL			\
	(PMIC_BBPU_AUTO_PDN_SEL_MASK << PMIC_BBPU_AUTO_PDN_SEL_SHIFT)
#define RTC_BBPU_2SEC_CK_SEL			\
	(PMIC_BBPU_2SEC_CK_SEL_MASK << PMIC_BBPU_2SEC_CK_SEL_SHIFT)
#define RTC_BBPU_2SEC_EN			\
	(PMIC_BBPU_2SEC_EN_MASK << PMIC_BBPU_2SEC_EN_SHIFT)
#define RTC_BBPU_2SEC_MODE			\
	(PMIC_BBPU_2SEC_MODE_MASK << PMIC_BBPU_2SEC_MODE_SHIFT)
/* RTC mask include shift */
#define RTC_BBPU_2SEC_MODE_MSK		\
	(PMIC_BBPU_2SEC_MODE_MASK << PMIC_BBPU_2SEC_MODE_SHIFT)
#define RTC_BBPU_2SEC_MODE_SHIFT		(PMIC_BBPU_2SEC_MODE_SHIFT)
#define RTC_BBPU_2SEC_STAT_CLEAR		\
	(PMIC_BBPU_2SEC_STAT_CLEAR_MASK << PMIC_BBPU_2SEC_STAT_CLEAR_SHIFT)
#define RTC_BBPU_2SEC_STAT_STA		\
	(PMIC_BBPU_2SEC_STAT_STA_MASK << PMIC_BBPU_2SEC_STAT_STA_SHIFT)
#define RTC_LPD_OPT_SHIFT			(PMIC_RTC_LPD_OPT_SHIFT)
#define RTC_LPD_OPT_MASK				\
	(PMIC_RTC_LPD_OPT_MASK << PMIC_RTC_LPD_OPT_SHIFT)
#define RTC_LPD_OPT_XOSC_AND_EOSC_LPD	(0U << PMIC_RTC_LPD_OPT_SHIFT)
#define RTC_LPD_OPT_EOSC_LPD			(1U << PMIC_RTC_LPD_OPT_SHIFT)
#define RTC_LPD_OPT_XOSC_LPD			(2U << PMIC_RTC_LPD_OPT_SHIFT)
#define RTC_LPD_OPT_F32K_CK_ALIVE		(3U << PMIC_RTC_LPD_OPT_SHIFT)
#define RTC_K_EOSC32_VTCXO_ON_SEL		\
	(PMIC_K_EOSC32_VTCXO_ON_SEL_MASK << PMIC_K_EOSC32_VTCXO_ON_SEL_SHIFT)

#define RTC_AL_MIN					(PMIC_AL_MINUTE_ADDR)
#define RTC_AL_MIN_MASK				\
	(PMIC_AL_MINUTE_MASK << PMIC_AL_MINUTE_SHIFT)

/*
 * RTC_NEW_SPARE0: RTC_AL_HOU bit0~4
 * bit 8 ~ 15 : For design used, can't be overwrited.
 */
#define RTC_AL_HOU					(PMIC_AL_HOUR_ADDR)
#define RTC_AL_HOU_MASK				\
	(PMIC_AL_HOUR_MASK << PMIC_AL_HOUR_SHIFT)
#define RTC_NEW_SPARE0				\
	(PMIC_NEW_SPARE0_MASK << PMIC_NEW_SPARE0_SHIFT)
#define RTC_AL_HOU_FG_SHIFT			8
#define RTC_AL_HOU_FG_MASK			0xff00

/*
 * RTC_NEW_SPARE1: RTC_AL_DOM bit0~4
 * bit 8 ~ 15 : for 2 second reboot desing used,
 *              can't be overwrited.
 */
#define RTC_AL_DOM					(PMIC_AL_DOM_ADDR)
#define RTC_AL_DOM_MASK				\
	(PMIC_AL_DOM_MASK << PMIC_AL_DOM_SHIFT)
#define RTC_NEW_SPARE1				\
	(PMIC_NEW_SPARE1_MASK << PMIC_NEW_SPARE1_SHIFT)
#define RTC_SPAR_CONDITION			(1U << 8)	/* by uvlo */
#define RTC_AUTOMATICALLY_SPAR		(1U << 9) /* clear by sw */
#define RTC_ALARM_CLEAR_METHOD		(1U << 11)	/* by sw */

/*
 * RTC_NEW_SPARE2: RTC_AL_DOW bit0~2
 * bit 8 ~ 15 : reserved bits
 */
#define RTC_AL_DOW				(PMIC_AL_DOW_ADDR)
#define RTC_AL_DOW_MASK				\
	(PMIC_AL_DOW_MASK << PMIC_AL_DOW_SHIFT)
#define RTC_NEW_SPARE2				\
	(PMIC_NEW_SPARE2_MASK << PMIC_NEW_SPARE2_SHIFT)

/*
 * RTC_NEW_SPARE3: RTC_AL_MTH bit0~3
 * bit 8 ~ 15 : Fuel Gauge
 */
#define RTC_AL_MTH				(PMIC_AL_MONTH_ADDR)
#define RTC_AL_MTH_MASK				\
	(PMIC_AL_MONTH_MASK << PMIC_AL_MONTH_SHIFT)
#define RTC_NEW_SPARE3				\
	(PMIC_NEW_SPARE3_MASK << PMIC_NEW_SPARE3_SHIFT)
#define RTC_AL_MTH_FG_SHIFT			8
#define RTC_AL_MTH_FG_MASK			0xff00

#define RTC_AL_YEA				(PMIC_AL_YEAR_ADDR)
#define RTC_AL_YEA_MASK				\
	(PMIC_AL_YEAR_MASK << PMIC_AL_YEAR_SHIFT)
#define RTC_K_EOSC_RSV_0				(1U << 8)
#define RTC_K_EOSC_RSV_1				(1U << 9)
#define RTC_K_EOSC_RSV_2				(1U << 10)
#define RTC_K_EOSC_RSV_3				(1U << 11)
#define RTC_K_EOSC_RSV_4				(1U << 12)
#define RTC_K_EOSC_RSV_5				(1U << 13)
#define RTC_K_EOSC_RSV_6				(1U << 14)
#define RTC_K_EOSC_RSV_7				(1U << 15)

#define RTC_OSC32CON				(PMIC_XOSCCALI_ADDR)
#define RTC_OSC32CON_UNLOCK1			0x1a57
#define RTC_OSC32CON_UNLOCK2			0x2b68
/*
 *Default 4'b0111, 2nd step suggest to set to
 * 4'b0000 EOSC_CALI = charging cap calibration
 */
#define RTC_XOSCCALI_MASK			\
	(PMIC_XOSCCALI_MASK << PMIC_XOSCCALI_SHIFT)
/* 0 (32k crystal exist)	1 (32k crystal doesn't exist)*/
#define RTC_XOSC32_ENB				\
	(PMIC_RTC_XOSC32_ENB_MASK << PMIC_RTC_XOSC32_ENB_SHIFT)
#define RTC_EMBCK_SEL_MODE			\
	(PMIC_RTC_EMBCK_SEL_MODE_MASK << PMIC_RTC_EMBCK_SEL_MODE_SHIFT)
#define RTC_EMBCK_SRC_SEL			\
	(PMIC_RTC_EMBCK_SRC_SEL_MASK << PMIC_RTC_EMBCK_SRC_SEL_SHIFT)
#define RTC_EMBCK_SEL_OPTION			\
	(PMIC_RTC_EMBCK_SEL_OPTION_MASK << PMIC_RTC_EMBCK_SEL_OPTION_SHIFT)
#define RTC_GPS_CKOUT_EN			\
	(PMIC_RTC_GPS_CKOUT_EN_MASK << PMIC_RTC_GPS_CKOUT_EN_SHIFT)
#define RTC_EOSC32_VCT_EN			\
	(PMIC_RTC_EOSC32_VCT_EN_MASK << PMIC_RTC_EOSC32_VCT_EN_SHIFT)
#define RTC_EOSC32_CHOP_EN			\
	(PMIC_RTC_EOSC32_CHOP_EN_MASK << PMIC_RTC_EOSC32_CHOP_EN_SHIFT)
/*
 * Keep RG_EOSC_RSV[0] to low for lower EOSC
 * leakage current hardware design change.
 */
#define RTC_GP_OSC32_CON			\
	(2U << PMIC_RTC_GP_OSC32_CON_SHIFT)
#define RTC_REG_XOSC32_ENB			\
	(PMIC_RTC_REG_XOSC32_ENB_MASK << PMIC_RTC_REG_XOSC32_ENB_SHIFT)

/* 0: emb_hw	1: emb_k_eosc_32		2:dcxo_ck	3: eosc32_ck*/
#define RTC_EMBCK_SEL_HW			\
	(0 << PMIC_RTC_EMBCK_SEL_MODE_SHIFT)
#define RTC_EMBCK_SEL_K_EOSC			\
	(1U << PMIC_RTC_EMBCK_SEL_MODE_SHIFT)
#define RTC_EMBCK_SEL_DCXO			\
	(2U << PMIC_RTC_EMBCK_SEL_MODE_SHIFT)
#define RTC_EMBCK_SEL_EOSC			\
	(3U << PMIC_RTC_EMBCK_SEL_MODE_SHIFT)

#define OSC32CON_ANALOG_SETTING		\
	(RTC_GP_OSC32_CON | RTC_EOSC32_CHOP_EN | RTC_EOSC32_VCT_EN | \
	RTC_GPS_CKOUT_EN | RTC_EMBCK_SEL_OPTION | RTC_EMBCK_SEL_K_EOSC)


#define RTC_XOSCCALI_START			0x0000
#define RTC_XOSCCALI_END				0x001f

#define RTC_POWERKEY1				(PMIC_RTC_POWERKEY1_ADDR)
#define RTC_POWERKEY2				(PMIC_RTC_POWERKEY2_ADDR)
#define RTC_POWERKEY1_KEY			0xa357
#define RTC_POWERKEY2_KEY			0x67d2
/*
 * RTC_PDN1:
 *     bit 0 - 3  : Android bits
 *     bit 4 - 5  : Recovery bits (0x10: factory data reset)
 *     bit 6      : Bypass PWRKEY bit
 *     bit 7      : Power-On Time bit
 *     bit 8      : RTC_GPIO_USER_WIFI bit
 *     bit 9      : RTC_GPIO_USER_GPS bit
 *     bit 10     : RTC_GPIO_USER_BT bit
 *     bit 11     : RTC_GPIO_USER_FM bit
 *     bit 12     : RTC_GPIO_USER_PMIC bit
 *     bit 13     : Fast Boot
 *     bit 14	  : Kernel Power Off Charging
 *     bit 15     : Debug bit
 */
#define RTC_PDN1					(PMIC_RTC_PDN1_ADDR)
#define RTC_PDN1_ANDROID_MASK			0x000f
#define RTC_PDN1_RECOVERY_MASK		0x0030
#define RTC_PDN1_FAC_RESET			(1U << 4)
#define RTC_PDN1_BYPASS_PWR			(1U << 6)
#define RTC_PDN1_PWRON_TIME			(1U << 7)
#define RTC_PDN1_GPIO_WIFI			(1U << 8)
#define RTC_PDN1_GPIO_GPS			(1U << 9)
#define RTC_PDN1_GPIO_BT				(1U << 10)
#define RTC_PDN1_GPIO_FM				(1U << 11)
#define RTC_PDN1_GPIO_PMIC			(1U << 12)
#define RTC_PDN1_FAST_BOOT			(1U << 13)
#define RTC_PDN1_KPOC				(1U << 14)
#define RTC_PDN1_DEBUG				(1U << 15)

#define RTC_GPIO_USER_MASK	(RTC_PDN1_GPIO_WIFI | RTC_PDN1_GPIO_GPS\
	| RTC_PDN1_GPIO_BT | RTC_PDN1_GPIO_FM | RTC_PDN1_GPIO_PMIC)

/*
 * RTC_PDN2:
 *     bit 0 - 3 : MTH in power-on time
 *     bit 4     : Power-On Alarm bit
 *     bit 5 - 6 : UART bits
 *     bit 7     : autoboot bit
 *     bit 8 - 14: YEA in power-on time
 *     bit 15    : Power-On Logo bit
 */
#define RTC_PDN2					(PMIC_RTC_PDN2_ADDR)
#define RTC_PDN2_PWRON_MTH_MASK		0x000f
#define RTC_PDN2_PWRON_MTH_SHIFT		0
#define RTC_PDN2_PWRON_ALARM			(1U << 4)
#define RTC_PDN2_UART_MASK			0x0060
#define RTC_PDN2_UART_SHIFT			5
#define RTC_PDN2_PWRON_YEA_MASK		0x7f00
#define RTC_PDN2_AUTOBOOT			(1U << 7)
#define RTC_PDN2_PWRON_YEA_SHIFT		8
#define RTC_PDN2_PWRON_LOGO			(1U << 15)

/*
 * RTC_SPAR0:
 *     bit 0 - 5 : SEC in power-on time
 *     bit 6     : 32K less bit. True:with 32K, False:Without 32K
 *     bit 7 - 15: reserved bits
 */
#define RTC_SPAR0					(PMIC_RTC_SPAR0_ADDR)
#define RTC_SPAR0_PWRON_SEC_MASK		0x003f
#define RTC_SPAR0_PWRON_SEC_SHIFT		0
#define RTC_SPAR0_32K_LESS			(1U << 6)
#define RTC_SPAR0_LP_DET				(1U << 7)

/*
 * RTC_SPAR1:
 *     bit 0 - 5  : MIN in power-on time
 *     bit 6 - 10 : HOU in power-on time
 *     bit 11 - 15: DOM in power-on time
 */
#define RTC_SPAR1					(PMIC_RTC_SPAR1_ADDR)
#define RTC_SPAR1_PWRON_MIN_MASK		0x003f
#define RTC_SPAR1_PWRON_MIN_SHIFT		0
#define RTC_SPAR1_PWRON_HOU_MASK		0x07c0
#define RTC_SPAR1_PWRON_HOU_SHIFT		6
#define RTC_SPAR1_PWRON_DOM_MASK		0xf800
#define RTC_SPAR1_PWRON_DOM_SHIFT		11

#define RTC_PROT					(PMIC_RTC_PROT_ADDR)
#define RTC_PROT_UNLOCK1				0x586a
#define RTC_PROT_UNLOCK2				0x9136

#define RTC_DIFF			(PMIC_RTC_DIFF_ADDR)
#define RTC_POWER_DETECTED			\
	(PMIC_POWER_DETECTED_MASK << PMIC_POWER_DETECTED_SHIFT)
#define RTC_K_EOSC32_RSV			\
	(PMIC_K_EOSC32_RSV_MASK << PMIC_K_EOSC32_RSV_SHIFT)
#define RTC_CALI_RD_SEL_SHIFT			(PMIC_CALI_RD_SEL_SHIFT)
#define RTC_CALI_RD_SEL				\
	(PMIC_CALI_RD_SEL_MASK << PMIC_CALI_RD_SEL_SHIFT)

#define RTC_CALI			(PMIC_RTC_CALI_ADDR)
#define RTC_CALI_MASK				\
	(PMIC_RTC_CALI_MASK << PMIC_RTC_CALI_SHIFT)
#define RTC_CALI_WR_SEL				\
	(PMIC_CALI_WR_SEL_MASK << PMIC_CALI_WR_SEL_SHIFT)
#define RTC_CALI_WR_SEL_SHIFT			(PMIC_CALI_WR_SEL_SHIFT)
#define RTC_K_EOSC32_OVERFLOW			\
	(PMIC_K_EOSC32_OVERFLOW_MASK << PMIC_K_EOSC32_OVERFLOW_SHIFT)

#define RTC_WRTGR		(PMIC_WRTGR_ADDR)

#define RTC_CON					\
	(PMIC_VBAT_LPSTA_RAW_ADDR)
#define RTC_VBAT_LPSTA_RAW			\
	(PMIC_VBAT_LPSTA_RAW_MASK << PMIC_VBAT_LPSTA_RAW_SHIFT)
#define RTC_EOSC32_LPEN				\
	(PMIC_EOSC32_LPEN_MASK << PMIC_EOSC32_LPEN_SHIFT)
#define RTC_XOSC32_LPEN				\
	(PMIC_XOSC32_LPEN_MASK << PMIC_XOSC32_LPEN_SHIFT)
#define RTC_CON_LPRST				\
	(PMIC_LPRST_MASK << PMIC_LPRST_SHIFT)
#define RTC_CON_CDBO				\
	(PMIC_CDBO_MASK << PMIC_CDBO_SHIFT)
#define RTC_CON_F32KOB				\
	(PMIC_F32KOB_MASK << PMIC_F32KOB_SHIFT)	/* 0: RTC_GPIO exports 32K */
#define RTC_CON_GPO				\
	(PMIC_GPO_MASK << PMIC_GPO_SHIFT)
/* 1: GPO mode, 0: GPI mode */
#define RTC_CON_GOE				\
	(PMIC_GOE_MASK << PMIC_GOE_SHIFT)
#define RTC_CON_GSR				\
	(PMIC_GSR_MASK << PMIC_GSR_SHIFT)
#define RTC_CON_GSMT				\
	(PMIC_GSMT_MASK << PMIC_GSMT_SHIFT)
#define RTC_CON_GPEN				\
	(PMIC_GPEN_MASK << PMIC_GPEN_SHIFT)
#define RTC_CON_GPU				\
	(PMIC_GPU_MASK << PMIC_GPU_SHIFT)
#define RTC_CON_GE4				\
	(PMIC_GE4_MASK << PMIC_GE4_SHIFT)
#define RTC_CON_GE8				\
	(PMIC_GE8_MASK << PMIC_GE8_SHIFT)
#define RTC_CON_GPI				\
	(PMIC_GPI_MASK << PMIC_GPI_SHIFT)
#define RTC_CON_LPSTA_RAW			\
	(PMIC_LPSTA_RAW_MASK << PMIC_LPSTA_RAW_SHIFT)	/* 32K was stopped */

#define RTC_INT_CNT					(PMIC_RTC_INT_CNT_ADDR)

/* power on alarm time setting */

#define RTC_PWRON_YEA        RTC_PDN2
#define RTC_PWRON_YEA_MASK     0x7f00
#define RTC_PWRON_YEA_SHIFT     8

#define RTC_PWRON_MTH        RTC_PDN2
#define RTC_PWRON_MTH_MASK     0x000f
#define RTC_PWRON_MTH_SHIFT     0

#define RTC_PWRON_SEC        RTC_SPAR0
#define RTC_PWRON_SEC_MASK     0x003f
#define RTC_PWRON_SEC_SHIFT     0

#define RTC_PWRON_MIN        RTC_SPAR1
#define RTC_PWRON_MIN_MASK     0x003f
#define RTC_PWRON_MIN_SHIFT     0

#define RTC_PWRON_HOU        RTC_SPAR1
#define RTC_PWRON_HOU_MASK     0x07c0
#define RTC_PWRON_HOU_SHIFT     6

#define RTC_PWRON_DOM        RTC_SPAR1
#define RTC_PWRON_DOM_MASK     0xf800
#define RTC_PWRON_DOM_SHIFT     11

extern u16 rtc_spare_reg[][3];

#endif /* __MT_RTC_HW_H__ */

