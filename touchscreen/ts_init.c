#include <xiaomi-msm8953/touchscreen.h>
 
/*
#include <xiaomi-msm8953/touchscreen.h>
 
 	if (xiaomi_msm8953_touchscreen_is_probed)
 		return -ENODEV;
 
 	xiaomi_msm8953_touchscreen_is_probed = true;
*/
bool xiaomi_msm8953_touchscreen_is_probed = false;
EXPORT_SYMBOL(xiaomi_msm8953_touchscreen_is_probed);

#if IS_ENABLED(CONFIG_TOUCHSCREEN_FTS_MI8953)
extern int xiaomi_msm8953_touchscreen_fts_ts_init(void);
#endif

static int __init xiaomi_msm8953_touchscreen_init(void)
{
#if IS_ENABLED(CONFIG_TOUCHSCREEN_FTS_MI8953)
    xiaomi_msm8953_touchscreen_fts_ts_init();
#endif

    return 0;
}
module_init(xiaomi_msm8953_touchscreen_init);