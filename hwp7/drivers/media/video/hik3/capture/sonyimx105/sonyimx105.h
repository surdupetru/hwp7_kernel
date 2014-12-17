/*
 *  sonyimx105 camera driver head file
 *
 *  CopyRight (C) Hisilicon Co., Ltd.
 *  Version:  1.2
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _SONYIMX105_H
#define _SONYIMX105_H


#include "../isp/k3_isp_io.h"
/***********************************************************************
 *
 * sonyimx105 init sensor registers list
 *
 ***********************************************************************/
/* default is 1600*1200 9fps 2lane */
const struct _sensor_reg_t sonyimx105_init_regs[] = {
	{0x0100, 0x00}, //stand by

	{0x3031, 0x10},
	{0x3064, 0x12},
	{0x3087, 0x57},
	{0x308A, 0x35},
	{0x3091, 0x41},
	{0x3098, 0x03},
	{0x3099, 0xC0},
	{0x309A, 0xA3},
	{0x309D, 0x94},
	{0x30AB, 0x01},
	{0x30AD, 0x00},
	{0x30B1, 0x03},
	{0x30C4, 0x17},
	{0x30F3, 0x03},
	{0x3116, 0x31},
	{0x3117, 0x38},
	{0x3138, 0x28},
	{0x3137, 0x14},
	{0x3139, 0x2E},
	{0x314D, 0x2A},
	{0x328F, 0x01},
	{0x3343, 0x04},
	{0x3032, 0x40},
	{0x3064, 0x12}, /* set this register again. */
};


/*1600x1200 24fps*/
const struct _sensor_reg_t sonyimx105_framesize_1600x1200[] = {
	{0x0100, 0x00},

	//PLL config
	{0x0305, 0x02},
	{0x0307, 0x50},//set sclk 800M
	{0x30A4, 0x02},
	{0x303C, 0x40},

	{0x0340, 0x06},//vts set to 0x5f4(cs <25fps, es 21fps)
	{0x0341, 0xf4},
	{0x0342, 0x0e},//hts 
	{0x0343, 0x10},

	{0x0344, 0x00},//start x
	{0x0345, 0x04},
	{0x0346, 0x00},//start y
	{0x0347, 0x24},

	{0x0348, 0x0C},//end x
	{0x0349, 0xC3},
	{0x034A, 0x09},//end y
	{0x034B, 0xC3},

	{0x034C, 0x06},//width
	{0x034D, 0x60},
	{0x034E, 0x04},//height
	{0x034F, 0xD0},
	{0x0381, 0x01},//x even inc
	{0x0383, 0x01},//x odd inc
	{0x0385, 0x01},//y even inc
	{0x0387, 0x03},//y odd inc
	{0x3033, 0x84},
	{0x303D, 0x60},
	{0x303E, 0x40},
	{0x3040, 0x08},
	{0x3041, 0x97},
	{0x3048, 0x01},
	{0x304C, 0xB7},
	{0x304D, 0x01},
	{0x309B, 0x00}, //-6db disable
	{0x309C, 0x33},
	{0x309E, 0x04},
	{0x30AA, 0x01},
	{0x30D5, 0x04},
	{0x30D6, 0x85},
	{0x30D7, 0x2A},
	{0x30DE, 0x00},
	{0x3102, 0x05},
	{0x3103, 0x12},
	{0x3104, 0x12},
	{0x3105, 0x00},
	{0x3106, 0x46},
	{0x3107, 0x00},
	{0x315C, 0x4A},
	{0x315D, 0x49},
	{0x316E, 0x4B},
	{0x316F, 0x4A},
	{0x3318, 0x62},
	{0x0100, 0x01},
};

/*RES_2560x1440*/
const struct _sensor_reg_t sonyimx105_framesize_5M_wide[] = {
	{0x0100, 0x00},

	//PLL config
	{0x0305, 0x02},
	{0x0307, 0x50},// set sclk 800M
	{0x30A4, 0x02},
	{0x303C, 0x40},

	{0x0340, 0x06},//vts set to 0x5f4(cs <25fps, es 21fps)
	{0x0341, 0xf4},
	{0x0342, 0x0e},//hts
	{0x0343, 0x10},

	{0x0344, 0x01},//start x
	{0x0345, 0x64},
	{0x0346, 0x02},//start y
	{0x0347, 0x1c},

	{0x0348, 0x0b},//end x
	{0x0349, 0x63},
	{0x034A, 0x07},//end y
	{0x034B, 0xBb},

	{0x034C, 0x0a},//width
	{0x034D, 0x00},
	{0x034E, 0x05},//height
	{0x034F, 0xa0},

	{0x0381, 0x01},//x even inc
	{0x0383, 0x01},//x odd inc
	{0x0385, 0x01},//y even inc
	{0x0387, 0x01},//y odd inc

	{0x3033, 0x00},
	{0x303D, 0x70}, //not same with fullsize
	{0x303E, 0x41},
	{0x3040, 0x08},
	{0x3041, 0x97},
	{0x3048, 0x00},
	{0x304C, 0x50},
	{0x304D, 0x03},
	{0x309B, 0x00},
	{0x309C, 0x34},
	{0x309E, 0x00},
	{0x30AA, 0x02}, //not same with fullsize
	{0x30D5, 0x00},
	{0x30D6, 0x85},
	{0x30D7, 0x2A},
	{0x30DE, 0x00},
	{0x3102, 0x10},
	{0x3103, 0x44},
	{0x3104, 0x40},
	{0x3105, 0x00},
	{0x3106, 0x10},
	{0x3107, 0x01},
	{0x315C, 0x76},
	{0x315D, 0x75},
	{0x316E, 0x77},
	{0x316F, 0x76},
	{0x3318, 0x62},
	{0x0100, 0x01},
};

