#ifndef _LVGlobs_h
#define _LVGlobs_h
#define	HOST_IP_ADDRESS	"192.168.1.5"
#define	BUILD_SPECIFICATION_ID	"C69F8C51-CBA8-46D2-B203-D6772F883144"
#include "LVCGenIncludes.h"
#ifdef LV_MAIN
int32 nBigClusterSize = 32;
void GlobFiller(Boolean bShowFrontPanel);
void GlobFiller(Boolean bShowFrontPanel) {}
void Filler(void);
void Filler(void) {}
Boolean InitFPTermsFiller(ArgList* argsIn, Boolean bShowFrontPanel);
Boolean InitFPTermsFiller(ArgList* argsIn, Boolean bShowFrontPanel) { return true; }
InitFPTermsFunc globTable[] = {
	InitFPTermsFiller,
};

extern void IX5_MLB_AddVIGlobalConstants(void);

extern void VISA_Serial_Read_AddVIGlobalConstants(void);

extern void UploadStatus_AddVIGlobalConstants(void);

extern void IO_Open_Test_VI_AddVIGlobalConstants(void);

extern void Merge_Errors_AddVIGlobalConstants(void);

extern void UploadResult_AddVIGlobalConstants(void);
VoidFn globConstInitTable[] = {
	Filler,

	IX5_MLB_AddVIGlobalConstants,

	VISA_Serial_Read_AddVIGlobalConstants,

	UploadStatus_AddVIGlobalConstants,

	IO_Open_Test_VI_AddVIGlobalConstants,

	Merge_Errors_AddVIGlobalConstants,

	UploadResult_AddVIGlobalConstants,
};
VoidFn globConstCleanupTable[] = {
	Filler,
};
CleanUpFunc globCleanupTable[] = {
	GlobFiller,
};

extern void IX5_MLB_CleanupLSRs(void);

extern void VISA_Serial_Read_CleanupLSRs(void);

extern void UploadStatus_CleanupLSRs(void);

extern void IO_Open_Test_VI_CleanupLSRs(void);

extern void Merge_Errors_CleanupLSRs(void);

