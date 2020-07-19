/****************************************************************************************
 *  All rights reserved.
 *  Delimited VI name: GPO_EIO_Inner.vi
 *  Generated UI: false
 *  Generated Debug Info: false
 *  Generated Serial Only: false
 *  Generated Stack Variables: false
 *  Generated Guard Code: true
 *  Generated Interrupt Code: false
 *  Generated C Function Calls: false
 *  Generated Integer Only : false
 *  Generated Expression Folding : false
 *  Generated memory model: dynamic
*****************************************************************************************/
#include "LVCGenIncludes.h"
#if CGEN_VERSION != 11000
#error CGenerator version mismatch
#endif
/* VI heap data */

static StepArray _DATA_SECTION stepArr = NULL;
static uInt32 _DATA_SECTION *signalsReady = (uInt32 *) NULL; /* heap */
static eRunStatus _DATA_SECTION gRunStatus = eReady;
static int32 _DATA_SECTION gCurrentCallerID = 0;
static uInt32 InitSignalReadyValues[1] = {0 };
static NumericData g_control_1 = {
    0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

static NumericData g_control_2 = {
    0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

static NumericData g_control_3 = {
    0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

static NumericData g_control_4 = {
    0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};



/****** Control & Indicator IDs used to reference terminals from block diagram **********/


#define gFormID 2100UL
#define GPO_EIO_Inner_in_3_PortX_in_4F_ctlid 2100
#define GPO_EIO_Inner_in_2_pin_in_7A_ctlid 2101
#define GPO_EIO_Inner_in_1_mode_9C_ctlid 2102
#define GPO_EIO_Inner_in_0_cValue_253_ctlid 2103
#define N_CONTROLS 4L
#define gArrControlData GPO_EIO_Inner_gArrControlData
ControlDataItem _DATA_SECTION GPO_EIO_Inner_gArrControlData[4] = {
    { GPO_EIO_Inner_in_3_PortX_in_4F_ctlid, 0, NULL, VoidHandDataType, numeric_control },
    { GPO_EIO_Inner_in_2_pin_in_7A_ctlid, 0, NULL, VoidHandDataType, numeric_control },
    { GPO_EIO_Inner_in_1_mode_9C_ctlid, 0, NULL, VoidHandDataType, numeric_control },
    { GPO_EIO_Inner_in_0_cValue_253_ctlid, 0, NULL, VoidHandDataType, numeric_control },
};


/****** Initialize Front Panel Terminals to their default values or to the values passed in **********/


Boolean _TEXT_SECTION GPO_EIO_Inner_InitFPTerms(ArgList *argsIn, Boolean bShowFrontPanel);
Boolean _TEXT_SECTION GPO_EIO_Inner_InitFPTerms(ArgList *argsIn, Boolean bShowFrontPanel){
    int32 nIdx=0;
    {uInt8 dVal = (uInt8)0 ;
        {
            static NumericInitialData numData = {
                GPO_EIO_Inner_in_3_PortX_in_4F_ctlid,
                0,
                0,
                0,
                0,
                uCharDataType,
                0.0000000000000000000E+0,
                2.5500000000000000000E+2,
                0.0000000000000000000E+0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                1,
                0,
                0,
            };
            if (!(FPData(GPO_EIO_Inner_in_3_PortX_in_4F_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_1, &numData, &dVal))){
                return false;
            }
        }
    }
    if (argsIn && argsIn->size > 3 && argsIn->args[3].pValue) {
        nIdx = CalcControlOffset( gFormID, GPO_EIO_Inner_in_3_PortX_in_4F_ctlid);
        if (!SetNumericFieldValue(GetControlHValue(nIdx), argsIn->args[3].pValue, argsIn->args[3].nType )) {
            return false;
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    GPO_EIO_Inner_in_3_PortX_in_4F_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("PortX_in"),8,-4,-23,50,19,
    _LVT("0"),17,0,0,0, false);
    {uInt8 dVal = (uInt8)0 ;
        {
            static NumericInitialData numData = {
                GPO_EIO_Inner_in_2_pin_in_7A_ctlid,
                0,
                0,
                0,
                0,
                uCharDataType,
                0.0000000000000000000E+0,
                2.5500000000000000000E+2,
                0.0000000000000000000E+0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                1,
                0,
                0,
            };
            if (!(FPData(GPO_EIO_Inner_in_2_pin_in_7A_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_2, &numData, &dVal))){
                return false;
            }
        }
    }
    if (argsIn && argsIn->size > 2 && argsIn->args[2].pValue) {
        nIdx = CalcControlOffset( gFormID, GPO_EIO_Inner_in_2_pin_in_7A_ctlid);
        if (!SetNumericFieldValue(GetControlHValue(nIdx), argsIn->args[2].pValue, argsIn->args[2].nType )) {
            return false;
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    GPO_EIO_Inner_in_2_pin_in_7A_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("pin_in"),6,-4,-23,36,19,
    _LVT("0"),17,0,0,0, false);
    {uInt8 dVal = (uInt8)0 ;
        {
            static NumericInitialData numData = {
                GPO_EIO_Inner_in_1_mode_9C_ctlid,
                0,
                0,
                0,
                0,
                uCharDataType,
                0.0000000000000000000E+0,
                2.5500000000000000000E+2,
                0.0000000000000000000E+0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                1,
                0,
                0,
            };
            if (!(FPData(GPO_EIO_Inner_in_1_mode_9C_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_3, &numData, &dVal))){
                return false;
            }
        }
    }
    if (argsIn && argsIn->size > 1 && argsIn->args[1].pValue) {
        nIdx = CalcControlOffset( gFormID, GPO_EIO_Inner_in_1_mode_9C_ctlid);
        if (!SetNumericFieldValue(GetControlHValue(nIdx), argsIn->args[1].pValue, argsIn->args[1].nType )) {
            return false;
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    GPO_EIO_Inner_in_1_mode_9C_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("mode"),4,-4,-23,37,19,
    _LVT("0"),17,0,0,0, false);
    {uInt8 dVal = (uInt8)0 ;
        {
            static NumericInitialData numData = {
                GPO_EIO_Inner_in_0_cValue_253_ctlid,
                0,
                0,
                0,
                0,
                uCharDataType,
                0.0000000000000000000E+0,
                2.5500000000000000000E+2,
                0.0000000000000000000E+0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                1,
                0,
                0,
            };
            if (!(FPData(GPO_EIO_Inner_in_0_cValue_253_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_4, &numData, &dVal))){
                return false;
            }
        }
    }
    if (argsIn && argsIn->size > 0 && argsIn->args[0].pValue) {
        nIdx = CalcControlOffset( gFormID, GPO_EIO_Inner_in_0_cValue_253_ctlid);
        if (!SetNumericFieldValue(GetControlHValue(nIdx), argsIn->args[0].pValue, argsIn->args[0].nType )) {
            return false;
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    GPO_EIO_Inner_in_0_cValue_253_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("cValue"),6,-4,-23,41,19,
    _LVT("0"),17,0,0,0, false);
    return true;
}
#define GPO_EIO_Inner_FrontPanelInit NULL
#define GPO_EIO_Inner_DrawLabels NULL
#define FPBuildMenu NULL


/****** Free all memory used by this VI except uninitialized left shift registers and globals **********/


void _TEXT_SECTION GPO_EIO_Inner_Cleanup(Boolean bShowFrontPanel);
void _TEXT_SECTION GPO_EIO_Inner_Cleanup(Boolean bShowFrontPanel){
#if defined(_Include_Events) || defined(_Include_Everything)
#endif
    return;
}


/****** Transfer block diagram terminal values to parent VI caller **********/


Boolean _TEXT_SECTION GPO_EIO_Inner_GetFPTerms( ArgList *argsOut );
Boolean _TEXT_SECTION GPO_EIO_Inner_GetFPTerms( ArgList *argsOut ){
    int32 nIdx=0;
    if (!argsOut) {
        return true;
    }
    return true;
}


/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION GPO_EIO_Inner_CleanupLSRs(void);
void _TEXT_SECTION GPO_EIO_Inner_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION GPO_EIO_Inner_AddSubVIInstanceData(void);
void _TEXT_SECTION GPO_EIO_Inner_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION GPO_EIO_Inner_AddVIGlobalConstants(void);
void _TEXT_SECTION GPO_EIO_Inner_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION GPO_EIO_Inner_InitVIConstantList(void);
void _TEXT_SECTION GPO_EIO_Inner_InitVIConstantList(void) {
}


/****** Block diagram code **********/




/****** Block diagram main entry point **********/


eRunStatus _TEXT_SECTION GPO_EIO_Inner_BlockDiagram(Boolean bProcessFrontPanel, Boolean bRunToFinish);
eRunStatus _TEXT_SECTION GPO_EIO_Inner_BlockDiagram(Boolean bProcessFrontPanel, Boolean bRunToFinish){
    eRunStatus runStat = eReady;
    int16 nReady = 1;
    int16 nDispatched = 0;
    static uInt16 nStep = 0;
    if (gRunStatus == eReady) {
    }
    switch(nStep) {
        nStep = 0;
    }
    return eFinished;
}

/****** VI Configuration data **********/

TextPtr GPO_EIO_Inner_VIName = "GPO_EIO_Inner.vi";

static VIInfo _DATA_SECTION viInfo = {
    &GPO_EIO_Inner_VIName,
    &gRunStatus,
    &gCurrentCallerID,
    true,
    true,
    false,
    NULL,
    NULL,
    gFormID,
    (uInt8 **)NULL,
    (uInt32)0,
    &signalsReady,
    (uInt32 *)&InitSignalReadyValues,
    (uInt32)0,
    (ControlDataItemPtr*)&gArrControlData,
    N_CONTROLS,
    (uInt8**)NULL,
    (uInt32)0,
    false,
    (uInt8**)&stepArr,
    NULL,
    0,
    GPO_EIO_Inner_InitFPTerms,
    GPO_EIO_Inner_FrontPanelInit,
    GPO_EIO_Inner_BlockDiagram,
    GPO_EIO_Inner_DrawLabels,
    GPO_EIO_Inner_GetFPTerms,
    GPO_EIO_Inner_Cleanup,
    GPO_EIO_Inner_CleanupLSRs,
    GPO_EIO_Inner_AddSubVIInstanceData,
    GPO_EIO_Inner_InitVIConstantList
};

/****** Main Entry Point for VI **********/

eRunStatus _TEXT_SECTION GPO_EIO_Inner_Run(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
    uInt8 *pHeap_lsr=NULL;
    eRunStatus stat=eReady;
    viInfo.bShowFrontPanel = bShowFrontPanel;
    viInfo.bRunToFinish = bRunToFinish;
    viInfo.argsIn = argsIn;
    viInfo.argsOut = argsOut;
    stat =  RunVI(viInstanceData, &viInfo, 0 );
    return stat;
}


/****** End of generated code **********/


