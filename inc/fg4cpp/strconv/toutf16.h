#ifndef FG4CPP_STRCONV_TOUTF16_H
#define FG4CPP_STRCONV_TOUTF16_H

#include "fgpp/strconv/toutf16.h"
#include "fg/strconv/toutf16.h"
#include "fg4cpp/def/common/primitives.h"
#include "fg4cpp/util/inline.h"

namespace fg {
    FG4CPP_FUNCTION_BOOL(
        toUtf16(
            Utf16 &             _to
            , const String &    _FROM
            , Size &            _outputLength
            , Size &            _inputLength
        )
        , fgToUtf16FromString(
            toFg( &_to )
            , toFg( &_FROM )
            , &_outputLength
            , &_inputLength
        )
    )

    FG4CPP_FUNCTION_BOOL(
        toUtf16(
            Utf16 &         _to
            , const Utf8 &  _FROM
            , Size &        _outputLength
            , Size &        _inputLength
        )
        , fgToUtf16FromUtf8(
            toFg( &_to )
            , toFg( &_FROM )
            , &_outputLength
            , &_inputLength
        )
    )

    FG4CPP_FUNCTION_BOOL(
        toUtf16(
            Utf16 &         _to
            , const Utf32 & _FROM
            , Size &        _outputLength
            , Size &        _inputLength
        )
        , fgToUtf16FromUtf32(
            toFg( &_to )
            , toFg( &_FROM )
            , &_outputLength
            , &_inputLength
        )
    )
}

#endif  // FG4CPP_STRCONV_TOUTF16_H
