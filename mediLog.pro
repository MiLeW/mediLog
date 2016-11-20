#-------------------------------------------------
#
# Project created by QtCreator 2016-11-20T20:56:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mediLog
TEMPLATE = app


SOURCES += main.cpp\
        medilog.cpp \
    Dose.cpp \
    Treatment.cpp \
    XMLfunctions.cpp

HEADERS  += medilog.h \
    Date.hh \
    Dose.hh \
    Treatment.hh \
    XMLfunctions.hh

FORMS    += medilog.ui

DISTFILES += \
    LICENSE
