QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    MainWindow.cpp \
    circuit_board.cpp \
    dynamicmatrix.cpp \
    fraction.cpp \
    graph.cpp \
    graph_algorithm.cpp \
    graph_parser.cpp \
    graphwidget.cpp \
    helper.cpp \
    main.cpp \
    planargraphwidget.cpp \
    router.cpp \
    test.cpp

HEADERS += \
    MainWindow.h \
    circuit_board.h \
    dynamicmatrix.h \
    fraction.h \
    graph.h \
    graph_algorithm.h \
    graph_inline_implementations.h \
    graph_parser.h \
    graphwidget.h \
    helper.h \
    planargraphwidget.h \
    router.h \
    test.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
