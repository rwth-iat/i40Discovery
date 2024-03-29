/*
*   This file was generated by the ACPLT/OV C-Code Generator.
*
*   C-Code Generator version: 1.6.4
*   ACPLT/OV library version: 2.0.0
*   Date of file generation:  21-Sep-2018 (10:33:41)
*
*   DO NOT EDIT THIS FILE!
*/

#ifndef OV_LIBRARY_openAASDiscoveryServer_H_INCLUDED
#define OV_LIBRARY_openAASDiscoveryServer_H_INCLUDED

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

#ifdef __cplusplus
extern "C" {
#endif

#ifdef OV_COMPILE_LIBRARY_openAASDiscoveryServer
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

#define OV_BIPT_openAASDiscoveryServer_Wrapper OV_INSTPTR_ov_domain
#define OV_BVPT_openAASDiscoveryServer_Wrapper OV_VTBLPTR_ov_domain

#define OV_INSTBODY_openAASDiscoveryServer_Wrapper \
    OV_INSTBODY_ov_domain \
    OV_STRING v_Endpoint; \
    OV_STRING v_User; \
    OV_STRING v_Password; \
    OV_BOOL v_Connect; \
    OV_BOOL v_Disconnect; \
    OV_UINT v_State; \
    OV_BOOL v_ErrorFlag; \
    OV_STRING v_ErrorMessage;

#define OV_CIB_openAASDiscoveryServer_Wrapper \
    OV_CIB_ov_domain \
    int is_of_class_openAASDiscoveryServer_Wrapper:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_Wrapper

#define OV_BIPT_openAASDiscoveryServer_DBWrapper OV_INSTPTR_openAASDiscoveryServer_Wrapper
#define OV_BVPT_openAASDiscoveryServer_DBWrapper OV_VTBLPTR_openAASDiscoveryServer_Wrapper

#define OV_INSTBODY_openAASDiscoveryServer_DBWrapper \
    OV_INSTBODY_openAASDiscoveryServer_Wrapper

#define OV_CIB_openAASDiscoveryServer_DBWrapper \
    OV_CIB_openAASDiscoveryServer_Wrapper \
    int is_of_class_openAASDiscoveryServer_DBWrapper:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_DBWrapper

#define OV_BIPT_openAASDiscoveryServer_URMSWrapper OV_INSTPTR_openAASDiscoveryServer_Wrapper
#define OV_BVPT_openAASDiscoveryServer_URMSWrapper OV_VTBLPTR_openAASDiscoveryServer_Wrapper

#define OV_INSTBODY_openAASDiscoveryServer_URMSWrapper \
    OV_INSTBODY_openAASDiscoveryServer_Wrapper

#define OV_CIB_openAASDiscoveryServer_URMSWrapper \
    OV_CIB_openAASDiscoveryServer_Wrapper \
    int is_of_class_openAASDiscoveryServer_URMSWrapper:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_URMSWrapper

#define OV_BIPT_openAASDiscoveryServer_CAWrapper OV_INSTPTR_openAASDiscoveryServer_Wrapper
#define OV_BVPT_openAASDiscoveryServer_CAWrapper OV_VTBLPTR_openAASDiscoveryServer_Wrapper

#define OV_INSTBODY_openAASDiscoveryServer_CAWrapper \
    OV_INSTBODY_openAASDiscoveryServer_Wrapper

#define OV_CIB_openAASDiscoveryServer_CAWrapper \
    OV_CIB_openAASDiscoveryServer_Wrapper \
    int is_of_class_openAASDiscoveryServer_CAWrapper:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_CAWrapper

#define OV_BIPT_openAASDiscoveryServer_SEWrapper OV_INSTPTR_openAASDiscoveryServer_Wrapper
#define OV_BVPT_openAASDiscoveryServer_SEWrapper OV_VTBLPTR_openAASDiscoveryServer_Wrapper

#define OV_INSTBODY_openAASDiscoveryServer_SEWrapper \
    OV_INSTBODY_openAASDiscoveryServer_Wrapper

#define OV_CIB_openAASDiscoveryServer_SEWrapper \
    OV_CIB_openAASDiscoveryServer_Wrapper \
    int is_of_class_openAASDiscoveryServer_SEWrapper:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_SEWrapper

#define OV_BIPT_openAASDiscoveryServer_DSService OV_INSTPTR_ov_domain
#define OV_BVPT_openAASDiscoveryServer_DSService OV_VTBLPTR_ov_domain

#define OV_INSTBODY_openAASDiscoveryServer_DSService \
    OV_INSTBODY_ov_domain \
    OV_STRING_VEC v_DBWrapperUsed;

#define OV_CIB_openAASDiscoveryServer_DSService \
    OV_CIB_ov_domain \
    int is_of_class_openAASDiscoveryServer_DSService:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_DSService

#define OV_BIPT_openAASDiscoveryServer_DSSecurityService OV_INSTPTR_openAASDiscoveryServer_DSService
#define OV_BVPT_openAASDiscoveryServer_DSSecurityService OV_VTBLPTR_openAASDiscoveryServer_DSService

#define OV_INSTBODY_openAASDiscoveryServer_DSSecurityService \
    OV_INSTBODY_openAASDiscoveryServer_DSService \
    OV_STRING_VEC v_URMSWrapperUsed; \
    OV_STRING_VEC v_CAWrapperUsed;

#define OV_CIB_openAASDiscoveryServer_DSSecurityService \
    OV_CIB_openAASDiscoveryServer_DSService \
    int is_of_class_openAASDiscoveryServer_DSSecurityService:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_DSSecurityService

#define OV_BIPT_openAASDiscoveryServer_DSRegistrationService OV_INSTPTR_openAASDiscoveryServer_DSService
#define OV_BVPT_openAASDiscoveryServer_DSRegistrationService OV_VTBLPTR_openAASDiscoveryServer_DSService

#define OV_INSTBODY_openAASDiscoveryServer_DSRegistrationService \
    OV_INSTBODY_openAASDiscoveryServer_DSService \
    OV_STRING_VEC v_SEWrapperUsed;

#define OV_CIB_openAASDiscoveryServer_DSRegistrationService \
    OV_CIB_openAASDiscoveryServer_DSService \
    int is_of_class_openAASDiscoveryServer_DSRegistrationService:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_DSRegistrationService

#define OV_BIPT_openAASDiscoveryServer_DSUnRegistrationService OV_INSTPTR_openAASDiscoveryServer_DSService
#define OV_BVPT_openAASDiscoveryServer_DSUnRegistrationService OV_VTBLPTR_openAASDiscoveryServer_DSService

#define OV_INSTBODY_openAASDiscoveryServer_DSUnRegistrationService \
    OV_INSTBODY_openAASDiscoveryServer_DSService \
    OV_STRING_VEC v_SEWrapperUsed;

#define OV_CIB_openAASDiscoveryServer_DSUnRegistrationService \
    OV_CIB_openAASDiscoveryServer_DSService \
    int is_of_class_openAASDiscoveryServer_DSUnRegistrationService:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_DSUnRegistrationService

#define OV_BIPT_openAASDiscoveryServer_DSSearchService OV_INSTPTR_openAASDiscoveryServer_DSService
#define OV_BVPT_openAASDiscoveryServer_DSSearchService OV_VTBLPTR_openAASDiscoveryServer_DSService

#define OV_INSTBODY_openAASDiscoveryServer_DSSearchService \
    OV_INSTBODY_openAASDiscoveryServer_DSService \
    OV_STRING_VEC v_SEWrapperUsed;

#define OV_CIB_openAASDiscoveryServer_DSSearchService \
    OV_CIB_openAASDiscoveryServer_DSService \
    int is_of_class_openAASDiscoveryServer_DSSearchService:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_DSSearchService

#define OV_BIPT_openAASDiscoveryServer_Part OV_INSTPTR_ov_domain
#define OV_BVPT_openAASDiscoveryServer_Part OV_VTBLPTR_ov_domain

#define OV_INSTBODY_openAASDiscoveryServer_Part \
    OV_INSTBODY_ov_domain \
    OV_STRING v_DBWrapperPath; \
    OV_BOOL v_AddDBWrapper; \
    OV_BOOL v_RemoveDBWrapper; \
    OV_STRING_VEC v_DBWrapper; \
    OV_STRING v_DSServicePath; \
    OV_BOOL v_AddDSService; \
    OV_BOOL v_RemoveDSService; \
    OV_STRING_VEC v_DSService; \
    OV_STRING_VEC v_DSServicePaths; \
    OV_BOOL v_UseDSServices; \
    OV_STRING_VEC v_UsedDSServicePaths; \
    OV_STRING_VEC v_DBWrapperPaths; \
    OV_STRING v_DSServicePathForConfig; \
    OV_BOOL v_ConfigDSServices;

#define OV_CIB_openAASDiscoveryServer_Part \
    OV_CIB_ov_domain \
    int is_of_class_openAASDiscoveryServer_Part:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_Part

#define OV_BIPT_openAASDiscoveryServer_Security OV_INSTPTR_openAASDiscoveryServer_Part
#define OV_BVPT_openAASDiscoveryServer_Security OV_VTBLPTR_openAASDiscoveryServer_Part

#define OV_INSTBODY_openAASDiscoveryServer_Security \
    OV_INSTBODY_openAASDiscoveryServer_Part \
    OV_STRING v_URMSWrapperPath; \
    OV_BOOL v_AddURMSWrapper; \
    OV_BOOL v_RemoveURMSWrapper; \
    OV_STRING_VEC v_URMSWrapper; \
    OV_STRING v_CAWrapperPath; \
    OV_BOOL v_AddCAWrapper; \
    OV_BOOL v_RemoveCAWrapper; \
    OV_STRING_VEC v_CAWrapper; \
    OV_STRING_VEC v_URMSWrapperPaths; \
    OV_STRING_VEC v_CAWrapperPaths; \
    OV_STRING v_SecurityMessage; \
    OV_BOOL v_ProcessSecurityMessage;

#define OV_CIB_openAASDiscoveryServer_Security \
    OV_CIB_openAASDiscoveryServer_Part \
    int is_of_class_openAASDiscoveryServer_Security:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_Security

#define OV_BIPT_openAASDiscoveryServer_Registration OV_INSTPTR_openAASDiscoveryServer_Part
#define OV_BVPT_openAASDiscoveryServer_Registration OV_VTBLPTR_openAASDiscoveryServer_Part

#define OV_INSTBODY_openAASDiscoveryServer_Registration \
    OV_INSTBODY_openAASDiscoveryServer_Part \
    OV_STRING v_SEWrapperPath; \
    OV_BOOL v_AddSEWrapper; \
    OV_BOOL v_RemoveSEWrapper; \
    OV_STRING_VEC v_SEWrapper; \
    OV_STRING_VEC v_SEWrapperPaths; \
    OV_STRING v_RegistrationMessage; \
    OV_BOOL v_ProcessRegistrationMessage; \
    OV_STRING v_UnregistrationMessage; \
    OV_BOOL v_ProcessUnregistrationMessage;

#define OV_CIB_openAASDiscoveryServer_Registration \
    OV_CIB_openAASDiscoveryServer_Part \
    int is_of_class_openAASDiscoveryServer_Registration:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_Registration

#define OV_BIPT_openAASDiscoveryServer_Search OV_INSTPTR_openAASDiscoveryServer_Part
#define OV_BVPT_openAASDiscoveryServer_Search OV_VTBLPTR_openAASDiscoveryServer_Part

#define OV_INSTBODY_openAASDiscoveryServer_Search \
    OV_INSTBODY_openAASDiscoveryServer_Part \
    OV_STRING v_SEWrapperPath; \
    OV_BOOL v_AddSEWrapper; \
    OV_BOOL v_RemoveSEWrapper; \
    OV_STRING_VEC v_SEWrapper; \
    OV_STRING_VEC v_SEWrapperPaths; \
    OV_STRING v_SearchMessage; \
    OV_BOOL v_ProcessSearchMessage;

#define OV_CIB_openAASDiscoveryServer_Search \
    OV_CIB_openAASDiscoveryServer_Part \
    int is_of_class_openAASDiscoveryServer_Search:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_Search

#define OV_BIPT_openAASDiscoveryServer_ComponentManagerDS OV_INSTPTR_fb_functionblock
#define OV_BVPT_openAASDiscoveryServer_ComponentManagerDS OV_VTBLPTR_fb_functionblock

#define OV_INSTBODY_openAASDiscoveryServer_ComponentManagerDS \
    OV_INSTBODY_fb_functionblock \
    OV_UINT v_messageBoxSize; \
    OV_BOOL v_messageBoxIsFiFo; \
    OV_INST_MessageSys_inbox p_INBOX; \
    OV_INST_MessageSys_inbox p_OUTBOX;

#define OV_CIB_openAASDiscoveryServer_ComponentManagerDS \
    OV_CIB_fb_functionblock \
    int is_of_class_openAASDiscoveryServer_ComponentManagerDS:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_ComponentManagerDS

#define OV_BIPT_openAASDiscoveryServer_DiscoveryServer OV_INSTPTR_fb_functionblock
#define OV_BVPT_openAASDiscoveryServer_DiscoveryServer OV_VTBLPTR_fb_functionblock

#define OV_INSTBODY_openAASDiscoveryServer_DiscoveryServer \
    OV_INSTBODY_fb_functionblock \
    OV_INT_VEC v_threadDataHndl; \
    OV_UINT v_messageCount; \
    OV_BOOL v_ErrorFlag; \
    OV_STRING v_ErrorMessage; \
    OV_STRING_VEC v_CarrierIDList; \
    OV_STRING_VEC v_PropertyIDList; \
    OV_STRING_VEC v_ExpressionSemanticList; \
    OV_STRING_VEC v_RelationList; \
    OV_STRING_VEC v_SubModelList; \
    OV_INST_openAASDiscoveryServer_ComponentManagerDS p_ComponentManager; \
    OV_INST_openAASDiscoveryServer_Security p_Security; \
    OV_INST_openAASDiscoveryServer_Registration p_Registration; \
    OV_INST_openAASDiscoveryServer_Search p_Search;

#define OV_CIB_openAASDiscoveryServer_DiscoveryServer \
    OV_CIB_fb_functionblock \
    int is_of_class_openAASDiscoveryServer_DiscoveryServer:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_DiscoveryServer

#define OV_BIPT_openAASDiscoveryServer_ComponentManagerTC OV_INSTPTR_fb_functionblock
#define OV_BVPT_openAASDiscoveryServer_ComponentManagerTC OV_VTBLPTR_fb_functionblock

#define OV_INSTBODY_openAASDiscoveryServer_ComponentManagerTC \
    OV_INSTBODY_fb_functionblock \
    OV_UINT v_messageBoxSize; \
    OV_BOOL v_messageBoxIsFiFo; \
    OV_INST_MessageSys_inbox p_INBOX; \
    OV_INST_MessageSys_inbox p_OUTBOX;

#define OV_CIB_openAASDiscoveryServer_ComponentManagerTC \
    OV_CIB_fb_functionblock \
    int is_of_class_openAASDiscoveryServer_ComponentManagerTC:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_ComponentManagerTC

#define OV_BIPT_openAASDiscoveryServer_TestClient OV_INSTPTR_fb_functionblock
#define OV_BVPT_openAASDiscoveryServer_TestClient OV_VTBLPTR_fb_functionblock

#define OV_INSTBODY_openAASDiscoveryServer_TestClient \
    OV_INSTBODY_fb_functionblock \
    OV_STRING v_EndpointDS; \
    OV_STRING v_EndpointTestClient; \
    OV_STRING v_ComponentID; \
    OV_BOOL v_ErrorFlag; \
    OV_STRING v_ErrorMessage; \
    OV_STRING v_CertificateTC; \
    OV_BOOL v_SendSecurityMessage; \
    OV_STRING v_CertificateDS; \
    OV_STRING v_SecurityKey; \
    OV_STRING v_ComponentContent; \
    OV_BOOL v_SendRegistrationMessage; \
    OV_BOOL v_SendUnregistrationMessage; \
    OV_STRING v_Tags; \
    OV_STRING v_ResponseMode; \
    OV_BOOL v_SendSearchMessage; \
    OV_STRING v_AASFound; \
    OV_BOOL v_Reset; \
    OV_BOOL v_PrepareForNextMessage; \
    OV_UINT v_MessageCount; \
    OV_UINT v_State; \
    OV_INST_openAASDiscoveryServer_ComponentManagerTC p_ComponentManager;

#define OV_CIB_openAASDiscoveryServer_TestClient \
    OV_CIB_fb_functionblock \
    int is_of_class_openAASDiscoveryServer_TestClient:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_TestClient

#define OV_BIPT_openAASDiscoveryServer_AASCrawler OV_INSTPTR_ov_domain
#define OV_BVPT_openAASDiscoveryServer_AASCrawler OV_VTBLPTR_ov_domain

#define OV_INSTBODY_openAASDiscoveryServer_AASCrawler \
    OV_INSTBODY_ov_domain \
    OV_STRING v_DBWrapperPath;

#define OV_CIB_openAASDiscoveryServer_AASCrawler \
    OV_CIB_ov_domain \
    int is_of_class_openAASDiscoveryServer_AASCrawler:1;

#define OV_STATICINSTBODY_openAASDiscoveryServer_AASCrawler

OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_Wrapper);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_DBWrapper);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_URMSWrapper);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_CAWrapper);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_SEWrapper);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_DSService);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_DSSecurityService);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_DSRegistrationService);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_DSUnRegistrationService);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_DSSearchService);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_Part);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_Security);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_Registration);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_Search);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_ComponentManagerDS);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_DiscoveryServer);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_ComponentManagerTC);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_TestClient);
OV_TYPEDEF_INSTANCE(openAASDiscoveryServer_AASCrawler);

