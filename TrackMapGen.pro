#-------------------------------------------------
#
# Project created by QtCreator 2013-07-12T18:10:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TrackMapGen
TEMPLATE = app


SOURCES += main.cpp\
        trackmapgen.cpp \
    iracingbinarytelemetry.cpp

HEADERS  += trackmapgen.h \
    irsdk_defines.h \
    iracingbinarytelemetry.h

FORMS    += trackmapgen.ui