extern void UploadResult_CleanupLSRs(void);
VoidFn lsrCleanupTable[] = {
	Filler,

	IX5_MLB_CleanupLSRs,

	VISA_Serial_Read_CleanupLSRs,

	UploadStatus_CleanupLSRs,

	IO_Open_Test_VI_CleanupLSRs,

	Merge_Errors_CleanupLSRs,

	UploadResult_CleanupLSRs,
};
#else
extern InitFPTermsFunc globTable[];
extern VoidFn globCleanupTable[];
extern VoidFn globConstInitTable[];
extern VoidFn globConstCleanupTable[];
extern VoidFn lsrCleanupTable[];
extern int32 nBigClusterSize;
#endif /*LV_MAIN*/
#ifdef LV_MAIN
const uInt8 __align(4) nArrTypeData[] = {
	/* Cluster */
	ClusterDataType, 	0, 	0, 	0, 	3, 	0, 	0, 	0, 	0, 	0, 	0, 	0, 		BooleanDataType, 	0, 	0, 	0, 		int32DataType, 	0, 	0, 	0, 		StringDataType, 	0, 	0, 	0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		StringDataType, 	0, 	0, 	0, 	2, 0, 0, 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		int16DataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		StringDataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		doubleDataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	/* Cluster */
	BigClusterDataType, 	0, 	0, 	0, 	5, 	0, 	0, 	0, 	1, 	0, 	0, 	0, 		Timestamp128DataType, 	0, 	0, 	0, 		doubleDataType, 	0, 	0, 	0, 		ArrayDataType, 	0, 	4, 	0, 		ClusterDataType, 	0, 	0, 	0, 		VariantDataType, 	0, 	0, 	0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		uInt32DataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		uCharDataType, 	0, 	0, 	0, 	2, 0, 0, 0, 
	/* Cluster */
	ClusterDataType, 	0, 	0, 	0, 	2, 	0, 	0, 	0, 	2, 	0, 	0, 	0, 		ArrayDataType, 	0, 	6, 	0, 		ArrayDataType, 	0, 	7, 	0, 
	/* Cluster */
	BigClusterDataType, 	0, 	0, 	0, 	5, 	0, 	0, 	0, 	3, 	0, 	0, 	0, 		Timestamp128DataType, 	0, 	0, 	0, 		doubleDataType, 	0, 	0, 	0, 		ClusterDataType, 	0, 	8, 	0, 		ClusterDataType, 	0, 	0, 	0, 		VariantDataType, 	0, 	0, 	0, 
	/* Enum */
	Enum8DataType, 	0, 	0, 	0, 	5, 	5, 
	'C', 	'O', 	'M', 	' ', 	'1', 	5, 
	'C', 	'O', 	'M', 	' ', 	'2', 	5, 
	'C', 	'O', 	'M', 	' ', 	'3', 	5, 
	'C', 	'O', 	'M', 	' ', 	'4', 	5, 
	'C', 	'O', 	'M', 	' ', 	'5', 0, 
	/* Enum */
	Enum8DataType, 	0, 	0, 	0, 	112, 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'0', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'1', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'2', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'3', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'4', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'5', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'6', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'7', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'8', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'9', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'1', 	'0', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'1', 	'1', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'1', 	'2', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'1', 	'3', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'1', 	'4', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'A', 	'.', 	'1', 	'5', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'0', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'1', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'2', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'3', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'4', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'5', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'6', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'7', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'8', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'9', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'1', 	'0', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'1', 	'1', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'1', 	'2', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'1', 	'3', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'1', 	'4', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'B', 	'.', 	'1', 	'5', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'0', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'1', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'2', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'3', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'4', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'5', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'6', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'7', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'8', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'9', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'1', 	'0', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'1', 	'1', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'1', 	'2', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'1', 	'3', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'1', 	'4', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'C', 	'.', 	'1', 	'5', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'0', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'1', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'2', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'3', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'4', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'5', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'6', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'7', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'8', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'9', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'1', 	'0', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'1', 	'1', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'1', 	'2', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'1', 	'3', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'1', 	'4', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'D', 	'.', 	'1', 	'5', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'0', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'1', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'2', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'3', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'4', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'5', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'6', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'7', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'8', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'9', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'1', 	'0', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'1', 	'1', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'1', 	'2', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'1', 	'3', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'1', 	'4', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'E', 	'.', 	'1', 	'5', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'0', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'1', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'2', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'3', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'4', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'5', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'6', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'7', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'8', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'9', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'1', 	'0', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'1', 	'1', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'1', 	'2', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'1', 	'3', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'1', 	'4', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'F', 	'.', 	'1', 	'5', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'0', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'1', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'2', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'3', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'4', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'5', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'6', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'7', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'8', 	8, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'9', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'1', 	'0', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'1', 	'1', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'1', 	'2', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'1', 	'3', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'1', 	'4', 	9, 
	'P', 	'o', 	'r', 	't', 	' ', 	'G', 	'.', 	'1', 	'5', 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		ClusterDataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		uCharDataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		BooleanDataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		int32DataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	0
};
uInt32 nArrClusterDataSizes[] = {
0,	0,	0,	0
};
const uInt32 nArrTypeDataOffsets[] = {
	0, 	24, 	36, 	48, 	60, 	72, 	104, 	116, 	128, 	148, 	180, 	216, 	1272, 	1284, 	1296, 	1308, 	0
};
const uInt32 nArrTypeDataSize = 16;
#else
extern const uInt8 nArrTypeData[];
extern uInt32 nArrClusterDataSizes[];
extern const uInt32 nArrTypeDataOffsets[];
extern const uInt32 nArrTypeDataSize;
#endif
typedef struct cl_00000 {
	Boolean	el_0;
	int32	el_1;
	VoidHand	el_2;
} cl_00000;
typedef struct cl_50000 {
	int32	refcnt;
	int32	bStatic;
	Timestamp128	el_0;
	float64	el_1;
	PDAArrPtr	el_2;
	cl_00000	el_3;
	VoidHand	el_4;
} cl_50000;
typedef struct cl_80000 {
	PDAArrPtr	el_0;
	PDAArrPtr	el_1;
} cl_80000;
typedef struct cl_90000 {
	int32	refcnt;
	int32	bStatic;
	Timestamp128	el_0;
	float64	el_1;
	cl_80000	el_2;
	cl_00000	el_3;
	VoidHand	el_4;
} cl_90000;
#ifdef LV_MAIN
uInt32 gCallerID = 0;
#else
extern uInt32 gCallerID;
#endif /* LV_MAIN */


/**
* Profiling stubs
*/
#ifdef LV_MAIN
uInt32 gProfilingInfoSize = 0;
#else
extern uInt32 gProfilingInfoSize;
#endif /* LV_MAIN */

#ifdef LV_MAIN
ProfilingInfo* gProfilingInfo=NULL;
#else
extern ProfilingInfo* gProfilingInfo;
#endif /* LV_MAIN */


/**
* Call library node callback stubs
*/
#ifdef LV_MAIN
CLNInstanceData *gArrCLNInstanceData = NULL;
int32 gnArrCLNInstanceDataItems = 0;
#endif

/**
* ISR stubs
*/

#ifdef LV_MAIN
ISRInfoTableEntry gISRInfoTable[] = {{NULL, NULL}};
#else
extern ISRInfoTableEntry gISRInfoTable[];
#endif
#endif
