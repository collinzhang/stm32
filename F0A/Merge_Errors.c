/****************************************************************************************
 *  All rights reserved.
 *  Delimited VI name: Merge Errors.vi
 *  Generated UI: false
 *  Generated Debug Info: false
 *  Generated Serial Only: true
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
struct _Merge_Errors_heap { 
    cl_00000 c_error_in_1__no_error__CT;
    cl_00000 c_error_in_3__no_error__CT;
    cl_00000 c_error_in_3__no_error_;
    cl_00000 c_error_in_2__no_error_;
    cl_00000 c_error_in_1__no_error_;
    cl_00000 c_error_in_2__no_error__CT;
    cl_00000 c_Build_Array_appended_array_LT;
    cl_00000 c_Case_Structure_CT_79;
    cl_00000 c_Case_Structure_CT_78;
    cl_00000 c_Build_Array_appended_array_CT;
    int32 l_Case_Structure_CT_1;
    int32 l_While_Loop_i_2;
    int32 l_Case_Structure_SR_1;
    int32 l_Array_Size_size_s_;
    int32 l_Unbundle_By_Name_code_2;
    int32 l_Unbundle_By_Name_code_1;
    int32 l_Unbundle_By_Name_code;
    int32 l_Case_Structure_CT;
    int32 l_f;
    int32 l_Select_s__t_f;
    int32 l_Select_s__t_f_1;
    int32 l_Constant;
    int32 l_Case_Structure_SR;
    int32 l_Select_s__t_f_2;
    int32 l_Select_s__t_f_LT;
    int32 l_Array_Size_size_s__1;
    int32 l_Constant_1;
    int32 l_Unbundle_By_Name_code_3;
    int32 l_Constant_SR;
    VoidHand Args2FD_1;  
    VoidHand Args30E_1;  
    VoidHand Args30B_1;  
    VoidHand Args16F_1;  
    VoidHand Args1CE_1;  
    PDAArrPtr a_error_array_in;
    PDAArrPtr a_Build_Array_appended_array_LT_1;
    PDAArrPtr a_Build_Array_appended_array_7;
    PDAArrPtr a_error_array_in_CT;
    Boolean b_Greater_Or_Equal_To_0__x____0_1;
    Boolean b_Greater__x___y_;
    Boolean b_Less_Than_0__x___0_;
    Boolean b_Less_Than_0__x___0__CS;
    Boolean b_While_Loop_End_1;
    Boolean b_Unbundle_By_Name_status_3;
    Boolean b_Compound_Arithmetic_result_CS;
    Boolean b_Compound_Arithmetic_result_1;
    Boolean b_Unbundle_By_Name_status_2;
    Boolean b_Not_Equal_To_0__x____0__3;
    Boolean b_Compound_Arithmetic_result;
    Boolean b_Not_Equal_To_0__x____0__2;
    Boolean b_Unbundle_By_Name_status_1;
    Boolean b_Not_Equal_To_0__x____0__1;
    Boolean b_Unbundle_By_Name_status;
    Boolean b_Equal_To_0__x___0_;
    Boolean b_Greater_Or_Equal_To_0__x____0;
    Boolean b_Not_Equal_To_0__x____0_;
} _DATA_SECTION __Merge_Errors_heap; /* heap */

static struct _Merge_Errors_heap _DATA_SECTION *heap = &__Merge_Errors_heap; /* heap */

static eRunStatus gRunStatus = eReady;
static int32 _DATA_SECTION gCurrentCallerID = 0;
struct _g_string_1 {
    uInt16  refcnt;
    uInt16  staticStr;
    PDAStrLen_t len;
    TextChar    str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_00000 g_cluster_1 = 
{0, 0, (PDAStrPtr)(&g_string_1)};

struct _g_string_2 {
    uInt16  refcnt;
    uInt16  staticStr;
    PDAStrLen_t len;
    TextChar    str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_00000 g_cluster_2 = 
{0, 0, (PDAStrPtr)(&g_string_2)};

struct _g_string_3 {
    uInt16  refcnt;
    uInt16  staticStr;
    PDAStrLen_t len;
    TextChar    str[2];
};
static  struct _g_string_3 g_string_3 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_00000 g_cluster_3 = 
{0, 0, (PDAStrPtr)(&g_string_3)};

struct _g_string_4 {
    uInt16  refcnt;
    uInt16  staticStr;
    PDAStrLen_t len;
    TextChar    str[2];
};
static  struct _g_string_4 g_string_4 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_00000 g_cluster_4 = 
{0, 0, (PDAStrPtr)(&g_string_4)};

struct _g_string_5 {
    uInt16  refcnt;
    uInt16  staticStr;
    PDAStrLen_t len;
    TextChar    str[2];
};
static  struct _g_string_5 g_string_5 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_00000 g_cluster_5 = 
{0, 0, (PDAStrPtr)(&g_string_5)};

struct _g_array_1 {
    DataType    datatype;
    int16   refcnt;
    uInt8   staticArray;
    uInt8   GlobalVariable;
    ArrDimSize  NDims;
    ArrDimSize  dimension_0;
    cl_00000    data[1];
};
_DATA_SECTION static  struct _g_array_1 g_array_1 = 
{0x0 | ClusterDataType, 1, 1, true, 1, 0
};

static ClusterControlData g_control_4 = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0
};

static ClusterControlData g_control_8 = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0
};

