/****************************************************************************************
 *  All rights reserved.
 *  Delimited VI name: IX5_MLB _R.vi
 *  Generated from: E:\Design Documents\LV Files\STM32\IX5 Software\IX5_MLB _R.vi
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
struct _IX5_MLB__R_heap { 
    uInt32 startTimeACE_1;  
    uInt32 dw_millisecond_multiple;
    uInt32 dw_baud_rate__9600_;
    int32 l_While_Loop_i;
    int32 l_y;
    int32 l_String_Length_length;
    VoidHand ArgsBD0_1;  
    VoidHand Args65C_1;  
    VoidHand ArgsC60_1;  
    VoidHand ArgsC18_1;  
    VoidHand Args964_1;  
    VoidHand Args8D4_1;  
    VoidHand Args879_1;  
    VoidHand Args92E_1;  
    VoidHand Args9A1_1;  
    VoidHand ArgsE7B_1;  
    VoidHand ArgsE33_1;  
    VoidHand Args25D_1;  
    VoidHand ArgsEC3_1;  
    VoidHand Args2C3_1;  
    VoidHand Args290_1;  
    VoidHand Args6AB_1;  
    VoidHand Args5F0_1;  
    VoidHand s_IO_Open_Test_VI_R_vi_FailCode;
    VoidHand s_VISA_Serial_Read_vi_______;
    VoidHand ArgsA0E_1;  
    VoidHand s_VISA_Serial_Read_vi________CS;
    VoidHand ArgsA66_1;  
    VoidHand s_String;
    VoidHand ArgsE80_1;  
    uInt16 n_VISA_Serial_Port_Byte_vi_____;
    uInt16 n_time_ms;
    Enum16 e_Case_Structure_CT_1;
    Enum16 e_Status;
    Enum16 e_Status_CS;
    Enum16 e_Status_SR;
    Enum16 e_Case_Structure_CT;
    Enum16 e_Case_Structure_SR;
    Enum16 e_data_bits__8_;
    Enum16 e_parity__0_none_;
    Enum16 e_stop_bits__10__1_bit_;
    Enum16 e_Status_3;
    Enum16 e_Status_2;
    uInt8 runStat4B_2;  
    uInt8 runStat94_2;  
    uInt8 runStat94_1;  
    uInt8 runStatD4_1;  
    uInt8 runStatC18;  
    uInt8 runStat4B_1;  
    uInt8 by_termination_char__0xA_____n_;
    uInt8 runStatBD0;  
    uInt8 runStatC60;  
    uInt8 runStatACE;  
    uInt8 runStat913_2;  
    uInt8 by_VISA_Configure_Serial_Port_v;
    uInt8 by_VISA_Serial_Port_Byte_vi_err;
    uInt8 runStat913_1;  
    uInt8 runStat25D;  
    uInt8 runStat928_1;  
    uInt8 runStat2C3;  
    uInt8 by_PortX_in_2;
    uInt8 runStat290;  
    uInt8 by_PortX_in_1;
    uInt8 runStat5A2;  
    uInt8 by_PortX_in;
    uInt8 runStat31;  
    uInt8 runStat964;  
    uInt8 runStatE80;  
    uInt8 runStat5B3_1;  
    uInt8 runStat2F6;  
    uInt8 runStat1BF_1;  
    uInt8 runStat1BF_2;  
    uInt8 runStat924;  
    uInt8 by_TEST;
    uInt8 by_LED_2_1;
    uInt8 runStat35F;  
    uInt8 runStat7F6_2;  
    uInt8 runStat7F6_1;  
    uInt8 by_Diagram_Disable_Structure_DT_1;
    uInt8 by_PortX_in_3;
    uInt8 by_PortX_in_4;
    uInt8 by_PortX_in_5;
    uInt8 runStat7DA;  
    uInt8 runStatA66;  
    uInt8 runStat9A1;  
    uInt8 runStatA0E;  
    uInt8 runStat37F_1;  
    uInt8 runStat33F_1;  
    uInt8 runStat33F_2;  
    uInt8 runStat65C;  
    uInt8 by_UploadResult_vi_err_out;
    uInt8 by_IO_Open_Test_VI_R_vi_err_out;
    uInt8 runStat5F0;  
    uInt8 runStat6AB;  
    uInt8 runStatB4;  
    uInt8 runStat46A_1;  
    uInt8 runStat46A_2;  
    uInt8 by_Diagram_Disable_Structure_DT;
    uInt8 by_LED_2;
    uInt8 runStat6B7;  
    uInt8 runStat6A3_2;  
    uInt8 by_LED_2_2;
    uInt8 by_LED_1;
    uInt8 runStat6DE;  
    uInt8 runStat7_1;  
    uInt8 runStat6A3_1;  
    uInt8 runStat7E6_1;  
    uInt8 runStat824_1;  
    uInt8 by_PortX_in_6;
    uInt8 by_PortX_in_7;
    uInt8 by_PortX_in_8;
    uInt8 runStat8D4;  
    uInt8 runStat879;  
    uInt8 runStat6C;  
    uInt8 runStatEC3;  
    uInt8 runStat92E;  
    uInt8 runStatE33;  
    uInt8 by_PortX_in_11;
    uInt8 runStatE7B;  
    uInt8 by_PortX_in_10;
    uInt8 runStat6FE_1;  
    uInt8 runStat6C0_1;  
    uInt8 by_LED_1_1;
    uInt8 by_LED_2_3;
    uInt8 runStat804;  
    uInt8 by_PortX_in_9;
    Enum8 e_pin_in_10;
    Enum8 e_pin_in_11;
    Enum8 e_pin_in_9;
    Enum8 e_I_O_________2;
    Enum8 e_I_O_________1;
    Enum8 e_I_O_________9;
    Enum8 e_I_O_________10;
    Enum8 e_I_O_________11;
    Enum8 e_I_O________;
    Enum8 e_I_O_________8;
    Enum8 e_I_O_________7;
    Enum8 e_pin_in_2;
    Enum8 e_I_O_________6;
    Enum8 e_VISA_resource_name_1;
    Enum8 e_pin_in_8;
    Enum8 e_pin_in_7;
    Enum8 e_pin_in_6;
    Enum8 e_pin_in_1;
    Enum8 e_pin_in;
    Enum8 e_pin_in_3;
    Enum8 e_pin_in_4;
    Enum8 e_VISA_resource_name_2;
    Enum8 e_VISA_resource_name_3;
    Enum8 e_VISA_resource_name;
    Enum8 e_pin_in_5;
    Enum8 e_I_O_________5;
    Enum8 e_I_O_________4;
    Enum8 e_I_O_________3;
    Boolean b_Case_Structure_SR;
    Boolean b_Constant_1;
    Boolean b_Constant_CS;
    Boolean b_While_Loop_End;
    Boolean b_Constant_SR;
    Boolean b_Case_Structure_CT;
    Boolean b_Case_Structure_CT_1;
    Boolean b_Greater_Or_Equal__x____y_;
    Boolean b_Constant;
    Boolean restartACE_2;  
    Boolean b_Enable_Termination_Char__T_;
} _DATA_SECTION __IX5_MLB__R_heap; /* heap */

static struct _IX5_MLB__R_heap _DATA_SECTION *heap = &__IX5_MLB__R_heap; /* heap */

static uInt32 _DATA_SECTION _IX5_MLB__R_signalsReadyTable[39];

struct _tIX5_MLB__R_GlobalConstantsHeap {
    uInt8   refCnt;
    VoidHand    iF5A;
} _DATA_SECTION __IX5_MLB__R_GlobalConstantsHeap;
static struct _tIX5_MLB__R_GlobalConstantsHeap _DATA_SECTION *IX5_MLB__R_GlobalConstantsHeapPtr = &__IX5_MLB__R_GlobalConstantsHeap;

struct _tIX5_MLB__R_viInstanceHeap {
    Boolean initialized;
    subVIInstanceData   i25D;
    subVIInstanceData   i290;
    subVIInstanceData   i2C3;
    subVIInstanceData   i5F0;
    subVIInstanceData   i65C;
    subVIInstanceData   i6AB;
    subVIInstanceData   i879;
    subVIInstanceData   i8D4;
    subVIInstanceData   i92E;
    subVIInstanceData   i964;
    subVIInstanceData   i9A1;
    subVIInstanceData   iA0E;
    subVIInstanceData   iA66;
    subVIInstanceData   iBD0;
    subVIInstanceData   iC18;
    subVIInstanceData   iC60;
    subVIInstanceData   iE33;
    subVIInstanceData   iE7B;
    subVIInstanceData   iE80;
    subVIInstanceData   iEC3;
} _DATA_SECTION __IX5_MLB__R_viInstanceHeap;
static struct _tIX5_MLB__R_viInstanceHeap _DATA_SECTION *IX5_MLB__R_viInstanceHeapPtr = &__IX5_MLB__R_viInstanceHeap;

static StepArray _DATA_SECTION stepArr = NULL;
static uInt32 _DATA_SECTION *signalsReady = (uInt32 *) _IX5_MLB__R_signalsReadyTable; /* heap */
static eRunStatus _DATA_SECTION gRunStatus = eReady;
static int32 _DATA_SECTION gCurrentCallerID = 0;
static uInt32 InitSignalReadyValues[39] = {3, 1, 2, 2, 1, 1, 1, 2, 2, 4, 4, 4, 3, 4, 4, 4, 3, 1, 2, 3, 2, 4, 4, 4, 3, 2, 1, 2, 1, 3, 2, 7, 2, 4, 4, 4, 3, 2, 2};


/****** Control & Indicator IDs used to reference terminals from block diagram **********/


#define gFormID 2000UL
#define N_CONTROLS 0L
#define gArrControlData IX5_MLB__R_gArrControlData
ControlDataItem _DATA_SECTION IX5_MLB__R_gArrControlData[1] = {
    { gFormID, 0L, NULL, UCharDataType, numeric_control },
};


/****** Initialize Front Panel Terminals to their default values or to the values passed in **********/


Boolean _TEXT_SECTION IX5_MLB__R_InitFPTerms(ArgList *argsIn, Boolean bShowFrontPanel);
Boolean _TEXT_SECTION IX5_MLB__R_InitFPTerms(ArgList *argsIn, Boolean bShowFrontPanel){
    return true;
}
#define IX5_MLB__R_FrontPanelInit NULL
#define IX5_MLB__R_DrawLabels NULL
#define FPBuildMenu NULL


/****** Free all memory used by this VI except uninitialized left shift registers and globals **********/


void _TEXT_SECTION IX5_MLB__R_Cleanup(Boolean bShowFrontPanel);
void _TEXT_SECTION IX5_MLB__R_Cleanup(Boolean bShowFrontPanel){
#if defined(_Include_Events) || defined(_Include_Everything)
#endif
    return;
}


/****** Transfer block diagram terminal values to parent VI caller **********/


Boolean _TEXT_SECTION IX5_MLB__R_GetFPTerms( ArgList *argsOut );
Boolean _TEXT_SECTION IX5_MLB__R_GetFPTerms( ArgList *argsOut ){
    if (!argsOut) {
        return true;
    }
    return true;
}


