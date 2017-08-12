#!/bin/bash
# \file      Multibuild.sh
# \author    https://github.com/infojg9
# \brief     CMake unix based available cpu logical cores
# \copyright MIT/BSD Redistributable License
cores=$(grep -c ^processor /proc/cpuinfo)
echo "Unix Makefile running build: $cores cores..."
make -j$cores "$@"
exit
