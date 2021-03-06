#-*- mode: makefile; tab-width: 4; -*-
#
include(../../qmake.inc)
QT -= gui
#
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
SOURCES	 =  ipf.cpp

HEADERS	 = ../../config.h

!win32 {
	QMAKE_COPY    = ../../install.sh -m 0755 -s
}

win32:CONFIG += console

# unix { !macx: CONFIG -= qt }

INCLUDEPATH += ../pflib ../compiler_lib ../libfwbuilder/src
DEPENDPATH  += ../pflib ../compiler_lib ../libfwbuilder/src

PRE_TARGETDEPS  = ../common/$$BINARY_SUBDIR/libcommon.a \
      ../pflib/$$BINARY_SUBDIR/libfwbpf.a \
      ../compiler_lib/$$BINARY_SUBDIR/libcompilerdriver.a \
      ../libfwbuilder/src/fwcompiler/$$BINARY_SUBDIR/libfwcompiler.a \
      ../libfwbuilder/src/fwbuilder/$$BINARY_SUBDIR/libfwbuilder.a \

LIBS  += $$PRE_TARGETDEPS $$LIBS

TARGET = fwb_ipf
