#-------------------------------------------------
#
# Project created by QtCreator 2016-05-29T11:03:20
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = database
CONFIG   += console
CONFIG   += c++11
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp
INCLUDEPATH += /usr/include/mysql/
INCLUDEPATH += /usr/local/include/
LIBS += /usr/local/lib
LIBS += /usr/lib/mysql/plugin

