#ifndef FG4CPP_UTIL_DEFINEFUNCTION_H
#define FG4CPP_UTIL_DEFINEFUNCTION_H

#include "fgpp/def/common/primitives.h"

#define FG4CPP_DEFINE_FUNCTION( _func, _returnType, _proc ) \
    FG4CPPINLINE _returnType _func { _proc }
#define FG4CPP_FUNCTION_VOID( _func, _proc ) \
    FG4CPP_DEFINE_FUNCTION( _func, void, _proc; )
#define FG4CPP_FUNCTION_BOOL( _func, _proc ) \
    FG4CPP_DEFINE_FUNCTION( _func, Bool, return _proc; )
#define FG4CPP_FUNCTION_NUM( _func, _returnType, _proc ) \
    FG4CPP_DEFINE_FUNCTION( _func, _returnType, return _proc; )
#define FG4CPP_FUNCTION_PTR( _func, _returnType, _proc ) \
    FG4CPP_DEFINE_FUNCTION( _func, _returnType *, return toFgpp( _proc ); )
#define FG4CPP_FUNCTION_REF( _func, _returnType, _proc ) \
    FG4CPP_DEFINE_FUNCTION( _func, _returnType &, return toFgpp( *_proc ); )
#define FG4CPP_FUNCTION_ENUM( _func, _returnType, _proc ) \
    FG4CPP_DEFINE_FUNCTION( _func, _returnType, return toFgpp( _proc ); )

#endif  // FG4CPP_UTIL_DEFINEFUNCTION_H
