TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        coffeemachine.cpp \
        generaldevice.cpp \
        heater.cpp \
        main.cpp \
        radio.cpp

HEADERS += \
    coffeemachine.h \
    generaldevice.h \
    heater.h \
    radio.h
