#-------------------------------------------------
#
# Project created by QtCreator 2014-01-06T16:48:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = stellarium
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    StelMainGraphicsView.cpp \
    StelAppGraphicsItem.cpp

HEADERS  += mainwindow.h \
    StelMainGraphicsView.h \
    StelCore.h \
    StelAppGraphicsItem.h

FORMS    += mainwindow.ui
