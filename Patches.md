# List of applied patches

## DWM

- [Systray](https://dwm.suckless.org/patches/systray/)
- [Alpha - Transparency](https://dwm.suckless.org/patches/alpha/)
- [Autostart](https://dwm.suckless.org/patches/autostart/)

## DMENU

- [Center]()
- [Alpha]()

# Installing patches

- Download the diff file into the suckless utility folder that you are patching.
- Run :

```
patch -p1 < dif_file_name.diff
```

- If you encounter any errors, a new file named will be created, you will need to apply the remaining modifications manually.

- Remove `config.h` and `sudo make clean install`.

# Tips

- Add dwm.desktop to `/usr/share/xsessions/dwm.desktop` to be able to launch it from a display manager and check that it is excutable.
