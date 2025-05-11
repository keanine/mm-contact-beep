#include "modding.h"
#include "global.h"
#include "recomputils.h"
#include "recompconfig.h"

u32 LifeMeter_IsCritical(void);

RECOMP_HOOK_RETURN("func_80833B18") void func_80833B18() {
    if (LifeMeter_IsCritical()) {
        Audio_PlaySfx(NA_SE_SY_HITPOINT_ALARM);
    }
}