#include "openAASDiscoveryServer.ovf"

OV_FNCEXTERN OV_FNC_GETACCESS openAASDiscoveryServer_Wrapper_getaccess;
OV_FNCEXTERN DS_FNC_CONNECT openAASDiscoveryServer_Wrapper_connect;
OV_FNCEXTERN DS_FNC_DISCONNECT openAASDiscoveryServer_Wrapper_disconnect;

OV_FNCEXTERN DS_FNC_INSERTDATA openAASDiscoveryServer_DBWrapper_insertData;
OV_FNCEXTERN DS_FNC_SELECTDATA openAASDiscoveryServer_DBWrapper_selectData;
OV_FNCEXTERN DS_FNC_DELETEDATA openAASDiscoveryServer_DBWrapper_deleteData;
OV_FNCEXTERN DS_FNC_UPDATEDATA openAASDiscoveryServer_DBWrapper_updateData;
OV_FNCEXTERN DS_FNC_GETCOMPONENTID openAASDiscoveryServer_DBWrapper_getComponentID;
OV_FNCEXTERN DS_FNC_GETFITTINGSTATEMENTS openAASDiscoveryServer_DBWrapper_getFittingStatements;

OV_FNCEXTERN DS_FNC_CHECKUSERRIGHTS openAASDiscoveryServer_URMSWrapper_checkUserRights;

