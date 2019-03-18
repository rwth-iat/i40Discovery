/*
*   This file was generated by the ACPLT/OV C-Code Generator.
*
*   C-Code Generator version: 1.6.4
*   ACPLT/OV library version: 2.0.0
*   Date of file generation:  21-Sep-2018 (10:33:41)
*
*   DO NOT EDIT THIS FILE!
*/

#ifndef OV_LIBRARY_openaas_H_INCLUDED
#define OV_LIBRARY_openaas_H_INCLUDED

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
#include "identification.h"
#include "propertyValueStatement.h"
#include "lifeCycleEntry.h"
#include "MessageSys.h"
#include "openAASDiscoveryServer.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef OV_COMPILE_LIBRARY_openaas
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

#define OV_BIPT_openaas_Folder OV_INSTPTR_ov_domain
#define OV_BVPT_openaas_Folder OV_VTBLPTR_ov_domain

#define OV_INSTBODY_openaas_Folder \
    OV_INSTBODY_ov_domain

#define OV_CIB_openaas_Folder \
    OV_CIB_ov_domain \
    int is_of_class_openaas_Folder:1;

#define OV_STATICINSTBODY_openaas_Folder

#define OV_BIPT_openaas_SubModel OV_INSTPTR_ov_domain
#define OV_BVPT_openaas_SubModel OV_VTBLPTR_ov_domain

#define OV_INSTBODY_openaas_SubModel \
    OV_INSTBODY_ov_domain \
    OV_UINT v_Revision; \
    OV_UINT v_Version; \
    OV_INST_identification_Identification p_ModelId;

#define OV_CIB_openaas_SubModel \
    OV_CIB_ov_domain \
    int is_of_class_openaas_SubModel:1;

#define OV_STATICINSTBODY_openaas_SubModel

#define OV_BIPT_openaas_AASComponentManager OV_INSTPTR_fb_functionblock
#define OV_BVPT_openaas_AASComponentManager OV_VTBLPTR_fb_functionblock

#define OV_INSTBODY_openaas_AASComponentManager \
    OV_INSTBODY_fb_functionblock \
    OV_UINT v_messageBoxSize; \
    OV_BOOL v_messageBoxIsFiFo; \
    OV_UINT v_state; \
    OV_BOOL v_registered; \
    OV_TIME_SPAN v_messageTimeOut; \
    OV_UINT v_messageCount; \
    OV_STRING v_errorText; \
    OV_BOOL v_reset; \
    OV_STRING v_receiverForMessageForwardedIdString; \
    OV_UINT v_receiverForMessageForwardedIdType; \
    OV_STRING v_senderForMessageForwardedIdString; \
    OV_UINT v_senderForMessageForwardedIdType; \
    OV_STRING v_MsgIdForMessageForwarded; \
    OV_STRING v_MsgIdForGetAASIdRequest; \
    OV_BOOL v_errorFlag; \
    OV_STRING v_errorMessage; \
    OV_STRING v_certificateDS; \
    OV_STRING v_securityKey; \
    OV_INST_MessageSys_inbox p_INBOX; \
    OV_INST_MessageSys_inbox p_OUTBOX;

#define OV_CIB_openaas_AASComponentManager \
    OV_CIB_fb_functionblock \
    int is_of_class_openaas_AASComponentManager:1;

#define OV_STATICINSTBODY_openaas_AASComponentManager

#define OV_BIPT_openaas_aas OV_INSTPTR_ov_domain
#define OV_BVPT_openaas_aas OV_VTBLPTR_ov_domain

#define OV_INSTBODY_openaas_aas \
    OV_INSTBODY_ov_domain \
    OV_INST_openaas_Folder p_Header; \
    OV_INST_openaas_Folder p_Body; \
    OV_INST_identification_Identification p_AASID; \
    OV_INST_identification_Identification p_AssetID; \
    OV_INST_openaas_AASComponentManager p_ComponentManager;

#define OV_CIB_openaas_aas \
    OV_CIB_ov_domain \
    int is_of_class_openaas_aas:1;

#define OV_STATICINSTBODY_openaas_aas

#define OV_BIPT_openaas_InterfaceDiscoveryServer OV_INSTPTR_ov_object
#define OV_BVPT_openaas_InterfaceDiscoveryServer OV_VTBLPTR_ov_object

#define OV_INSTBODY_openaas_InterfaceDiscoveryServer \
    OV_INSTBODY_ov_object \
    OV_STRING v_IPAddressServer; \
    OV_STRING v_IPAddressAASDiscoveryServer; \
    OV_STRING v_ManagerNameAASDiscoveryServer; \
    OV_STRING v_PathToAASDiscoveryServer; \
    OV_UINT v_OPCUANamespaceIndex;

