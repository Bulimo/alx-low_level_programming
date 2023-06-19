#!/bin/bash
wget https://github.com/Bulimo/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libwin.so .
export LD_PRELOAD=./libwin.so/