OV_FNCEXTERN DS_FNC_CHECKCERTIFICATE openAASDiscoveryServer_CAWrapper_checkCertificate;

OV_FNCEXTERN DS_FNC_STOREDATA openAASDiscoveryServer_SEWrapper_storeData;
OV_FNCEXTERN DS_FNC_SEARCHDATA openAASDiscoveryServer_SEWrapper_searchData;

OV_FNCEXTERN DS_FNC_EXECUTESERVICE openAASDiscoveryServer_DSService_executeService;

OV_FNCEXTERN OV_FNC_GETACCESS openAASDiscoveryServer_Part_getaccess;
OV_FNCEXTERN OV_FNC_CONSTRUCTOR openAASDiscoveryServer_Part_constructor;
OV_FNCEXTERN DS_FNC_ADDDBWRAPPER openAASDiscoveryServer_Part_addDBWrapper;
OV_FNCEXTERN DS_FNC_REMOVEDBWRAPPER openAASDiscoveryServer_Part_removeDBWrapper;
OV_FNCEXTERN DS_FNC_ADDDSSERVICE openAASDiscoveryServer_Part_addDSService;
OV_FNCEXTERN DS_FNC_REMOVEDSSERVICE openAASDiscoveryServer_Part_removeDSService;
OV_FNCEXTERN DS_FNC_USEDSSERVICES openAASDiscoveryServer_Part_useDSServices;
OV_FNCEXTERN DS_FNC_CONFIGUREDSSERVICE openAASDiscoveryServer_Part_configureDSService;

