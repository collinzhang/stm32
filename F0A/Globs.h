#ifndef _LVGlobs_h
#define _LVGlobs_h
#define	HOST_IP_ADDRESS	"192.168.43.98"
#define	BUILD_SPECIFICATION_ID	"B645F290-F6E5-4A71-8DF0-6F59CDF27337"
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

extern void F0A_AddVIGlobalConstants(void);

extern void VISA_Serial_Read_AddVIGlobalConstants(void);

extern void UploadStatus_AddVIGlobalConstants(void);

extern void IO_Open_Test_F0A_AddVIGlobalConstants(void);

extern void Merge_Errors_AddVIGlobalConstants(void);

extern void UploadResult_AddVIGlobalConstants(void);
VoidFn globConstInitTable[] = {
	Filler,

	F0A_AddVIGlobalConstants,

	VISA_Serial_Read_AddVIGlobalConstants,

	UploadStatus_AddVIGlobalConstants,

	IO_Open_Test_F0A_AddVIGlobalConstants,

	Merge_Errors_AddVIGlobalConstants,

	UploadResult_AddVIGlobalConstants,
};
VoidFn globConstCleanupTable[] = {
	Filler,
};
CleanUpFunc globCleanupTable[] = {
	GlobFiller,
};

extern void F0A_CleanupLSRs(void);

extern void VISA_Serial_Read_CleanupLSRs(void);

extern void UploadStatus_CleanupLSRs(void);

extern void IO_Open_Test_F0A_CleanupLSRs(void);

extern void Merge_Errors_CleanupLSRs(void);

extern void UploadResult_CleanupLSRs(void);
VoidFn lsrCleanupTable[] = {
	Filler,

	F0A_CleanupLSRs,

	VISA_Serial_Read_CleanupLSRs,

	UploadStatus_CleanupLSRs,

	IO_Open_Test_F0A_CleanupLSRs,

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
	0, 	24, 	36, 	48, 	60, 	72, 	104, 	116, 	128, 	148, 	180, 	216, 	228, 	240, 	252, 	0
};
const uInt32 nArrTypeDataSize = 15;
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
