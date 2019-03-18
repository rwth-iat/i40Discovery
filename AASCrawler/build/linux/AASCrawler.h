/*
*   This file was generated by the ACPLT/OV C-Code Generator.
*
*   C-Code Generator version: 1.6.4
*   ACPLT/OV library version: 2.0.0
*   Date of file generation:  20-Sep-2018 (11:23:19)
*
*   DO NOT EDIT THIS FILE!
*/

#ifndef OV_LIBRARY_AASCrawler_H_INCLUDED
#define OV_LIBRARY_AASCrawler_H_INCLUDED

#include "libov/ov_library.h"
#include "libov/ov_structure.h"
#include "libov/ov_class.h"
#include "libov/ov_association.h"
#include "libov/ov_variable.h"
#include "libov/ov_part.h"
#include "libov/ov_operation.h"
#include "ov.h"
#include "ksbase.h"
#include "fb.h"
#include "ksapi.h"
#include "MessageSys.h"
#include "openAASDiscoveryServer.h"
#include "kshttp.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef OV_COMPILE_LIBRARY_AASCrawler
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

#define OV_BIPT_AASCrawler_AASCrawlerC OV_INSTPTR_openAASDiscoveryServer_AASCrawler
#define OV_BVPT_AASCrawler_AASCrawlerC OV_VTBLPTR_openAASDiscoveryServer_AASCrawler

#define OV_INSTBODY_AASCrawler_AASCrawlerC \
    OV_INSTBODY_openAASDiscoveryServer_AASCrawler

#define OV_CIB_AASCrawler_AASCrawlerC \
    OV_CIB_openAASDiscoveryServer_AASCrawler \
    int is_of_class_AASCrawler_AASCrawlerC:1;

#define OV_STATICINSTBODY_AASCrawler_AASCrawlerC

#define OV_BIPT_AASCrawler_AASHttpClient OV_INSTPTR_kshttp_genericHttpClient
#define OV_BVPT_AASCrawler_AASHttpClient OV_VTBLPTR_kshttp_genericHttpClient

#define OV_INSTBODY_AASCrawler_AASHttpClient \
    OV_INSTBODY_kshttp_genericHttpClient \
    OV_STRING v_ComponentID; \
    OV_BOOL v_isInUse;

#define OV_CIB_AASCrawler_AASHttpClient \
    OV_CIB_kshttp_genericHttpClient \
    int is_of_class_AASCrawler_AASHttpClient:1;

#define OV_STATICINSTBODY_AASCrawler_AASHttpClient

OV_TYPEDEF_INSTANCE(AASCrawler_AASCrawlerC);
OV_TYPEDEF_INSTANCE(AASCrawler_AASHttpClient);

OV_FNCEXTERN DS_FNC_CRAWLAAS AASCrawler_AASCrawlerC_crawlAAS;

#define OV_VTBLBODY_AASCrawler_AASCrawlerC \
    OV_VTBLBODY_openAASDiscoveryServer_AASCrawler

#define OV_VTBLBODY_AASCrawler_AASHttpClient \
    OV_VTBLBODY_kshttp_genericHttpClient

OV_TYPEDEF_VTABLE(AASCrawler_AASCrawlerC);
OV_TYPEDEF_VTABLE(AASCrawler_AASHttpClient);

extern OV_CLASS_DEF OV_CLASS_DEF_AASCrawler_AASCrawlerC;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_AASCrawler_AASCrawlerC;

extern OV_CLASS_DEF OV_CLASS_DEF_AASCrawler_AASHttpClient;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_AASCrawler_AASHttpClient;

extern OV_LIBRARY_DEF OV_LIBRARY_DEF_AASCrawler;

OV_RESULT ov_library_setglobalvars_AASCrawler(void);

OV_DLLFNCEXPORT OV_LIBRARY_DEF *ov_library_open_AASCrawler(void);

#undef OV_VAREXTERN
#undef OV_FNCEXTERN

#ifdef __cplusplus
}
#endif

#endif

/*
*   End of file
*/