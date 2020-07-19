/****************************************************************************************
 *  All rights reserved.
 *  Delimited VI name: VISA Serial Port Byte.vi
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
struct {
    DataType    el_0;
    uInt32  el_1;
    uInt32  el_2;
    uInt32  el_3;
    uInt8   el_4;
    uInt8   el_5;
}

static g_control_1 = {
    0, 0, 0, 5, 1, 0
};

static NumericData g_control_2 = {
    0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

static NumericData g_control_3 = {
    0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

static NumericData g_control_4 = {
    0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};



/****** Control & Indicator IDs used to reference terminals from block diagram **********/


#define gFormID 2300UL
#define VISA_Serial_Port_Byte_in_0_VISA_resource_name_2D_ctlid 2300
#define VISA_Serial_Port_Byte_in_1_err_in_1D4_ctlid 2301
#define VISA_Serial_Port_Byte_out_1_err_out_223_ctlid 2302
#define VISA_Serial_Port_Byte_out_0_A____________80_ctlid 2303
#define N_CONTROLS 4L
#define gArrControlData VISA_Serial_Port_Byte_gArrControlData
ControlDataItem _DATA_SECTION VISA_Serial_Port_Byte_gArrControlData[4] = {
    { VISA_Serial_Port_Byte_in_0_VISA_resource_name_2D_ctlid, 0, NULL, VoidHandDataType, enum_control },
    { VISA_Serial_Port_Byte_in_1_err_in_1D4_ctlid, 0, NULL, VoidHandDataType, numeric_control },
    { VISA_Serial_Port_Byte_out_1_err_out_223_ctlid, 0, NULL, VoidHandDataType, numeric_control },
    { VISA_Serial_Port_Byte_out_0_A____________80_ctlid, 0, NULL, VoidHandDataType, numeric_control },
};


/****** Initialize Front Panel Terminals to their default values or to the values passed in **********/