static ClusterControlData g_control_12 = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0
};

static ClusterControlData g_control_16 = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0
};

static NumericData g_control_17 = {
    0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

static ClusterControlData g_control_21 = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0
};

static ArrayControlData g_control_22 = {
    0, 0, true, 1, 0, 0
};



/****** Control & Indicator IDs used to reference terminals from block diagram **********/


#define gFormID 2400UL
#define Merge_Errors_in_3_error_in_1__no_error__3B3_ctlid 2400
#define Merge_Errors_in_2_error_in_2__no_error__413_ctlid 2401
#define Merge_Errors_in_1_error_in_3__no_error__46E_ctlid 2402
#define Merge_Errors_out_0_error_out_37F_ctlid 2403
#define Merge_Errors_in_0_error_array_in_EB_ctlid 2404
#define N_CONTROLS 5L
#define gArrControlData Merge_Errors_gArrControlData
ControlDataItem _DATA_SECTION Merge_Errors_gArrControlData[5] = {
    { Merge_Errors_in_3_error_in_1__no_error__3B3_ctlid, 0, NULL, 0x0 | ClusterDataType, cluster_control },
    { Merge_Errors_in_2_error_in_2__no_error__413_ctlid, 0, NULL, 0x0 | ClusterDataType, cluster_control },
    { Merge_Errors_in_1_error_in_3__no_error__46E_ctlid, 0, NULL, 0x0 | ClusterDataType, cluster_control },
    { Merge_Errors_out_0_error_out_37F_ctlid, 0, NULL, 0x0 | ClusterDataType, cluster_control },
    { Merge_Errors_in_0_error_array_in_EB_ctlid, 0, NULL, 0xB0000 | ArrayDataType, array_control },
};


/****** Initialize Front Panel Terminals to their default values or to the values passed in **********/


