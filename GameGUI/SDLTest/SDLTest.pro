QT -= core
QT -= gui

CONFIG += c++11

TARGET = SDLTest
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

unix|win32: LIBS += -lSDL2main

unix|win32: LIBS += -lSDL2
