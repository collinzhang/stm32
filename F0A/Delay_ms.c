/****************************************************************************************
 *  All rights reserved.
 *  Delimited VI name: Delay_ms.vi
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
    0, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

static NumericData g_control_2 = {
    0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

static NumericData g_control_3 = {
    0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};



/****** Control & Indicator IDs used to reference terminals from block diagram **********/


#define gFormID 2700UL
#define Delay_ms_in_1_time_ms_5A_ctlid 2700
#define Delay_ms_out_0_err_out_6B_ctlid 2701
#define Delay_ms_in_0_err_in_86_ctlid 2702
#define N_CONTROLS 3L
#define gArrControlData Delay_ms_gArrControlData
ControlDataItem _DATA_SECTION Delay_ms_gArrControlData[3] = {
    { Delay_ms_in_1_time_ms_5A_ctlid, 0, NULL, VoidHandDataType, numeric_control },
    { Delay_ms_out_0_err_out_6B_ctlid, 0, NULL, VoidHandDataType, numeric_control },
    { Delay_ms_in_0_err_in_86_ctlid, 0, NULL, VoidHandDataType, numeric_control },
};


/****** Initialize Front Panel Terminals to their default values or to the values passed in **********/


Boolean _TEXT_SECTION Delay_ms_InitFPTerms(ArgList *argsIn, Boolean bShowFrontPanel);
Boolean _TEXT_SECTION Delay_ms_InitFPTerms(ArgList *argsIn, Boolean bShowFrontPanel){
    int32 nIdx=0;
    {uInt16 dVal = (uInt16)1 ;
        {
            static NumericInitialData numData = {
                Delay_ms_in_1_time_ms_5A_ctlid,
                0,
                0,
                0,
                0,
                uInt16DataType,
                0.0000000000000000000E+0,
                6.5535000000000000000E+4,
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
            if (!(FPData(Delay_ms_in_1_time_ms_5A_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_1, &numData, &dVal))){
                return false;
            }
        }
    }
    if (argsIn && argsIn->size > 1 && argsIn->args[1].pValue) {
        nIdx = CalcControlOffset( gFormID, Delay_ms_in_1_time_ms_5A_ctlid);
        if (!SetNumericFieldValue(GetControlHValue(nIdx), argsIn->args[1].pValue, argsIn->args[1].nType )) {
            return false;
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    Delay_ms_in_1_time_ms_5A_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("time_ms"),7,-4,-23,50,19,
    _LVT("0"),17,0,0,0, false);
    {uInt8 dVal = (uInt8)0 ;
        {
            static NumericInitialData numData = {
                Delay_ms_out_0_err_out_6B_ctlid,
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
                0,
                0,
                0,
            };
            if (!(FPData(Delay_ms_out_0_err_out_6B_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_2, &numData, &dVal))){
                return false;
            }
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    Delay_ms_out_0_err_out_6B_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("err_out"),7,-4,-23,44,19,
    _LVT("0"),17,0,0,0, false);
    {uInt8 dVal = (uInt8)0 ;
        {
            static NumericInitialData numData = {
                Delay_ms_in_0_err_in_86_ctlid,
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
            if (!(FPData(Delay_ms_in_0_err_in_86_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_3, &numData, &dVal))){
                return false;
            }
        }
    }
    if (argsIn && argsIn->size > 0 && argsIn->args[0].pValue) {
        nIdx = CalcControlOffset( gFormID, Delay_ms_in_0_err_in_86_ctlid);
        if (!SetNumericFieldValue(GetControlHValue(nIdx), argsIn->args[0].pValue, argsIn->args[0].nType )) {
            return false;
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    Delay_ms_in_0_err_in_86_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("err_in"),6,-4,-23,35,19,
    _LVT("0"),17,0,0,0, false);
    return true;
}
#define Delay_ms_FrontPanelInit NULL
#define Delay_ms_DrawLabels NULL
#define FPBuildMenu NULL


/****** Free all memory used by this VI except uninitialized left shift registers and globals **********/


void _TEXT_SECTION Delay_ms_Cleanup(Boolean bShowFrontPanel);
void _TEXT_SECTION Delay_ms_Cleanup(Boolean bShowFrontPanel){
#if defined(_Include_Events) || defined(_Include_Everything)
#endif
    return;
}


/****** Transfer block diagram terminal values to parent VI caller **********/


Boolean _TEXT_SECTION Delay_ms_GetFPTerms( ArgList *argsOut );
Boolean _TEXT_SECTION Delay_ms_GetFPTerms( ArgList *argsOut ){
    int32 nIdx=0;
    if (!argsOut) {
        return true;
    }
    if (argsOut->size > 0 && argsOut->args[0].pValue) {
        nIdx = CalcControlOffset( gFormID, Delay_ms_out_0_err_out_6B_ctlid);
        if (!GetNumericFieldValue(GetControlHValue(nIdx), argsOut->args[0].pValue, argsOut->args[0].nType )) {
            return false;
        }
    }
    return true;
}


/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION Delay_ms_CleanupLSRs(void);
void _TEXT_SECTION Delay_ms_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION Delay_ms_AddSubVIInstanceData(void);
void _TEXT_SECTION Delay_ms_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION Delay_ms_AddVIGlobalConstants(void);
void _TEXT_SECTION Delay_ms_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION Delay_ms_InitVIConstantList(void);
void _TEXT_SECTION Delay_ms_InitVIConstantList(void) {
}


/****** Block diagram code **********/




/****** Block diagram main entry point **********/


eRunStatus _TEXT_SECTION Delay_ms_BlockDiagram(Boolean bProcessFrontPanel, Boolean bRunToFinish);
eRunStatus _TEXT_SECTION Delay_ms_BlockDiagram(Boolean bProcessFrontPanel, Boolean bRunToFinish){
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

TextPtr Delay_ms_VIName = "Delay_ms.vi";

static VIInfo _DATA_SECTION viInfo = {
    &Delay_ms_VIName,
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
    Delay_ms_InitFPTerms,
    Delay_ms_FrontPanelInit,
    Delay_ms_BlockDiagram,
    Delay_ms_DrawLabels,
    Delay_ms_GetFPTerms,
    Delay_ms_Cleanup,
    Delay_ms_CleanupLSRs,
    Delay_ms_AddSubVIInstanceData,
    Delay_ms_InitVIConstantList
};

/****** Main Entry Point for VI **********/

eRunStatus _TEXT_SECTION Delay_ms_Run(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
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


