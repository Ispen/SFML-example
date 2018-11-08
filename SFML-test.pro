TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt
CONFIG(debug, debug|release): LIBS += -lsfml-network -lsfml-graphics -lsfml-system -lsfml-window

SOURCES += \
        main.cpp \
    game.cpp \
    player.cpp

HEADERS += \
    game.h \
    player.h

DISTFILES += \
    .gitignore