OV_FNCEXTERN OV_FNC_GETACCESS openAASDiscoveryServer_Security_getaccess;
OV_FNCEXTERN OV_FNC_CONSTRUCTOR openAASDiscoveryServer_Security_constructor;
OV_FNCEXTERN DS_FNC_ADDURMSWRAPPER openAASDiscoveryServer_Security_addURMSWrapper;
OV_FNCEXTERN DS_FNC_REMOVEURMSWRAPPER openAASDiscoveryServer_Security_removeURMSWrapper;
OV_FNCEXTERN DS_FNC_ADDCAWRAPPER openAASDiscoveryServer_Security_addCAWrapper;
OV_FNCEXTERN DS_FNC_REMOVECAWRAPPER openAASDiscoveryServer_Security_removeCAWrapper;
OV_FNCEXTERN DS_FNC_ADDDSSERVICE openAASDiscoveryServer_Security_addDSService;
OV_FNCEXTERN DS_FNC_REMOVEDSSERVICE openAASDiscoveryServer_Security_removeDSService;
OV_FNCEXTERN DS_FNC_CONFIGUREDSSERVICE openAASDiscoveryServer_Security_configureDSService;
OV_FNCEXTERN DS_FNC_GETSECURITYMESSAGE openAASDiscoveryServer_Security_getSecurityMessage;

