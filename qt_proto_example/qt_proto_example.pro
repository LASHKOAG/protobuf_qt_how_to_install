TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt


INCLUDEPATH += /usr/local/include
LIBS += -L/usr/local/include/google/protobuf -lprotobuf




SOURCES += main.cpp \
    addressbook.pb.cc

HEADERS += \
    addressbook.pb.h
