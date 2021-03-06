include(../pgmodeler.pro)

TEMPLATE = app
TARGET = pgmodeler
DESTDIR = ../build

QMAKE_CXXFLAGS += -Wl,-rdynamic

windows:RC_FILE=res/windows_ico.qrc
windows:RCC_DIR=src/

LIBS += $$DESTDIR/lib/$$LIBUTIL \
        $$DESTDIR/lib/$$LIBPARSERS \
        $$DESTDIR/lib/$$LIBCONEXBD \
        $$DESTDIR/lib/$$LIBOBJRENDERER \
        $$DESTDIR/lib/$$LIBPGMODELER \
        $$DESTDIR/lib/$$LIBPGMODELERUI

HEADERS += $$PWD/src/aplicacao.h
SOURCES += $$PWD/src/main.cpp
