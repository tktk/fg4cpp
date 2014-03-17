#ifndef FG4CPP_BOOT_BOOT_H
#define FG4CPP_BOOT_BOOT_H

#include "fgpp/boot/boot.h"
#include "fg/boot/boot.h"
#include "fg4cpp/def/boot/config.h"
#include "fg4cpp/util/inline.h"

namespace fg {
    FG4CPP_FUNCTION_BOOL(
        boot(
            const BootConfig &  _CONFIG
        )
        , fgBoot(
            toFg( &_CONFIG )
        )
    )
}

#endif  // FG4CPP_BOOT_BOOT_H