#define OV_CIB_openaas_InterfaceDiscoveryServer \
    OV_CIB_ov_object \
    int is_of_class_openaas_InterfaceDiscoveryServer:1;

#define OV_STATICINSTBODY_openaas_InterfaceDiscoveryServer

#define OV_BIPT_openaas_AASConvertListType OV_INSTPTR_ov_object
#define OV_BVPT_openaas_AASConvertListType OV_VTBLPTR_ov_object

#define OV_INSTBODY_openaas_AASConvertListType \
    OV_INSTBODY_ov_object \
    OV_STRING v_AASIdString; \
    OV_UINT v_AASIdType; \
    OV_STRING v_AASPath;

#define OV_CIB_openaas_AASConvertListType \
    OV_CIB_ov_object \
    int is_of_class_openaas_AASConvertListType:1;

#define OV_STATICINSTBODY_openaas_AASConvertListType

#define OV_BIPT_openaas_modelmanager OV_INSTPTR_ov_domain
#define OV_BVPT_openaas_modelmanager OV_VTBLPTR_ov_domain

#define OV_INSTBODY_openaas_modelmanager \
    OV_INSTBODY_ov_domain \
    OV_STRING v_AASIdString; \
    OV_UINT v_AASIdType; \
    OV_STRING v_AASName; \
    OV_STRING v_AASAssetIdString; \
    OV_UINT v_AASAssetIdType; \
    OV_UINT v_AASStatus; \
    OV_BOOL v_AASCreate; \
    OV_BOOL v_AASDelete; \
    OV_STRING v_SMAASIdString; \
    OV_UINT v_SMAASIdType; \
    OV_STRING v_SMParentIdString; \
    OV_UINT v_SMParentIdType; \
    OV_STRING v_SMModelIdString; \
    OV_UINT v_SMModelIdType; \
    OV_STRING v_SMName; \
    OV_UINT v_SMRevision; \
    OV_UINT v_SMVersion; \
    OV_STRING v_SMIdString; \
    OV_UINT v_SMIdType; \
    OV_UINT v_SMStatus; \
    OV_BOOL v_SMCreate; \
    OV_BOOL v_SMDelete; \
    OV_STRING v_PVSLAASIdString; \
    OV_UINT v_PVSLAASIdType; \
    OV_STRING v_PVSLParentIdString; \
    OV_UINT v_PVSLParentIdType; \
    OV_STRING v_PVSLName; \
    OV_UINT v_PVSLMask; \
    OV_STRING v_PVSLCarrierIdString; \
    OV_UINT v_PVSLCarrierIdType; \
    OV_INT v_PVSLExpressionLogic; \
    OV_INT v_PVSLExpressionSemantic; \
    OV_STRING v_PVSLPropertyIdString; \
    OV_UINT v_PVSLPropertyIdType; \
    OV_INT v_PVSLView; \
    OV_INT v_PVSLVisibility; \
    OV_STRING v_PVSLIdString; \
    OV_UINT v_PVSLIdType; \
    OV_UINT v_PVSLStatus; \
    OV_BOOL v_PVSLCreate; \
    OV_BOOL v_PVSLDelete; \
    OV_STRING v_PVSAASIdString; \
    OV_UINT v_PVSAASIdType; \
    OV_STRING v_PVSListIdString; \
    OV_UINT v_PVSListIdType; \
    OV_STRING v_PVSName; \
    OV_ANY v_PVSValue; \
    OV_UINT v_PVSMask; \
    OV_STRING v_PVSCarrierIdString; \
    OV_UINT v_PVSCarrierIdType; \
    OV_INT v_PVSExpressionLogic; \
    OV_INT v_PVSExpressionSemantic; \
    OV_STRING v_PVSPropertyIdString; \
    OV_UINT v_PVSPropertyIdType; \
    OV_INT v_PVSView; \
    OV_INT v_PVSVisibility; \
    OV_STRING v_PVSIdString; \
    OV_UINT v_PVSIdType; \
    OV_UINT v_PVSStatus; \
    OV_BOOL v_PVSCreate; \
    OV_BOOL v_PVSDelete; \
    OV_UINT v_Status; \
    OV_UINT v_ListSize; \
    OV_UINT v_ListCount;

#define OV_CIB_openaas_modelmanager \
    OV_CIB_ov_domain \
    int is_of_class_openaas_modelmanager:1;

#define OV_STATICINSTBODY_openaas_modelmanager

#define OV_BIPT_openaas_simpleMessageCreator OV_INSTPTR_fb_functionblock
#define OV_BVPT_openaas_simpleMessageCreator OV_VTBLPTR_fb_functionblock

#define OV_INSTBODY_openaas_simpleMessageCreator \
    OV_INSTBODY_fb_functionblock \
    OV_STRING v_message; \
    OV_STRING v_targetPath;

