# Suckless tools

This repo includes all of my [suckless utils](https://suckless.org/), including my DWM build with the themes that I use.

## List of applied patches for `DWM`

- [Systray](https://dwm.suckless.org/patches/systray/)
- [Pertag](https://dwm.suckless.org/patches/pertag/)
- [Moveresize](https://dwm.suckless.org/patches/moveresize/)
- [Center](https://dwm.suckless.org/patches/center/)
- [Autostart](https://dwm.suckless.org/patches/autostart/)
- [Hide vacant tags](https://dwm.suckless.org/patches/hide_vacant_tags/)
- [Full Gaps](https://dwm.suckless.org/patches/fullgaps/)

## Installing patches

- Download the diff file into the suckless utility folder that you are patching.
- Run :

```sh
patch -p1 < dif_file_name.diff
```

- If you encounter any errors, a new file named will be created, you will need to apply the remaining modifications manually.

- Run `./install.sh`.

## Tips

- Add dwm.desktop to `/usr/share/xsessions/dwm.desktop` to be able to launch it from a display manager and check that it is executable.
- For this build to work, make sure you have a `.dwm` folder in your home directory with an `autostart.sh` script.
- The scripts used for `dwmblocks` can be retrieved from my [dotfiles repository](https://github.com/Zedo9/dotfiles/tree/main/scripts/bin).
