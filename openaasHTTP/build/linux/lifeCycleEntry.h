/*
*   This file was generated by the ACPLT/OV C-Code Generator.
*
*   C-Code Generator version: 1.6.4
*   ACPLT/OV library version: 2.0.0
*   Date of file generation:  21-Sep-2018 (10:33:41)
*
*   DO NOT EDIT THIS FILE!
*/

#ifndef OV_LIBRARY_lifeCycleEntry_H_INCLUDED
#define OV_LIBRARY_lifeCycleEntry_H_INCLUDED

#include "libov/ov_library.h"
#include "libov/ov_structure.h"
#include "libov/ov_class.h"
#include "libov/ov_association.h"
#include "libov/ov_variable.h"
#include "libov/ov_part.h"
#include "libov/ov_operation.h"
#include "ov.h"
#include "identification.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef OV_COMPILE_LIBRARY_lifeCycleEntry
#if OV_COMPILER_BORLAND
#define OV_VAREXTERN extern
#else
#define OV_VAREXTERN OV_DLLVAREXPORT
#endif
#define OV_FNCEXTERN OV_DLLFNCEXPORT
#else
#define OV_VAREXTERN OV_DLLVARIMPORT
#define OV_FNCEXTERN OV_DLLVARIMPORT
#endif

#define OV_BIPT_lifeCycleEntry_LifeCycleEntry OV_INSTPTR_ov_object
#define OV_BVPT_lifeCycleEntry_LifeCycleEntry OV_VTBLPTR_ov_object

#define OV_INSTBODY_lifeCycleEntry_LifeCycleEntry \
    OV_INSTBODY_ov_object \
    OV_STRING v_CreatingInstanceIdString; \
    OV_UINT v_CreatingInstanceIdType; \
    OV_STRING v_WritingInstanceIdString; \
    OV_UINT v_WritingInstanceIdType; \
    OV_ANY v_Data; \
    OV_TIME v_TimeStamp; \
    OV_STRING v_Subject; \
    OV_STRING v_EventClass;

#define OV_CIB_lifeCycleEntry_LifeCycleEntry \
    OV_CIB_ov_object \
    int is_of_class_lifeCycleEntry_LifeCycleEntry:1;

#define OV_STATICINSTBODY_lifeCycleEntry_LifeCycleEntry

#define OV_BIPT_lifeCycleEntry_LifeCycleArchive OV_INSTPTR_ov_domain
#define OV_BVPT_lifeCycleEntry_LifeCycleArchive OV_VTBLPTR_ov_domain

#define OV_INSTBODY_lifeCycleEntry_LifeCycleArchive \
    OV_INSTBODY_ov_domain \
    OV_UINT v_LifeCycleEntrySize; \
    OV_UINT v_LifeCycleEntrySizeMax; \
    OV_UINT v_LifeCycleEntryNameCount; \
    OV_UINT v_LCEId; \
    OV_STRING v_LCECreatingInstanceIdString; \
    OV_UINT v_LCECreatingInstanceIdType; \
    OV_STRING v_LCEWritingInstanceIdString; \
    OV_UINT v_LCEWritingInstanceIdType; \
    OV_STRING v_LCEEventClass; \
    OV_STRING v_LCESubject; \
    OV_ANY v_LCEValue; \
    OV_TIME v_LCETimeStamp; \
    OV_UINT v_LCEStatus; \
    OV_BOOL v_LCECreate; \
    OV_BOOL v_LCEDelete;

#define OV_CIB_lifeCycleEntry_LifeCycleArchive \
    OV_CIB_ov_domain \
    int is_of_class_lifeCycleEntry_LifeCycleArchive:1;

#define OV_STATICINSTBODY_lifeCycleEntry_LifeCycleArchive

OV_TYPEDEF_INSTANCE(lifeCycleEntry_LifeCycleEntry);
OV_TYPEDEF_INSTANCE(lifeCycleEntry_LifeCycleArchive);

#include "lifeCycleEntry.ovf"

OV_FNCEXTERN OV_FNC_GETACCESS lifeCycleEntry_LifeCycleEntry_getaccess;
OV_FNCEXTERN OV_FNC_CONSTRUCTOR lifeCycleEntry_LifeCycleEntry_constructor;

