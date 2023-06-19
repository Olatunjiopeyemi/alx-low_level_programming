#!/bin/bash
wget -P /tmp https://github.com/Olatunjiopeyemi/alx-low_level_programming/raw/main/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
