# OpenMV library
add_library("openmv-lib", "$(OMV_LIB_DIR)")

# Drivers
require("onewire")
require("ds18x20")
require("dht")
require("neopixel")
freeze ("$(OMV_LIB_DIR)/", "modbus.py")
freeze ("$(OMV_LIB_DIR)/", "pid.py")
freeze ("$(OMV_LIB_DIR)/", "bno055.py")
freeze ("$(OMV_LIB_DIR)/", "ssd1306.py")
freeze ("$(OMV_LIB_DIR)/", "tb6612.py")
freeze ("$(OMV_LIB_DIR)/", "vl53l1x.py")
freeze ("$(OMV_LIB_DIR)/", "machine.py")
freeze ("$(OMV_LIB_DIR)/", "display.py")
freeze ("$(OMV_LIB_DIR)/", "sensor.py")

# Networking
# NOTE: Disabled on this board — no WINC1500/LWIP hardware.
# Uncomment if WiFi hardware is added and MICROPY_PY_WINC1500=1 / LWIP=1.
#require("ssl")
#require("ntptime")
#require("webrepl")
#freeze ("$(OMV_LIB_DIR)/", "rpc.py")
#freeze ("$(OMV_LIB_DIR)/", "rtsp.py")
#freeze ("$(OMV_LIB_DIR)/", "mqtt.py")
#freeze ("$(OMV_LIB_DIR)/", "requests.py")

# Utils
require("time")
require("logging")
freeze ("$(OMV_LIB_DIR)/", "mutex.py")

# Libraries
require("ml", library="openmv-lib")
include("$(MPY_DIR)/extmod/asyncio")

# Boot script
freeze ("$(OMV_LIB_DIR)/", "_boot.py")
