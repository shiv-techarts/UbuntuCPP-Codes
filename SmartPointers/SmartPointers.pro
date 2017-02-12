QT -= core
QT -= gui

CONFIG += c++14

TARGET = SmartPointers
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    animal.cpp

HEADERS += \
    animal.h
