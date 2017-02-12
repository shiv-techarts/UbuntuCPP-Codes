QT += core
QT -= gui

TARGET = Data_Structure
CONFIG += console
CONFIG += c++11
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    node.cpp \
    linkedlistdemo.cpp

HEADERS += \
    node.h \
    linkedlistdemo.h

