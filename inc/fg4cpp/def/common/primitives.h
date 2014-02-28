#ifndef FG4CPP_DEF_COMMON_PRIMITIVES_H
#define FG4CPP_DEF_COMMON_PRIMITIVES_H

#include "fgpp/def/common/primitives.h"
#include "fg/def/common/primitives.h"

namespace fg {
    inline const FgString * toFg(
        const String *  _THIS
    )
    {
        return reinterpret_cast< const FgString * >( _THIS );
    }

    inline FgString * toFg(
        String *    _this
    )
    {
        return reinterpret_cast< FgString * >( _this );
    }

    inline const FgString & toFg(
        const String &  _THIS
    )
    {
        return reinterpret_cast< const FgString & >( _THIS );
    }

    inline FgString & toFg(
        String &    _this
    )
    {
        return reinterpret_cast< FgString & >( _this );
    }

    inline const String * toFgpp(
        const FgString *    _THIS
    )
    {
        return reinterpret_cast< const String * >( _THIS );
    }

    inline String * toFgpp(
        FgString *  _this
    )
    {
        return reinterpret_cast< String * >( _this );
    }

    inline const String & toFgpp(
        const FgString &    _THIS
    )
    {
        return reinterpret_cast< const String & >( _THIS );
    }

    inline String & toFgpp(
        FgString &  _this
    )
    {
        return reinterpret_cast< String & >( _this );
    }

    inline const FgUtf8 * toFg(
        const Utf8 *    _THIS
    )
    {
        return reinterpret_cast< const FgUtf8 * >( _THIS );
    }

    inline FgUtf8 * toFg(
        Utf8 *  _this
    )
    {
        return reinterpret_cast< FgUtf8 * >( _this );
    }

    inline const FgUtf8 & toFg(
        const Utf8 &    _THIS
    )
    {
        return reinterpret_cast< const FgUtf8 & >( _THIS );
    }

    inline FgUtf8 & toFg(
        Utf8 &  _this
    )
    {
        return reinterpret_cast< FgUtf8 & >( _this );
    }

    inline const Utf8 * toFgpp(
        const FgUtf8 *  _THIS
    )
    {
        return reinterpret_cast< const Utf8 * >( _THIS );
    }

    inline Utf8 * toFgpp(
        FgUtf8 *    _this
    )
    {
        return reinterpret_cast< Utf8 * >( _this );
    }

    inline const Utf8 & toFgpp(
        const FgUtf8 &  _THIS
    )
    {
        return reinterpret_cast< const Utf8 & >( _THIS );
    }

    inline Utf8 & toFgpp(
        FgUtf8 &    _this
    )
    {
        return reinterpret_cast< Utf8 & >( _this );
    }

    inline const FgUtf16 * toFg(
        const Utf16 *   _THIS
    )
    {
        return reinterpret_cast< const FgUtf16 * >( _THIS );
    }

    inline FgUtf16 * toFg(
        Utf16 * _this
    )
    {
        return reinterpret_cast< FgUtf16 * >( _this );
    }

    inline const FgUtf16 & toFg(
        const Utf16 &   _THIS
    )
    {
        return reinterpret_cast< const FgUtf16 & >( _THIS );
    }

    inline FgUtf16 & toFg(
        Utf16 & _this
    )
    {
        return reinterpret_cast< FgUtf16 & >( _this );
    }

    inline const Utf16 * toFgpp(
        const FgUtf16 * _THIS
    )
    {
        return reinterpret_cast< const Utf16 * >( _THIS );
    }

    inline Utf16 * toFgpp(
        FgUtf16 *   _this
    )
    {
        return reinterpret_cast< Utf16 * >( _this );
    }

    inline const Utf16 & toFgpp(
        const FgUtf16 & _THIS
    )
    {
        return reinterpret_cast< const Utf16 & >( _THIS );
    }

    inline Utf16 & toFgpp(
        FgUtf16 &   _this
    )
    {
        return reinterpret_cast< Utf16 & >( _this );
    }

    inline const FgUtf32 * toFg(
        const Utf32 *   _THIS
    )
    {
        return reinterpret_cast< const FgUtf32 * >( _THIS );
    }

    inline FgUtf32 * toFg(
        Utf32 * _this
    )
    {
        return reinterpret_cast< FgUtf32 * >( _this );
    }

    inline const FgUtf32 & toFg(
        const Utf32 &   _THIS
    )
    {
        return reinterpret_cast< const FgUtf32 & >( _THIS );
    }

    inline FgUtf32 & toFg(
        Utf32 & _this
    )
    {
        return reinterpret_cast< FgUtf32 & >( _this );
    }

    inline const Utf32 * toFgpp(
        const FgUtf32 * _THIS
    )
    {
        return reinterpret_cast< const Utf32 * >( _THIS );
    }

    inline Utf32 * toFgpp(
        FgUtf32 *   _this
    )
    {
        return reinterpret_cast< Utf32 * >( _this );
    }

    inline const Utf32 & toFgpp(
        const FgUtf32 & _THIS
    )
    {
        return reinterpret_cast< const Utf32 & >( _THIS );
    }

    inline Utf32 & toFgpp(
        FgUtf32 &   _this
    )
    {
        return reinterpret_cast< Utf32 & >( _this );
    }
}

#endif  // FG4CPP_DEF_COMMON_PRIMITIVES_H
