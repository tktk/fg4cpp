# -*- coding: utf-8 -*-

from .. import common
from ..builder import buildShlib
from .builder import getTargetName

_MODULE_NAME = 'strconv'
TARGET = getTargetName( _MODULE_NAME )

def build( _context ):
    buildShlib(
        _context,
        TARGET,
        {
            common.SOURCE_DIR : {
                common.FG4CPP : {
                    _MODULE_NAME : {
                        'tostring.cpp',
                        'toutf8.cpp',
                        'toutf16.cpp',
                        'toutf32.cpp',
                    },
                },
            },
        },
        {
            'fg-strconv',
        },
    )
