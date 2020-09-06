TEMPLATE  = subdirs
CONFIG   += ordered

!contains(CONFIG, SINGLEBIN) {
    SUBDIRS += \
        external_library/pillow/pillowcore \
        external_library/QXlsx/QXlsx \
        libglobal \
        libdb \
        libserver
    !contains(CONFIG, SERVER_BUILD) {
        SUBDIRS += \
            libprint \
            libgui \
    }
}

SUBDIRS += sultan
