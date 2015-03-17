#-------------------------------------------------
#
# Project created by QtCreator 2015-03-16T19:48:07
#
#-------------------------------------------------

QT       += network

QT       -= gui

TARGET = QGoogleAnalytics
TEMPLATE = lib

DEFINES += QGOOGLEANALYTICS_LIBRARY

SOURCES += qgoogleanalytics.cpp

HEADERS += qgoogleanalytics.h\
        qgoogleanalytics_global.h \
    qgoogleanalyticsconstructor.h

#unix {
#    target.path = /usr/lib
#    INSTALLS += target
#}
