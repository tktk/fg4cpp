﻿#ifndef FG4CPP_STRCONV_TOUTF32_H
#define FG4CPP_STRCONV_TOUTF32_H

#include "fgpp/strconv/toutf32.h"
#include "fg/strconv/toutf32.h"
#include "fg4cpp/def/common/primitives.h"
#include "fg4cpp/util/inline.h"

namespace fg {
    FG4CPP_FUNCTION_BOOL(
        toUtf32(
            Utf32 &             _to
            , const String &    _FROM
            , Size &            _outputLength
            , Size &            _inputLength
        )
        , fgToUtf32FromString(
            toFg( &_to )
            , toFg( &_FROM )
            , &_outputLength
            , &_inputLength
        )
    )

    FG4CPP_FUNCTION_BOOL(
        toUtf32(
            Utf32 &         _to
            , const Utf8 &  _FROM
            , Size &        _outputLength
            , Size &        _inputLength
        )
        , fgToUtf32FromUtf8(
            toFg( &_to )
            , toFg( &_FROM )
            , &_outputLength
            , &_inputLength
        )
    )

    FG4CPP_FUNCTION_BOOL(
        toUtf32(
            Utf32 &         _to
            , const Utf16 & _FROM
            , Size &        _outputLength
            , Size &        _inputLength
        )
        , fgToUtf32FromUtf16(
            toFg( &_to )
            , toFg( &_FROM )
            , &_outputLength
            , &_inputLength
        )
    )
}

#endif  // FG4CPP_STRCONV_TOUTF32_H