OV_FNCEXTERN OV_FNC_GETACCESS lifeCycleEntry_LifeCycleArchive_getaccess;
OV_FNCEXTERN LCE_FNC_CREATELCE lifeCycleEntry_LifeCycleArchive_createLCE;
OV_FNCEXTERN LCE_FNC_DELETELCE lifeCycleEntry_LifeCycleArchive_deleteLCE;
OV_FNCEXTERN LCE_FNC_GETLCE lifeCycleEntry_LifeCycleArchive_getLCE;
OV_FNCEXTERN LCE_FNC_GETLASTLCES lifeCycleEntry_LifeCycleArchive_getLastLCEs;
OV_FNCEXTERN LCE_FNC_SETLCE lifeCycleEntry_LifeCycleArchive_setLCE;

#define OV_VTBLBODY_lifeCycleEntry_LifeCycleEntry \
    OV_VTBLBODY_ov_object

#define OV_VTBLBODY_lifeCycleEntry_LifeCycleArchive \
    OV_VTBLBODY_ov_domain \
    LCE_FNC_CREATELCE* m_createLCE; \
    LCE_FNC_DELETELCE* m_deleteLCE; \
    LCE_FNC_GETLCE* m_getLCE; \
    LCE_FNC_GETLASTLCES* m_getLastLCEs; \
    LCE_FNC_SETLCE* m_setLCE;

OV_TYPEDEF_VTABLE(lifeCycleEntry_LifeCycleEntry);
OV_TYPEDEF_VTABLE(lifeCycleEntry_LifeCycleArchive);

OV_DLLFNCEXPORT OV_RESULT lifeCycleEntry_LifeCycleArchive_LCEId_set(
    OV_INSTPTR_lifeCycleEntry_LifeCycleArchive pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT lifeCycleEntry_LifeCycleArchive_LCECreatingInstanceIdString_set(
    OV_INSTPTR_lifeCycleEntry_LifeCycleArchive pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT lifeCycleEntry_LifeCycleArchive_LCECreatingInstanceIdType_set(
    OV_INSTPTR_lifeCycleEntry_LifeCycleArchive pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT lifeCycleEntry_LifeCycleArchive_LCEWritingInstanceIdString_set(
    OV_INSTPTR_lifeCycleEntry_LifeCycleArchive pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT lifeCycleEntry_LifeCycleArchive_LCEWritingInstanceIdType_set(
    OV_INSTPTR_lifeCycleEntry_LifeCycleArchive pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT lifeCycleEntry_LifeCycleArchive_LCEEventClass_set(
    OV_INSTPTR_lifeCycleEntry_LifeCycleArchive pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT lifeCycleEntry_LifeCycleArchive_LCESubject_set(
    OV_INSTPTR_lifeCycleEntry_LifeCycleArchive pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT lifeCycleEntry_LifeCycleArchive_LCEValue_set(
    OV_INSTPTR_lifeCycleEntry_LifeCycleArchive pobj,
    const OV_ANY *pvalue
);

OV_DLLFNCEXPORT OV_RESULT lifeCycleEntry_LifeCycleArchive_LCETimeStamp_set(
    OV_INSTPTR_lifeCycleEntry_LifeCycleArchive pobj,
    const OV_TIME *pvalue
);

OV_DLLFNCEXPORT OV_RESULT lifeCycleEntry_LifeCycleArchive_LCECreate_set(
    OV_INSTPTR_lifeCycleEntry_LifeCycleArchive pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT lifeCycleEntry_LifeCycleArchive_LCEDelete_set(
    OV_INSTPTR_lifeCycleEntry_LifeCycleArchive pobj,
    const OV_BOOL value
);

extern OV_CLASS_DEF OV_CLASS_DEF_lifeCycleEntry_LifeCycleEntry;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_lifeCycleEntry_LifeCycleEntry;

extern OV_CLASS_DEF OV_CLASS_DEF_lifeCycleEntry_LifeCycleArchive;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_lifeCycleEntry_LifeCycleArchive;

extern OV_LIBRARY_DEF OV_LIBRARY_DEF_lifeCycleEntry;

OV_RESULT ov_library_setglobalvars_lifeCycleEntry(void);

OV_DLLFNCEXPORT OV_LIBRARY_DEF *ov_library_open_lifeCycleEntry(void);

#undef OV_VAREXTERN
#undef OV_FNCEXTERN

#ifdef __cplusplus
}
#endif

#endif

/*
*   End of file
*/