OV_FNCEXTERN OV_FNC_GETACCESS openAASDiscoveryServer_Registration_getaccess;
OV_FNCEXTERN OV_FNC_CONSTRUCTOR openAASDiscoveryServer_Registration_constructor;
OV_FNCEXTERN DS_FNC_ADDSEWRAPPER openAASDiscoveryServer_Registration_addSEWrapper;
OV_FNCEXTERN DS_FNC_REMOVESEWRAPPER openAASDiscoveryServer_Registration_removeSEWrapper;
OV_FNCEXTERN DS_FNC_ADDDSSERVICE openAASDiscoveryServer_Registration_addDSService;
OV_FNCEXTERN DS_FNC_REMOVEDSSERVICE openAASDiscoveryServer_Registration_removeDSService;
OV_FNCEXTERN DS_FNC_CONFIGUREDSSERVICE openAASDiscoveryServer_Registration_configureDSService;
OV_FNCEXTERN DS_FNC_GETREGISTRATIONMESSAGE openAASDiscoveryServer_Registration_getRegistrationMessage;
OV_FNCEXTERN DS_FNC_GETUNREGISTRATIONMESSAGE openAASDiscoveryServer_Registration_getUnregistrationMessage;

OV_FNCEXTERN OV_FNC_GETACCESS openAASDiscoveryServer_Search_getaccess;
OV_FNCEXTERN OV_FNC_CONSTRUCTOR openAASDiscoveryServer_Search_constructor;
OV_FNCEXTERN DS_FNC_ADDSEWRAPPER openAASDiscoveryServer_Search_addSEWrapper;
OV_FNCEXTERN DS_FNC_REMOVESEWRAPPER openAASDiscoveryServer_Search_removeSEWrapper;
OV_FNCEXTERN DS_FNC_ADDDSSERVICE openAASDiscoveryServer_Search_addDSService;
OV_FNCEXTERN DS_FNC_REMOVEDSSERVICE openAASDiscoveryServer_Search_removeDSService;
OV_FNCEXTERN DS_FNC_CONFIGUREDSSERVICE openAASDiscoveryServer_Search_configureDSService;
OV_FNCEXTERN DS_FNC_GETSEARCHMESSAGE openAASDiscoveryServer_Search_getSearchMessage;

