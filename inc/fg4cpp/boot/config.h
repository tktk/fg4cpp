#ifndef FG4CPP_BOOT_CONFIG_H
#define FG4CPP_BOOT_CONFIG_H

#include "fgpp/boot/config.h"
#include "fg/boot/config.h"
#include "fg4cpp/def/boot/config.h"
#include "fg4cpp/util/inline.h"

namespace fg {
    FG4CPP_FUNCTION_PTR(
        newBootConfig(
        )
        , BootConfig
        , fgBootConfigNew(
        )
    )

    FG4CPP_FUNCTION_VOID(
        free(
            BootConfig &    _config
        )
        , fgBootConfigFree(
            toFg( &_config )
        )
    )
}

#endif  // FG4CPP_BOOT_CONFIG_H
