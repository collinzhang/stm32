/****************************************************************************************
 *  All rights reserved.
 *  Delimited VI name: VISA Configure Serial Port.vi
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

static float64 array_1[] = {
4800 , 9600 , 14400 , 19200 , 38400 , 115200 
};
static RingData g_control_2 = {
    0, 0, 6, NULL, array_1, 0.0, 0.0, 1, 0, true, true
};

struct {
    DataType    el_0;
    uInt32  el_1;
    uInt32  el_2;
    uInt32  el_3;
    uInt8   el_4;
    uInt8   el_5;
}

static g_control_3 = {
    0, 0, 0, 2, 1, 0
};

struct {
    DataType    el_0;
    uInt32  el_1;
    uInt32  el_2;
    uInt32  el_3;
    uInt8   el_4;
    uInt8   el_5;
}

static g_control_4 = {
    0, 0, 0, 3, 1, 0
};

static NumericData g_control_5 = {
    0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

struct {
    DataType    el_0;
    uInt32  el_1;
    uInt32  el_2;
    uInt32  el_3;
    uInt8   el_4;
    uInt8   el_5;
}

static g_control_6 = {
    0, 0, 0, 3, 1, 0
};

static BooleanData g_control_7 = {
    true, false, false, true
};

static NumericData g_control_8 = {
    0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

static NumericData g_control_9 = {
    0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};



/****** Control & Indicator IDs used to reference terminals from block diagram **********/


#define gFormID 2200UL
#define VISA_Configure_Serial_Port_in_0_VISA_resource_name_3E_ctlid 2200
#define VISA_Configure_Serial_Port_in_3_baud_rate__9600__3D4_ctlid 2201
#define VISA_Configure_Serial_Port_in_4_data_bits__8__50B_ctlid 2202
#define VISA_Configure_Serial_Port_in_5_parity__0_none__54E_ctlid 2203
#define VISA_Configure_Serial_Port_in_1_termination_char__0xA_____n____LF__28_ctlid 2204
#define VISA_Configure_Serial_Port_in_7_stop_bits__10__1_bit__5CB_ctlid 2205
#define VISA_Configure_Serial_Port_in_2_Enable_Termination_Char__T__A8_ctlid 2206
#define VISA_Configure_Serial_Port_in_6_err_in_1D4_ctlid 2207
#define VISA_Configure_Serial_Port_out_0_err_out_223_ctlid 2208
#define label49_ctlid 2209
#define cosm12B_ctlid 2210
#define cosm17A_ctlid 2211
#define label40_ctlid 2212
#define N_CONTROLS 13L
#define gArrControlData VISA_Configure_Serial_Port_gArrControlData
ControlDataItem _DATA_SECTION VISA_Configure_Serial_Port_gArrControlData[13] = {
    { VISA_Configure_Serial_Port_in_0_VISA_resource_name_3E_ctlid, 0, NULL, VoidHandDataType, enum_control },
    { VISA_Configure_Serial_Port_in_3_baud_rate__9600__3D4_ctlid, 0, NULL, VoidHandDataType, ring_control },
    { VISA_Configure_Serial_Port_in_4_data_bits__8__50B_ctlid, 0, NULL, VoidHandDataType, enum_control },
    { VISA_Configure_Serial_Port_in_5_parity__0_none__54E_ctlid, 0, NULL, VoidHandDataType, enum_control },
    { VISA_Configure_Serial_Port_in_1_termination_char__0xA_____n____LF__28_ctlid, 0, NULL, VoidHandDataType, numeric_control },
    { VISA_Configure_Serial_Port_in_7_stop_bits__10__1_bit__5CB_ctlid, 0, NULL, VoidHandDataType, enum_control },
    { VISA_Configure_Serial_Port_in_2_Enable_Termination_Char__T__A8_ctlid, 0, NULL, VoidHandDataType, pushbutton_control },
    { VISA_Configure_Serial_Port_in_6_err_in_1D4_ctlid, 0, NULL, VoidHandDataType, numeric_control },
    { VISA_Configure_Serial_Port_out_0_err_out_223_ctlid, 0, NULL, VoidHandDataType, numeric_control },
    { label49_ctlid, 0, NULL, uCharDataType, nonui_control },
    { cosm12B_ctlid, 0, NULL, uCharDataType, nonui_control },
    { cosm17A_ctlid, 0, NULL, uCharDataType, nonui_control },
    { label40_ctlid, 0, NULL, uCharDataType, nonui_control },
};


/****** Initialize Front Panel Terminals to their default values or to the values passed in **********/