Boolean _TEXT_SECTION Merge_Errors_InitFPTerms(ArgList *argsIn, Boolean bShowFrontPanel);
Boolean _TEXT_SECTION Merge_Errors_InitFPTerms(ArgList *argsIn, Boolean bShowFrontPanel){
    int32 nIdx=0;
    if (!(FPData(Merge_Errors_in_3_error_in_1__no_error__3B3_ctlid) = ClusterControlDataCreate(GetControlDataPtr(), gFormID, Merge_Errors_in_3_error_in_1__no_error__3B3_ctlid, 1, 0, 0x0 | ClusterDataType, 0, NULL, NULL))){
        return false;
    }
    if (argsIn && argsIn->size > 3 && argsIn->args[3].pValue) {
        nIdx = CalcControlOffset( gFormID, Merge_Errors_in_3_error_in_1__no_error__3B3_ctlid);
        InitClusterControlFieldValue( gArrControlData[nIdx].hValue, argsIn->args[3].pValue, argsIn->args[3].nType );
    }
    else {
        InitClusterControlFieldValue( FPData(Merge_Errors_in_3_error_in_1__no_error__3B3_ctlid), &g_cluster_1, 0x0 | ClusterDataType );
        PDAClusterIncRefCnt(&g_cluster_1,0x0 | ClusterDataType,1);
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    Merge_Errors_in_3_error_in_1__no_error__3B3_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("error in 1 (no error)"),21,0,-20,119,19,
    _LVT("0"),17,0,0,0, false);
    if (!(FPData(Merge_Errors_in_2_error_in_2__no_error__413_ctlid) = ClusterControlDataCreate(GetControlDataPtr(), gFormID, Merge_Errors_in_2_error_in_2__no_error__413_ctlid, 1, 0, 0x0 | ClusterDataType, 0, NULL, NULL))){
        return false;
    }
    if (argsIn && argsIn->size > 2 && argsIn->args[2].pValue) {
        nIdx = CalcControlOffset( gFormID, Merge_Errors_in_2_error_in_2__no_error__413_ctlid);
        InitClusterControlFieldValue( gArrControlData[nIdx].hValue, argsIn->args[2].pValue, argsIn->args[2].nType );
    }
    else {
        InitClusterControlFieldValue( FPData(Merge_Errors_in_2_error_in_2__no_error__413_ctlid), &g_cluster_2, 0x0 | ClusterDataType );
        PDAClusterIncRefCnt(&g_cluster_2,0x0 | ClusterDataType,1);
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    Merge_Errors_in_2_error_in_2__no_error__413_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("error in 2 (no error)"),21,0,-20,119,19,
    _LVT("0"),17,0,0,0, false);
    if (!(FPData(Merge_Errors_in_1_error_in_3__no_error__46E_ctlid) = ClusterControlDataCreate(GetControlDataPtr(), gFormID, Merge_Errors_in_1_error_in_3__no_error__46E_ctlid, 1, 0, 0x0 | ClusterDataType, 0, NULL, NULL))){
        return false;
    }
    if (argsIn && argsIn->size > 1 && argsIn->args[1].pValue) {
        nIdx = CalcControlOffset( gFormID, Merge_Errors_in_1_error_in_3__no_error__46E_ctlid);
        InitClusterControlFieldValue( gArrControlData[nIdx].hValue, argsIn->args[1].pValue, argsIn->args[1].nType );
    }
    else {
        InitClusterControlFieldValue( FPData(Merge_Errors_in_1_error_in_3__no_error__46E_ctlid), &g_cluster_3, 0x0 | ClusterDataType );
        PDAClusterIncRefCnt(&g_cluster_3,0x0 | ClusterDataType,1);
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    Merge_Errors_in_1_error_in_3__no_error__46E_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("error in 3 (no error)"),21,0,-20,119,19,
    _LVT("0"),17,0,0,0, false);
    if (!(FPData(Merge_Errors_out_0_error_out_37F_ctlid) = ClusterControlDataCreate(GetControlDataPtr(), gFormID, Merge_Errors_out_0_error_out_37F_ctlid, 0, 0, 0x0 | ClusterDataType, 0, NULL, NULL))){
        return false;
    }
    if(bShowFrontPanel) {
        InitClusterControlFieldValue( FPData(Merge_Errors_out_0_error_out_37F_ctlid), &g_cluster_4, 0x0 | ClusterDataType );
        PDAClusterIncRefCnt(&g_cluster_4,0x0 | ClusterDataType,1);
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    Merge_Errors_out_0_error_out_37F_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("error out"),9,0,-20,56,19,
    _LVT("0"),17,0,0,0, false);
    FPData(Merge_Errors_in_0_error_array_in_EB_ctlid) = NULL;
    if (argsIn && argsIn->size > 0 && argsIn->args[0].pValue) {
        {
            PDAArrPtr vhIn, vhOut;
            DataType dtIn, dtOut;
            nIdx = CalcControlOffset( gFormID, Merge_Errors_in_0_error_array_in_EB_ctlid);
            FPDataType(Merge_Errors_in_0_error_array_in_EB_ctlid) = 0xB0000 | ArrayDataType;
            dtIn = argsIn->args[0].nType;
            if (IsDynamic(dtIn)) {
                vhIn = (PDAArrPtr)argsIn->args[0].pValue;
            }
            else {
                vhIn = *(PDAArrPtr *)argsIn->args[0].pValue;
            }
            dtOut = gArrControlData[nIdx].dataType;
            vhOut = gArrControlData[nIdx].hValue;
            if (vhOut) {
                PDAArrFree(vhOut);
            }
            if (IsArray(dtIn)) {
                vhOut = PDAArrCopyOnModify( vhIn );
            }
            else if (IsWaveform(dtIn)) {
                PDAExtractWaveformArray(vhIn, dtIn, &vhOut, dtOut);
            }
            else if (IsDynamic(dtIn)) {
                PDAExtractDynamic(vhIn, dtIn, &vhOut, dtOut);
            }
            FPData(Merge_Errors_in_0_error_array_in_EB_ctlid) = vhOut;
        }
    }
    else {
        PDAArrIncRefCnt((PDAArrPtr)(&g_array_1),1);
        FPData(Merge_Errors_in_0_error_array_in_EB_ctlid) = (void*)&g_array_1;
    }
    if (!(FPData(Merge_Errors_in_0_error_array_in_EB_ctlid) = ArrayControlDataCreateStatic(&g_control_22, FPData(Merge_Errors_in_0_error_array_in_EB_ctlid), Merge_Errors_in_0_error_array_in_EB_ctlid, 1, 0, 1, bShowFrontPanel, 1, 0xB0000 | ArrayDataType))) {
        return false;
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    Merge_Errors_in_0_error_array_in_EB_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("error array in"),14,0,-21,81,19,
    _LVT("0"),17,0,0,0, false);
    return true;
}
#define Merge_Errors_FrontPanelInit NULL
#define Merge_Errors_DrawLabels NULL
#define FPBuildMenu NULL


/****** Free all memory used by this VI except uninitialized left shift registers and globals **********/


