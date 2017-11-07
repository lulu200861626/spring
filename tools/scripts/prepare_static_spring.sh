#!/bin/sh
set -e

WORKDIR=${PWD}
TMPDIR=${WORKDIR}/tmp
INCLUDEDIR=${WORKDIR}/include
LIBDIR=${WORKDIR}/lib

cmake .  -DPREFER_STATIC_LIBS=1 \
         -DIL_IL_HEADER=${INCLUDEDIR}/IL/il.h -DIL_INCLUDE_DIR=${INCLUDEDIR} -DIL_IL_LIBRARY=${LIBDIR}/libIL.a \
         -DPNG_PNG_INCLUDE_DIR=${INCLUDEDIR} -DPNG_LIBRARY_RELEASE=${LIBDIR}/libpng.a \
         -DJPEG_INCLUDE_DIR=${INCLUDEDIR} -DJPEG_LIBRARY=${LIBDIR}/libjpeg.a \
         -DTIFF_INCLUDE_DIR=${INCLUDEDIR} -DTIFF_LIBRARY_RELEASE=${LIBDIR}/libtiff.a \
         -DZLIB_INCLUDE_DIR=${INCLUDEDIR} -DZLIB_LIBRARY_RELEASE=${LIBDIR}/libz.a \
         -DGLEW_INCLUDE_DIR=${INCLUDEDIR} -DGLEW_LIBRARIES=${LIBDIR}/libGLEW.a \
         -DLIBUNWIND_INCLUDE_DIRS=${INCLUDEDIR} -DLIBUNWIND_LIBRARY=${LIBDIR}/libunwind.a \
         -DXCB_LIBRARIES=/usr/lib/x86_64-linux-gnu/libxcb.a
