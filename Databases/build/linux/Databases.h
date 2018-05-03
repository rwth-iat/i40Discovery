/*
*   This file was generated by the ACPLT/OV C-Code Generator.
*
*   C-Code Generator version: 1.6.4
*   ACPLT/OV library version: 2.0.0
*   Date of file generation:   3-May-2018 (11:21:23)
*
*   DO NOT EDIT THIS FILE!
*/

#ifndef OV_LIBRARY_Databases_H_INCLUDED
#define OV_LIBRARY_Databases_H_INCLUDED

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

#ifdef __cplusplus
extern "C" {
#endif

#ifdef OV_COMPILE_LIBRARY_Databases
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

#define OV_BIPT_Databases_MySQLDatabase OV_INSTPTR_openAASDiscoveryServer_Database
#define OV_BVPT_Databases_MySQLDatabase OV_VTBLPTR_openAASDiscoveryServer_Database

#define OV_INSTBODY_Databases_MySQLDatabase \
    OV_INSTBODY_openAASDiscoveryServer_Database

#define OV_CIB_Databases_MySQLDatabase \
    OV_CIB_openAASDiscoveryServer_Database \
    int is_of_class_Databases_MySQLDatabase:1;

#define OV_STATICINSTBODY_Databases_MySQLDatabase

#define OV_BIPT_Databases_SQLite3 OV_INSTPTR_openAASDiscoveryServer_Database
#define OV_BVPT_Databases_SQLite3 OV_VTBLPTR_openAASDiscoveryServer_Database

#define OV_INSTBODY_Databases_SQLite3 \
    OV_INSTBODY_openAASDiscoveryServer_Database \
    OV_STRING v_table; \
    OV_STRING v_ip; \
    OV_STRING v_cert; \
    OV_BOOL v_io;

#define OV_CIB_Databases_SQLite3 \
    OV_CIB_openAASDiscoveryServer_Database \
    int is_of_class_Databases_SQLite3:1;

#define OV_STATICINSTBODY_Databases_SQLite3

OV_TYPEDEF_INSTANCE(Databases_MySQLDatabase);
OV_TYPEDEF_INSTANCE(Databases_SQLite3);

OV_FNCEXTERN DS_FNC_CONNECT Databases_MySQLDatabase_connect;
OV_FNCEXTERN DS_FNC_DISCONNECT Databases_MySQLDatabase_disconnect;
OV_FNCEXTERN DS_FNC_READDATA Databases_MySQLDatabase_readData;
OV_FNCEXTERN DS_FNC_WRITEDATA Databases_MySQLDatabase_writeData;
OV_FNCEXTERN OV_FNC_CONSTRUCTOR Databases_MySQLDatabase_constructor;

OV_FNCEXTERN DS_FNC_CONNECT Databases_SQLite3_connect;
OV_FNCEXTERN DS_FNC_DISCONNECT Databases_SQLite3_disconnect;
OV_FNCEXTERN DS_FNC_READDATA Databases_SQLite3_readData;
OV_FNCEXTERN DS_FNC_WRITEDATA Databases_SQLite3_writeData;
OV_FNCEXTERN OV_FNC_CONSTRUCTOR Databases_SQLite3_constructor;

#define OV_VTBLBODY_Databases_MySQLDatabase \
    OV_VTBLBODY_openAASDiscoveryServer_Database

#define OV_VTBLBODY_Databases_SQLite3 \
    OV_VTBLBODY_openAASDiscoveryServer_Database

OV_TYPEDEF_VTABLE(Databases_MySQLDatabase);
OV_TYPEDEF_VTABLE(Databases_SQLite3);

OV_DLLFNCEXPORT OV_RESULT Databases_SQLite3_io_set(
    OV_INSTPTR_Databases_SQLite3 pobj,
    const OV_BOOL value
);

extern OV_CLASS_DEF OV_CLASS_DEF_Databases_MySQLDatabase;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_Databases_MySQLDatabase;

extern OV_CLASS_DEF OV_CLASS_DEF_Databases_SQLite3;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_Databases_SQLite3;

extern OV_LIBRARY_DEF OV_LIBRARY_DEF_Databases;

OV_RESULT ov_library_setglobalvars_Databases(void);

OV_DLLFNCEXPORT OV_LIBRARY_DEF *ov_library_open_Databases(void);

#undef OV_VAREXTERN
#undef OV_FNCEXTERN

#ifdef __cplusplus
}
#endif

#endif

/*
*   End of file
*/