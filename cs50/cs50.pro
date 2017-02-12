#-------------------------------------------------
#
# Project created by QtCreator 2016-11-23T08:49:24
#
#-------------------------------------------------

QT       -= core gui

TARGET = cs50
TEMPLATE = lib
CONFIG += c++11
CONFIG += staticlib

SOURCES += \
    cs50.cpp

HEADERS += cs50.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
