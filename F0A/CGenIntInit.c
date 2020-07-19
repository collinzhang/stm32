/***************************************************************
 * All rights reserved.
***************************************************************/

#include "LVCGenIncludes.h"
#include "LVISR.h"
#include "LVEvent.h"

#ifndef LV_IRQ_PRIORITY
#define LV_IRQ_PRIORITY   0x0F        // Default priority of LV configured interrupts
#endif                                        // Should be set in OEM_LVISR.c for each target.

// Interrupt headers

// Globals



void LVCGenIntInit() {




}

void LVCGenIntUninit() {
}
