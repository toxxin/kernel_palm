#ifndef __LINUX_BQ27X00_BATTERY_H__
#define __LINUX_BQ27X00_BATTERY_H__

/**
 * struct bq27xxx_plaform_data - Platform data for bq27xxx devices
 * @name: Name of the battery. If NULL the driver will fallback to "bq27xxx".
 * @read: HDQ read callback.
 *	This function should provide access to the HDQ bus the battery is
 *	connected to.
 *	The first parameter is a pointer to the battery device, the second the
 *	register to be read. The return value should either be the content of
 *	the passed register or an error value.
 */
struct bq27xxx_platform_data {
	const char *name;
	int (*read)(struct device *dev, unsigned int);
};

#endif
