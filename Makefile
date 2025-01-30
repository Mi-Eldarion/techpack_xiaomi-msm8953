ifeq ($(CONFIG_MACH_XIAOMI_MSM8953),y)
obj-$(CONFIG_INPUT_TOUCHSCREEN) += touchscreen/
obj-$(CONFIG_POWER_SUPPLY) += power_supply/
obj-$(CONFIG_NEW_LEDS) += leds/
else
ccflags-y := -Wno-unused-function
obj-y := stub.o
endif