void _TEXT_SECTION Merge_Errors_Cleanup(Boolean bShowFrontPanel);
void _TEXT_SECTION Merge_Errors_Cleanup(Boolean bShowFrontPanel){
    if (FPData(Merge_Errors_in_3_error_in_1__no_error__3B3_ctlid)) ClusterControlFreeData( GetControlDataPtr(), gFormID, FPData(Merge_Errors_in_3_error_in_1__no_error__3B3_ctlid), false );
    if (FPData(Merge_Errors_in_2_error_in_2__no_error__413_ctlid)) ClusterControlFreeData( GetControlDataPtr(), gFormID, FPData(Merge_Errors_in_2_error_in_2__no_error__413_ctlid), false );
    if (FPData(Merge_Errors_in_1_error_in_3__no_error__46E_ctlid)) ClusterControlFreeData( GetControlDataPtr(), gFormID, FPData(Merge_Errors_in_1_error_in_3__no_error__46E_ctlid), false );
    if (FPData(Merge_Errors_out_0_error_out_37F_ctlid)) ClusterControlFreeData( GetControlDataPtr(), gFormID, FPData(Merge_Errors_out_0_error_out_37F_ctlid), false );
    ArrayControlFreeData( GetControlDataPtr(), gFormID, FPData(Merge_Errors_in_0_error_array_in_EB_ctlid), 1 );
#if defined(_Include_Events) || defined(_Include_Everything)
#endif
    return;
}


/****** Transfer block diagram terminal values to parent VI caller **********/


Boolean _TEXT_SECTION Merge_Errors_GetFPTerms( ArgList *argsOut );
Boolean _TEXT_SECTION Merge_Errors_GetFPTerms( ArgList *argsOut ){
    int32 nIdx=0;
    if (!argsOut) {
        return true;
    }
    if (argsOut->size > 0 && argsOut->args[0].pValue) {
        nIdx = CalcControlOffset( gFormID, Merge_Errors_out_0_error_out_37F_ctlid);
        GetClusterControlFieldValue( gArrControlData[nIdx].hValue, argsOut->args[0].pValue, argsOut->args[0].nType );
    }
    return true;
}


/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION Merge_Errors_CleanupLSRs(void);
void _TEXT_SECTION Merge_Errors_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION Merge_Errors_AddSubVIInstanceData(void);
void _TEXT_SECTION Merge_Errors_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION Merge_Errors_AddVIGlobalConstants(void);
void _TEXT_SECTION Merge_Errors_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION Merge_Errors_InitVIConstantList(void);
void _TEXT_SECTION Merge_Errors_InitVIConstantList(void) {
}


/****** Block diagram code **********/




/****** Block diagram main entry point **********/


