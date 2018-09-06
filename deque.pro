#-------------------------------------------------
#
# Project created by QtCreator 2018-09-06T08:29:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = deque
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tasks.cpp \
    queue.cpp

HEADERS  += mainwindow.h \
    tasks.h \
    queue.h

FORMS    += mainwindow.ui