Boolean _TEXT_SECTION VISA_Configure_Serial_Port_InitFPTerms(ArgList *argsIn, Boolean bShowFrontPanel);
Boolean _TEXT_SECTION VISA_Configure_Serial_Port_InitFPTerms(ArgList *argsIn, Boolean bShowFrontPanel){
    int32 nIdx=0;
    if (!(FPData(VISA_Configure_Serial_Port_in_0_VISA_resource_name_3E_ctlid) = EnumCtlDataCreateStatic((EnumCtlData*)&g_control_1, VISA_Configure_Serial_Port_in_0_VISA_resource_name_3E_ctlid, (ControlID)0, (ControlID)0, (int32)5, 0xC0000 | Enum8DataType, 0 ))){
        return false;
    }
    if (argsIn && argsIn->size > 0 && argsIn->args[0].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Configure_Serial_Port_in_0_VISA_resource_name_3E_ctlid);
        if (!SetEnumCtlFieldValue(GetControlHValue(nIdx), argsIn->args[0].pValue, argsIn->args[0].nType )) {
            return false;
        }
    }
    else {
        {           int16 lVal = 0 ;
            if (!SetEnumCtlFieldValue( FPData(VISA_Configure_Serial_Port_in_0_VISA_resource_name_3E_ctlid), &lVal, IntDataType )){
                return false;
            }
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_0_VISA_resource_name_3E_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("VISA resource name"),18,-4,-28,121,19,
    _LVT("0"),17,0,0,0, true);
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_0_VISA_resource_name_3E_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("VISA\327\312\324\264\303\373\263\306"),12,-4,-28,78,19,
    _LVT("0"),17,0,0,0, false);
    FPData(VISA_Configure_Serial_Port_in_3_baud_rate__9600__3D4_ctlid) = &g_control_2;
    if (!RingAddItem(FPData(VISA_Configure_Serial_Port_in_3_baud_rate__9600__3D4_ctlid), 4800 , _LVT("4800"))){
        return false;
    }

    if (!RingAddItem(FPData(VISA_Configure_Serial_Port_in_3_baud_rate__9600__3D4_ctlid), 9600 , _LVT("9600"))){
        return false;
    }

    if (!RingAddItem(FPData(VISA_Configure_Serial_Port_in_3_baud_rate__9600__3D4_ctlid), 14400 , _LVT("14400"))){
        return false;
    }

    if (!RingAddItem(FPData(VISA_Configure_Serial_Port_in_3_baud_rate__9600__3D4_ctlid), 19200 , _LVT("19200"))){
        return false;
    }

    if (!RingAddItem(FPData(VISA_Configure_Serial_Port_in_3_baud_rate__9600__3D4_ctlid), 38400 , _LVT("38400"))){
        return false;
    }

    if (!RingAddItem(FPData(VISA_Configure_Serial_Port_in_3_baud_rate__9600__3D4_ctlid), 115200 , _LVT("115200"))){
        return false;
    }

    if (argsIn && argsIn->size > 3 && argsIn->args[3].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Configure_Serial_Port_in_3_baud_rate__9600__3D4_ctlid);
        SetRingFieldValue( GetControlHValue(nIdx), argsIn->args[3].pValue, argsIn->args[3].nType );
    }
    else {
        uInt32 rValue = 9600 ;
        if (!SetRingFieldValue( FPData(VISA_Configure_Serial_Port_in_3_baud_rate__9600__3D4_ctlid), &rValue, uInt32DataType )){
            return false;
        }

    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_3_baud_rate__9600__3D4_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("baud rate (9600)"),16,-9,-23,100,19,
    _LVT("0"),17,0,0,0, true);
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_3_baud_rate__9600__3D4_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("\262\250\314\330\302\312(9600)"),12,-9,-23,75,19,
    _LVT("0"),17,0,0,0, false);
    if (!(FPData(VISA_Configure_Serial_Port_in_4_data_bits__8__50B_ctlid) = EnumCtlDataCreateStatic((EnumCtlData*)&g_control_3, VISA_Configure_Serial_Port_in_4_data_bits__8__50B_ctlid, (ControlID)0, (ControlID)0, (int32)2, 0xD0000 | Enum16DataType, 0 ))){
        return false;
    }
    if (argsIn && argsIn->size > 4 && argsIn->args[4].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Configure_Serial_Port_in_4_data_bits__8__50B_ctlid);
        if (!SetEnumCtlFieldValue(GetControlHValue(nIdx), argsIn->args[4].pValue, argsIn->args[4].nType )) {
            return false;
        }
    }
    else {
        {           int16 lVal = 0 ;
            if (!SetEnumCtlFieldValue( FPData(VISA_Configure_Serial_Port_in_4_data_bits__8__50B_ctlid), &lVal, IntDataType )){
                return false;
            }
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_4_data_bits__8__50B_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("data bits (8)"),13,-9,-26,73,19,
    _LVT("0"),17,0,0,0, true);
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_4_data_bits__8__50B_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("\312\375\276\335\261\310\314\330(8)"),11,-9,-26,66,19,
    _LVT("0"),17,0,0,0, false);
    if (!(FPData(VISA_Configure_Serial_Port_in_5_parity__0_none__54E_ctlid) = EnumCtlDataCreateStatic((EnumCtlData*)&g_control_4, VISA_Configure_Serial_Port_in_5_parity__0_none__54E_ctlid, (ControlID)0, (ControlID)0, (int32)3, 0xE0000 | Enum16DataType, 0 ))){
        return false;
    }
    if (argsIn && argsIn->size > 5 && argsIn->args[5].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Configure_Serial_Port_in_5_parity__0_none__54E_ctlid);
        if (!SetEnumCtlFieldValue(GetControlHValue(nIdx), argsIn->args[5].pValue, argsIn->args[5].nType )) {
            return false;
        }
    }
    else {
        {           int16 lVal = 0 ;
            if (!SetEnumCtlFieldValue( FPData(VISA_Configure_Serial_Port_in_5_parity__0_none__54E_ctlid), &lVal, IntDataType )){
                return false;
            }
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_5_parity__0_none__54E_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("parity (0:none)"),15,-11,-26,87,19,
    _LVT("0"),17,0,0,0, true);
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_5_parity__0_none__54E_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("\306\346\305\274\243\250\316\336\243\251"),10,-11,-26,63,19,
    _LVT("0"),17,0,0,0, false);
    {uInt8 dVal = (uInt8)10 ;
        {
            static NumericInitialData numData = {
                VISA_Configure_Serial_Port_in_1_termination_char__0xA_____n____LF__28_ctlid,
                0,
                0,
                0,
                66,
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
            if (!(FPData(VISA_Configure_Serial_Port_in_1_termination_char__0xA_____n____LF__28_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_5, &numData, &dVal))){
                return false;
            }
        }
    }
    if (argsIn && argsIn->size > 1 && argsIn->args[1].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Configure_Serial_Port_in_1_termination_char__0xA_____n____LF__28_ctlid);
        if (!SetNumericFieldValue(GetControlHValue(nIdx), argsIn->args[1].pValue, argsIn->args[1].nType )) {
            return false;
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_1_termination_char__0xA_____n____LF__28_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("termination char"),16,-13,-38,100,36,
    _LVT("0"),17,0,0,0, true);
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_1_termination_char__0xA_____n____LF__28_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("(0xA = \'\\n\' = LF) "),18,-13,-21,100,36,
    _LVT("0"),17,0,0,0, true);
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_1_termination_char__0xA_____n____LF__28_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("\326\325\326\271\267\373"),6,-13,-38,107,36,
    _LVT("0"),17,0,0,0, false);
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_1_termination_char__0xA_____n____LF__28_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("(0x0A = \'\\n\' = LF) "),19,-13,-21,107,36,
    _LVT("0"),17,0,0,0, false);
    if (!(FPData(VISA_Configure_Serial_Port_in_7_stop_bits__10__1_bit__5CB_ctlid) = EnumCtlDataCreateStatic((EnumCtlData*)&g_control_6, VISA_Configure_Serial_Port_in_7_stop_bits__10__1_bit__5CB_ctlid, (ControlID)0, (ControlID)0, (int32)3, 0xF0000 | Enum16DataType, 0 ))){
        return false;
    }
    if (argsIn && argsIn->size > 7 && argsIn->args[7].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Configure_Serial_Port_in_7_stop_bits__10__1_bit__5CB_ctlid);
        if (!SetEnumCtlFieldValue(GetControlHValue(nIdx), argsIn->args[7].pValue, argsIn->args[7].nType )) {
            return false;
        }
    }
    else {
        {           int16 lVal = 0 ;
            if (!SetEnumCtlFieldValue( FPData(VISA_Configure_Serial_Port_in_7_stop_bits__10__1_bit__5CB_ctlid), &lVal, IntDataType )){
                return false;
            }
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_7_stop_bits__10__1_bit__5CB_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("stop bits (10: 1 bit)"),21,-8,-23,113,19,
    _LVT("0"),17,0,0,0, true);
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_7_stop_bits__10__1_bit__5CB_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("\315\243\326\271\316\273\243\2501\316\273\243\251"),13,-8,-23,82,19,
    _LVT("0"),17,0,0,0, false);
    if (!(FPData(VISA_Configure_Serial_Port_in_2_Enable_Termination_Char__T__A8_ctlid) = BooleanDataCreateStatic(&g_control_7, VISA_Configure_Serial_Port_in_2_Enable_Termination_Char__T__A8_ctlid, (Boolean)0, (Boolean)1, (Boolean)false, (uInt8)1, (!version35)?std_button:std_button))){
        return false;
    }
    if (argsIn && argsIn->size > 2 && argsIn->args[2].pValue) {
        {
            int32 lVal;
            nIdx = CalcControlOffset( gFormID, VISA_Configure_Serial_Port_in_2_Enable_Termination_Char__T__A8_ctlid);
            lVal = LVPtrToLong( argsIn->args[2].pValue, argsIn->args[2].nType );
            if (!SetBooleanFieldValue( gArrControlData[nIdx].hValue, (Boolean)lVal )) {
                return false;
            }
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_2_Enable_Termination_Char__T__A8_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("Enable Termination Char (T)"),27,0,-36,176,19,
    _LVT("0"),17,0,0,0, false);
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_2_Enable_Termination_Char__T__A8_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("\306\364\323\303\326\325\326\271\267\373 (F)"),14,0,-21,93,20,
    _LVT("0"),17,0,0,0, false);
    {uInt8 dVal = (uInt8)0 ;
        {
            static NumericInitialData numData = {
                VISA_Configure_Serial_Port_in_6_err_in_1D4_ctlid,
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
            if (!(FPData(VISA_Configure_Serial_Port_in_6_err_in_1D4_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_8, &numData, &dVal))){
                return false;
            }
        }
    }
    if (argsIn && argsIn->size > 6 && argsIn->args[6].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Configure_Serial_Port_in_6_err_in_1D4_ctlid);
        if (!SetNumericFieldValue(GetControlHValue(nIdx), argsIn->args[6].pValue, argsIn->args[6].nType )) {
            return false;
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_in_6_err_in_1D4_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("err in"),6,-4,-23,34,19,
    _LVT("0"),17,0,0,0, false);
    {uInt8 dVal = (uInt8)0 ;
        {
            static NumericInitialData numData = {
                VISA_Configure_Serial_Port_out_0_err_out_223_ctlid,
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
            if (!(FPData(VISA_Configure_Serial_Port_out_0_err_out_223_ctlid) = NumericDataCreateStatic((NumericData*)&g_control_9, &numData, &dVal))){
                return false;
            }
        }
    }
    LVInitLabel( GetControlDataPtr(),  gFormID,
    VISA_Configure_Serial_Port_out_0_err_out_223_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("err out"),7,-4,-23,43,19,
    _LVT("0"),17,0,0,0, false);
    LVInitLabel( GetControlDataPtr(),  gFormID,
    label49_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("\273\273\320\320\267\373"),6,268,27,39,19,
    _LVT("0"),17,0,0,0, false);
    LVInitLabel( GetControlDataPtr(),  gFormID,
    label40_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("\327\242\322\342\243\272\310\347\271\373\323\303\273\247\320\350\322\252\274\323\311\317\306\346\305\274\320\243\321\351\316\273\265\304\273\260\243\254"),38,385,170,322,53,
    _LVT("1"),17,0,0,0, false);
    LVInitLabel( GetControlDataPtr(),  gFormID,
    label40_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("\320\350\322\252\275\253\312\375\276\335\316\273\265\304\263\244\266\310\311\350\326\303\316\2529\316\273\243\254\325\342\321\371\262\305\304\334\275\342\316\366\263\311\271\246\243\241"),47,385,187,322,53,
    _LVT("1"),17,0,0,0, false);
    LVInitLabel( GetControlDataPtr(),  gFormID,
    label40_ctlid,
    0,0,0,
    1,0,0,0,
    _LVT("\322\362\316\252\243\254\306\346\305\274\320\243\321\351\265\304\261\276\326\312\276\315\312\307\324\332\322\273\270\366\327\326\275\332\272\363\303\346\274\323\311\3171\316\273\320\243\321\351\316\273\243\241"),53,385,204,322,53,
    _LVT("1"),17,0,0,0, false);
    return true;
}
#define VISA_Configure_Serial_Port_FrontPanelInit NULL
#define VISA_Configure_Serial_Port_DrawLabels NULL
#define FPBuildMenu NULL


/****** Free all memory used by this VI except uninitialized left shift registers and globals **********/


void _TEXT_SECTION VISA_Configure_Serial_Port_Cleanup(Boolean bShowFrontPanel);
void _TEXT_SECTION VISA_Configure_Serial_Port_Cleanup(Boolean bShowFrontPanel){
    (void)BooleanFreeData( FPData(VISA_Configure_Serial_Port_in_2_Enable_Termination_Char__T__A8_ctlid) );
#if defined(_Include_Events) || defined(_Include_Everything)
#endif
    return;
}


/****** Transfer block diagram terminal values to parent VI caller **********/


Boolean _TEXT_SECTION VISA_Configure_Serial_Port_GetFPTerms( ArgList *argsOut );
Boolean _TEXT_SECTION VISA_Configure_Serial_Port_GetFPTerms( ArgList *argsOut ){
    int32 nIdx=0;
    if (!argsOut) {
        return true;
    }
    if (argsOut->size > 0 && argsOut->args[0].pValue) {
        nIdx = CalcControlOffset( gFormID, VISA_Configure_Serial_Port_out_0_err_out_223_ctlid);
        if (!GetNumericFieldValue(GetControlHValue(nIdx), argsOut->args[0].pValue, argsOut->args[0].nType )) {
            return false;
        }
    }
    return true;
}


/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION VISA_Configure_Serial_Port_CleanupLSRs(void);
void _TEXT_SECTION VISA_Configure_Serial_Port_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION VISA_Configure_Serial_Port_AddSubVIInstanceData(void);
void _TEXT_SECTION VISA_Configure_Serial_Port_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION VISA_Configure_Serial_Port_AddVIGlobalConstants(void);
void _TEXT_SECTION VISA_Configure_Serial_Port_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION VISA_Configure_Serial_Port_InitVIConstantList(void);
void _TEXT_SECTION VISA_Configure_Serial_Port_InitVIConstantList(void) {
}


/****** Block diagram code **********/




/****** Block diagram main entry point **********/


eRunStatus _TEXT_SECTION VISA_Configure_Serial_Port_BlockDiagram(Boolean bProcessFrontPanel, Boolean bRunToFinish);
eRunStatus _TEXT_SECTION VISA_Configure_Serial_Port_BlockDiagram(Boolean bProcessFrontPanel, Boolean bRunToFinish){
    /*********************************************************************************/
    /* \327\242\322\342\243\272COM4\323\353COM5\262\273\326\247\263\326\260\353\316\273\312\375\243\2720.5\272\3151.5 */
    /*         \275\250\322\351\264\363\274\322\312\271\323\303\304\254\310\317\265\3041.0bit\276\315\272\303\243\241 */
    /*********************************************************************************/
    /*********************************************************************************/
    /* STM32\322\273\271\262\323\3205\302\267\264\256\277\332\271\251\264\363\274\322\312\271\323\303\243\272 */
    /* COM1:TX---->PA9 */
    /*           RX---->PA10 */
    /*  */
    /* COM2:TX---->PA2 */
    /*           RX---->PA3 */
    /*  */
    /* COM3:TX---->PB10 */
    /*           RX---->PB11 */
    /*  */
    /* COM4:TX---->PC10 */
    /*           RX---->PC11 */
    /*  */
    /* COM5:TX---->PC12 */
    /*           RX---->PD2 */
    /*********************************************************************************/
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

TextPtr VISA_Configure_Serial_Port_VIName = "VISA Configure Serial Port.vi";

static VIInfo _DATA_SECTION viInfo = {
    &VISA_Configure_Serial_Port_VIName,
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
    VISA_Configure_Serial_Port_InitFPTerms,
    VISA_Configure_Serial_Port_FrontPanelInit,
    VISA_Configure_Serial_Port_BlockDiagram,
    VISA_Configure_Serial_Port_DrawLabels,
    VISA_Configure_Serial_Port_GetFPTerms,
    VISA_Configure_Serial_Port_Cleanup,
    VISA_Configure_Serial_Port_CleanupLSRs,
    VISA_Configure_Serial_Port_AddSubVIInstanceData,
    VISA_Configure_Serial_Port_InitVIConstantList
};

/****** Main Entry Point for VI **********/

eRunStatus _TEXT_SECTION VISA_Configure_Serial_Port_Run(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
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