eRunStatus _TEXT_SECTION Merge_Errors_BlockDiagram(Boolean bProcessFrontPanel, Boolean bRunToFinish);
eRunStatus _TEXT_SECTION Merge_Errors_BlockDiagram(Boolean bProcessFrontPanel, Boolean bRunToFinish){
    /*********************************************************************************/
    /* This is a common VI, and is most often called with no errors, pretest to make this case fast. */
    /*********************************************************************************/
    eRunStatus runStat = eReady;
    int16 nReady = 1;
    int16 nDispatched = 0;
    bRunToFinish = true;
    heap->a_error_array_in = ((ArrayControlData*)FPData(Merge_Errors_in_0_error_array_in_EB_ctlid))->hValue;
    ((ArrayControlData*)FPData(Merge_Errors_in_0_error_array_in_EB_ctlid))->hValue = NULL;
    PDAArrIncRefCnt(heap->a_error_array_in, (uInt16)1); /* FPTerm */
    /**/
    /* Array Size */
    /**/
    if (heap->a_error_array_in) {
        heap->l_Array_Size_size_s_ = NthDim( heap->a_error_array_in, 0 );
    }
    else {
        heap->l_Array_Size_size_s_ = 0;
    }
    PDAArrFree(heap->a_error_array_in);
    /**/
    /* Not Equal To 0? */
    /**/
    heap->b_Not_Equal_To_0__x____0__3 = (Boolean)(heap->l_Array_Size_size_s_ != 0);
    MemMove( &heap->c_error_in_3__no_error_, ((ClusterControlData*)FPData(Merge_Errors_in_1_error_in_3__no_error__46E_ctlid))->pVal, sizeof( cl_00000 ) );
    MemSet(((ClusterControlData*)FPData(Merge_Errors_in_1_error_in_3__no_error__46E_ctlid))->pVal, sizeof( cl_00000 ), 0);
    /* Cluster Inc Ref Count:  FPTerm*/
    {
        cl_00000* cl_001 = (cl_00000*)&heap->c_error_in_3__no_error_;
        PDAStrIncRefCnt(cl_001->el_2, (uInt16)1); /* FPTerm */
    }
/* Unbundle by name */
    {
        cl_00000* cl_002 = (cl_00000*)&heap->c_error_in_3__no_error_;
        heap->b_Unbundle_By_Name_status = cl_002->el_0;
        heap->l_Unbundle_By_Name_code = cl_002->el_1;
    /* Free Cluster heap->c_error_in_3__no_error_*/
        {
            cl_00000* cl_003 = (cl_00000*)&heap->c_error_in_3__no_error_;
                if (cl_003->el_2 && (((PDAStrPtr)cl_003->el_2)->refcnt > 0)) {
                if ((--((PDAStrPtr)cl_003->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_003->el_2)->staticStr)) {
                    MemHandleFree( cl_003->el_2 );
                    cl_003->el_2=NULL;
                }
            }
        }
    }
    /**/
    /* Not Equal To 0? */
    /**/
    heap->b_Not_Equal_To_0__x____0_ = (Boolean)(heap->l_Unbundle_By_Name_code != 0);
    MemMove( &heap->c_error_in_2__no_error_, ((ClusterControlData*)FPData(Merge_Errors_in_2_error_in_2__no_error__413_ctlid))->pVal, sizeof( cl_00000 ) );
    MemSet(((ClusterControlData*)FPData(Merge_Errors_in_2_error_in_2__no_error__413_ctlid))->pVal, sizeof( cl_00000 ), 0);
    /* Cluster Inc Ref Count:  FPTerm*/
    {
        cl_00000* cl_004 = (cl_00000*)&heap->c_error_in_2__no_error_;
        PDAStrIncRefCnt(cl_004->el_2, (uInt16)1); /* FPTerm */
    }
/* Unbundle by name */
    {
        cl_00000* cl_005 = (cl_00000*)&heap->c_error_in_2__no_error_;
        heap->b_Unbundle_By_Name_status_1 = cl_005->el_0;
        heap->l_Unbundle_By_Name_code_1 = cl_005->el_1;
    /* Free Cluster heap->c_error_in_2__no_error_*/
        {
            cl_00000* cl_006 = (cl_00000*)&heap->c_error_in_2__no_error_;
                if (cl_006->el_2 && (((PDAStrPtr)cl_006->el_2)->refcnt > 0)) {
                if ((--((PDAStrPtr)cl_006->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_006->el_2)->staticStr)) {
                    MemHandleFree( cl_006->el_2 );
                    cl_006->el_2=NULL;
                }
            }
        }
    }
    /**/
    /* Not Equal To 0? */
    /**/
    heap->b_Not_Equal_To_0__x____0__1 = (Boolean)(heap->l_Unbundle_By_Name_code_1 != 0);
    MemMove( &heap->c_error_in_1__no_error_, ((ClusterControlData*)FPData(Merge_Errors_in_3_error_in_1__no_error__3B3_ctlid))->pVal, sizeof( cl_00000 ) );
    MemSet(((ClusterControlData*)FPData(Merge_Errors_in_3_error_in_1__no_error__3B3_ctlid))->pVal, sizeof( cl_00000 ), 0);
    /* Cluster Inc Ref Count:  FPTerm*/
    {
        cl_00000* cl_007 = (cl_00000*)&heap->c_error_in_1__no_error_;
        PDAStrIncRefCnt(cl_007->el_2, (uInt16)1); /* FPTerm */
    }
/* Unbundle by name */
    {
        cl_00000* cl_008 = (cl_00000*)&heap->c_error_in_1__no_error_;
        heap->b_Unbundle_By_Name_status_2 = cl_008->el_0;
        heap->l_Unbundle_By_Name_code_2 = cl_008->el_1;
    /* Free Cluster heap->c_error_in_1__no_error_*/
        {
            cl_00000* cl_009 = (cl_00000*)&heap->c_error_in_1__no_error_;
                if (cl_009->el_2 && (((PDAStrPtr)cl_009->el_2)->refcnt > 0)) {
                if ((--((PDAStrPtr)cl_009->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_009->el_2)->staticStr)) {
                    MemHandleFree( cl_009->el_2 );
                    cl_009->el_2=NULL;
                }
            }
        }
    }
    /**/
    /* Not Equal To 0? */
    /**/
    heap->b_Not_Equal_To_0__x____0__2 = (Boolean)(heap->l_Unbundle_By_Name_code_2 != 0);
    /* Begin CpdArith */
    heap->b_Compound_Arithmetic_result = heap->b_Not_Equal_To_0__x____0_ | heap->b_Unbundle_By_Name_status;
    heap->b_Compound_Arithmetic_result = heap->b_Compound_Arithmetic_result | heap->b_Not_Equal_To_0__x____0__1;
    heap->b_Compound_Arithmetic_result = heap->b_Compound_Arithmetic_result | heap->b_Unbundle_By_Name_status_1;
    heap->b_Compound_Arithmetic_result = heap->b_Compound_Arithmetic_result | heap->b_Not_Equal_To_0__x____0__2;
    heap->b_Compound_Arithmetic_result = heap->b_Compound_Arithmetic_result | heap->b_Unbundle_By_Name_status_2;
    heap->b_Compound_Arithmetic_result = heap->b_Compound_Arithmetic_result | heap->b_Not_Equal_To_0__x____0__3;
    /* End CpdArith */
    { /* Select */
        heap->b_Compound_Arithmetic_result_CS = heap->b_Compound_Arithmetic_result;
        MemMove( &heap->c_error_in_1__no_error__CT, &heap->c_error_in_1__no_error_, sizeof( cl_00000 ) );
        MemMove( &heap->c_error_in_2__no_error__CT, &heap->c_error_in_2__no_error_, sizeof( cl_00000 ) );
        MemMove( &heap->c_error_in_3__no_error__CT, &heap->c_error_in_3__no_error_, sizeof( cl_00000 ) );
        heap->a_error_array_in_CT = heap->a_error_array_in;
        /* begin case */
        if ( heap->b_Compound_Arithmetic_result_CS ) {
            /*********************************************************************************/
            /* warning found */
            /*********************************************************************************/
            /*********************************************************************************/
            /* error found */
            /*********************************************************************************/
            {
                heap->l_Constant = -1;
                heap->l_f = 0;
/* Build array */
                {
                    ArrDimSize i;
                    ArrDimSize dimSize=0;
                    heap->a_Build_Array_appended_array_7 = PDAArrNewEmptyWithNDims( 0x0 | ClusterDataType, (ArrDimSize)1 );
                    if (!heap->a_Build_Array_appended_array_7){
                        CGenErr();
                    }
                    dimSize += 1;
                    dimSize += 1;
                    dimSize += 1;
                    dimSize += PDAArrNthDim(heap->a_error_array_in_CT, (ArrDimSize)0);
                    PDAArrSetDim(heap->a_Build_Array_appended_array_7, (ArrDimSize)0, dimSize);
                    if (!PDAArrAllocData(&heap->a_Build_Array_appended_array_7)){
                        CGenErr();
                    }
                    i=0;
                    if (!PDAArrSetData(heap->a_Build_Array_appended_array_7, i, &heap->c_error_in_1__no_error__CT, 0x0 | ClusterDataType)) {
                        CGenErr();
                    }
                    i++;
                    if (!PDAArrSetData(heap->a_Build_Array_appended_array_7, i, &heap->c_error_in_2__no_error__CT, 0x0 | ClusterDataType)) {
                        CGenErr();
                    }
                    i++;
                    if (!PDAArrSetData(heap->a_Build_Array_appended_array_7, i, &heap->c_error_in_3__no_error__CT, 0x0 | ClusterDataType)) {
                        CGenErr();
                    }
                    i++;
                    if (!PDAArrAdd(heap->a_Build_Array_appended_array_7, i, heap->a_error_array_in_CT)) {
                        CGenErr();
                    }
                    i += PDAArrNthDim(heap->a_error_array_in_CT, (ArrDimSize)0);
                    PDAArrFree(heap->a_error_array_in_CT);
                }
                PDAArrIncRefCnt(heap->a_Build_Array_appended_array_7, (uInt16)2); /* ABuild */
                /**/
                /* Array Size */
                /**/
                if (heap->a_Build_Array_appended_array_7) {
                    heap->l_Array_Size_size_s__1 = NthDim( heap->a_Build_Array_appended_array_7, 0 );
                }
                else {
                    heap->l_Array_Size_size_s__1 = 0;
                }
    PDAArrFree(heap->a_Build_Array_appended_array_7);
                heap->l_Select_s__t_f_LT = 0;
                heap->a_Build_Array_appended_array_LT_1 = heap->a_Build_Array_appended_array_7;
                heap->l_Case_Structure_SR_1 = -1;
                heap->l_While_Loop_i_2 = 0;
                do {
                    /*********************************************************************************/
                    /* End loop as soon as error found. */
                    /*********************************************************************************/
                    {
                        heap->l_Constant_1 = -1;
                        { /* Array Index 1D */
                            int32 nIndex = 0;
                            nIndex = (int32)heap->l_While_Loop_i_2;
                            if ((nIndex >= 0) && heap->a_Build_Array_appended_array_LT_1 && (nIndex < NthDim(heap->a_Build_Array_appended_array_LT_1, (ArrDimSize)0))) {
                                MemSet( &heap->c_Build_Array_appended_array_LT, GetClusterSize( heap->a_Build_Array_appended_array_LT_1->datatype ), 0 );
                                PDAClusterSet(NthElem(heap->a_Build_Array_appended_array_LT_1, nIndex), heap->a_Build_Array_appended_array_LT_1->datatype, &heap->c_Build_Array_appended_array_LT, heap->a_Build_Array_appended_array_LT_1->datatype );
                            }
                            else {
                                MemSet( &heap->c_Build_Array_appended_array_LT, DataSize(heap->a_Build_Array_appended_array_LT_1->datatype), 0);
                            }
                        }
                        /* Cluster Inc Ref Count:  GenLpInputIndexing 2.*/
                        {
                            cl_00000* cl_010 = (cl_00000*)&heap->c_Build_Array_appended_array_LT;
                            PDAStrIncRefCnt(cl_010->el_2, (uInt16)1); /* GenLpInputIndexing 2. */
                        }
                        heap->l_Constant_SR = heap->l_Case_Structure_SR_1;
                        /**/
                        /* Less Than 0? */
                        /**/
                        heap->b_Less_Than_0__x___0_ = (Boolean)(heap->l_Constant_SR < 0);
/* Unbundle by name */
                        {
                            cl_00000* cl_011 = (cl_00000*)&heap->c_Build_Array_appended_array_LT;
                            heap->b_Unbundle_By_Name_status_3 = cl_011->el_0;
    /* Free Cluster heap->c_Build_Array_appended_array_LT*/
                            {
                                cl_00000* cl_012 = (cl_00000*)&heap->c_Build_Array_appended_array_LT;
                if (cl_012->el_2 && (((PDAStrPtr)cl_012->el_2)->refcnt > 0)) {
                                    if ((--((PDAStrPtr)cl_012->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_012->el_2)->staticStr)) {
                                        MemHandleFree( cl_012->el_2 );
                                        cl_012->el_2=NULL;
                                    }
                                }
                            }
                        }
                        { /* Select */
                            heap->b_Less_Than_0__x___0__CS = heap->b_Less_Than_0__x___0_;
                            MemMove( &heap->c_Build_Array_appended_array_CT, &heap->c_Build_Array_appended_array_LT, sizeof( cl_00000 ) );
                            /* begin case */
                            if ( heap->b_Less_Than_0__x___0__CS ) {
                                /*********************************************************************************/
                                /* Detect warning. */
                                /*********************************************************************************/
                                {
/* Unbundle by name */
                                    {
                                        cl_00000* cl_013 = (cl_00000*)&heap->c_Build_Array_appended_array_CT;
                                        heap->l_Unbundle_By_Name_code_3 = cl_013->el_1;
    /* Free Cluster heap->c_Build_Array_appended_array_CT*/
                                        {
                                            cl_00000* cl_014 = (cl_00000*)&heap->c_Build_Array_appended_array_CT;
                if (cl_014->el_2 && (((PDAStrPtr)cl_014->el_2)->refcnt > 0)) {
                                                if ((--((PDAStrPtr)cl_014->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_014->el_2)->staticStr)) {
                                                    MemHandleFree( cl_014->el_2 );
                                                    cl_014->el_2=NULL;
                                                }
                                            }
                                        }
                                    }
                                    /**/
                                    /* Equal To 0? */
                                    /**/
                                    heap->b_Equal_To_0__x___0_ = (Boolean)(heap->l_Unbundle_By_Name_code_3 == 0);
                                    /**/
                                    /* Select */
                                    /**/
                                    if (heap->b_Equal_To_0__x___0_) {
                                        heap->l_Case_Structure_CT = heap->l_Constant_1;
    }
                                    else {
                                        heap->l_Case_Structure_CT = heap->l_While_Loop_i_2;
    }
                                }
                            } /* end case */
                            /* begin case */
                            else {
                                /*********************************************************************************/
                                /* No need to search for more. */
                                /*********************************************************************************/
                                /*********************************************************************************/
                                /* Already found one warning. */
                                /*********************************************************************************/
                                {
                                    heap->l_Case_Structure_CT = heap->l_Constant_SR;
                                    /* Free unwired input select tunnel. */
    /* Free Cluster heap->c_Build_Array_appended_array_CT*/
                                    {
                                        cl_00000* cl_015 = (cl_00000*)&heap->c_Build_Array_appended_array_CT;
                if (cl_015->el_2 && (((PDAStrPtr)cl_015->el_2)->refcnt > 0)) {
                                            if ((--((PDAStrPtr)cl_015->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_015->el_2)->staticStr)) {
                                                MemHandleFree( cl_015->el_2 );
                                                cl_015->el_2=NULL;
                                            }
                                        }
                                    }
                                }
                            } /* end case */
                        } /* end switch */
                        /**/
                        /* Select */
                        /**/
                        if (heap->b_Unbundle_By_Name_status_3) {
                            heap->l_Select_s__t_f_2 = heap->l_While_Loop_i_2;
    }
                        else {
                            heap->l_Select_s__t_f_2 = heap->l_Constant_1;
    }
                        /**/
                        /* Greater? */
                        /**/
                        heap->b_Greater__x___y_ =  (heap->l_Array_Size_size_s__1 > heap->l_While_Loop_i_2);
                        /* Begin CpdArith */
                        heap->b_Compound_Arithmetic_result_1 = heap->b_Greater__x___y_ & (!heap->b_Unbundle_By_Name_status_3);
                        /* End CpdArith */
                        heap->l_Select_s__t_f_LT = heap->l_Select_s__t_f_2;
                        heap->l_Case_Structure_SR_1 = heap->l_Case_Structure_CT;
                    }
                    (heap->l_While_Loop_i_2)++;
                }
                while( heap->b_Compound_Arithmetic_result_1 && !gAppStop && !gLastError);
                heap->l_Case_Structure_SR = heap->l_Case_Structure_SR_1;
                /* FreeLoopInputs. */
    PDAArrFree(heap->a_Build_Array_appended_array_LT_1);
                /**/
                /* Greater Or Equal To 0? */
                /**/
                heap->b_Greater_Or_Equal_To_0__x____0 = (Boolean)(heap->l_Case_Structure_SR >= 0);
                /**/
                /* Select */
                /**/
                if (heap->b_Greater_Or_Equal_To_0__x____0) {
                    heap->l_Select_s__t_f_1 = heap->l_Case_Structure_SR;
    }
                else {
                    heap->l_Select_s__t_f_1 = heap->l_f;
    }
                /**/
                /* Greater Or Equal To 0? */
                /**/
                heap->b_Greater_Or_Equal_To_0__x____0_1 = (Boolean)(heap->l_Select_s__t_f_LT >= 0);
                /**/
                /* Select */
                /**/
                if (heap->b_Greater_Or_Equal_To_0__x____0_1) {
                    heap->l_Select_s__t_f = heap->l_Select_s__t_f_LT;
    }
                else {
                    heap->l_Select_s__t_f = heap->l_Select_s__t_f_1;
    }
                { /* Array Index 1D */
                    int32 nIndex = 0;
                    nIndex = (int32)heap->l_Select_s__t_f;
                    if ((nIndex >= 0) && heap->a_Build_Array_appended_array_7 && (nIndex < NthDim(heap->a_Build_Array_appended_array_7, (ArrDimSize)0))) {
                        MemSet( &heap->c_Case_Structure_CT_78, GetClusterSize( heap->a_Build_Array_appended_array_7->datatype ), 0 );
                        PDAClusterSet(NthElem(heap->a_Build_Array_appended_array_7, nIndex), heap->a_Build_Array_appended_array_7->datatype, &heap->c_Case_Structure_CT_78, heap->a_Build_Array_appended_array_7->datatype );
                    }
                    else {
                        MemSet( &heap->c_Case_Structure_CT_78, DataSize(heap->a_Build_Array_appended_array_7->datatype), 0);
                    }
                }
    PDAArrFree(heap->a_Build_Array_appended_array_7);
            }
        } /* end case */
        /* begin case */
        else {
            {
                MemMove( &heap->c_Case_Structure_CT_78, &heap->c_error_in_1__no_error__CT, sizeof( cl_00000 ) );
                /* Free unwired input select tunnel. */
    /* Free Cluster heap->c_error_in_2__no_error__CT*/
                {
                    cl_00000* cl_016 = (cl_00000*)&heap->c_error_in_2__no_error__CT;
                if (cl_016->el_2 && (((PDAStrPtr)cl_016->el_2)->refcnt > 0)) {
                        if ((--((PDAStrPtr)cl_016->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_016->el_2)->staticStr)) {
                            MemHandleFree( cl_016->el_2 );
                            cl_016->el_2=NULL;
                        }
                    }
                }
                /* Free unwired input select tunnel. */
    /* Free Cluster heap->c_error_in_3__no_error__CT*/
                {
                    cl_00000* cl_017 = (cl_00000*)&heap->c_error_in_3__no_error__CT;
                if (cl_017->el_2 && (((PDAStrPtr)cl_017->el_2)->refcnt > 0)) {
                        if ((--((PDAStrPtr)cl_017->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_017->el_2)->staticStr)) {
                            MemHandleFree( cl_017->el_2 );
                            cl_017->el_2=NULL;
                        }
                    }
                }
                /* Free unwired input select tunnel. */
    PDAArrFree(heap->a_error_array_in_CT);
            }
        } /* end case */
    } /* end switch */
    {
        if (!SetClusterControlFieldValue( FPData(Merge_Errors_out_0_error_out_37F_ctlid), &heap->c_Case_Structure_CT_78, 0x0 | ClusterDataType, false )){
            CGenErr();
        }
    }
    return eFinished;
}

