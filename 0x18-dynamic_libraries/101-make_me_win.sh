#!/bin/bash
wget -P ../ https://github.com/Olatunjiopeyemi/alx-low_level_programming/raw/main/0x18-dynamic_libraries/jackpot.so
export LD_PRELOAD=/tmp/jackpot.so
