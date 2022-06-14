#!/bin/bash
wget -O /tmp/101-make_me_win.sh https://github.com/iamgreatoni/alx-low_level_programming/blob/master/0x18-dynamic_libraries/101-make_me_win.sh
export LD_PRELOAD=/tmp/101-make_me_win.sh