#define OV_CIB_openaas_simpleMessageCreator \
    OV_CIB_fb_functionblock \
    int is_of_class_openaas_simpleMessageCreator:1;

#define OV_STATICINSTBODY_openaas_simpleMessageCreator

OV_TYPEDEF_INSTANCE(openaas_Folder);
OV_TYPEDEF_INSTANCE(openaas_SubModel);
OV_TYPEDEF_INSTANCE(openaas_AASComponentManager);
OV_TYPEDEF_INSTANCE(openaas_aas);
OV_TYPEDEF_INSTANCE(openaas_InterfaceDiscoveryServer);
OV_TYPEDEF_INSTANCE(openaas_AASConvertListType);
OV_TYPEDEF_INSTANCE(openaas_modelmanager);
OV_TYPEDEF_INSTANCE(openaas_simpleMessageCreator);

#include "openaas.ovf"

OV_FNCEXTERN OV_FNC_GETACCESS openaas_SubModel_getaccess;

OV_FNCEXTERN OV_FNC_GETACCESS openaas_AASComponentManager_getaccess;
OV_FNCEXTERN OV_FNC_CONSTRUCTOR openaas_AASComponentManager_constructor;
OV_FNCEXTERN OV_FNC_DESTRUCTOR openaas_AASComponentManager_destructor;
OV_FNCEXTERN FB_FNC_TYPEMETHOD openaas_AASComponentManager_typemethod;
OV_FNCEXTERN UA_FNC_SENDAASMESSAGEINSYSTEM openaas_AASComponentManager_sendMessage;

OV_FNCEXTERN OV_FNC_GETACCESS openaas_aas_getaccess;

OV_FNCEXTERN OV_FNC_CONSTRUCTOR openaas_InterfaceDiscoveryServer_constructor;
OV_FNCEXTERN OV_FNC_DESTRUCTOR openaas_InterfaceDiscoveryServer_destructor;
OV_FNCEXTERN OV_FNC_GETACCESS openaas_InterfaceDiscoveryServer_getaccess;

OV_FNCEXTERN OV_FNC_GETACCESS openaas_AASConvertListType_getaccess;

OV_FNCEXTERN UA_FNC_CREATEAAS openaas_modelmanager_createAAS;
OV_FNCEXTERN UA_FNC_DELETEAAS openaas_modelmanager_deleteAAS;
OV_FNCEXTERN UA_FNC_CREATESUBMODEL openaas_modelmanager_createSubModel;
OV_FNCEXTERN UA_FNC_DELETESUBMODEL openaas_modelmanager_deleteSubModel;
OV_FNCEXTERN UA_FNC_CREATEPVSL openaas_modelmanager_createPVSL;
OV_FNCEXTERN UA_FNC_DELETEPVSL openaas_modelmanager_deletePVSL;
OV_FNCEXTERN UA_FNC_CREATEPVS openaas_modelmanager_createPVS;
OV_FNCEXTERN UA_FNC_DELETEPVS openaas_modelmanager_deletePVS;
OV_FNCEXTERN UA_FNC_GETPVS openaas_modelmanager_getPVS;
OV_FNCEXTERN UA_FNC_SETPVS openaas_modelmanager_setPVS;
OV_FNCEXTERN UA_FNC_GETCOREDATA openaas_modelmanager_getCoreData;
OV_FNCEXTERN UA_FNC_OVRESULTTOAASSTATUSCODE openaas_modelmanager_ovresultToAASStatusCode;
OV_FNCEXTERN OPENAAS_FNC_AASCONVERTLISTGET openaas_modelmanager_AASConvertListGet;
OV_FNCEXTERN OPENAAS_FNC_AASCONVERTLISTADD openaas_modelmanager_AASConvertListAdd;
OV_FNCEXTERN OPENAAS_FNC_AASCONVERTLISTDELETE openaas_modelmanager_AASConvertListDelete;
OV_FNCEXTERN OV_FNC_GETACCESS openaas_modelmanager_getaccess;
OV_FNCEXTERN OV_FNC_CONSTRUCTOR openaas_modelmanager_constructor;

OV_FNCEXTERN FB_FNC_TYPEMETHOD openaas_simpleMessageCreator_typemethod;

#define OV_VTBLBODY_openaas_Folder \
    OV_VTBLBODY_ov_domain

#define OV_VTBLBODY_openaas_SubModel \
    OV_VTBLBODY_ov_domain

#define OV_VTBLBODY_openaas_AASComponentManager \
    OV_VTBLBODY_fb_functionblock \
    UA_FNC_SENDAASMESSAGEINSYSTEM* m_sendMessage;

#define OV_VTBLBODY_openaas_aas \
    OV_VTBLBODY_ov_domain

#define OV_VTBLBODY_openaas_InterfaceDiscoveryServer \
    OV_VTBLBODY_ov_object

