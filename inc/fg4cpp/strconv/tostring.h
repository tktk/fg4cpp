#ifndef FG4CPP_STRCONV_TOSTRING_H
#define FG4CPP_STRCONV_TOSTRING_H

#include "fgpp/strconv/tostring.h"
#include "fg/strconv/tostring.h"
#include "fg4cpp/def/common/primitives.h"
#include "fg4cpp/util/inline.h"

namespace fg {
    FG4CPP_FUNCTION_NUM(
        getMaxStringCharCount(
        )
        , Size
        , fgGetMaxStringCharCount(
        )
    )

    FG4CPP_FUNCTION_BOOL(
        toString(
            String &        _to
            , const Utf8 &  _FROM
            , Size &        _outputLength
            , Size &        _inputLength
        )
        , fgToStringFromUtf8(
            toFg( &_to )
            , toFg( &_FROM )
            , &_outputLength
            , &_inputLength
        )
    )

    FG4CPP_FUNCTION_BOOL(
        toString(
            String &        _to
            , const Utf16 & _FROM
            , Size &        _outputLength
            , Size &        _inputLength
        )
        , fgToStringFromUtf16(
            toFg( &_to )
            , toFg( &_FROM )
            , &_outputLength
            , &_inputLength
        )
    )

    FG4CPP_FUNCTION_BOOL(
        toString(
            String &        _to
            , const Utf32 & _FROM
            , Size &        _outputLength
            , Size &        _inputLength
        )
        , fgToStringFromUtf32(
            toFg( &_to )
            , toFg( &_FROM )
            , &_outputLength
            , &_inputLength
        )
    )
}

#endif  // FG4CPP_STRCONV_TOSTRING_H