/*RES_3280x1856 full size, 30fps */
const struct _sensor_reg_t sonyimx105_framesize_8M_wide[] = {
	{0x0100, 0x00},

	//PLL config
	{0x0305, 0x02},
	{0x0307, 0x50},
	{0x30A4, 0x02},
	{0x303C, 0x40},

	{0x0340, 0x08},//vts
	{0x0341, 0xac},
	{0x0342, 0x0f},//hts
	{0x0343, 0xa0},

	{0x0344, 0x00},//start x
	{0x0345, 0x04},
	{0x0346, 0x01},//start y
	{0x0347, 0x54},

	{0x0348, 0x0c},//end x
	{0x0349, 0xc3},
	{0x034A, 0x08},//end y
	{0x034B, 0x93},

	{0x034C, 0x0c},//width
	{0x034D, 0xc0},
	{0x034E, 0x07},//height
	{0x034F, 0x40},

	{0x0381, 0x01},//x even inc
	{0x0383, 0x01},//x odd inc
	{0x0385, 0x01},//y even inc
	{0x0387, 0x01},//y odd inc

	{0x3033, 0x00},
	{0x303D, 0x70}, //not same with fullsize
	{0x303E, 0x41},
	{0x3040, 0x08},
	{0x3041, 0x97},
	{0x3048, 0x00},
	{0x304C, 0x50},
	{0x304D, 0x03},
	{0x309B, 0x00},
	{0x309C, 0x34},
	{0x309E, 0x00},
	{0x30AA, 0x02}, //not same with fullsize
	{0x30D5, 0x00},
	{0x30D6, 0x85},
	{0x30D7, 0x2A},
	{0x30DE, 0x00},
	{0x3102, 0x10},
	{0x3103, 0x44},
	{0x3104, 0x40},
	{0x3105, 0x00},
	{0x3106, 0x10},
	{0x3107, 0x01},
	{0x315C, 0x76},
	{0x315D, 0x75},
	{0x316E, 0x77},
	{0x316F, 0x76},
	{0x3318, 0x62},
	{0x0100, 0x01},
};

/*RES_3264x2448 full size, 15fps */
const struct _sensor_reg_t sonyimx105_framesize_full[] = {
	{0x0100, 0x00},

	//PLL config
	{0x0305, 0x02},
	{0x0307, 0x50},
	{0x30A4, 0x02},
	{0x303C, 0x40},

	{0x0340, 0x0c},//vts
	{0x0341, 0x06},
	{0x0342, 0x0f},//hts
	{0x0343, 0xa0},

	{0x0344, 0x00},//start x
	{0x0345, 0x04},
	{0x0346, 0x00},//start y
	{0x0347, 0x24},

	{0x0348, 0x0C},//end x
	{0x0349, 0xC3},
	{0x034A, 0x09},//end y
	{0x034B, 0xB3},

	{0x034C, 0x0C},//width
	{0x034D, 0xC0},
	{0x034E, 0x09},//height
	{0x034F, 0x90},

	{0x0381, 0x01},//x even inc
	{0x0383, 0x01},//x odd inc
	{0x0385, 0x01},//y even inc
	{0x0387, 0x01},//y odd inc

	{0x3033, 0x00},
	{0x303D, 0x60},
	{0x303E, 0x41},
	{0x3040, 0x08},
	{0x3041, 0x97},
	{0x3048, 0x00},
	{0x304C, 0x50},
	{0x304D, 0x03},
	{0x309B, 0x00},
	{0x309C, 0x34},
	{0x309E, 0x00},
	{0x30AA, 0x03},
	{0x30D5, 0x00},
	{0x30D6, 0x85},
	{0x30D7, 0x2A},
	{0x30DE, 0x00},
	{0x3102, 0x10},
	{0x3103, 0x44},
	{0x3104, 0x40},
	{0x3105, 0x00},
	{0x3106, 0x10},
	{0x3107, 0x01},
	{0x315C, 0x76},
	{0x315D, 0x75},
	{0x316E, 0x77},
	{0x316F, 0x76},
	{0x3318, 0x62},
	{0x0100, 0x01},
};

#endif /* SONYIMX105_H_INCLUDED */

/************************** END ***************************/