/****** VI Configuration data **********/

TextPtr Merge_Errors_VIName = "Merge Errors.vi";

static VIInfo _DATA_SECTION viInfo = {
    &Merge_Errors_VIName,
    &gRunStatus,
    &gCurrentCallerID,
    true,
    true,
    true,
    NULL,
    NULL,
    gFormID,
    (uInt8 **)&heap,
    (uInt32)sizeof (struct _Merge_Errors_heap),
    NULL,
    NULL,
    0,
    (ControlDataItemPtr*)&gArrControlData,
    N_CONTROLS,
    (uInt8**)NULL,
    (uInt32)0,
    false,
    NULL,
    NULL,
    0,
    Merge_Errors_InitFPTerms,
    Merge_Errors_FrontPanelInit,
    Merge_Errors_BlockDiagram,
    Merge_Errors_DrawLabels,
    Merge_Errors_GetFPTerms,
    Merge_Errors_Cleanup,
    Merge_Errors_CleanupLSRs,
    Merge_Errors_AddSubVIInstanceData,
    Merge_Errors_InitVIConstantList
};

/****** Main Entry Point for VI **********/

eRunStatus _TEXT_SECTION Merge_Errors_Run(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus _TEXT_SECTION Merge_Errors_Run(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
    uInt8 *pHeap_lsr=NULL;
    eRunStatus stat;
    gRunStatus = eReady;
    viInfo.bShowFrontPanel = bShowFrontPanel;
    viInfo.bRunToFinish = bRunToFinish;
    viInfo.argsIn = argsIn;
    viInfo.argsOut = argsOut;
    stat =  RunVI(viInstanceData, &viInfo, 0);
    return stat;
}


/****** End of generated code **********/


