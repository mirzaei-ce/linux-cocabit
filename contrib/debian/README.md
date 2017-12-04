
Debian
====================
This directory contains files used to package cocabitd/cocabit-qt
for Debian-based Linux systems. If you compile cocabitd/cocabit-qt yourself, there are some useful files here.

## cocabit: URI support ##


cocabit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install cocabit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your cocabit-qt binary to `/usr/bin`
and the `../../share/pixmaps/cocabit128.png` to `/usr/share/pixmaps`

cocabit-qt.protocol (KDE)