OV_FNCEXTERN OV_FNC_CONSTRUCTOR openAASDiscoveryServer_ComponentManagerDS_constructor;
OV_FNCEXTERN FB_FNC_TYPEMETHOD openAASDiscoveryServer_ComponentManagerDS_typemethod;
OV_FNCEXTERN DS_FNC_CLEANUPMESSAGEBOXDS openAASDiscoveryServer_ComponentManagerDS_cleanupMessageBox;

OV_FNCEXTERN OV_FNC_CONSTRUCTOR openAASDiscoveryServer_DiscoveryServer_constructor;
OV_FNCEXTERN OV_FNC_DESTRUCTOR openAASDiscoveryServer_DiscoveryServer_destructor;
OV_FNCEXTERN DS_FNC_GETMESSAGE openAASDiscoveryServer_DiscoveryServer_getMessage;
OV_FNCEXTERN DS_FNC_SENDMESSAGE openAASDiscoveryServer_DiscoveryServer_sendMessage;
OV_FNCEXTERN FB_FNC_TYPEMETHOD openAASDiscoveryServer_DiscoveryServer_typemethod;

OV_FNCEXTERN OV_FNC_CONSTRUCTOR openAASDiscoveryServer_ComponentManagerTC_constructor;
OV_FNCEXTERN FB_FNC_TYPEMETHOD openAASDiscoveryServer_ComponentManagerTC_typemethod;
OV_FNCEXTERN DS_FNC_CLEANUPMESSAGEBOXTC openAASDiscoveryServer_ComponentManagerTC_cleanupMessageBox;

OV_FNCEXTERN FB_FNC_TYPEMETHOD openAASDiscoveryServer_TestClient_typemethod;

OV_FNCEXTERN DS_FNC_CRAWLAAS openAASDiscoveryServer_AASCrawler_crawlAAS;

#define OV_VTBLBODY_openAASDiscoveryServer_Wrapper \
    OV_VTBLBODY_ov_domain \
    DS_FNC_CONNECT* m_connect; \
    DS_FNC_DISCONNECT* m_disconnect;

#define OV_VTBLBODY_openAASDiscoveryServer_DBWrapper \
    OV_VTBLBODY_openAASDiscoveryServer_Wrapper \
    DS_FNC_INSERTDATA* m_insertData; \
    DS_FNC_SELECTDATA* m_selectData; \
    DS_FNC_DELETEDATA* m_deleteData; \
    DS_FNC_UPDATEDATA* m_updateData; \
    DS_FNC_GETCOMPONENTID* m_getComponentID; \
    DS_FNC_GETFITTINGSTATEMENTS* m_getFittingStatements;

#define OV_VTBLBODY_openAASDiscoveryServer_URMSWrapper \
    OV_VTBLBODY_openAASDiscoveryServer_Wrapper \
    DS_FNC_CHECKUSERRIGHTS* m_checkUserRights;

#define OV_VTBLBODY_openAASDiscoveryServer_CAWrapper \
    OV_VTBLBODY_openAASDiscoveryServer_Wrapper \
    DS_FNC_CHECKCERTIFICATE* m_checkCertificate;

#define OV_VTBLBODY_openAASDiscoveryServer_SEWrapper \
    OV_VTBLBODY_openAASDiscoveryServer_Wrapper \
    DS_FNC_STOREDATA* m_storeData; \
    DS_FNC_SEARCHDATA* m_searchData;

