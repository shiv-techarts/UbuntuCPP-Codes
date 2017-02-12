QT += core
QT -= gui

TARGET = Tic-Tac-Toe_1
CONFIG += console
CONFIG += c++11
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    designer.cpp \
    player.cpp \
    game.cpp \
    ai.cpp

HEADERS += \
    designer.h \
    player.h \
    game.h \
    gamespecs.h \
    ai.h

