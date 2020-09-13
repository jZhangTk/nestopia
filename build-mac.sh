#!/bin/bash
cd "$(dirname "$0")" || exit

export PKG_CONFIG_PATH=/usr/local/opt/libarchive/lib/pkgconfig/
autoreconf -vif
./configure --disable-gui
make
