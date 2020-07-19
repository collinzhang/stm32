#ifndef _LVForms_h
#define _LVForms_h

extern TextPtr F0A_VIName;
extern eRunStatus F0A_Run(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList *argsIn, ArgList *argsOut, Boolean *pause);
#define F0A_formID 2000

extern TextPtr VISA_Serial_Read_VIName;
extern eRunStatus VISA_Serial_Read_Run(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList *argsIn, ArgList *argsOut, Boolean *pause);
#define VISA_Serial_Read_formID 2100

extern TextPtr UploadStatus_VIName;
extern eRunStatus UploadStatus_Run(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList *argsIn, ArgList *argsOut, Boolean *pause);
#define UploadStatus_formID 2200

extern TextPtr IO_Open_Test_F0A_VIName;
extern eRunStatus IO_Open_Test_F0A_Run(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList *argsIn, ArgList *argsOut, Boolean *pause);
#define IO_Open_Test_F0A_formID 2300

extern TextPtr Merge_Errors_VIName;
extern eRunStatus Merge_Errors_Run(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList *argsIn, ArgList *argsOut, Boolean *pause);
#define Merge_Errors_formID 2400

extern TextPtr UploadResult_VIName;
extern eRunStatus UploadResult_Run(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList *argsIn, ArgList *argsOut, Boolean *pause);
#define UploadResult_formID 2500

#ifdef LV_MAIN
FormTableEntry formTable[] = {
{ F0A_formID, F0A_Run, &F0A_VIName },
};
uInt8 formTableSize = 1;
#ifndef No_OS
LVCriticalSection gVICriticalSections[1];
uInt8 gVICriticalSectionsSize = 0;
#endif
#else
extern FormTableEntry formTable[];
#endif

#endif
