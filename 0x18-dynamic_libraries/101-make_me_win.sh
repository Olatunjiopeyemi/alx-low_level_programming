#!/bin/bash
wget -P ../ https://github.com/Olatunjiopeyemi/alx-low_level_programming/raw/main/0x18-dynamic_libraries/iwin.so
export LD_PRELOAD=../iwin.so
