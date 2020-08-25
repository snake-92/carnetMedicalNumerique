#-------------------------------------------------
#
# Project created by QtCreator 2020-05-07T15:32:01
#
#-------------------------------------------------

QT       += core gui
QT += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = carnetNumerique
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    formlogin.cpp \
    formmessagerie.cpp \
        main.cpp \
        appligui.cpp \
    menuprincipal.cpp \
    profil.cpp \
    dialoginfopatient.cpp

HEADERS += \
        appligui.h \
    formlogin.h \
    formmessagerie.h \
    menuprincipal.h \
    profil.h \
    dialoginfopatient.h

FORMS += \
        appligui.ui \
    dialoginfopatient.ui \
    formlogin.ui \
    formmessagerie.ui
