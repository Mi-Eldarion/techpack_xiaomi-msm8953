#include <xiaomi-msm8953/touchscreen.h>
 
/*
#include <xiaomi-msm8953/touchscreen.h>
 
 	if (xiaomi_msm8953_touchscreen_is_probed)
 		return -ENODEV;
 
 	xiaomi_msm8953_touchscreen_is_probed = true;
*/
bool xiaomi_msm8953_touchscreen_is_probed = false;
EXPORT_SYMBOL(xiaomi_msm8953_touchscreen_is_probed);