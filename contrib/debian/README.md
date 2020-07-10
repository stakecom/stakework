
Debian
====================
This directory contains files used to package stakeworkd/stakework-qt
for Debian-based Linux systems. If you compile stakeworkd/stakework-qt yourself, there are some useful files here.

## stakework: URI support ##


stakework-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install stakework-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your stakework-qt binary to `/usr/bin`
and the `../../share/pixmaps/stakework128.png` to `/usr/share/pixmaps`

stakework-qt.protocol (KDE)

