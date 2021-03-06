#-------------------------------------------------
#
# Project created by QtCreator 2015-05-23T16:45:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtTetris
TEMPLATE = app


SOURCES += main.cpp\
        leaderboard.cpp \
        menu.cpp \
        settings.cpp \
        widget.cpp

HEADERS  += widget.h \
    leaderboard.h \
    menu.h \
    settings.h

FORMS    += widget.ui \
    leaderboard.ui \
    menu.ui \
    settings.ui
