/****************************************************************************************
 *  All rights reserved.
 *  Delimited VI name: VISA Serial Read.vi
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
struct _VISA_Serial_Read_heap { 
    VoidHand s_Byte_Array_To_String_string;
    PDAArrPtr a_Initialize_Array_initialized_;
    PDAArrPtr a_uart_Read_2_pBuffer;
    uInt16 n___________;
    uInt8 runStatD4_1;  
    uInt8 runStatE;  
    uInt8 by_____;
    Enum8 e_VISA_resource_name_4;
} _DATA_SECTION __VISA_Serial_Read_heap; /* heap */

static struct _VISA_Serial_Read_heap _DATA_SECTION *heap = &__VISA_Serial_Read_heap; /* heap */

static uInt32 _DATA_SECTION _VISA_Serial_Read_signalsReadyTable[1];

static StepArray _DATA_SECTION stepArr = NULL;
static uInt32 _DATA_SECTION *signalsReady = (uInt32 *) _VISA_Serial_Read_signalsReadyTable; /* heap */
static eRunStatus _DATA_SECTION gRunStatus = eReady;
static int32 _DATA_SECTION gCurrentCallerID = 0;
static uInt32 InitSignalReadyValues[1] = {1};
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
    0, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

struct {
    int32   el_0;
    int32   el_1;
    uInt8   el_2:1;
    uInt8   el_3[3];
    VoidPtr el_4;

}
static g_control_5 = {
    0, 1, true, 0, 0, 0, 0
};



/****** Control & Indicator IDs used to reference terminals from block diagram **********/


#define gFormID 2100UL
#define VISA_Serial_Read_in_0_VISA_resource_name_14D_ctlid 2100
#define VISA_Serial_Read_in_2_err_in_1D4_ctlid 2101
#define VISA_Serial_Read_out_1_err_out_223_ctlid 2102
#define VISA_Serial_Read_in_1_A____________74_ctlid 2103
#define VISA_Serial_Read_out_0_A________E0_ctlid 2104
#define N_CONTROLS 5L
#define gArrControlData VISA_Serial_Read_gArrControlData
ControlDataItem _DATA_SECTION VISA_Serial_Read_gArrControlData[5] = {
    { VISA_Serial_Read_in_0_VISA_resource_name_14D_ctlid, 0, NULL, VoidHandDataType, enum_control },
    { VISA_Serial_Read_in_2_err_in_1D4_ctlid, 0, NULL, VoidHandDataType, numeric_control },
    { VISA_Serial_Read_out_1_err_out_223_ctlid, 0, NULL, VoidHandDataType, numeric_control },
    { VISA_Serial_Read_in_1_A____________74_ctlid, 0, NULL, VoidHandDataType, numeric_control },
    { VISA_Serial_Read_out_0_A________E0_ctlid, 0, NULL, VoidHandDataType, string_control },
};


/****** Initialize Front Panel Terminals to their default values or to the values passed in **********/