#define OV_VTBLBODY_openAASDiscoveryServer_DSService \
    OV_VTBLBODY_ov_domain \
    DS_FNC_EXECUTESERVICE* m_executeService;

#define OV_VTBLBODY_openAASDiscoveryServer_DSSecurityService \
    OV_VTBLBODY_openAASDiscoveryServer_DSService

#define OV_VTBLBODY_openAASDiscoveryServer_DSRegistrationService \
    OV_VTBLBODY_openAASDiscoveryServer_DSService

#define OV_VTBLBODY_openAASDiscoveryServer_DSUnRegistrationService \
    OV_VTBLBODY_openAASDiscoveryServer_DSService

#define OV_VTBLBODY_openAASDiscoveryServer_DSSearchService \
    OV_VTBLBODY_openAASDiscoveryServer_DSService

#define OV_VTBLBODY_openAASDiscoveryServer_Part \
    OV_VTBLBODY_ov_domain \
    DS_FNC_ADDDBWRAPPER* m_addDBWrapper; \
    DS_FNC_REMOVEDBWRAPPER* m_removeDBWrapper; \
    DS_FNC_ADDDSSERVICE* m_addDSService; \
    DS_FNC_REMOVEDSSERVICE* m_removeDSService; \
    DS_FNC_USEDSSERVICES* m_useDSServices; \
    DS_FNC_CONFIGUREDSSERVICE* m_configureDSService;

#define OV_VTBLBODY_openAASDiscoveryServer_Security \
    OV_VTBLBODY_openAASDiscoveryServer_Part \
    DS_FNC_ADDURMSWRAPPER* m_addURMSWrapper; \
    DS_FNC_REMOVEURMSWRAPPER* m_removeURMSWrapper; \
    DS_FNC_ADDCAWRAPPER* m_addCAWrapper; \
    DS_FNC_REMOVECAWRAPPER* m_removeCAWrapper; \
    DS_FNC_GETSECURITYMESSAGE* m_getSecurityMessage;

#define OV_VTBLBODY_openAASDiscoveryServer_Registration \
    OV_VTBLBODY_openAASDiscoveryServer_Part \
    DS_FNC_ADDSEWRAPPER* m_addSEWrapper; \
    DS_FNC_REMOVESEWRAPPER* m_removeSEWrapper; \
    DS_FNC_GETREGISTRATIONMESSAGE* m_getRegistrationMessage; \
    DS_FNC_GETUNREGISTRATIONMESSAGE* m_getUnregistrationMessage;

#define OV_VTBLBODY_openAASDiscoveryServer_Search \
    OV_VTBLBODY_openAASDiscoveryServer_Part \
    DS_FNC_ADDSEWRAPPER* m_addSEWrapper; \
    DS_FNC_REMOVESEWRAPPER* m_removeSEWrapper; \
    DS_FNC_GETSEARCHMESSAGE* m_getSearchMessage;

#define OV_VTBLBODY_openAASDiscoveryServer_ComponentManagerDS \
    OV_VTBLBODY_fb_functionblock \
    DS_FNC_CLEANUPMESSAGEBOXDS* m_cleanupMessageBox;

#define OV_VTBLBODY_openAASDiscoveryServer_DiscoveryServer \
    OV_VTBLBODY_fb_functionblock \
    DS_FNC_GETMESSAGE* m_getMessage; \
    DS_FNC_SENDMESSAGE* m_sendMessage;

#define OV_VTBLBODY_openAASDiscoveryServer_ComponentManagerTC \
    OV_VTBLBODY_fb_functionblock \
    DS_FNC_CLEANUPMESSAGEBOXTC* m_cleanupMessageBox;

#define OV_VTBLBODY_openAASDiscoveryServer_TestClient \
    OV_VTBLBODY_fb_functionblock

#define OV_VTBLBODY_openAASDiscoveryServer_AASCrawler \
    OV_VTBLBODY_ov_domain \
    DS_FNC_CRAWLAAS* m_crawlAAS;