/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IX5_MLB__R_CleanupLSRs(void);
void _TEXT_SECTION IX5_MLB__R_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION IX5_MLB__R_AddSubVIInstanceData(void);
void _TEXT_SECTION IX5_MLB__R_AddSubVIInstanceData(void) {
    if (IX5_MLB__R_viInstanceHeapPtr->initialized) return;
    IX5_MLB__R_viInstanceHeapPtr->initialized = TRUE;

    IX5_MLB__R_viInstanceHeapPtr->i25D.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->i25D;
    IX5_MLB__R_viInstanceHeapPtr->i290.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->i290;
    IX5_MLB__R_viInstanceHeapPtr->i2C3.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->i2C3;
    IX5_MLB__R_viInstanceHeapPtr->i5F0.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->i5F0;
    IX5_MLB__R_viInstanceHeapPtr->i65C.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->i65C;
    IX5_MLB__R_viInstanceHeapPtr->i6AB.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->i6AB;
    IX5_MLB__R_viInstanceHeapPtr->i879.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->i879;
    IX5_MLB__R_viInstanceHeapPtr->i8D4.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->i8D4;
    IX5_MLB__R_viInstanceHeapPtr->i92E.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->i92E;
    IX5_MLB__R_viInstanceHeapPtr->i964.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->i964;
    IX5_MLB__R_viInstanceHeapPtr->i9A1.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->i9A1;
    IX5_MLB__R_viInstanceHeapPtr->iA0E.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->iA0E;
    IX5_MLB__R_viInstanceHeapPtr->iA66.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->iA66;
    IX5_MLB__R_viInstanceHeapPtr->iBD0.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->iBD0;
    IX5_MLB__R_viInstanceHeapPtr->iC18.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->iC18;
    IX5_MLB__R_viInstanceHeapPtr->iC60.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->iC60;
    IX5_MLB__R_viInstanceHeapPtr->iE33.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->iE33;
    IX5_MLB__R_viInstanceHeapPtr->iE7B.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->iE7B;
    IX5_MLB__R_viInstanceHeapPtr->iE80.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->iE80;
    IX5_MLB__R_viInstanceHeapPtr->iEC3.next = gVIInstanceListHead;
    gVIInstanceListHead = &IX5_MLB__R_viInstanceHeapPtr->iEC3;
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IX5_MLB__R_AddVIGlobalConstants(void);
void _TEXT_SECTION IX5_MLB__R_AddVIGlobalConstants(void) {
    MemSet(IX5_MLB__R_GlobalConstantsHeapPtr,sizeof(*(IX5_MLB__R_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION IX5_MLB__R_CleanupVIGlobalConstants(void);
void _TEXT_SECTION IX5_MLB__R_CleanupVIGlobalConstants(void) {
    (IX5_MLB__R_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IX5_MLB__R_InitVIConstantList(void);
void _TEXT_SECTION IX5_MLB__R_InitVIConstantList(void) {
    (IX5_MLB__R_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_924(Boolean bRunToFinish);
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_924(Boolean bRunToFinish) {
    eRunStatus runStat = eReady;
    int16 nReady = 0;
    int16 nDispatched = 0;
    { /* Sequence */
        static uChar nSeq = 0;
        uInt32 id = LVGetTimerFlag();
        if (heap->runStat924 == eReady) {
            /*SetSignalReady( 0xA, 0);*//* by_Diagram_Disable_Structure_ST */
        }
        {
            static uInt16 nStep = 0;
            switch(nStep)
            {
/* start q el linear (0 or 1 struct) */
                case 0 : {
                    heap->n_time_ms = 250;
                    nStep++;}
/* start q el struct (0 or 1 struct)*/
                case 1 : {
                    if (heap->runStat964 == eReady) {
                    }
                    {
                        
                        /**** Funclist entry - 4. Function call ****/
                        delay_ms(heap->n_time_ms);
                        
                        heap->runStat964 = eFinished;
                        if (gAppStop || (heap->runStat964 == eFinished)) {
                        }
                        if (gAppStop) {
                            gAppStop=true;
                            return eFinished;
                        }
                    }
                    if (!bRunToFinish && (runStat == eNotFinished || runStat == eDispatched)) {
                        return eDispatched;
                    }
                    if (heap->runStat964 == eFinished) {
                        heap->runStat964 = eReady;
                    }
                    nStep++; }
                default: {
                    ; /* do nothing */
                }
            }
            nStep = 0;
        }
        /*SetSignalReady( 0xA, 1);*//* runStat924 */
    } /* end sequence */
    return eFinished;
}
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_7DA(Boolean bRunToFinish);
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_7DA(Boolean bRunToFinish) {
    eRunStatus runStat = eReady;
    int16 nReady = 0;
    int16 nDispatched = 0;
    { /* Single subdiagram (ifdef and inplace nodes) */
        uInt32 id = LVGetTimerFlag();
        if (heap->runStat7DA == eReady) {
        }
        {static uInt16 nStep = 0;
            switch(nStep)
            {
/* start q el linear (0 or 1 struct) */
                case 0 : {
                    nStep++;}
/* start q el linear (0 or 1 struct) */
                case 1 : {
                    heap->by_Diagram_Disable_Structure_DT = heap->by_UploadResult_vi_err_out;
                    nStep++;}
                default: {
                    ; /* do nothing */
                }
            }
            nStep = 0;}
    } /* end ifdef */
    /*SetSignalReady( 0xF, 0);*//* by_Diagram_Disable_Structure_DT */
    SetSignalReady(4, 1);
    return eFinished;
}
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_804(Boolean bRunToFinish);
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_804(Boolean bRunToFinish) {
    eRunStatus runStat = eReady;
    int16 nReady = 0;
    int16 nDispatched = 0;
    { /* Sequence */
        static uChar nSeq = 0;
        uInt32 id = LVGetTimerFlag();
        if (heap->runStat804 == eReady) {
            heap->runStat824_1 = eReady;
            heap->runStat92E = eReady;
            heap->runStat879 = eReady;
            heap->runStat8D4 = eReady;
            /*SetSignalReady( 0x13, 1);*//* XNodeTun807 */
            /*SetSignalReady( 0x13, 2);*//* XNodeTun813 */
            /*SetSignalReady( 0x13, 3);*//* XNodeTun805 */
        }
        {
            int16 pass;
            Boolean bEndDiagram = false;
            while (!gAppStop && !gLastError) {
                nReady = 0;
                bEndDiagram = false;
                runStat = eFinished;
                for (pass=0;pass<2;pass++) {
                    {
/* start q el linear (2 struct) */
                        if (heap->runStat824_1 != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (pass == 0) {
                                InitSignalReady(11, 4);
                                /*InitSignalReady( 0x13, 4);*//* by_LED_1_XT_1 */
                                /*InitSignalReady( 0x14, 2);*//* e_pin_in_9 */
                                InitSignalReady(9, 4);
                                /*InitSignalReady( 0x13, 5);*//* by_LED_2_XT_7 */
                                /*InitSignalReady( 0x14, 0);*//* e_pin_in_10 */
                                InitSignalReady(10, 4);
                                /*InitSignalReady( 0x13, 6);*//* by_LED_1_XT_2 */
                                /*InitSignalReady( 0x14, 1);*//* e_pin_in_11 */
                                /*InitSignalReady( 0x13, 7);*//* by_PortX_in_9 */
                                /*InitSignalReady( 0x12, 3);*//* by_PortX_in_10 */
                                /*InitSignalReady( 0x12, 1);*//* by_PortX_in_11 */
                                /*InitSignalReady( 0x14, 5);*//* e_I_O_________9 */
                                /*InitSignalReady( 0x14, 6);*//* e_I_O_________10 */
                                /*InitSignalReady( 0x14, 7);*//* e_I_O_________11 */
                            }
                            else {
                                {
                                    /*SetSignalReady( 0x13, 4);*//* by_LED_1_XT_1 */
                                    SetSignalReady(11, 1);
                                    /*SetSignalReady( 0x13, 5);*//* by_LED_2_XT_7 */
                                    SetSignalReady(9, 1);
                                    /*SetSignalReady( 0x13, 6);*//* by_LED_1_XT_2 */
                                    SetSignalReady(10, 1);
                                    heap->e_pin_in_9 = 2;
                                    /*SetSignalReady( 0x14, 2);*//* e_pin_in_9 */
                                    SetSignalReady(11, 1);
                                    heap->e_pin_in_10 = 3;
                                    /*SetSignalReady( 0x14, 0);*//* e_pin_in_10 */
                                    SetSignalReady(9, 1);
                                    heap->e_pin_in_11 = 1;
                                    /*SetSignalReady( 0x14, 1);*//* e_pin_in_11 */
                                    SetSignalReady(10, 1);
                                    heap->by_PortX_in_9 = 2;
                                    /*SetSignalReady( 0x13, 7);*//* by_PortX_in_9 */
                                    SetSignalReady(10, 1);
                                    heap->by_PortX_in_10 = 2;
                                    /*SetSignalReady( 0x12, 3);*//* by_PortX_in_10 */
                                    SetSignalReady(9, 1);
                                    heap->by_PortX_in_11 = 2;
                                    /*SetSignalReady( 0x12, 1);*//* by_PortX_in_11 */
                                    SetSignalReady(11, 1);
                                    heap->e_I_O_________9 = 0;
                                    /*SetSignalReady( 0x14, 5);*//* e_I_O_________9 */
                                    SetSignalReady(10, 1);
                                    heap->e_I_O_________10 = 0;
                                    /*SetSignalReady( 0x14, 6);*//* e_I_O_________10 */
                                    SetSignalReady(9, 1);
                                    heap->e_I_O_________11 = 0;
                                    /*SetSignalReady( 0x14, 7);*//* e_I_O_________11 */
                                    SetSignalReady(11, 1);
                                }
                                heap->runStat824_1 = eFinished;
                                continue;
                            }
                        }
/* start q el struct (2 struct) */
                        if (heap->runStat92E != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (GetSignalReady( 11 )) {
                                if (pass) {
                                    if (heap->runStat92E == eReady) {
                                    }
                                    {
                                        
                                        /**** Funclist entry - 4. Function call ****/
                                        GPO_EIO_Interface(heap->by_PortX_in_11, heap->e_pin_in_9, heap->e_I_O_________11, heap->by_LED_1_1);
                                        
                                        heap->runStat92E = eFinished;
                                        if (gAppStop || (heap->runStat92E == eFinished)) {
                                        }
                                        if (gAppStop) {
                                            gAppStop=true;
                                            return eFinished;
                                        }
                                    }
                                    if (heap->runStat92E == eNotFinished || heap->runStat92E == eDispatched) {
                                        nDispatched++;
                                    }
                                    if (heap->runStat92E == eFinished) {
                                        InitSignalReady(11, 4);
                                        continue;
                                    }
                                }
                            }
                            else if (pass == 0) {
                                nDispatched++;
                            }
                        }
/* start q el struct (2 struct) */
                        if (heap->runStat879 != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (GetSignalReady( 10 )) {
                                if (pass) {
                                    if (heap->runStat879 == eReady) {
                                    }
                                    {
                                        
                                        /**** Funclist entry - 4. Function call ****/
                                        GPO_EIO_Interface(heap->by_PortX_in_9, heap->e_pin_in_11, heap->e_I_O_________9, heap->by_LED_1_1);
                                        
                                        heap->runStat879 = eFinished;
                                        if (gAppStop || (heap->runStat879 == eFinished)) {
                                        }
                                        if (gAppStop) {
                                            gAppStop=true;
                                            return eFinished;
                                        }
                                    }
                                    if (heap->runStat879 == eNotFinished || heap->runStat879 == eDispatched) {
                                        nDispatched++;
                                    }
                                    if (heap->runStat879 == eFinished) {
                                        InitSignalReady(10, 4);
                                        continue;
                                    }
                                }
                            }
                            else if (pass == 0) {
                                nDispatched++;
                            }
                        }
/* start q el struct (2 struct) */
                        if (heap->runStat8D4 != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (GetSignalReady( 9 )) {
                                if (pass) {
                                    if (heap->runStat8D4 == eReady) {
                                    }
                                    {
                                        
                                        /**** Funclist entry - 4. Function call ****/
                                        GPO_EIO_Interface(heap->by_PortX_in_10, heap->e_pin_in_10, heap->e_I_O_________10, heap->by_LED_2_3);
                                        
                                        heap->runStat8D4 = eFinished;
                                        if (gAppStop || (heap->runStat8D4 == eFinished)) {
                                        }
                                        if (gAppStop) {
                                            gAppStop=true;
                                            return eFinished;
                                        }
                                    }
                                    if (heap->runStat8D4 == eNotFinished || heap->runStat8D4 == eDispatched) {
                                        nDispatched++;
                                    }
                                    if (heap->runStat8D4 == eFinished) {
                                        InitSignalReady(9, 4);
                                        continue;
                                    }
                                }
                            }
                            else if (pass == 0) {
                                nDispatched++;
                            }
                        }
                    }
                    if (pass) {
                        if (runStat == eFinished) {
                            bEndDiagram = true;
                        }
                        if ( (bRunToFinish && (nReady == nDispatched))) {
                            WaitMS(1, NULL);
                        }
                        if (!bRunToFinish) {
                            if ((LVGetTimerFlag() > id) || ((LVGetTimerFlag()-id) < 0)) {
                                if (!gAppStop && !gLastError) {
                                    return eNotFinished;
                                }
                                if (gAppStop) {
                                    return eFinished;
                                }
                                if (gLastError) {
                                    CGenErr();
                                }
                                if (!bRunToFinish && (!bEndDiagram || nSeq < 0)) {
                                    return eNotFinished;
                                }
                            }
                        }
                    }
                } /* end for */
                if (bEndDiagram) break;
            } /* end while */
            nSeq++;
        }
        heap->runStat824_1 = eReady;
        heap->runStat92E = eReady;
        heap->runStat879 = eReady;
        heap->runStat8D4 = eReady;
        /*SetSignalReady( 0x13, 0);*//* runStat804 */
    } /* end sequence */
    return eFinished;
}
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_6DE(Boolean bRunToFinish);
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_6DE(Boolean bRunToFinish) {
    eRunStatus runStat = eReady;
    int16 nReady = 0;
    int16 nDispatched = 0;
    { /* Sequence */
        static uChar nSeq = 0;
        uInt32 id = LVGetTimerFlag();
        if (heap->runStat6DE == eReady) {
            heap->runStat6FE_1 = eReady;
            heap->runStatEC3 = eReady;
            heap->runStatE33 = eReady;
            heap->runStatE7B = eReady;
            /*SetSignalReady( 0x6, 1);*//* XNodeTun6E1 */
            /*SetSignalReady( 0x10, 0);*//* XNodeTun6ED */
            /*SetSignalReady( 0x10, 1);*//* XNodeTunB86 */
        }
        {
            int16 pass;
            Boolean bEndDiagram = false;
            while (!gAppStop && !gLastError) {
                nReady = 0;
                bEndDiagram = false;
                runStat = eFinished;
                for (pass=0;pass<2;pass++) {
                    {
/* start q el linear (2 struct) */
                        if (heap->runStat6FE_1 != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (pass == 0) {
                                InitSignalReady(15, 4);
                                /*InitSignalReady( 0x10, 2);*//* by_LED_1_XT */
                                /*InitSignalReady( 0x16, 0);*//* e_pin_in_6 */
                                InitSignalReady(13, 4);
                                /*InitSignalReady( 0x10, 3);*//* by_LED_2_XT_5 */
                                /*InitSignalReady( 0x15, 7);*//* e_pin_in_7 */
                                InitSignalReady(14, 4);
                                /*InitSignalReady( 0x10, 4);*//* by_LED_2_XT_6 */
                                /*InitSignalReady( 0x15, 6);*//* e_pin_in_8 */
                                /*InitSignalReady( 0x11, 0);*//* by_PortX_in_6 */
                                /*InitSignalReady( 0x11, 1);*//* by_PortX_in_7 */
                                /*InitSignalReady( 0x11, 2);*//* by_PortX_in_8 */
                                /*InitSignalReady( 0x15, 4);*//* e_I_O_________6 */
                                /*InitSignalReady( 0x15, 2);*//* e_I_O_________7 */
                                /*InitSignalReady( 0x15, 1);*//* e_I_O_________8 */
                            }
                            else {
                                {
                                    /*SetSignalReady( 0x10, 2);*//* by_LED_1_XT */
                                    SetSignalReady(15, 1);
                                    /*SetSignalReady( 0x10, 3);*//* by_LED_2_XT_5 */
                                    SetSignalReady(13, 1);
                                    /*SetSignalReady( 0x10, 4);*//* by_LED_2_XT_6 */
                                    SetSignalReady(14, 1);
                                    heap->e_pin_in_6 = 2;
                                    /*SetSignalReady( 0x16, 0);*//* e_pin_in_6 */
                                    SetSignalReady(15, 1);
                                    heap->e_pin_in_7 = 3;
                                    /*SetSignalReady( 0x15, 7);*//* e_pin_in_7 */
                                    SetSignalReady(13, 1);
                                    heap->e_pin_in_8 = 1;
                                    /*SetSignalReady( 0x15, 6);*//* e_pin_in_8 */
                                    SetSignalReady(14, 1);
                                    heap->by_PortX_in_6 = 2;
                                    /*SetSignalReady( 0x11, 0);*//* by_PortX_in_6 */
                                    SetSignalReady(14, 1);
                                    heap->by_PortX_in_7 = 2;
                                    /*SetSignalReady( 0x11, 1);*//* by_PortX_in_7 */
                                    SetSignalReady(13, 1);
                                    heap->by_PortX_in_8 = 2;
                                    /*SetSignalReady( 0x11, 2);*//* by_PortX_in_8 */
                                    SetSignalReady(15, 1);
                                    heap->e_I_O_________6 = 0;
                                    /*SetSignalReady( 0x15, 4);*//* e_I_O_________6 */
                                    SetSignalReady(14, 1);
                                    heap->e_I_O_________7 = 0;
                                    /*SetSignalReady( 0x15, 2);*//* e_I_O_________7 */
                                    SetSignalReady(13, 1);
                                    heap->e_I_O_________8 = 0;
                                    /*SetSignalReady( 0x15, 1);*//* e_I_O_________8 */
                                    SetSignalReady(15, 1);
                                }
                                heap->runStat6FE_1 = eFinished;
                                continue;
                            }
                        }
/* start q el struct (2 struct) */
                        if (heap->runStatEC3 != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (GetSignalReady( 15 )) {
                                if (pass) {
                                    if (heap->runStatEC3 == eReady) {
                                    }
                                    {
                                        
                                        /**** Funclist entry - 4. Function call ****/
                                        GPO_EIO_Interface(heap->by_PortX_in_8, heap->e_pin_in_6, heap->e_I_O_________8, heap->by_LED_1);
                                        
                                        heap->runStatEC3 = eFinished;
                                        if (gAppStop || (heap->runStatEC3 == eFinished)) {
                                        }
                                        if (gAppStop) {
                                            gAppStop=true;
                                            return eFinished;
                                        }
                                    }
                                    if (heap->runStatEC3 == eNotFinished || heap->runStatEC3 == eDispatched) {
                                        nDispatched++;
                                    }
                                    if (heap->runStatEC3 == eFinished) {
                                        InitSignalReady(15, 4);
                                        continue;
                                    }
                                }
                            }
                            else if (pass == 0) {
                                nDispatched++;
                            }
                        }
/* start q el struct (2 struct) */
                        if (heap->runStatE33 != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (GetSignalReady( 14 )) {
                                if (pass) {
                                    if (heap->runStatE33 == eReady) {
                                    }
                                    {
                                        
                                        /**** Funclist entry - 4. Function call ****/
                                        GPO_EIO_Interface(heap->by_PortX_in_6, heap->e_pin_in_8, heap->e_I_O_________6, heap->by_LED_2_2);
                                        
                                        heap->runStatE33 = eFinished;
                                        if (gAppStop || (heap->runStatE33 == eFinished)) {
                                        }
                                        if (gAppStop) {
                                            gAppStop=true;
                                            return eFinished;
                                        }
                                    }
                                    if (heap->runStatE33 == eNotFinished || heap->runStatE33 == eDispatched) {
                                        nDispatched++;
                                    }
                                    if (heap->runStatE33 == eFinished) {
                                        InitSignalReady(14, 4);
                                        continue;
                                    }
                                }
                            }
                            else if (pass == 0) {
                                nDispatched++;
                            }
                        }
/* start q el struct (2 struct) */
                        if (heap->runStatE7B != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (GetSignalReady( 13 )) {
                                if (pass) {
                                    if (heap->runStatE7B == eReady) {
                                    }
                                    {
                                        
                                        /**** Funclist entry - 4. Function call ****/
                                        GPO_EIO_Interface(heap->by_PortX_in_7, heap->e_pin_in_7, heap->e_I_O_________7, heap->by_LED_2_2);
                                        
                                        heap->runStatE7B = eFinished;
                                        if (gAppStop || (heap->runStatE7B == eFinished)) {
                                        }
                                        if (gAppStop) {
                                            gAppStop=true;
                                            return eFinished;
                                        }
                                    }
                                    if (heap->runStatE7B == eNotFinished || heap->runStatE7B == eDispatched) {
                                        nDispatched++;
                                    }
                                    if (heap->runStatE7B == eFinished) {
                                        InitSignalReady(13, 4);
                                        continue;
                                    }
                                }
                            }
                            else if (pass == 0) {
                                nDispatched++;
                            }
                        }
                    }
                    if (pass) {
                        if (runStat == eFinished) {
                            bEndDiagram = true;
                        }
                        if ( (bRunToFinish && (nReady == nDispatched))) {
                            WaitMS(1, NULL);
                        }
                        if (!bRunToFinish) {
                            if ((LVGetTimerFlag() > id) || ((LVGetTimerFlag()-id) < 0)) {
                                if (!gAppStop && !gLastError) {
                                    return eNotFinished;
                                }
                                if (gAppStop) {
                                    return eFinished;
                                }
                                if (gLastError) {
                                    CGenErr();
                                }
                                if (!bRunToFinish && (!bEndDiagram || nSeq < 0)) {
                                    return eNotFinished;
                                }
                            }
                        }
                    }
                } /* end for */
                if (bEndDiagram) break;
            } /* end while */
            nSeq++;
        }
        heap->runStat6FE_1 = eReady;
        heap->runStatEC3 = eReady;
        heap->runStatE33 = eReady;
        heap->runStatE7B = eReady;
        /*SetSignalReady( 0xF, 6);*//* runStat6DE */
    } /* end sequence */
    return eFinished;
}
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_6B7(Boolean bRunToFinish);
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_6B7(Boolean bRunToFinish) {
    eRunStatus runStat = eReady;
    int16 nReady = 0;
    int16 nDispatched = 0;
    { /* Select */
        uInt32 id = LVGetTimerFlag();
        if (heap->runStat6B7 == eReady) {
            heap->runStat7E6_1 = eReady;
            heap->runStat804 = eReady;
            heap->runStat6C0_1 = eReady;
            heap->runStat6DE = eReady;
            heap->b_Constant_CS = heap->b_Case_Structure_CT;
            /*SetSignalReady( 0x18, 1);*//* b_Constant_CS */
        }
        /* begin case */
        if ( heap->b_Constant_CS ) {
            static uInt16 nStep = 0;
            switch(nStep)
            {
/* start q el linear (0 or 1 struct) */
                case 0 : {
                    heap->by_LED_1_1 = 0;
                    heap->by_LED_2_3 = 1;
                    nStep++;}
/* start q el struct (0 or 1 struct)*/
                case 1 : {
                    heap->runStat804 = IX5_MLB__R_RunFunc_804( bRunToFinish  );
                    if (heap->runStat804 == eNotFinished || heap->runStat804 == eDispatched) {
                        return heap->runStat804;
                    }
                    else if (heap->runStat804 == eFail) {
                        CGenErr();
                    }
                    heap->runStat804 = eReady;
                    nStep++; }
                default: {
                    ; /* do nothing */
                }
            }
            nStep = 0;
        } /* end case */
        /* begin case */
        else {
            static uInt16 nStep = 0;
            switch(nStep)
            {
/* start q el linear (0 or 1 struct) */
                case 0 : {
                    heap->by_LED_1 = 1;
                    heap->by_LED_2_2 = 0;
                    nStep++;}
/* start q el struct (0 or 1 struct)*/
                case 1 : {
                    heap->runStat6DE = IX5_MLB__R_RunFunc_6DE( bRunToFinish  );
                    if (heap->runStat6DE == eNotFinished || heap->runStat6DE == eDispatched) {
                        return heap->runStat6DE;
                    }
                    else if (heap->runStat6DE == eFail) {
                        CGenErr();
                    }
                    heap->runStat6DE = eReady;
                    nStep++; }
                default: {
                    ; /* do nothing */
                }
            }
            nStep = 0;
        } /* end case */
    } /* end switch */
    return eFinished;
}
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_35F(Boolean bRunToFinish);
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_35F(Boolean bRunToFinish) {
    eRunStatus runStat = eReady;
    int16 nReady = 0;
    int16 nDispatched = 0;
    { /* Sequence */
        static uChar nSeq = 0;
        uInt32 id = LVGetTimerFlag();
        if (heap->runStat35F == eReady) {
            heap->runStat37F_1 = eReady;
            heap->runStatA66 = eReady;
            heap->runStat9A1 = eReady;
            heap->runStatA0E = eReady;
            /*SetSignalReady( 0xA, 5);*//* XNodeTun362 */
            /*SetSignalReady( 0xA, 6);*//* XNodeTun36E */
            /*SetSignalReady( 0xA, 7);*//* XNodeTun63B */
        }
        {
            int16 pass;
            Boolean bEndDiagram = false;
            while (!gAppStop && !gLastError) {
                nReady = 0;
                bEndDiagram = false;
                runStat = eFinished;
                for (pass=0;pass<2;pass++) {
                    {
/* start q el linear (2 struct) */
                        if (heap->runStat37F_1 != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (pass == 0) {
                                InitSignalReady(23, 4);
                                /*InitSignalReady( 0xB, 0);*//* by_LED_2_XT_3 */
                                /*InitSignalReady( 0x16, 3);*//* e_pin_in_3 */
                                InitSignalReady(21, 4);
                                /*InitSignalReady( 0xB, 1);*//* by_LED_2_XT_4 */
                                /*InitSignalReady( 0x16, 4);*//* e_pin_in_4 */
                                InitSignalReady(22, 4);
                                /*InitSignalReady( 0xB, 2);*//* by_TEST_XT */
                                /*InitSignalReady( 0x17, 0);*//* e_pin_in_5 */
                                /*InitSignalReady( 0xB, 6);*//* by_PortX_in_3 */
                                /*InitSignalReady( 0xB, 7);*//* by_PortX_in_4 */
                                /*InitSignalReady( 0xC, 0);*//* by_PortX_in_5 */
                                /*InitSignalReady( 0x17, 3);*//* e_I_O_________3 */
                                /*InitSignalReady( 0x17, 2);*//* e_I_O_________4 */
                                /*InitSignalReady( 0x17, 1);*//* e_I_O_________5 */
                            }
                            else {
                                {
                                    /*SetSignalReady( 0xB, 0);*//* by_LED_2_XT_3 */
                                    SetSignalReady(23, 1);
                                    /*SetSignalReady( 0xB, 1);*//* by_LED_2_XT_4 */
                                    SetSignalReady(21, 1);
                                    /*SetSignalReady( 0xB, 2);*//* by_TEST_XT */
                                    SetSignalReady(22, 1);
                                    heap->e_pin_in_3 = 2;
                                    /*SetSignalReady( 0x16, 3);*//* e_pin_in_3 */
                                    SetSignalReady(23, 1);
                                    heap->e_pin_in_4 = 3;
                                    /*SetSignalReady( 0x16, 4);*//* e_pin_in_4 */
                                    SetSignalReady(21, 1);
                                    heap->e_pin_in_5 = 1;
                                    /*SetSignalReady( 0x17, 0);*//* e_pin_in_5 */
                                    SetSignalReady(22, 1);
                                    heap->by_PortX_in_3 = 2;
                                    /*SetSignalReady( 0xB, 6);*//* by_PortX_in_3 */
                                    SetSignalReady(22, 1);
                                    heap->by_PortX_in_4 = 2;
                                    /*SetSignalReady( 0xB, 7);*//* by_PortX_in_4 */
                                    SetSignalReady(21, 1);
                                    heap->by_PortX_in_5 = 2;
                                    /*SetSignalReady( 0xC, 0);*//* by_PortX_in_5 */
                                    SetSignalReady(23, 1);
                                    heap->e_I_O_________3 = 0;
                                    /*SetSignalReady( 0x17, 3);*//* e_I_O_________3 */
                                    SetSignalReady(22, 1);
                                    heap->e_I_O_________4 = 0;
                                    /*SetSignalReady( 0x17, 2);*//* e_I_O_________4 */
                                    SetSignalReady(21, 1);
                                    heap->e_I_O_________5 = 0;
                                    /*SetSignalReady( 0x17, 1);*//* e_I_O_________5 */
                                    SetSignalReady(23, 1);
                                }
                                heap->runStat37F_1 = eFinished;
                                continue;
                            }
                        }
/* start q el struct (2 struct) */
                        if (heap->runStatA66 != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (GetSignalReady( 23 )) {
                                if (pass) {
                                    if (heap->runStatA66 == eReady) {
                                    }
                                    {
                                        
                                        /**** Funclist entry - 4. Function call ****/
                                        GPO_EIO_Interface(heap->by_PortX_in_5, heap->e_pin_in_3, heap->e_I_O_________5, heap->by_LED_2_1);
                                        
                                        heap->runStatA66 = eFinished;
                                        if (gAppStop || (heap->runStatA66 == eFinished)) {
                                        }
                                        if (gAppStop) {
                                            gAppStop=true;
                                            return eFinished;
                                        }
                                    }
                                    if (heap->runStatA66 == eNotFinished || heap->runStatA66 == eDispatched) {
                                        nDispatched++;
                                    }
                                    if (heap->runStatA66 == eFinished) {
                                        InitSignalReady(23, 4);
                                        continue;
                                    }
                                }
                            }
                            else if (pass == 0) {
                                nDispatched++;
                            }
                        }
/* start q el struct (2 struct) */
                        if (heap->runStat9A1 != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (GetSignalReady( 22 )) {
                                if (pass) {
                                    if (heap->runStat9A1 == eReady) {
                                    }
                                    {
                                        
                                        /**** Funclist entry - 4. Function call ****/
                                        GPO_EIO_Interface(heap->by_PortX_in_3, heap->e_pin_in_5, heap->e_I_O_________3, heap->by_TEST);
                                        
                                        heap->runStat9A1 = eFinished;
                                        if (gAppStop || (heap->runStat9A1 == eFinished)) {
                                        }
                                        if (gAppStop) {
                                            gAppStop=true;
                                            return eFinished;
                                        }
                                    }
                                    if (heap->runStat9A1 == eNotFinished || heap->runStat9A1 == eDispatched) {
                                        nDispatched++;
                                    }
                                    if (heap->runStat9A1 == eFinished) {
                                        InitSignalReady(22, 4);
                                        continue;
                                    }
                                }
                            }
                            else if (pass == 0) {
                                nDispatched++;
                            }
                        }
/* start q el struct (2 struct) */
                        if (heap->runStatA0E != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (GetSignalReady( 21 )) {
                                if (pass) {
                                    if (heap->runStatA0E == eReady) {
                                    }
                                    {
                                        
                                        /**** Funclist entry - 4. Function call ****/
                                        GPO_EIO_Interface(heap->by_PortX_in_4, heap->e_pin_in_4, heap->e_I_O_________4, heap->by_LED_2_1);
                                        
                                        heap->runStatA0E = eFinished;
                                        if (gAppStop || (heap->runStatA0E == eFinished)) {
                                        }
                                        if (gAppStop) {
                                            gAppStop=true;
                                            return eFinished;
                                        }
                                    }
                                    if (heap->runStatA0E == eNotFinished || heap->runStatA0E == eDispatched) {
                                        nDispatched++;
                                    }
                                    if (heap->runStatA0E == eFinished) {
                                        InitSignalReady(21, 4);
                                        continue;
                                    }
                                }
                            }
                            else if (pass == 0) {
                                nDispatched++;
                            }
                        }
                    }
                    if (pass) {
                        if (runStat == eFinished) {
                            bEndDiagram = true;
                        }
                        if ( (bRunToFinish && (nReady == nDispatched))) {
                            WaitMS(1, NULL);
                        }
                        if (!bRunToFinish) {
                            if ((LVGetTimerFlag() > id) || ((LVGetTimerFlag()-id) < 0)) {
                                if (!gAppStop && !gLastError) {
                                    return eNotFinished;
                                }
                                if (gAppStop) {
                                    return eFinished;
                                }
                                if (gLastError) {
                                    CGenErr();
                                }
                                if (!bRunToFinish && (!bEndDiagram || nSeq < 0)) {
                                    return eNotFinished;
                                }
                            }
                        }
                    }
                } /* end for */
                if (bEndDiagram) break;
            } /* end while */
            nSeq++;
        }
        heap->runStat37F_1 = eReady;
        heap->runStatA66 = eReady;
        heap->runStat9A1 = eReady;
        heap->runStatA0E = eReady;
        /*SetSignalReady( 0xA, 4);*//* runStat35F */
    } /* end sequence */
    return eFinished;
}
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_5A2(Boolean bRunToFinish);
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_5A2(Boolean bRunToFinish) {
    eRunStatus runStat = eReady;
    int16 nReady = 0;
    int16 nDispatched = 0;
    { /* Select */
        uInt32 id = LVGetTimerFlag();
        if (heap->runStat5A2 == eReady) {
            heap->runStat5B3_1 = eReady;
            heap->runStatE80 = eReady;
            heap->s_VISA_Serial_Read_vi________CS = heap->s_VISA_Serial_Read_vi_______;
            /*SetSignalReady( 0x3, 2);*//* s_VISA_Serial_Read_vi________CS */
        }
        /* begin case */
        if ( ( !PDAStrCompareToStr(heap->s_VISA_Serial_Read_vi________CS, _LVT("ID?") ) ) ) {
            static uInt16 nStep = 0;
            switch(nStep)
            {
/* start q el linear (0 or 1 struct) */
                case 0 : {
                    heap->e_VISA_resource_name_1 = 1;
                    IX5_MLB__R_GlobalConstantsHeapPtr->iF5A = PDAStrNewFromBuf(_LVT("Rev:1.0.1 MLB_R (03112017);Powered by KSHJT;"),(uInt32)44);
                    heap->s_String = IX5_MLB__R_GlobalConstantsHeapPtr->iF5A;
                    nStep++;}
/* start q el struct (0 or 1 struct)*/
                case 1 : {
                    if (heap->runStatE80 == eReady) {
                    }
                    {
                        ControlDataItemPtr cdPtr = LVGetCurrentControlData();
                        if (heap->runStatE80 == eReady) {
                            CreateArgListStatic(heap->ArgsE80_1, 3, 1 );
                            argIn(heap->ArgsE80_1, 0).nType = 0;
                            argIn(heap->ArgsE80_1, 0).pValue = NULL;
                            argIn(heap->ArgsE80_1, 1).nType = StringDataType;
                            argIn(heap->ArgsE80_1, 1).pValue = (void *)&heap->s_String;
                            argIn(heap->ArgsE80_1, 2).nType = 0xA0000 | Enum8DataType;
                            argIn(heap->ArgsE80_1, 2).pValue = (void *)&heap->e_VISA_resource_name_1;
                            argOut(heap->ArgsE80_1, 0).nType = 0;
                            argOut(heap->ArgsE80_1, 0).pValue = NULL;
                        }
                        if (!IX5_MLB__R_viInstanceHeapPtr->iE80.callerID) {
                            IX5_MLB__R_viInstanceHeapPtr->iE80.callerID = ++gCallerID;
                        }
                        heap->runStatE80 = UploadStatus_Run( &IX5_MLB__R_viInstanceHeapPtr->iE80, false, (Boolean)(bRunToFinish && (nReady < 2)), (ArgList *)((ArgList **)heap->ArgsE80_1)[0], (ArgList *)((ArgList **)heap->ArgsE80_1)[1], NULL );
                        LVSetCurrentControlData(cdPtr);
                        if (heap->runStatE80 == eNotFinished || heap->runStatE80 == eDispatched) {
                            runStat = heap->runStatE80;
                        }
                        if (heap->runStatE80 == eFail || gLastError) {
                            CGenErr();
                        }
                        if (gAppStop || (heap->runStatE80 == eFinished)) {
                        }
                        if (gAppStop) {
                            gAppStop=true;
                            return eFinished;
                        }
                    }
                    if (!bRunToFinish && (runStat == eNotFinished || runStat == eDispatched)) {
                        return eDispatched;
                    }
                    if (heap->runStatE80 == eFinished) {
                        heap->runStatE80 = eReady;
                    }
                    nStep++; }
                default: {
                    ; /* do nothing */
                }
            }
            nStep = 0;
        } /* end case */
        /* begin case */
        else {
            static uInt16 nStep = 0;
            switch(nStep)
            {
            }
            nStep = 0;
        } /* end case */
        /* FreeCaseSelDCO. */
    if (heap->s_VISA_Serial_Read_vi________CS && (((PDAStrPtr)heap->s_VISA_Serial_Read_vi________CS)->refcnt > 0)) {
            if ((--((PDAStrPtr)heap->s_VISA_Serial_Read_vi________CS)->refcnt == 0) && (!((PDAStrPtr)heap->s_VISA_Serial_Read_vi________CS)->staticStr)) {
                MemHandleFree( heap->s_VISA_Serial_Read_vi________CS );
                heap->s_VISA_Serial_Read_vi________CS=NULL;
            }
        }
    } /* end switch */
    return eFinished;
}
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_B4(Boolean bRunToFinish);
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_B4(Boolean bRunToFinish) {
    eRunStatus runStat = eReady;
    int16 nReady = 0;
    int16 nDispatched = 0;
    { /* Sequence */
        static uChar nSeq = 0;
        uInt32 id = LVGetTimerFlag();
        if (heap->runStatB4 == eReady) {
            heap->runStatD4_1 = eReady;
            heap->runStatC60 = eReady;
            heap->runStatBD0 = eReady;
            heap->runStatC18 = eReady;
            /*SetSignalReady( 0xE, 3);*//* XNodeTunB7 */
            /*SetSignalReady( 0xD, 7);*//* XNodeTunC3 */
            /*SetSignalReady( 0xD, 6);*//* XNodeTunB7D */
        }
        {
            int16 pass;
            Boolean bEndDiagram = false;
            while (!gAppStop && !gLastError) {
                nReady = 0;
                bEndDiagram = false;
                runStat = eFinished;
                for (pass=0;pass<2;pass++) {
                    {
/* start q el linear (2 struct) */
                        if (heap->runStatD4_1 != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (pass == 0) {
                                InitSignalReady(35, 4);
                                /*InitSignalReady( 0xD, 1);*//* by_LED_2_XT */
                                /*InitSignalReady( 0x16, 2);*//* e_pin_in */
                                InitSignalReady(33, 4);
                                /*InitSignalReady( 0xC, 7);*//* by_LED_2_XT_1 */
                                /*InitSignalReady( 0x16, 1);*//* e_pin_in_1 */
                                InitSignalReady(34, 4);
                                /*InitSignalReady( 0xC, 5);*//* by_LED_2_XT_2 */
                                /*InitSignalReady( 0x15, 3);*//* e_pin_in_2 */
                                /*InitSignalReady( 0x8, 7);*//* by_PortX_in */
                                /*InitSignalReady( 0x8, 5);*//* by_PortX_in_1 */
                                /*InitSignalReady( 0x8, 3);*//* by_PortX_in_2 */
                                /*InitSignalReady( 0x15, 0);*//* e_I_O________ */
                                /*InitSignalReady( 0x14, 4);*//* e_I_O_________1 */
                                /*InitSignalReady( 0x14, 3);*//* e_I_O_________2 */
                            }
                            else {
                                {
                                    /*SetSignalReady( 0xD, 1);*//* by_LED_2_XT */
                                    SetSignalReady(35, 1);
                                    /*SetSignalReady( 0xC, 7);*//* by_LED_2_XT_1 */
                                    SetSignalReady(33, 1);
                                    /*SetSignalReady( 0xC, 5);*//* by_LED_2_XT_2 */
                                    SetSignalReady(34, 1);
                                    heap->e_pin_in = 2;
                                    /*SetSignalReady( 0x16, 2);*//* e_pin_in */
                                    SetSignalReady(35, 1);
                                    heap->e_pin_in_1 = 3;
                                    /*SetSignalReady( 0x16, 1);*//* e_pin_in_1 */
                                    SetSignalReady(33, 1);
                                    heap->e_pin_in_2 = 1;
                                    /*SetSignalReady( 0x15, 3);*//* e_pin_in_2 */
                                    SetSignalReady(34, 1);
                                    heap->by_PortX_in = 2;
                                    /*SetSignalReady( 0x8, 7);*//* by_PortX_in */
                                    SetSignalReady(34, 1);
                                    heap->by_PortX_in_1 = 2;
                                    /*SetSignalReady( 0x8, 5);*//* by_PortX_in_1 */
                                    SetSignalReady(33, 1);
                                    heap->by_PortX_in_2 = 2;
                                    /*SetSignalReady( 0x8, 3);*//* by_PortX_in_2 */
                                    SetSignalReady(35, 1);
                                    heap->e_I_O________ = 0;
                                    /*SetSignalReady( 0x15, 0);*//* e_I_O________ */
                                    SetSignalReady(34, 1);
                                    heap->e_I_O_________1 = 0;
                                    /*SetSignalReady( 0x14, 4);*//* e_I_O_________1 */
                                    SetSignalReady(33, 1);
                                    heap->e_I_O_________2 = 0;
                                    /*SetSignalReady( 0x14, 3);*//* e_I_O_________2 */
                                    SetSignalReady(35, 1);
                                }
                                heap->runStatD4_1 = eFinished;
                                continue;
                            }
                        }
/* start q el struct (2 struct) */
                        if (heap->runStatC60 != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (GetSignalReady( 35 )) {
                                if (pass) {
                                    if (heap->runStatC60 == eReady) {
                                    }
                                    {
                                        
                                        /**** Funclist entry - 4. Function call ****/
                                        GPO_EIO_Interface(heap->by_PortX_in_2, heap->e_pin_in, heap->e_I_O_________2, heap->by_LED_2);
                                        
                                        heap->runStatC60 = eFinished;
                                        if (gAppStop || (heap->runStatC60 == eFinished)) {
                                        }
                                        if (gAppStop) {
                                            gAppStop=true;
                                            return eFinished;
                                        }
                                    }
                                    if (heap->runStatC60 == eNotFinished || heap->runStatC60 == eDispatched) {
                                        nDispatched++;
                                    }
                                    if (heap->runStatC60 == eFinished) {
                                        InitSignalReady(35, 4);
                                        continue;
                                    }
                                }
                            }
                            else if (pass == 0) {
                                nDispatched++;
                            }
                        }
/* start q el struct (2 struct) */
                        if (heap->runStatBD0 != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (GetSignalReady( 34 )) {
                                if (pass) {
                                    if (heap->runStatBD0 == eReady) {
                                    }
                                    {
                                        
                                        /**** Funclist entry - 4. Function call ****/
                                        GPO_EIO_Interface(heap->by_PortX_in, heap->e_pin_in_2, heap->e_I_O________, heap->by_LED_2);
                                        
                                        heap->runStatBD0 = eFinished;
                                        if (gAppStop || (heap->runStatBD0 == eFinished)) {
                                        }
                                        if (gAppStop) {
                                            gAppStop=true;
                                            return eFinished;
                                        }
                                    }
                                    if (heap->runStatBD0 == eNotFinished || heap->runStatBD0 == eDispatched) {
                                        nDispatched++;
                                    }
                                    if (heap->runStatBD0 == eFinished) {
                                        InitSignalReady(34, 4);
                                        continue;
                                    }
                                }
                            }
                            else if (pass == 0) {
                                nDispatched++;
                            }
                        }
/* start q el struct (2 struct) */
                        if (heap->runStatC18 != eFinished) {
                            if (pass == 0) {
                                nReady++;
                            }
                            if (GetSignalReady( 33 )) {
                                if (pass) {
                                    if (heap->runStatC18 == eReady) {
                                    }
                                    {
                                        
                                        /**** Funclist entry - 4. Function call ****/
                                        GPO_EIO_Interface(heap->by_PortX_in_1, heap->e_pin_in_1, heap->e_I_O_________1, heap->by_LED_2);
                                        
                                        heap->runStatC18 = eFinished;
                                        if (gAppStop || (heap->runStatC18 == eFinished)) {
                                        }
                                        if (gAppStop) {
                                            gAppStop=true;
                                            return eFinished;
                                        }
                                    }
                                    if (heap->runStatC18 == eNotFinished || heap->runStatC18 == eDispatched) {
                                        nDispatched++;
                                    }
                                    if (heap->runStatC18 == eFinished) {
                                        InitSignalReady(33, 4);
                                        continue;
                                    }
                                }
                            }
                            else if (pass == 0) {
                                nDispatched++;
                            }
                        }
                    }
                    if (pass) {
                        if (runStat == eFinished) {
                            bEndDiagram = true;
                        }
                        if ( (bRunToFinish && (nReady == nDispatched))) {
                            WaitMS(1, NULL);
                        }
                        if (!bRunToFinish) {
                            if ((LVGetTimerFlag() > id) || ((LVGetTimerFlag()-id) < 0)) {
                                if (!gAppStop && !gLastError) {
                                    return eNotFinished;
                                }
                                if (gAppStop) {
                                    return eFinished;
                                }
                                if (gLastError) {
                                    CGenErr();
                                }
                                if (!bRunToFinish && (!bEndDiagram || nSeq < 0)) {
                                    return eNotFinished;
                                }
                            }
                        }
                    }
                } /* end for */
                if (bEndDiagram) break;
            } /* end while */
            nSeq++;
        }
        heap->runStatD4_1 = eReady;
        heap->runStatC60 = eReady;
        heap->runStatBD0 = eReady;
        heap->runStatC18 = eReady;
        /*SetSignalReady( 0xE, 5);*//* runStatB4 */
    } /* end sequence */
    return eFinished;
}
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_6C(Boolean bRunToFinish);
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_6C(Boolean bRunToFinish) {
    eRunStatus runStat = eReady;
    int16 nReady = 0;
    int16 nDispatched = 0;
    { /* Select */
        uInt32 id = LVGetTimerFlag();
        if (heap->runStat6C == eReady) {
            heap->runStat1BF_1 = eReady;
            heap->runStat25D = eReady;
            heap->runStat2C3 = eReady;
            heap->runStat290 = eReady;
            heap->runStat5A2 = eReady;
            heap->runStat2F6 = eReady;
            heap->runStat1BF_2 = eReady;
            heap->runStat33F_1 = eReady;
            heap->runStat35F = eReady;
            heap->runStat33F_2 = eReady;
            heap->runStat46A_1 = eReady;
            heap->runStat5F0 = eReady;
            heap->runStat6AB = eReady;
            heap->runStat46A_2 = eReady;
            heap->runStat6A3_1 = eReady;
            heap->runStat6B7 = eReady;
            heap->runStat6A3_2 = eReady;
            heap->runStat913_1 = eReady;
            heap->runStat65C = eReady;
            heap->runStat7DA = eReady;
            heap->runStat924 = eReady;
            heap->runStat913_2 = eReady;
            heap->runStat94_1 = eReady;
            heap->runStatB4 = eReady;
            heap->runStat94_2 = eReady;
            heap->e_Status_CS = heap->e_Status_SR;
            /*SetSignalReady( 0x4, 4);*//* e_Status_CS */
            /*SetSignalReady( 0x18, 6);*//* b_Constant_CT */
        }
        switch ( heap->e_Status_CS ) {
            /* begin case */
            case 1 : {
                int16 pass;
                Boolean bEndDiagram = false;
                uInt32 id = LVGetTimerFlag();
                while (!gAppStop && !gLastError) {
                    nReady = 0;
                    bEndDiagram = false;
                    runStat = eFinished;
                    for (pass=0;pass<2;pass++) {
                        {
/* start q el linear (2 struct) */
                            if (heap->runStat1BF_1 != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (pass == 0) {
                                    InitSignalReady(26, 1);
                                    InitSignalReady(28, 1);
                                    /*InitSignalReady( 0x3, 0);*//* s_VISA_Serial_Read_vi_______ */
                                    InitSignalReady(29, 3);
                                    InitSignalReady(30, 2);
                                    InitSignalReady(31, 7);
                                    /*InitSignalReady( 0x16, 7);*//* e_VISA_resource_name */
                                    /*InitSignalReady( 0x5, 6);*//* e_Status_2 */
                                    InitSignalReady(25, 2);
                                    /*InitSignalReady( 0x5, 7);*//* e_Select_s__t_f */
                                    /*InitSignalReady( 0x5, 5);*//* e_Status_3 */
                                    /*InitSignalReady( 0x19, 4);*//* b_Constant_CT_2 */
                                    /*InitSignalReady( 0x5, 4);*//* e_stop_bits__10__1_bit_ */
                                    /*InitSignalReady( 0x5, 3);*//* e_parity__0_none_ */
                                    /*InitSignalReady( 0x5, 1);*//* e_data_bits__8_ */
                                    /*InitSignalReady( 0x19, 3);*//* b_Enable_Termination_Char__T_ */
                                    /*InitSignalReady( 0x7, 0);*//* by_termination_char__0xA_____n_ */
                                    /*InitSignalReady( 0x0, 2);*//* dw_baud_rate__9600_ */
                                    /*InitSignalReady( 0x0, 4);*//* l_y */
                                    /*InitSignalReady( 0x19, 0);*//* b_Greater_Or_Equal__x____y_ */
                                    /*InitSignalReady( 0x0, 5);*//* l_String_Length_length */
                                    /*InitSignalReady( 0x7, 5);*//* by_VISA_Configure_Serial_Port_v */
                                    /*InitSignalReady( 0x7, 6);*//* by_VISA_Serial_Port_Byte_vi_err */
                                    /*InitSignalReady( 0x3, 6);*//* n_VISA_Serial_Port_Byte_vi_____ */
                                }
                                else {
                                    {
                                        heap->b_Case_Structure_CT = heap->b_Constant_SR;
                                        /*SetSignalReady( 0x18, 7);*//* b_Case_Structure_CT_1 */
                                        /*SetSignalReady( 0x19, 4);*//* b_Constant_CT_2 */
                                        SetSignalReady(25, 1);
                                        heap->e_VISA_resource_name = 1;
                                        /*SetSignalReady( 0x16, 7);*//* e_VISA_resource_name */
                                        SetSignalReady(29, 1);
                                        SetSignalReady(30, 1);
                                        SetSignalReady(31, 1);
                                        heap->l_y = 2;
                                        /*SetSignalReady( 0x0, 4);*//* l_y */
                                        heap->dw_baud_rate__9600_ = 9600;
                                        /*SetSignalReady( 0x0, 2);*//* dw_baud_rate__9600_ */
                                        SetSignalReady(31, 1);
                                        heap->by_termination_char__0xA_____n_ = 10;
                                        /*SetSignalReady( 0x7, 0);*//* by_termination_char__0xA_____n_ */
                                        SetSignalReady(31, 1);
                                        heap->b_Enable_Termination_Char__T_ = false;
                                        /*SetSignalReady( 0x19, 3);*//* b_Enable_Termination_Char__T_ */
                                        SetSignalReady(31, 1);
                                        heap->e_data_bits__8_ = 0;
                                        /*SetSignalReady( 0x5, 1);*//* e_data_bits__8_ */
                                        SetSignalReady(31, 1);
                                        heap->e_parity__0_none_ = 0;
                                        /*SetSignalReady( 0x5, 3);*//* e_parity__0_none_ */
                                        SetSignalReady(31, 1);
                                        heap->e_stop_bits__10__1_bit_ = 0;
                                        /*SetSignalReady( 0x5, 4);*//* e_stop_bits__10__1_bit_ */
                                        SetSignalReady(31, 1);
                                        heap->e_Status_3 = 2;
                                        /*SetSignalReady( 0x5, 5);*//* e_Status_3 */
                                        heap->e_Status_2 = 1;
                                        /*SetSignalReady( 0x5, 6);*//* e_Status_2 */
                                    }
                                    heap->runStat1BF_1 = eFinished;
                                    continue;
                                }
                            }
/* start q el struct (2 struct) */
                            if (heap->runStat25D != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (GetSignalReady( 31 )) {
                                    if (pass) {
                                        if (heap->runStat25D == eReady) {
                                        }
                                        {
                                            
                                            /**** Funclist entry - 4. Function call ****/
                                            uart_init_2(heap->e_VISA_resource_name, heap->dw_baud_rate__9600_, heap->e_data_bits__8_, heap->e_stop_bits__10__1_bit_, heap->e_parity__0_none_, heap->by_termination_char__0xA_____n_, heap->b_Enable_Termination_Char__T_);
                                            
                                            heap->runStat25D = eFinished;
                                            if (gAppStop || (heap->runStat25D == eFinished)) {
                                                /*SetSignalReady( 0x7, 5);*//* by_VISA_Configure_Serial_Port_v */
                                                SetSignalReady(30, 1);
                                            }
                                            if (gAppStop) {
                                                gAppStop=true;
                                                return eFinished;
                                            }
                                        }
                                        if (heap->runStat25D == eNotFinished || heap->runStat25D == eDispatched) {
                                            nDispatched++;
                                        }
                                        if (heap->runStat25D == eFinished) {
                                            InitSignalReady(31, 7);
                                            continue;
                                        }
                                    }
                                }
                                else if (pass == 0) {
                                    nDispatched++;
                                }
                            }
/* start q el struct (2 struct) */
                            if (heap->runStat2C3 != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (GetSignalReady( 30 )) {
                                    if (pass) {
                                        if (heap->runStat2C3 == eReady) {
                                        }
                                        {
                                            
                                            /**** Funclist entry - 4. Function call ****/
                                            uart_Port_Bytes_2(heap->e_VISA_resource_name, &heap->n_VISA_Serial_Port_Byte_vi_____);
                                            
                                            heap->runStat2C3 = eFinished;
                                            if (gAppStop || (heap->runStat2C3 == eFinished)) {
                                                /*SetSignalReady( 0x3, 6);*//* n_VISA_Serial_Port_Byte_vi_____ */
                                                SetSignalReady(29, 1);
                                                /*SetSignalReady( 0x7, 6);*//* by_VISA_Serial_Port_Byte_vi_err */
                                                SetSignalReady(29, 1);
                                            }
                                            if (gAppStop) {
                                                gAppStop=true;
                                                return eFinished;
                                            }
                                        }
                                        if (heap->runStat2C3 == eNotFinished || heap->runStat2C3 == eDispatched) {
                                            nDispatched++;
                                        }
                                        if (heap->runStat2C3 == eFinished) {
                                            InitSignalReady(30, 2);
                                            continue;
                                        }
                                    }
                                }
                                else if (pass == 0) {
                                    nDispatched++;
                                }
                            }
/* start q el struct (2 struct) */
                            if (heap->runStat290 != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (GetSignalReady( 29 )) {
                                    if (pass) {
                                        if (heap->runStat290 == eReady) {
                                        }
                                        {
                                            ControlDataItemPtr cdPtr = LVGetCurrentControlData();
                                            if (heap->runStat290 == eReady) {
                                                CreateArgListStatic(heap->Args290_1, 3, 2 );
                                                argIn(heap->Args290_1, 0).nType = 0xA0000 | Enum8DataType;
                                                argIn(heap->Args290_1, 0).pValue = (void *)&heap->e_VISA_resource_name;
                                                argIn(heap->Args290_1, 1).nType = uInt16DataType;
                                                argIn(heap->Args290_1, 1).pValue = (void *)&heap->n_VISA_Serial_Port_Byte_vi_____;
                                                argIn(heap->Args290_1, 2).nType = uCharDataType;
                                                argIn(heap->Args290_1, 2).pValue = (void *)&heap->by_VISA_Serial_Port_Byte_vi_err;
                                                argOut(heap->Args290_1, 0).nType = StringDataType;
                                                argOut(heap->Args290_1, 0).pValue = (void *)&heap->s_VISA_Serial_Read_vi_______;
                                                argOut(heap->Args290_1, 1).nType = 0;
                                                argOut(heap->Args290_1, 1).pValue = NULL;
                                            }
                                            if (!IX5_MLB__R_viInstanceHeapPtr->i290.callerID) {
                                                IX5_MLB__R_viInstanceHeapPtr->i290.callerID = ++gCallerID;
                                            }
                                            heap->runStat290 = VISA_Serial_Read_Run( &IX5_MLB__R_viInstanceHeapPtr->i290, false, (Boolean)(bRunToFinish && (nReady < 2)), (ArgList *)((ArgList **)heap->Args290_1)[0], (ArgList *)((ArgList **)heap->Args290_1)[1], NULL );
                                            LVSetCurrentControlData(cdPtr);
                                            if (heap->runStat290 == eNotFinished || heap->runStat290 == eDispatched) {
                                                runStat = heap->runStat290;
                                            }
                                            if (heap->runStat290 == eFail || gLastError) {
                                                CGenErr();
                                            }
                                            if (gAppStop || (heap->runStat290 == eFinished)) {
                                                /*SetSignalReady( 0x3, 0);*//* s_VISA_Serial_Read_vi_______ */
                                                SetSignalReady(26, 1);
                                                SetSignalReady(28, 1);
                                                PDAStrIncRefCnt(heap->s_VISA_Serial_Read_vi_______, (uInt16)1); /* Func call */
                                            }
                                            if (gAppStop) {
                                                gAppStop=true;
                                                return eFinished;
                                            }
                                        }
                                        if (heap->runStat290 == eNotFinished || heap->runStat290 == eDispatched) {
                                            nDispatched++;
                                        }
                                        if (heap->runStat290 == eFinished) {
                                            InitSignalReady(29, 3);
                                            continue;
                                        }
                                    }
                                }
                                else if (pass == 0) {
                                    nDispatched++;
                                }
                            }
/* start q el struct (2 struct) */
                            if (heap->runStat5A2 != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (GetSignalReady( 28 )) {
                                    if (pass) {
                                        heap->runStat5A2 = IX5_MLB__R_RunFunc_5A2( (Boolean)(bRunToFinish && (nReady < 2)) );
                                        if (heap->runStat5A2 == eNotFinished || heap->runStat5A2 == eDispatched) {
                                            if (heap->runStat5A2 == eDispatched) {
                                                nDispatched++;
                                            }
                                            runStat = heap->runStat5A2;
                                        }
                                        else if (heap->runStat5A2 == eFail) {
                                            CGenErr();
                                        }
                                        else {
                                            InitSignalReady(28, 1);
                                        }
                                        if (runStat == eFinished) {
                                            continue;
                                        }
                                    }
                                }
                                else if (pass == 0) {
                                    nDispatched++;
                                }
                            }
/* start q el linear (2 struct) */
                            if (heap->runStat2F6 != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (GetSignalReady( 26 )) {
                                    if (pass) {
                                        {
                                            /**/
                                            /* String Length */
                                            /**/
                                            heap->l_String_Length_length = (int32)PDAStrLen(heap->s_VISA_Serial_Read_vi_______);
                                            /*SetSignalReady( 0x0, 5);*//* l_String_Length_length */
                                            /**/
                                            /* Greater Or Equal? */
                                            /**/
                                            heap->b_Greater_Or_Equal__x____y_ =  (heap->l_String_Length_length >= 2);
                                            /*SetSignalReady( 0x19, 0);*//* b_Greater_Or_Equal__x____y_ */
                                            /**/
                                            /* Select */
                                            /**/
                                            if (heap->b_Greater_Or_Equal__x____y_) {
                                                heap->e_Case_Structure_CT = heap->e_Status_3;
    }
                                            else {
                                                heap->e_Case_Structure_CT = heap->e_Status_2;
    }
                                            /*SetSignalReady( 0x5, 7);*//* e_Select_s__t_f */
                                            SetSignalReady(25, 1);
                                        }
                                        heap->runStat2F6 = eFinished;
                                        InitSignalReady(26, 1);
                                        continue;
                                    }
                                }
                                else if (pass == 0) {
                                    nDispatched++;
                                }
                            }
/* start q el linear (2 struct) */
                            if (heap->runStat1BF_2 != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (GetSignalReady( 25 )) {
                                    if (pass) {
                                        {
                                            /*SetSignalReady( 0x18, 7);*//* b_Case_Structure_CT_1 */
                                            /*SetSignalReady( 0x4, 1);*//* e_Case_Structure_CT_1 */
                                        }
                                        heap->runStat1BF_2 = eFinished;
                                        InitSignalReady(25, 2);
                                        continue;
                                    }
                                }
                                else if (pass == 0) {
                                    nDispatched++;
                                }
                            }
                        }
                        if (pass) {
                            if (runStat == eFinished) {
                                bEndDiagram = true;
                            }
                            if (!bRunToFinish) {
                                if ((LVGetTimerFlag() > id) || ((LVGetTimerFlag()-id) < 0)) {
                                    if (gAppStop) {
                                        return eFinished;
                                    }
                                    if (gLastError) {
                                        CGenErr();
                                    }
                                    if (!gAppStop && !gLastError) {
                                        return eNotFinished;
                                    }
                                }
                            }
                        }
                    } /* end for */
                    if (bEndDiagram) break;
                } /* end while */
            } /* end case */
            break;
            /* begin case */
            case 2 : {
                static uInt16 nStep = 0;
                switch(nStep)
                {
/* start q el linear (0 or 1 struct) */
                    case 0 : {
                        heap->b_Case_Structure_CT = heap->b_Constant_SR;
                        heap->by_LED_2_1 = 1;
                        heap->e_Case_Structure_CT = 3;
                        heap->by_TEST = 0;
                        nStep++;}
/* start q el struct (0 or 1 struct)*/
                    case 1 : {
                        heap->runStat35F = IX5_MLB__R_RunFunc_35F( bRunToFinish  );
                        if (heap->runStat35F == eNotFinished || heap->runStat35F == eDispatched) {
                            return heap->runStat35F;
                        }
                        else if (heap->runStat35F == eFail) {
                            CGenErr();
                        }
                        heap->runStat35F = eReady;
                        nStep++; }
/* start q el linear (0 or 1 struct) */
                    case 2 : {
                        nStep++;}
                    default: {
                        ; /* do nothing */
                    }
                }
                nStep = 0;
            } /* end case */
            break;
            /* begin case */
            case 3 : {
                int16 pass;
                Boolean bEndDiagram = false;
                uInt32 id = LVGetTimerFlag();
                while (!gAppStop && !gLastError) {
                    nReady = 0;
                    bEndDiagram = false;
                    runStat = eFinished;
                    for (pass=0;pass<2;pass++) {
                        {
/* start q el linear (2 struct) */
                            if (heap->runStat46A_1 != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (pass == 0) {
                                    InitSignalReady(19, 3);
                                    /*InitSignalReady( 0x2, 7);*//* s_IO_Open_Test_VI_R_vi_FailCode */
                                    /*InitSignalReady( 0x16, 5);*//* e_VISA_resource_name_2 */
                                    /*InitSignalReady( 0xE, 1);*//* by_IO_Open_Test_VI_R_vi_err_out */
                                    InitSignalReady(18, 2);
                                    /*InitSignalReady( 0x19, 5);*//* b_IO_Open_Test_VI_R_vi_pass_ */
                                    /*InitSignalReady( 0x6, 0);*//* e_Status_5 */
                                }
                                else {
                                    {
                                        heap->e_Case_Structure_CT = 4;
                                        /*SetSignalReady( 0x6, 0);*//* e_Status_5 */
                                        SetSignalReady(18, 1);
                                        heap->e_VISA_resource_name_2 = 1;
                                        /*SetSignalReady( 0x16, 5);*//* e_VISA_resource_name_2 */
                                        SetSignalReady(19, 1);
                                    }
                                    heap->runStat46A_1 = eFinished;
                                    continue;
                                }
                            }
/* start q el struct (2 struct) */
                            if (heap->runStat5F0 != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (pass) {
                                    if (heap->runStat5F0 == eReady) {
                                    }
                                    {
                                        ControlDataItemPtr cdPtr = LVGetCurrentControlData();
                                        if (heap->runStat5F0 == eReady) {
                                            CreateArgListStatic(heap->Args5F0_1, 1, 3 );
                                            argIn(heap->Args5F0_1, 0).nType = 0;
                                            argIn(heap->Args5F0_1, 0).pValue = NULL;
                                            argOut(heap->Args5F0_1, 0).nType = uCharDataType;
                                            argOut(heap->Args5F0_1, 0).pValue = (void *)&heap->by_IO_Open_Test_VI_R_vi_err_out;
                                            argOut(heap->Args5F0_1, 1).nType = StringDataType;
                                            argOut(heap->Args5F0_1, 1).pValue = (void *)&heap->s_IO_Open_Test_VI_R_vi_FailCode;
                                            argOut(heap->Args5F0_1, 2).nType = BooleanDataType;
                                            argOut(heap->Args5F0_1, 2).pValue = (void *)&heap->b_Case_Structure_CT;
                                        }
                                        if (!IX5_MLB__R_viInstanceHeapPtr->i5F0.callerID) {
                                            IX5_MLB__R_viInstanceHeapPtr->i5F0.callerID = ++gCallerID;
                                        }
                                        heap->runStat5F0 = IO_Open_Test_VI_R_Run( &IX5_MLB__R_viInstanceHeapPtr->i5F0, false, (Boolean)(bRunToFinish && (nReady < 2)), (ArgList *)((ArgList **)heap->Args5F0_1)[0], (ArgList *)((ArgList **)heap->Args5F0_1)[1], NULL );
                                        LVSetCurrentControlData(cdPtr);
                                        if (heap->runStat5F0 == eNotFinished || heap->runStat5F0 == eDispatched) {
                                            runStat = heap->runStat5F0;
                                        }
                                        if (heap->runStat5F0 == eFail || gLastError) {
                                            CGenErr();
                                        }
                                        if (gAppStop || (heap->runStat5F0 == eFinished)) {
                                            /*SetSignalReady( 0xE, 1);*//* by_IO_Open_Test_VI_R_vi_err_out */
                                            SetSignalReady(19, 1);
                                            /*SetSignalReady( 0x2, 7);*//* s_IO_Open_Test_VI_R_vi_FailCode */
                                            SetSignalReady(19, 1);
                                            /*SetSignalReady( 0x19, 5);*//* b_IO_Open_Test_VI_R_vi_pass_ */
                                            SetSignalReady(18, 1);
                                        }
                                        if (gAppStop) {
                                            gAppStop=true;
                                            return eFinished;
                                        }
                                    }
                                    if (heap->runStat5F0 == eNotFinished || heap->runStat5F0 == eDispatched) {
                                        nDispatched++;
                                    }
                                    if (heap->runStat5F0 == eFinished) {
                                        continue;
                                    }
                                }
                            }
/* start q el struct (2 struct) */
                            if (heap->runStat6AB != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (GetSignalReady( 19 )) {
                                    if (pass) {
                                        if (heap->runStat6AB == eReady) {
                                        }
                                        {
                                            ControlDataItemPtr cdPtr = LVGetCurrentControlData();
                                            if (heap->runStat6AB == eReady) {
                                                CreateArgListStatic(heap->Args6AB_1, 3, 1 );
                                                argIn(heap->Args6AB_1, 0).nType = uCharDataType;
                                                argIn(heap->Args6AB_1, 0).pValue = (void *)&heap->by_IO_Open_Test_VI_R_vi_err_out;
                                                argIn(heap->Args6AB_1, 1).nType = StringDataType;
                                                argIn(heap->Args6AB_1, 1).pValue = (void *)&heap->s_IO_Open_Test_VI_R_vi_FailCode;
                                                argIn(heap->Args6AB_1, 2).nType = 0xA0000 | Enum8DataType;
                                                argIn(heap->Args6AB_1, 2).pValue = (void *)&heap->e_VISA_resource_name_2;
                                                argOut(heap->Args6AB_1, 0).nType = 0;
                                                argOut(heap->Args6AB_1, 0).pValue = NULL;
                                            }
                                            if (!IX5_MLB__R_viInstanceHeapPtr->i6AB.callerID) {
                                                IX5_MLB__R_viInstanceHeapPtr->i6AB.callerID = ++gCallerID;
                                            }
                                            heap->runStat6AB = UploadStatus_Run( &IX5_MLB__R_viInstanceHeapPtr->i6AB, false, (Boolean)(bRunToFinish && (nReady < 2)), (ArgList *)((ArgList **)heap->Args6AB_1)[0], (ArgList *)((ArgList **)heap->Args6AB_1)[1], NULL );
                                            LVSetCurrentControlData(cdPtr);
                                            if (heap->runStat6AB == eNotFinished || heap->runStat6AB == eDispatched) {
                                                runStat = heap->runStat6AB;
                                            }
                                            if (heap->runStat6AB == eFail || gLastError) {
                                                CGenErr();
                                            }
                                            if (gAppStop || (heap->runStat6AB == eFinished)) {
                                            }
                                            if (gAppStop) {
                                                gAppStop=true;
                                                return eFinished;
                                            }
                                        }
                                        if (heap->runStat6AB == eNotFinished || heap->runStat6AB == eDispatched) {
                                            nDispatched++;
                                        }
                                        if (heap->runStat6AB == eFinished) {
                                            InitSignalReady(19, 3);
                                            continue;
                                        }
                                    }
                                }
                                else if (pass == 0) {
                                    nDispatched++;
                                }
                            }
/* start q el linear (2 struct) */
                            if (heap->runStat46A_2 != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (GetSignalReady( 18 )) {
                                    if (pass) {
                                        {
                                            /*SetSignalReady( 0x18, 7);*//* b_Case_Structure_CT_1 */
                                            /*SetSignalReady( 0x4, 1);*//* e_Case_Structure_CT_1 */
                                        }
                                        heap->runStat46A_2 = eFinished;
                                        InitSignalReady(18, 2);
                                        continue;
                                    }
                                }
                                else if (pass == 0) {
                                    nDispatched++;
                                }
                            }
                        }
                        if (pass) {
                            if (runStat == eFinished) {
                                bEndDiagram = true;
                            }
                            if (!bRunToFinish) {
                                if ((LVGetTimerFlag() > id) || ((LVGetTimerFlag()-id) < 0)) {
                                    if (gAppStop) {
                                        return eFinished;
                                    }
                                    if (gLastError) {
                                        CGenErr();
                                    }
                                    if (!gAppStop && !gLastError) {
                                        return eNotFinished;
                                    }
                                }
                            }
                        }
                    } /* end for */
                    if (bEndDiagram) break;
                } /* end while */
            } /* end case */
            break;
            /* begin case */
            case 4 : {
                static uInt16 nStep = 0;
                switch(nStep)
                {
/* start q el linear (0 or 1 struct) */
                    case 0 : {
                        heap->b_Case_Structure_CT = heap->b_Constant_SR;
                        heap->e_Case_Structure_CT = 5;
                        nStep++;}
/* start q el struct (0 or 1 struct)*/
                    case 1 : {
                        heap->runStat6B7 = IX5_MLB__R_RunFunc_6B7( bRunToFinish  );
                        if (heap->runStat6B7 == eNotFinished || heap->runStat6B7 == eDispatched) {
                            return heap->runStat6B7;
                        }
                        else if (heap->runStat6B7 == eFail) {
                            CGenErr();
                        }
                        heap->runStat6B7 = eReady;
                        nStep++; }
/* start q el linear (0 or 1 struct) */
                    case 2 : {
                        nStep++;}
                    default: {
                        ; /* do nothing */
                    }
                }
                nStep = 0;
            } /* end case */
            break;
            /* begin case */
            case 5 : {
                int16 pass;
                Boolean bEndDiagram = false;
                uInt32 id = LVGetTimerFlag();
                while (!gAppStop && !gLastError) {
                    nReady = 0;
                    bEndDiagram = false;
                    runStat = eFinished;
                    for (pass=0;pass<2;pass++) {
                        {
/* start q el linear (2 struct) */
                            if (heap->runStat913_1 != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (pass == 0) {
                                    InitSignalReady(4, 1);
                                    /*InitSignalReady( 0xF, 0);*//* by_Diagram_Disable_Structure_DT */
                                    InitSignalReady(6, 1);
                                    /*InitSignalReady( 0xE, 0);*//* by_UploadResult_vi_err_out */
                                    InitSignalReady(7, 2);
                                    /*InitSignalReady( 0x16, 6);*//* e_VISA_resource_name_3 */
                                    InitSignalReady(2, 2);
                                    /*InitSignalReady( 0x17, 7);*//* b_Constant_CT_5 */
                                    /*InitSignalReady( 0x4, 7);*//* e_Status_7 */
                                }
                                else {
                                    {
                                        heap->b_Case_Structure_CT = heap->b_Constant_SR;
                                        /*SetSignalReady( 0x18, 7);*//* b_Case_Structure_CT_1 */
                                        /*SetSignalReady( 0x17, 7);*//* b_Constant_CT_5 */
                                        SetSignalReady(2, 1);
                                        SetSignalReady(7, 1);
                                        heap->e_Case_Structure_CT = 1;
                                        /*SetSignalReady( 0x4, 7);*//* e_Status_7 */
                                        SetSignalReady(2, 1);
                                        heap->e_VISA_resource_name_3 = 1;
                                        /*SetSignalReady( 0x16, 6);*//* e_VISA_resource_name_3 */
                                        SetSignalReady(7, 1);
                                    }
                                    heap->runStat913_1 = eFinished;
                                    continue;
                                }
                            }
/* start q el struct (2 struct) */
                            if (heap->runStat65C != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (GetSignalReady( 7 )) {
                                    if (pass) {
                                        if (heap->runStat65C == eReady) {
                                        }
                                        {
                                            ControlDataItemPtr cdPtr = LVGetCurrentControlData();
                                            if (heap->runStat65C == eReady) {
                                                CreateArgListStatic(heap->Args65C_1, 3, 1 );
                                                argIn(heap->Args65C_1, 0).nType = 0;
                                                argIn(heap->Args65C_1, 0).pValue = NULL;
                                                argIn(heap->Args65C_1, 1).nType = BooleanDataType;
                                                argIn(heap->Args65C_1, 1).pValue = (void *)&heap->b_Case_Structure_CT;
                                                argIn(heap->Args65C_1, 2).nType = 0xA0000 | Enum8DataType;
                                                argIn(heap->Args65C_1, 2).pValue = (void *)&heap->e_VISA_resource_name_3;
                                                argOut(heap->Args65C_1, 0).nType = uCharDataType;
                                                argOut(heap->Args65C_1, 0).pValue = (void *)&heap->by_UploadResult_vi_err_out;
                                            }
                                            if (!IX5_MLB__R_viInstanceHeapPtr->i65C.callerID) {
                                                IX5_MLB__R_viInstanceHeapPtr->i65C.callerID = ++gCallerID;
                                            }
                                            heap->runStat65C = UploadResult_Run( &IX5_MLB__R_viInstanceHeapPtr->i65C, false, (Boolean)(bRunToFinish && (nReady < 2)), (ArgList *)((ArgList **)heap->Args65C_1)[0], (ArgList *)((ArgList **)heap->Args65C_1)[1], NULL );
                                            LVSetCurrentControlData(cdPtr);
                                            if (heap->runStat65C == eNotFinished || heap->runStat65C == eDispatched) {
                                                runStat = heap->runStat65C;
                                            }
                                            if (heap->runStat65C == eFail || gLastError) {
                                                CGenErr();
                                            }
                                            if (gAppStop || (heap->runStat65C == eFinished)) {
                                                /*SetSignalReady( 0xE, 0);*//* by_UploadResult_vi_err_out */
                                                SetSignalReady(6, 1);
                                            }
                                            if (gAppStop) {
                                                gAppStop=true;
                                                return eFinished;
                                            }
                                        }
                                        if (heap->runStat65C == eNotFinished || heap->runStat65C == eDispatched) {
                                            nDispatched++;
                                        }
                                        if (heap->runStat65C == eFinished) {
                                            InitSignalReady(7, 2);
                                            continue;
                                        }
                                    }
                                }
                                else if (pass == 0) {
                                    nDispatched++;
                                }
                            }
/* start q el struct (2 struct) */
                            if (heap->runStat7DA != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (GetSignalReady( 6 )) {
                                    if (pass) {
                                        heap->runStat7DA = IX5_MLB__R_RunFunc_7DA( (Boolean)(bRunToFinish && (nReady < 2)) );
                                        if (heap->runStat7DA == eNotFinished || heap->runStat7DA == eDispatched) {
                                            if (heap->runStat7DA == eDispatched) {
                                                nDispatched++;
                                            }
                                            runStat = heap->runStat7DA;
                                        }
                                        else if (heap->runStat7DA == eFail) {
                                            CGenErr();
                                        }
                                        else {
                                            InitSignalReady(6, 1);
                                        }
                                        if (runStat == eFinished) {
                                            continue;
                                        }
                                    }
                                }
                                else if (pass == 0) {
                                    nDispatched++;
                                }
                            }
/* start q el struct (2 struct) */
                            if (heap->runStat924 != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (GetSignalReady( 4 )) {
                                    if (pass) {
                                        heap->runStat924 = IX5_MLB__R_RunFunc_924( (Boolean)(bRunToFinish && (nReady < 2)) );
                                        if (heap->runStat924 == eNotFinished || heap->runStat924 == eDispatched) {
                                            if (heap->runStat924 == eDispatched) {
                                                nDispatched++;
                                            }
                                            runStat = heap->runStat924;
                                        }
                                        else if (heap->runStat924 == eFail) {
                                            CGenErr();
                                        }
                                        else {
                                            InitSignalReady(4, 1);
                                        }
                                        if (runStat == eFinished) {
                                            continue;
                                        }
                                    }
                                }
                                else if (pass == 0) {
                                    nDispatched++;
                                }
                            }
/* start q el linear (2 struct) */
                            if (heap->runStat913_2 != eFinished) {
                                if (pass == 0) {
                                    nReady++;
                                }
                                if (GetSignalReady( 2 )) {
                                    if (pass) {
                                        {
                                            /*SetSignalReady( 0x18, 7);*//* b_Case_Structure_CT_1 */
                                            /*SetSignalReady( 0x4, 1);*//* e_Case_Structure_CT_1 */
                                        }
                                        heap->runStat913_2 = eFinished;
                                        InitSignalReady(2, 2);
                                        continue;
                                    }
                                }
                                else if (pass == 0) {
                                    nDispatched++;
                                }
                            }
                        }
                        if (pass) {
                            if (runStat == eFinished) {
                                bEndDiagram = true;
                            }
                            if (!bRunToFinish) {
                                if ((LVGetTimerFlag() > id) || ((LVGetTimerFlag()-id) < 0)) {
                                    if (gAppStop) {
                                        return eFinished;
                                    }
                                    if (gLastError) {
                                        CGenErr();
                                    }
                                    if (!gAppStop && !gLastError) {
                                        return eNotFinished;
                                    }
                                }
                            }
                        }
                    } /* end for */
                    if (bEndDiagram) break;
                } /* end while */
            } /* end case */
            break;
            /* begin case */
            default : {
                static uInt16 nStep = 0;
                switch(nStep)
                {
/* start q el linear (0 or 1 struct) */
                    case 0 : {
                        heap->b_Case_Structure_CT = heap->b_Constant_SR;
                        heap->by_LED_2 = 1;
                        heap->e_Case_Structure_CT = 1;
                        nStep++;}
/* start q el struct (0 or 1 struct)*/
                    case 1 : {
                        heap->runStatB4 = IX5_MLB__R_RunFunc_B4( bRunToFinish  );
                        if (heap->runStatB4 == eNotFinished || heap->runStatB4 == eDispatched) {
                            return heap->runStatB4;
                        }
                        else if (heap->runStatB4 == eFail) {
                            CGenErr();
                        }
                        heap->runStatB4 = eReady;
                        nStep++; }
/* start q el linear (0 or 1 struct) */
                    case 2 : {
                        nStep++;}
                    default: {
                        ; /* do nothing */
                    }
                }
                nStep = 0;
            } /* end case */
            break;
        }
        heap->runStat1BF_1 = eReady;
        heap->runStat25D = eReady;
        heap->runStat2C3 = eReady;
        heap->runStat290 = eReady;
        heap->runStat5A2 = eReady;
        heap->runStat2F6 = eReady;
        heap->runStat1BF_2 = eReady;
        heap->runStat46A_1 = eReady;
        heap->runStat5F0 = eReady;
        heap->runStat6AB = eReady;
        heap->runStat46A_2 = eReady;
        heap->runStat913_1 = eReady;
        heap->runStat65C = eReady;
        heap->runStat7DA = eReady;
        heap->runStat924 = eReady;
        heap->runStat913_2 = eReady;
        /*SetSignalReady( 0x18, 4);*//* b_Case_Structure_CT */
        SetSignalReady(0, 1);
        /*SetSignalReady( 0x4, 6);*//* e_Case_Structure_CT */
        SetSignalReady(0, 1);
    } /* end switch */
    return eFinished;
}
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_31(Boolean bRunToFinish);
eRunStatus _TEXT_SECTION IX5_MLB__R_RunFunc_31(Boolean bRunToFinish) {
    eRunStatus runStat = eReady;
    int16 nReady = 0;
    int16 nDispatched = 0;
    { /* while loop */
        uInt32 id = LVGetTimerFlag();
        int16 pass;
        Boolean bEndDiagram = false;
        static Boolean bInit = true;
        if (heap->runStat31 == eReady) {
            heap->runStat4B_1 = eReady;
            heap->runStat6C = eReady;
            heap->runStatACE = eReady;
            heap->runStat4B_2 = eReady;
            heap->b_Case_Structure_SR = false;
            /*SetSignalReady( 0x17, 4);*//* b_Case_Structure_SR */
            heap->e_Case_Structure_SR = 0;
            /*SetSignalReady( 0x5, 0);*//* e_Case_Structure_SR */
            heap->l_While_Loop_i = 0;
        }
        while (!gAppStop && !gLastError) {
            nReady = 0;
            runStat = eFinished;
            bEndDiagram = false;
            for (pass=0;pass<2;pass++) {
                {
/* start q el linear (2 struct) */
                    if (heap->runStat4B_1 != eFinished) {
                        if (pass == 0) {
                            nReady++;
                        }
                        if (pass == 0) {
                            InitSignalReady(0, 3);
                            /*InitSignalReady( 0x4, 6);*//* e_Case_Structure_CT */
                            InitSignalReady(37, 2);
                            /*InitSignalReady( 0x4, 5);*//* e_Status_SR */
                            InitSignalReady(1, 1);
                            /*InitSignalReady( 0x0, 1);*//* dw_millisecond_multiple */
                            /*InitSignalReady( 0x18, 3);*//* b_Constant_SR */
                            /*InitSignalReady( 0x18, 4);*//* b_Case_Structure_CT */
                            /*InitSignalReady( 0x17, 6);*//* b_Constant_1 */
                        }
                        else {
                            {
                                heap->b_Constant_1 = false;
                                /*SetSignalReady( 0x17, 6);*//* b_Constant_1 */
                                SetSignalReady(0, 1);
                                heap->b_Constant_SR = heap->b_Case_Structure_SR;
                                /*SetSignalReady( 0x18, 3);*//* b_Constant_SR */
                                SetSignalReady(37, 1);
                                heap->dw_millisecond_multiple = 100;
                                /*SetSignalReady( 0x0, 1);*//* dw_millisecond_multiple */
                                SetSignalReady(1, 1);
                                heap->e_Status_SR = heap->e_Case_Structure_SR;
                                /*SetSignalReady( 0x4, 5);*//* e_Status_SR */
                                SetSignalReady(37, 1);
                            }
                            heap->runStat4B_1 = eFinished;
                            continue;
                        }
                    }
/* start q el struct (2 struct) */
                    if (heap->runStat6C != eFinished) {
                        if (pass == 0) {
                            nReady++;
                        }
                        if (GetSignalReady( 37 )) {
                            if (pass) {
                                heap->runStat6C = IX5_MLB__R_RunFunc_6C( (Boolean)(bRunToFinish && (nReady < 2)) );
                                if (heap->runStat6C == eNotFinished || heap->runStat6C == eDispatched) {
                                    if (heap->runStat6C == eDispatched) {
                                        nDispatched++;
                                    }
                                    runStat = heap->runStat6C;
                                }
                                else if (heap->runStat6C == eFail) {
                                    CGenErr();
                                }
                                else {
                                    InitSignalReady(37, 2);
                                }
                                if (runStat == eFinished) {
                                    continue;
                                }
                            }
                        }
                        else if (pass == 0) {
                            nDispatched++;
                        }
                    }
/* start q el struct (2 struct) */
                    if (heap->runStatACE != eFinished) {
                        if (pass == 0) {
                            nReady++;
                        }
                        if (GetSignalReady( 1 )) {
                            if (pass) {
                                if (heap->runStatACE == eReady) {
                                    heap->restartACE_2 = 1;
                                    /*SetSignalReady( 0x19, 2);*//* restartACE_2 */
                                }
                                /**/
                                /* Wait Until Next ms Multiple */
                                /**/
                                {
                                    eRunStatus runStatLocal=eFinished;
                                    runStatLocal = PrimWaitNextMultiple((Boolean)(bRunToFinish && (nReady < 2)),
                                     (uInt32)heap->dw_millisecond_multiple, NULL,
                                     &(heap->startTimeACE_1), &(heap->restartACE_2));
                                    if (runStatLocal == eFail) {
                                        CGenErr();
                                    }
                                    if (runStatLocal == eFinished) {
                                        heap->restartACE_2 = 1L;
                                    }
                                    heap->runStatACE = runStatLocal;
                                    runStat = runStatLocal;
                                };
                                if (runStat == eFinished) {
                                }
                                if (heap->runStatACE == eNotFinished || heap->runStatACE == eDispatched) {
                                    nDispatched++;
                                }
                                if (heap->runStatACE == eFinished) {
                                    InitSignalReady(1, 1);
                                    continue;
                                }
                            }
                        }
                        else if (pass == 0) {
                            nDispatched++;
                        }
                    }
/* start q el linear (2 struct) */
                    if (heap->runStat4B_2 != eFinished) {
                        if (pass == 0) {
                            nReady++;
                        }
                        if (GetSignalReady( 0 )) {
                            if (pass) {
                                {
                                    heap->b_Case_Structure_SR = heap->b_Case_Structure_CT;
                                    /*SetSignalReady( 0x17, 4);*//* b_Case_Structure_SR */
                                    heap->e_Case_Structure_SR = heap->e_Case_Structure_CT;
                                    /*SetSignalReady( 0x5, 0);*//* e_Case_Structure_SR */
                                }
                                heap->runStat4B_2 = eFinished;
                                InitSignalReady(0, 3);
                                continue;
                            }
                        }
                        else if (pass == 0) {
                            nDispatched++;
                        }
                    }
                }
                if (pass == 1) {
                    bEndDiagram = true;
                }
            }
            if (bEndDiagram &&runStat == eFinished) {
                (heap->l_While_Loop_i)++;
                heap->runStat4B_1 = eReady;
                heap->runStat6C = eReady;
                heap->runStatACE = eReady;
                heap->runStat4B_2 = eReady;
                if ( heap->b_Constant_1) {
                    break;
                }
            }
            if (bEndDiagram &&  (bRunToFinish && (nReady == nDispatched))) {
                WaitMS(1, NULL);
            }
            if (bEndDiagram) {
                if (!bRunToFinish && (runStat == eNotFinished || runStat == eDispatched)) {
                    if (nReady == nDispatched) {
                        return eDispatched;
                    }
                    else {
                        return runStat;
                    }
                }
                if (!bRunToFinish) {
                    if ((LVGetTimerFlag() > id) || ((LVGetTimerFlag()-id) < 0)) {
                        if (!gAppStop && !gLastError) {
                            return eNotFinished;
                        }
                        if (gAppStop) {
                            return eFinished;
                        }
                        if (gLastError) {
                            CGenErr();
                        }
                    }
                }
                bEndDiagram = false;
            }
        }
    }
    return eFinished;
}


/****** Block diagram main entry point **********/


eRunStatus _TEXT_SECTION IX5_MLB__R_BlockDiagram(Boolean bProcessFrontPanel, Boolean bRunToFinish);
eRunStatus _TEXT_SECTION IX5_MLB__R_BlockDiagram(Boolean bProcessFrontPanel, Boolean bRunToFinish){
    eRunStatus runStat = eReady;
    int16 nReady = 1;
    int16 nDispatched = 0;
    static uInt16 nStep = 0;
    if (gRunStatus == eReady) {
    }
    switch(nStep) {
/* start q el linear (0 or 1 struct) */
        case 0 : {
            heap->e_Status = 0;
            heap->b_Constant = false;
            nStep++;}
/* start q el struct (0 or 1 struct)*/
        case 1 : {
            heap->runStat31 = IX5_MLB__R_RunFunc_31( bRunToFinish  );
            if (heap->runStat31 == eNotFinished || heap->runStat31 == eDispatched) {
                return heap->runStat31;
            }
            else if (heap->runStat31 == eFail) {
                CGenErr();
            }
            heap->runStat31 = eReady;
            nStep++; }
        nStep = 0;
        default: {
            ; /* do nothing */
        }
    }
    IX5_MLB__R_CleanupVIGlobalConstants();
    return eFinished;
}

/****** VI Configuration data **********/

TextPtr IX5_MLB__R_VIName = "IX5_MLB _R.vi";

static VIInfo _DATA_SECTION viInfo = {
    &IX5_MLB__R_VIName,
    &gRunStatus,
    &gCurrentCallerID,
    true,
    true,
    false,
    NULL,
    NULL,
    gFormID,
    (uInt8 **)&heap,
    (uInt32)sizeof (struct _IX5_MLB__R_heap),
    &signalsReady,
    (uInt32 *)&InitSignalReadyValues,
    (uInt32)156,
    (ControlDataItemPtr*)&gArrControlData,
    N_CONTROLS,
    (uInt8**)NULL,
    (uInt32)0,
    false,
    (uInt8**)&stepArr,
    (uInt8**) &IX5_MLB__R_viInstanceHeapPtr,
    (uInt32)sizeof (struct _tIX5_MLB__R_viInstanceHeap),
    IX5_MLB__R_InitFPTerms,
    IX5_MLB__R_FrontPanelInit,
    IX5_MLB__R_BlockDiagram,
    IX5_MLB__R_DrawLabels,
    IX5_MLB__R_GetFPTerms,
    IX5_MLB__R_Cleanup,
    IX5_MLB__R_CleanupLSRs,
    IX5_MLB__R_AddSubVIInstanceData,
    IX5_MLB__R_InitVIConstantList
};

/****** Main Entry Point for VI **********/

eRunStatus _TEXT_SECTION IX5_MLB__R_Run(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
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


