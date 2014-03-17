#ifndef FG4CPP_DEF_BOOT_CONFIG_H
#define FG4CPP_DEF_BOOT_CONFIG_H

#include "fgpp/def/boot/config.h"
#include "fg/def/boot/config.h"

namespace fg {
    inline const FgBootConfig * toFg(
        const BootConfig *  _THIS
    )
    {
        return reinterpret_cast< const FgBootConfig * >( _THIS );
    }

    inline FgBootConfig * toFg(
        BootConfig *    _this
    )
    {
        return reinterpret_cast< FgBootConfig * >( _this );
    }

    inline const FgBootConfig & toFg(
        const BootConfig &  _THIS
    )
    {
        return reinterpret_cast< const FgBootConfig & >( _THIS );
    }

    inline FgBootConfig & toFg(
        BootConfig &    _this
    )
    {
        return reinterpret_cast< FgBootConfig & >( _this );
    }

    inline const BootConfig * toFgpp(
        const FgBootConfig *    _THIS
    )
    {
        return reinterpret_cast< const BootConfig * >( _THIS );
    }

    inline BootConfig * toFgpp(
        FgBootConfig *  _this
    )
    {
        return reinterpret_cast< BootConfig * >( _this );
    }

    inline const BootConfig & toFgpp(
        const FgBootConfig &    _THIS
    )
    {
        return reinterpret_cast< const BootConfig & >( _THIS );
    }

    inline BootConfig & toFgpp(
        FgBootConfig &  _this
    )
    {
        return reinterpret_cast< BootConfig & >( _this );
    }
}

#endif  // FG4CPP_DEF_BOOT_CONFIG_H