OV_TYPEDEF_VTABLE(openAASDiscoveryServer_Wrapper);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_DBWrapper);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_URMSWrapper);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_CAWrapper);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_SEWrapper);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_DSService);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_DSSecurityService);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_DSRegistrationService);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_DSUnRegistrationService);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_DSSearchService);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_Part);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_Security);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_Registration);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_Search);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_ComponentManagerDS);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_DiscoveryServer);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_ComponentManagerTC);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_TestClient);
OV_TYPEDEF_VTABLE(openAASDiscoveryServer_AASCrawler);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Wrapper_Connect_set(
    OV_INSTPTR_openAASDiscoveryServer_Wrapper pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Wrapper_Disconnect_set(
    OV_INSTPTR_openAASDiscoveryServer_Wrapper pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Part_AddDBWrapper_set(
    OV_INSTPTR_openAASDiscoveryServer_Part pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Part_RemoveDBWrapper_set(
    OV_INSTPTR_openAASDiscoveryServer_Part pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Part_AddDSService_set(
    OV_INSTPTR_openAASDiscoveryServer_Part pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Part_RemoveDSService_set(
    OV_INSTPTR_openAASDiscoveryServer_Part pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Part_UseDSServices_set(
    OV_INSTPTR_openAASDiscoveryServer_Part pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Part_ConfigDSServices_set(
    OV_INSTPTR_openAASDiscoveryServer_Part pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Security_AddURMSWrapper_set(
    OV_INSTPTR_openAASDiscoveryServer_Security pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Security_RemoveURMSWrapper_set(
    OV_INSTPTR_openAASDiscoveryServer_Security pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Security_AddCAWrapper_set(
    OV_INSTPTR_openAASDiscoveryServer_Security pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Security_RemoveCAWrapper_set(
    OV_INSTPTR_openAASDiscoveryServer_Security pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Security_ProcessSecurityMessage_set(
    OV_INSTPTR_openAASDiscoveryServer_Security pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Registration_AddSEWrapper_set(
    OV_INSTPTR_openAASDiscoveryServer_Registration pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Registration_RemoveSEWrapper_set(
    OV_INSTPTR_openAASDiscoveryServer_Registration pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Registration_ProcessRegistrationMessage_set(
    OV_INSTPTR_openAASDiscoveryServer_Registration pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Registration_ProcessUnregistrationMessage_set(
    OV_INSTPTR_openAASDiscoveryServer_Registration pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Search_AddSEWrapper_set(
    OV_INSTPTR_openAASDiscoveryServer_Search pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Search_RemoveSEWrapper_set(
    OV_INSTPTR_openAASDiscoveryServer_Search pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_Search_ProcessSearchMessage_set(
    OV_INSTPTR_openAASDiscoveryServer_Search pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_TestClient_SendSecurityMessage_set(
    OV_INSTPTR_openAASDiscoveryServer_TestClient pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_TestClient_SendRegistrationMessage_set(
    OV_INSTPTR_openAASDiscoveryServer_TestClient pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_TestClient_SendUnregistrationMessage_set(
    OV_INSTPTR_openAASDiscoveryServer_TestClient pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_TestClient_SendSearchMessage_set(
    OV_INSTPTR_openAASDiscoveryServer_TestClient pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_TestClient_Reset_set(
    OV_INSTPTR_openAASDiscoveryServer_TestClient pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_TestClient_PrepareForNextMessage_set(
    OV_INSTPTR_openAASDiscoveryServer_TestClient pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_STRING openAASDiscoveryServer_AASCrawler_DBWrapperPath_get(
    OV_INSTPTR_openAASDiscoveryServer_AASCrawler pobj
);

OV_DLLFNCEXPORT OV_RESULT openAASDiscoveryServer_AASCrawler_DBWrapperPath_set(
    OV_INSTPTR_openAASDiscoveryServer_AASCrawler pobj,
    const OV_STRING value
);

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_Wrapper;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_Wrapper;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_DBWrapper;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_DBWrapper;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_URMSWrapper;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_URMSWrapper;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_CAWrapper;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_CAWrapper;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_SEWrapper;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_SEWrapper;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_DSService;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_DSService;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_DSSecurityService;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_DSSecurityService;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_DSRegistrationService;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_DSRegistrationService;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_DSUnRegistrationService;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_DSUnRegistrationService;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_DSSearchService;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_DSSearchService;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_Part;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_Part;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_Security;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_Security;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_Registration;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_Registration;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_Search;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_Search;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_ComponentManagerDS;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_ComponentManagerDS;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_DiscoveryServer;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_DiscoveryServer;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_ComponentManagerTC;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_ComponentManagerTC;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_TestClient;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_TestClient;

extern OV_CLASS_DEF OV_CLASS_DEF_openAASDiscoveryServer_AASCrawler;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openAASDiscoveryServer_AASCrawler;

extern OV_LIBRARY_DEF OV_LIBRARY_DEF_openAASDiscoveryServer;

OV_RESULT ov_library_setglobalvars_openAASDiscoveryServer(void);

OV_DLLFNCEXPORT OV_LIBRARY_DEF *ov_library_open_openAASDiscoveryServer(void);

#undef OV_VAREXTERN
#undef OV_FNCEXTERN

#ifdef __cplusplus
}
#endif

#endif

/*
*   End of file
*/
