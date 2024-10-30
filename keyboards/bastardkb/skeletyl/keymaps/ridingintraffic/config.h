#pragma once

// Common QMK variables
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define  QUICK_TAP_TERM 200
#ifdef EE_HANDS
    #undef EE_HANDS
#endif
#ifdef MASTER_RIGHT
    #undef MASTER_RIGHT
#endif
#define MASTER_LEFT