Boolean _TEXT_SECTION VISA_Serial_Port_Byte_InitFPTerms(ArgList *argsIn, Boolean bShowFrontPanel);
Boolean _TEXT_SECTION VISA_Serial_Port_Byte_InitFPTerms(ArgList *argsIn, Boolean bShowFrontPanel){
    int32 nIdx=0;
    if (!(FPData(VISA_Serial_Port_Byte_in_0_VISA_resource_name_2D_ctlid) = EnumCtlDataCreateStatic((EnumCtlData*)&g_control_1, VISA_Serial_Port_Byte_in_0_VISA_resource_name_2D_ctlid, (ControlID)0, (ControlID)0, (int32)5, 0xC0000 | Enum8DataType, 0 ))){
        return false;
    }
    if (argsIn && argsIn->size > 0 && argsIn->args[0].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Serial_Port_Byte_in_0_VISA_resource_name_2D_ctlid);
        if (!SetEnumCtlFieldValue(GetControlHValue(nIdx), argsIn->args[0].pValue, argsIn->args[0].nType )) {
            return false;
        }
    }
    else {
        {           int16 lVal = 0 ;
            if (!SetEnumCtlFieldValue( FPData(VISA_Serial_Port_Byte_in_0_VISA_resource_name_2D_ctlid), &lVal, IntDataType )){
                return false;
            }
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Serial_Port_Byte_in_0_VISA_resource_name_2D_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("VISA resource name"),18,-4,-28,121,19,
    _LVT("0"),17,0,0,0, true);
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Serial_Port_Byte_in_0_VISA_resource_name_2D_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("VISA\327\312\324\264\303\373\263\306"),12,-4,-28,78,19,
    _LVT("0"),17,0,0,0, false);
    {uInt8 dVal = (uInt8)0 ;
        {
            static NumericInitialData numData = {
                VISA_Serial_Port_Byte_in_1_err_in_1D4_ctlid,
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
            if (!(FPData(VISA_Serial_Port_Byte_in_1_err_in_1D4_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_2, &numData, &dVal))){
                return false;
            }
        }
    }
    if (argsIn && argsIn->size > 1 && argsIn->args[1].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Serial_Port_Byte_in_1_err_in_1D4_ctlid);
        if (!SetNumericFieldValue(GetControlHValue(nIdx), argsIn->args[1].pValue, argsIn->args[1].nType )) {
            return false;
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Serial_Port_Byte_in_1_err_in_1D4_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("err in"),6,-4,-23,34,19,
    _LVT("0"),17,0,0,0, false);
    {uInt8 dVal = (uInt8)0 ;
        {
            static NumericInitialData numData = {
                VISA_Serial_Port_Byte_out_1_err_out_223_ctlid,
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
            if (!(FPData(VISA_Serial_Port_Byte_out_1_err_out_223_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_3, &numData, &dVal))){
                return false;
            }
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Serial_Port_Byte_out_1_err_out_223_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("err out"),7,-4,-23,43,19,
    _LVT("0"),17,0,0,0, false);
    {uInt16 dVal = (uInt16)0 ;
        {
            static NumericInitialData numData = {
                VISA_Serial_Port_Byte_out_0_A____________80_ctlid,
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
                0,
                0,
                0,
            };
            if (!(FPData(VISA_Serial_Port_Byte_out_0_A____________80_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_4, &numData, &dVal))){
                return false;
            }
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Serial_Port_Byte_out_0_A____________80_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("\264\256\277\332\327\326\275\332\312\375"),10,-4,-23,63,19,
    _LVT("0"),17,0,0,0, false);
    return true;
}
#define VISA_Serial_Port_Byte_FrontPanelInit NULL
#define VISA_Serial_Port_Byte_DrawLabels NULL
#define FPBuildMenu NULL


/****** Free all memory used by this VI except uninitialized left shift registers and globals **********/


void _TEXT_SECTION VISA_Serial_Port_Byte_Cleanup(Boolean bShowFrontPanel);
void _TEXT_SECTION VISA_Serial_Port_Byte_Cleanup(Boolean bShowFrontPanel){
#if defined(_Include_Events) || defined(_Include_Everything)
#endif
    return;
}


/****** Transfer block diagram terminal values to parent VI caller **********/


Boolean _TEXT_SECTION VISA_Serial_Port_Byte_GetFPTerms( ArgList *argsOut );
Boolean _TEXT_SECTION VISA_Serial_Port_Byte_GetFPTerms( ArgList *argsOut ){
    int32 nIdx=0;
    if (!argsOut) {
        return true;
    }
    if (argsOut->size > 1 && argsOut->args[1].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Serial_Port_Byte_out_1_err_out_223_ctlid);
        if (!GetNumericFieldValue(GetControlHValue(nIdx), argsOut->args[1].pValue, argsOut->args[1].nType )) {
            return false;
        }
    }
    if (argsOut->size > 0 && argsOut->args[0].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Serial_Port_Byte_out_0_A____________80_ctlid);
        if (!GetNumericFieldValue(GetControlHValue(nIdx), argsOut->args[0].pValue, argsOut->args[0].nType )) {
            return false;
        }
    }
    return true;
}


/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION VISA_Serial_Port_Byte_CleanupLSRs(void);
void _TEXT_SECTION VISA_Serial_Port_Byte_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION VISA_Serial_Port_Byte_AddSubVIInstanceData(void);
void _TEXT_SECTION VISA_Serial_Port_Byte_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION VISA_Serial_Port_Byte_AddVIGlobalConstants(void);
void _TEXT_SECTION VISA_Serial_Port_Byte_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION VISA_Serial_Port_Byte_InitVIConstantList(void);
void _TEXT_SECTION VISA_Serial_Port_Byte_InitVIConstantList(void) {
}


/****** Block diagram code **********/




/****** Block diagram main entry point **********/


eRunStatus _TEXT_SECTION VISA_Serial_Port_Byte_BlockDiagram(Boolean bProcessFrontPanel, Boolean bRunToFinish);
eRunStatus _TEXT_SECTION VISA_Serial_Port_Byte_BlockDiagram(Boolean bProcessFrontPanel, Boolean bRunToFinish){
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

TextPtr VISA_Serial_Port_Byte_VIName = "VISA Serial Port Byte.vi";

static VIInfo _DATA_SECTION viInfo = {
    &VISA_Serial_Port_Byte_VIName,
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
    VISA_Serial_Port_Byte_InitFPTerms,
    VISA_Serial_Port_Byte_FrontPanelInit,
    VISA_Serial_Port_Byte_BlockDiagram,
    VISA_Serial_Port_Byte_DrawLabels,
    VISA_Serial_Port_Byte_GetFPTerms,
    VISA_Serial_Port_Byte_Cleanup,
    VISA_Serial_Port_Byte_CleanupLSRs,
    VISA_Serial_Port_Byte_AddSubVIInstanceData,
    VISA_Serial_Port_Byte_InitVIConstantList
};

/****** Main Entry Point for VI **********/

eRunStatus _TEXT_SECTION VISA_Serial_Port_Byte_Run(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
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


