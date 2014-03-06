#ifndef FG4CPP_STRCONV_TOUTF8_H
#define FG4CPP_STRCONV_TOUTF8_H

#include "fgpp/strconv/toutf8.h"
#include "fg/strconv/toutf8.h"
#include "fg4cpp/def/common/primitives.h"
#include "fg4cpp/util/inline.h"

namespace fg {
    FG4CPP_FUNCTION_BOOL(
        toUtf8(
            Utf8 &              _to
            , const String &    _FROM
            , Size &            _outputLength
            , Size &            _inputLength
        )
        , fgToUtf8FromString(
            toFg( &_to )
            , toFg( &_FROM )
            , &_outputLength
            , &_inputLength
        )
    )

    FG4CPP_FUNCTION_BOOL(
        toUtf8(
            Utf8 &          _to
            , const Utf16 & _FROM
            , Size &        _outputLength
            , Size &        _inputLength
        )
        , fgToUtf8FromUtf16(
            toFg( &_to )
            , toFg( &_FROM )
            , &_outputLength
            , &_inputLength
        )
    )

    FG4CPP_FUNCTION_BOOL(
        toUtf8(
            Utf8 &          _to
            , const Utf32 & _FROM
            , Size &        _outputLength
            , Size &        _inputLength
        )
        , fgToUtf8FromUtf32(
            toFg( &_to )
            , toFg( &_FROM )
            , &_outputLength
            , &_inputLength
        )
    )
}

#endif  // FG4CPP_STRCONV_TOUTF8_H