Boolean _TEXT_SECTION VISA_Serial_Read_InitFPTerms(ArgList *argsIn, Boolean bShowFrontPanel);
Boolean _TEXT_SECTION VISA_Serial_Read_InitFPTerms(ArgList *argsIn, Boolean bShowFrontPanel){
    int32 nIdx=0;
    if (!(FPData(VISA_Serial_Read_in_0_VISA_resource_name_14D_ctlid) = EnumCtlDataCreateStatic((EnumCtlData*)&g_control_1, VISA_Serial_Read_in_0_VISA_resource_name_14D_ctlid, (ControlID)0, (ControlID)0, (int32)5, 0xA0000 | Enum8DataType, 0 ))){
        return false;
    }
    if (argsIn && argsIn->size > 0 && argsIn->args[0].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Serial_Read_in_0_VISA_resource_name_14D_ctlid);
        if (!SetEnumCtlFieldValue(GetControlHValue(nIdx), argsIn->args[0].pValue, argsIn->args[0].nType )) {
            return false;
        }
    }
    else {
        {           int16 lVal = 0 ;
            if (!SetEnumCtlFieldValue( FPData(VISA_Serial_Read_in_0_VISA_resource_name_14D_ctlid), &lVal, IntDataType )){
                return false;
            }
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Serial_Read_in_0_VISA_resource_name_14D_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("VISA resource name"),18,-4,-28,121,19,
    _LVT("0"),17,0,0,0, true);
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Serial_Read_in_0_VISA_resource_name_14D_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("VISA\327\312\324\264\303\373\263\306"),12,-4,-28,78,19,
    _LVT("0"),17,0,0,0, false);
    {uInt8 dVal = (uInt8)0 ;
        {
            static NumericInitialData numData = {
                VISA_Serial_Read_in_2_err_in_1D4_ctlid,
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
            if (!(FPData(VISA_Serial_Read_in_2_err_in_1D4_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_2, &numData, &dVal))){
                return false;
            }
        }
    }
    if (argsIn && argsIn->size > 2 && argsIn->args[2].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Serial_Read_in_2_err_in_1D4_ctlid);
        if (!SetNumericFieldValue(GetControlHValue(nIdx), argsIn->args[2].pValue, argsIn->args[2].nType )) {
            return false;
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Serial_Read_in_2_err_in_1D4_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("err in"),6,-4,-23,34,19,
    _LVT("0"),17,0,0,0, false);
    {uInt8 dVal = (uInt8)0 ;
        {
            static NumericInitialData numData = {
                VISA_Serial_Read_out_1_err_out_223_ctlid,
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
            if (!(FPData(VISA_Serial_Read_out_1_err_out_223_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_3, &numData, &dVal))){
                return false;
            }
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Serial_Read_out_1_err_out_223_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("err out"),7,-4,-23,43,19,
    _LVT("0"),17,0,0,0, false);
    {uInt16 dVal = (uInt16)0 ;
        {
            static NumericInitialData numData = {
                VISA_Serial_Read_in_1_A____________74_ctlid,
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
            if (!(FPData(VISA_Serial_Read_in_1_A____________74_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_4, &numData, &dVal))){
                return false;
            }
        }
    }
    if (argsIn && argsIn->size > 1 && argsIn->args[1].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Serial_Read_in_1_A____________74_ctlid);
        if (!SetNumericFieldValue(GetControlHValue(nIdx), argsIn->args[1].pValue, argsIn->args[1].nType )) {
            return false;
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Serial_Read_in_1_A____________74_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("\266\301\310\241\327\326\275\332\312\375"),10,-4,-23,63,19,
    _LVT("0"),17,0,0,0, false);
    if (!(FPData(VISA_Serial_Read_out_0_A________E0_ctlid) = StringDataCreateStatic((StringData*)&g_control_5, VISA_Serial_Read_out_0_A________E0_ctlid, 0, true, 0, NULL))){
        return false;
    }
    if (bShowFrontPanel) {
        if (!SetStringFieldValue( &FPData(VISA_Serial_Read_out_0_A________E0_ctlid), PDAStrNewFromStr(_LVT("")), StringDataType )){
            return false;
        }

    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Serial_Read_out_0_A________E0_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("\327\326\267\373\264\256"),6,-6,-21,39,19,
    _LVT("0"),17,0,0,0, false);
    return true;
}
#define VISA_Serial_Read_FrontPanelInit NULL
#define VISA_Serial_Read_DrawLabels NULL
#define FPBuildMenu NULL


/****** Free all memory used by this VI except uninitialized left shift registers and globals **********/


void _TEXT_SECTION VISA_Serial_Read_Cleanup(Boolean bShowFrontPanel);
void _TEXT_SECTION VISA_Serial_Read_Cleanup(Boolean bShowFrontPanel){
    (void)StringFreeData( FPData(VISA_Serial_Read_out_0_A________E0_ctlid) );
#if defined(_Include_Events) || defined(_Include_Everything)
#endif
    return;
}


/****** Transfer block diagram terminal values to parent VI caller **********/


Boolean _TEXT_SECTION VISA_Serial_Read_GetFPTerms( ArgList *argsOut );
Boolean _TEXT_SECTION VISA_Serial_Read_GetFPTerms( ArgList *argsOut ){
    int32 nIdx=0;
    if (!argsOut) {
        return true;
    }
    if (argsOut->size > 1 && argsOut->args[1].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Serial_Read_out_1_err_out_223_ctlid);
        if (!GetNumericFieldValue(GetControlHValue(nIdx), argsOut->args[1].pValue, argsOut->args[1].nType )) {
            return false;
        }
    }
    if (argsOut->size > 0 && argsOut->args[0].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Serial_Read_out_0_A________E0_ctlid);
        if (!GetStringFieldValue( GetControlHValue(nIdx), (VoidHand *)argsOut->args[0].pValue )) {
            return false;
        }
    }
    return true;
}


/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION VISA_Serial_Read_CleanupLSRs(void);
void _TEXT_SECTION VISA_Serial_Read_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION VISA_Serial_Read_AddSubVIInstanceData(void);
void _TEXT_SECTION VISA_Serial_Read_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION VISA_Serial_Read_AddVIGlobalConstants(void);
void _TEXT_SECTION VISA_Serial_Read_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION VISA_Serial_Read_InitVIConstantList(void);
void _TEXT_SECTION VISA_Serial_Read_InitVIConstantList(void) {
}


/****** Block diagram code **********/




/****** Block diagram main entry point **********/


eRunStatus _TEXT_SECTION VISA_Serial_Read_BlockDiagram(Boolean bProcessFrontPanel, Boolean bRunToFinish);
eRunStatus _TEXT_SECTION VISA_Serial_Read_BlockDiagram(Boolean bProcessFrontPanel, Boolean bRunToFinish){
    eRunStatus runStat = eReady;
    int16 nReady = 1;
    int16 nDispatched = 0;
    static uInt16 nStep = 0;
    if (gRunStatus == eReady) {
    }
    switch(nStep) {
/* start q el linear (0 or 1 struct) */
        case 0 : {
            heap->by_____ = 0;
            nStep++;}
/* start q el linear (0 or 1 struct) */
        case 1 : {
            if (!GetNumericFieldValue( FPData(VISA_Serial_Read_in_1_A____________74_ctlid), &heap->n___________, uInt16DataType )){
                CGenErr();
            }
/* Array initialize */
            {
                ArrDimSize i;
                ArrDimSize size=1;
                heap->a_Initialize_Array_initialized_ = PDAArrNew1D((ArrDimSize)heap->n___________, uCharDataType);
                size = (ArrDimSize)heap->n___________;
                if (size < 0) {
                    size = 0;
                }
                if (IsNotZero(&heap->by_____, uCharDataType)) {
                    MemSet(FirstElem(heap->a_Initialize_Array_initialized_), size, heap->by_____);
                }
    }
            if (!GetEnumCtlFieldValue( FPData(VISA_Serial_Read_in_0_VISA_resource_name_14D_ctlid), &heap->e_VISA_resource_name_4 )){
                CGenErr();
            }
/* Call Library Node */
            {
                void    uart_Read_2(
                uChar ,
                uInt16 ,
                void* );
                uChar arg1;
                uInt16 arg2;
                void* arg3;
                arg1 = heap->e_VISA_resource_name_4;
                arg2 = heap->n___________;
                arg3 = GetArrayDataPtr(heap->a_Initialize_Array_initialized_, uCharDataType, 1, 27);
                if (!arg3) {
                    CGenErr();
                }
                uart_Read_2(
                arg1,
                arg2,
                arg3
                );
                heap->a_uart_Read_2_pBuffer = PDAArrCreateFromData( arg3, uCharDataType, 1, heap->a_Initialize_Array_initialized_ );
                PDAArrFreeDataPtr(arg3, heap->a_Initialize_Array_initialized_, uCharDataType, 27);
    if ((heap->a_Initialize_Array_initialized_) && ((heap->a_Initialize_Array_initialized_)->refcnt > 0)) {
                    if (((heap->a_Initialize_Array_initialized_)->refcnt == 1) && ((heap->a_Initialize_Array_initialized_)->staticArray == false)) {
                        (heap->a_Initialize_Array_initialized_)->refcnt--;
                        MemHandleFree( heap->a_Initialize_Array_initialized_ );
                        heap->a_Initialize_Array_initialized_=NULL;
                    }
                    else
                        PDAArrFree(heap->a_Initialize_Array_initialized_);
                }
            }
            /**/
            /* Byte Array To String */
            /**/
            if (!PDAArrToString(heap->a_uart_Read_2_pBuffer, &(heap->s_Byte_Array_To_String_string))) {
                CGenErr();
            }
            {
                if (!SetStringFieldValue( &FPData(VISA_Serial_Read_out_0_A________E0_ctlid), heap->s_Byte_Array_To_String_string, StringDataType )){
                    CGenErr();
                }
            }
            nStep++;}
        nStep = 0;
        default: {
            ; /* do nothing */
        }
    }
    return eFinished;
}

/****** VI Configuration data **********/

TextPtr VISA_Serial_Read_VIName = "VISA Serial Read.vi";

static VIInfo _DATA_SECTION viInfo = {
    &VISA_Serial_Read_VIName,
    &gRunStatus,
    &gCurrentCallerID,
    true,
    true,
    false,
    NULL,
    NULL,
    gFormID,
    (uInt8 **)&heap,
    (uInt32)sizeof (struct _VISA_Serial_Read_heap),
    &signalsReady,
    (uInt32 *)&InitSignalReadyValues,
    (uInt32)4,
    (ControlDataItemPtr*)&gArrControlData,
    N_CONTROLS,
    (uInt8**)NULL,
    (uInt32)0,
    false,
    (uInt8**)&stepArr,
    NULL,
    0,
    VISA_Serial_Read_InitFPTerms,
    VISA_Serial_Read_FrontPanelInit,
    VISA_Serial_Read_BlockDiagram,
    VISA_Serial_Read_DrawLabels,
    VISA_Serial_Read_GetFPTerms,
    VISA_Serial_Read_Cleanup,
    VISA_Serial_Read_CleanupLSRs,
    VISA_Serial_Read_AddSubVIInstanceData,
    VISA_Serial_Read_InitVIConstantList
};

/****** Main Entry Point for VI **********/

eRunStatus _TEXT_SECTION VISA_Serial_Read_Run(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
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


