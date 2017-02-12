QT -= core
QT -= gui

CONFIG += c11

TARGET = CS50Codes
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    main.c \
    cs50.c

HEADERS += \
    cs50.h
