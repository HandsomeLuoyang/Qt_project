#-------------------------------------------------
#
# Project created by QtCreator 2016-10-28T23:00:13
#
#-------------------------------------------------

QT       += core gui xml
QT       += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NavListView
TEMPLATE = app

SOURCES += main.cpp\
    frmnavlistview.cpp \
    frmnavlistviewform.cpp \
    navlistview.cpp \
    add_sensor.cpp \
    serch_sensor.cpp \
    del_sensor.cpp





HEADERS  += \
    navlistview.h \
    frmnavlistview.h \
    frmnavlistviewform.h \
    add_sensor.h \
    serch_sensor.h \
    deflection_sensor.h \
    sensor.h \
    deflection_sensor.h \
    strain_sensor.h \
    displacement_sensor.h \
    displacement_data.h \
    def_data.h \
    del_sensor.h



FORMS    += \
    frmnavlistview.ui \
    frmnavlistviewform.ui \
    add_sensor.ui \
    serch_sensor.ui \
    del_sensor.ui



DISTFILES +=

RESOURCES += \
    image.qrc
