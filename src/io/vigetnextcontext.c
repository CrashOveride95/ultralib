#include <PR/os_internal.h>
#include "viint.h"

// TODO: this comes from a header
#ifdef BBPLAYER
#ident "$Revision: 1.1 $"
#endif

__OSViContext *__osViGetNextContext(void) {
    return __osViNext;
}
