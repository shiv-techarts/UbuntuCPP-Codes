QT -= core
QT -= gui

CONFIG += c++14

TARGET = Game
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    maingame.cpp

HEADERS += \
    maingame.h

unix:!macx: LIBS += -lSDL2
unix:!macx: LIBS += -lGLEW
unix:!macx: LIBS += -lglut
unix:!macx: LIBS += -lGLU
unix:!macx: LIBS += -lGL
unix:!macx: LIBS += -lX11
unix:!macx: LIBS += -lm
