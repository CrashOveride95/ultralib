#include "PR/os_internal.h"
#include "PR/ultraerror.h"
#include "viint.h"

void osViExtendVStart(u32 value) {
#ifdef _DEBUG
    if (!__osViDevMgr.active) {
        __osError(134, 0);
        return 0;
    }

    if (value > 48) {
        __osError(135, 1, value);
        return 0;
    }
#endif
    __additional_scanline = value;
    return;
}
