#!/bin/sh
xiccd &
lxpolkit &
sh ~/dotfiles/bin/fix_tapping.sh
sh ~/dotfiles/bin/wallpaper.sh
picom -CGb