QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    abstractmodel.cpp \
    account.cpp \
    addcreditwindow.cpp \
    changeaccountwindow.cpp \
    changecreditwindow.cpp \
    changepersonwindow.cpp \
    credit.cpp \
    csvreader.cpp \
    listserializer.cpp \
    main.cpp \
    mainwindow.cpp \
    notimplementedexception.cpp \
    person.cpp

HEADERS += \
    abstractmodel.h \
    account.h \
    addcreditwindow.h \
    changeaccountwindow.h \
    changecreditwindow.h \
    changepersonwindow.h \
    credit.h \
    csvreader.h \
    listserializer.h \
    mainwindow.h \
    notimplementedexception.h \
    person.h

FORMS += \
    addcreditwindow.ui \
    changeaccountwindow.ui \
    changecreditwindow.ui \
    changepersonwindow.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