#define OV_VTBLBODY_openaas_AASConvertListType \
    OV_VTBLBODY_ov_object

#define OV_VTBLBODY_openaas_modelmanager \
    OV_VTBLBODY_ov_domain \
    UA_FNC_CREATEAAS* m_createAAS; \
    UA_FNC_DELETEAAS* m_deleteAAS; \
    UA_FNC_CREATESUBMODEL* m_createSubModel; \
    UA_FNC_DELETESUBMODEL* m_deleteSubModel; \
    UA_FNC_CREATEPVSL* m_createPVSL; \
    UA_FNC_DELETEPVSL* m_deletePVSL; \
    UA_FNC_CREATEPVS* m_createPVS; \
    UA_FNC_DELETEPVS* m_deletePVS; \
    UA_FNC_GETPVS* m_getPVS; \
    UA_FNC_SETPVS* m_setPVS; \
    UA_FNC_GETCOREDATA* m_getCoreData; \
    UA_FNC_OVRESULTTOAASSTATUSCODE* m_ovresultToAASStatusCode; \
    OPENAAS_FNC_AASCONVERTLISTGET* m_AASConvertListGet; \
    OPENAAS_FNC_AASCONVERTLISTADD* m_AASConvertListAdd; \
    OPENAAS_FNC_AASCONVERTLISTDELETE* m_AASConvertListDelete;

#define OV_VTBLBODY_openaas_simpleMessageCreator \
    OV_VTBLBODY_fb_functionblock

OV_TYPEDEF_VTABLE(openaas_Folder);
OV_TYPEDEF_VTABLE(openaas_SubModel);
OV_TYPEDEF_VTABLE(openaas_AASComponentManager);
OV_TYPEDEF_VTABLE(openaas_aas);
OV_TYPEDEF_VTABLE(openaas_InterfaceDiscoveryServer);
OV_TYPEDEF_VTABLE(openaas_AASConvertListType);
OV_TYPEDEF_VTABLE(openaas_modelmanager);
OV_TYPEDEF_VTABLE(openaas_simpleMessageCreator);

OV_DLLFNCEXPORT OV_RESULT openaas_AASComponentManager_reset_set(
    OV_INSTPTR_openaas_AASComponentManager pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_AASIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_AASIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_AASName_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_AASAssetIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_AASAssetIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_AASCreate_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_AASDelete_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_SMAASIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_SMAASIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_SMParentIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_SMParentIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_SMModelIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_SMModelIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_SMName_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_SMRevision_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_SMVersion_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_SMIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_SMIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_SMCreate_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_SMDelete_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLAASIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLAASIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLParentIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLParentIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLName_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLMask_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLCarrierIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLCarrierIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLExpressionLogic_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_INT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLExpressionSemantic_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_INT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLPropertyIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLPropertyIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLView_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_INT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLVisibility_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_INT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLCreate_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSLDelete_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSAASIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSAASIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSListIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSListIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSName_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSValue_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_ANY *pvalue
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSMask_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSCarrierIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSCarrierIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSExpressionLogic_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_INT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSExpressionSemantic_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_INT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSPropertyIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSPropertyIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSView_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_INT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSVisibility_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_INT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSIdString_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSIdType_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_UINT value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSCreate_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_BOOL value
);

OV_DLLFNCEXPORT OV_RESULT openaas_modelmanager_PVSDelete_set(
    OV_INSTPTR_openaas_modelmanager pobj,
    const OV_BOOL value
);

extern OV_CLASS_DEF OV_CLASS_DEF_openaas_Folder;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openaas_Folder;

extern OV_CLASS_DEF OV_CLASS_DEF_openaas_SubModel;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openaas_SubModel;

extern OV_CLASS_DEF OV_CLASS_DEF_openaas_AASComponentManager;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openaas_AASComponentManager;

extern OV_CLASS_DEF OV_CLASS_DEF_openaas_aas;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openaas_aas;

extern OV_CLASS_DEF OV_CLASS_DEF_openaas_InterfaceDiscoveryServer;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openaas_InterfaceDiscoveryServer;

extern OV_CLASS_DEF OV_CLASS_DEF_openaas_AASConvertListType;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openaas_AASConvertListType;

extern OV_CLASS_DEF OV_CLASS_DEF_openaas_modelmanager;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openaas_modelmanager;

extern OV_CLASS_DEF OV_CLASS_DEF_openaas_simpleMessageCreator;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_openaas_simpleMessageCreator;

extern OV_LIBRARY_DEF OV_LIBRARY_DEF_openaas;

OV_RESULT ov_library_setglobalvars_openaas(void);

OV_DLLFNCEXPORT OV_LIBRARY_DEF *ov_library_open_openaas(void);

#undef OV_VAREXTERN
#undef OV_FNCEXTERN

#ifdef __cplusplus
}
#endif

#endif

/*
*   End of file
*/