/*
*   This file was generated by the ACPLT/OV C-Code Generator.
*
*   C-Code Generator version: 1.6.4
*   ACPLT/OV library version: 2.0.0
*   Date of file generation:   9-May-2018 (10:23:17)
*
*   DO NOT EDIT THIS FILE!
*/

#ifndef OV_LIBRARY_MessageSys_H_INCLUDED
#define OV_LIBRARY_MessageSys_H_INCLUDED

#include "libov/ov_library.h"
#include "libov/ov_structure.h"
#include "libov/ov_class.h"
#include "libov/ov_association.h"
#include "libov/ov_variable.h"
#include "libov/ov_part.h"
#include "libov/ov_operation.h"
#include "ov.h"
#include "ksbase.h"
#include "ksapi.h"

#include "MessageSys.ovt"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef OV_COMPILE_LIBRARY_MessageSys
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

#define OV_PPT_MessageSys_MsgDelivery2CurrentMessage struct OV_INST_MessageSys_MsgDelivery*
#define OV_CPT_MessageSys_MsgDelivery2CurrentMessage struct OV_INST_MessageSys_Message*
#define OV_PCI_MessageSys_MsgDelivery2CurrentMessage is_of_class_MessageSys_MsgDelivery
#define OV_CCI_MessageSys_MsgDelivery2CurrentMessage is_of_class_MessageSys_Message

#define OV_PPT_MessageSys_MsgDelivery2Message struct OV_INST_MessageSys_MsgDelivery*
#define OV_CPT_MessageSys_MsgDelivery2Message struct OV_INST_MessageSys_Message*
#define OV_PCI_MessageSys_MsgDelivery2Message is_of_class_MessageSys_MsgDelivery
#define OV_CCI_MessageSys_MsgDelivery2Message is_of_class_MessageSys_Message

#define OV_PPT_MessageSys_Message2Channel struct OV_INST_MessageSys_Message*
#define OV_CPT_MessageSys_Message2Channel struct OV_INST_ksbase_Channel*
#define OV_PCI_MessageSys_Message2Channel is_of_class_MessageSys_Message
#define OV_CCI_MessageSys_Message2Channel is_of_class_ksbase_Channel

#define OV_PPT_MessageSys_SendExtension2Message struct OV_INST_MessageSys_MsgSendExtension*
#define OV_CPT_MessageSys_SendExtension2Message struct OV_INST_MessageSys_Message*
#define OV_PCI_MessageSys_SendExtension2Message is_of_class_MessageSys_MsgSendExtension
#define OV_CCI_MessageSys_SendExtension2Message is_of_class_MessageSys_Message

#define OV_BIPT_MessageSys_MsgDelivery OV_INSTPTR_ksbase_ComTask
#define OV_BVPT_MessageSys_MsgDelivery OV_VTBLPTR_ksbase_ComTask

#define OV_INSTBODY_MessageSys_MsgDelivery \
    OV_INSTBODY_ksbase_ComTask \
    OV_STRING v_retrieveMessage; \
    OV_STRING v_regComponentPath; \
    OV_UINT v_sendTimeOut; \
    OV_TIME v_sendTime; \
    OV_INST_ov_domain p_Channels;

#define OV_CIB_MessageSys_MsgDelivery \
    OV_CIB_ksbase_ComTask \
    int is_of_class_MessageSys_MsgDelivery:1;

#define OV_STATICINSTBODY_MessageSys_MsgDelivery

#define OV_BIPT_MessageSys_Message OV_INSTPTR_ov_object
#define OV_BVPT_MessageSys_Message OV_VTBLPTR_ov_object

#define OV_INSTBODY_MessageSys_Message \
    OV_INSTBODY_ov_object \
    OV_STRING v_senderAddress; \
    OV_STRING v_receiverAddress; \
    OV_STRING v_senderName; \
    OV_STRING v_receiverName; \
    OV_STRING v_senderComponent; \
    OV_STRING v_receiverComponent; \
    OV_INT v_msgStatus; \
    OV_STRING v_msgID; \
    OV_STRING v_refMsgID; \
    OV_STRING v_auth; \
    OV_STRING v_msgBody; \
    MESSAGESYS_SENDBY v_sendBy; \
    OV_BOOL v_expectAnswer;

#define OV_CIB_MessageSys_Message \
    OV_CIB_ov_object \
    int is_of_class_MessageSys_Message:1;

#define OV_STATICINSTBODY_MessageSys_Message

#define OV_BIPT_MessageSys_MsgSendExtension OV_INSTPTR_ksbase_DataHandler
#define OV_BVPT_MessageSys_MsgSendExtension OV_VTBLPTR_ksbase_DataHandler

#define OV_INSTBODY_MessageSys_MsgSendExtension \
    OV_INSTBODY_ksbase_DataHandler

#define OV_CIB_MessageSys_MsgSendExtension \
    OV_CIB_ksbase_DataHandler \
    int is_of_class_MessageSys_MsgSendExtension:1;

#define OV_STATICINSTBODY_MessageSys_MsgSendExtension

#define OV_BIPT_MessageSys_inbox OV_INSTPTR_ov_domain
#define OV_BVPT_MessageSys_inbox OV_VTBLPTR_ov_domain

#define OV_INSTBODY_MessageSys_inbox \
    OV_INSTBODY_ov_domain \
    OV_BOOL v_holdConnection;

#define OV_CIB_MessageSys_inbox \
    OV_CIB_ov_domain \
    int is_of_class_MessageSys_inbox:1;

#define OV_STATICINSTBODY_MessageSys_inbox

#define OV_BIPT_MessageSys_msgIdentificator OV_INSTPTR_ksbase_ProtocolIdentificator
#define OV_BVPT_MessageSys_msgIdentificator OV_VTBLPTR_ksbase_ProtocolIdentificator

#define OV_INSTBODY_MessageSys_msgIdentificator \
    OV_INSTBODY_ksbase_ProtocolIdentificator

#define OV_CIB_MessageSys_msgIdentificator \
    OV_CIB_ksbase_ProtocolIdentificator \
    int is_of_class_MessageSys_msgIdentificator:1;

#define OV_STATICINSTBODY_MessageSys_msgIdentificator

#define OV_BIPT_MessageSys_msgHandler OV_INSTPTR_ksbase_ClientHandler
#define OV_BVPT_MessageSys_msgHandler OV_VTBLPTR_ksbase_ClientHandler

#define OV_INSTBODY_MessageSys_msgHandler \
    OV_INSTBODY_ksbase_ClientHandler \
    OV_UINT v_connectionTimeout; \
    OV_UINT v_timeoutIncomplete;

#define OV_CIB_MessageSys_msgHandler \
    OV_CIB_ksbase_ClientHandler \
    int is_of_class_MessageSys_msgHandler:1;

#define OV_STATICINSTBODY_MessageSys_msgHandler

OV_TYPEDEF_INSTANCE(MessageSys_MsgDelivery);
OV_TYPEDEF_INSTANCE(MessageSys_Message);
OV_TYPEDEF_INSTANCE(MessageSys_MsgSendExtension);
OV_TYPEDEF_INSTANCE(MessageSys_inbox);
OV_TYPEDEF_INSTANCE(MessageSys_msgIdentificator);
OV_TYPEDEF_INSTANCE(MessageSys_msgHandler);

#include "MessageSys.ovf"

OV_FNCEXTERN OV_FNC_CONSTRUCTOR MessageSys_MsgDelivery_constructor;
OV_FNCEXTERN KSBASE_FNC_TYPEMETHOD MessageSys_MsgDelivery_typemethod;
OV_FNCEXTERN SENDMESSAGE_FNC MessageSys_MsgDelivery_sendMessage;
OV_FNCEXTERN MSGSYS_FINDSERVICE_FNC MessageSys_MsgDelivery_findService;

OV_FNCEXTERN OV_FNC_CONSTRUCTOR MessageSys_Message_constructor;
OV_FNCEXTERN OV_FNC_GETACCESS MessageSys_Message_getaccess;

OV_FNCEXTERN MSGSYS_SENDMSG MessageSys_MsgSendExtension_sendMessage;

OV_FNCEXTERN OV_FNC_CONSTRUCTOR MessageSys_msgIdentificator_constructor;
OV_FNCEXTERN KSBASE_FNC_IDENTIFY MessageSys_msgIdentificator_identify;
OV_FNCEXTERN KSBASE_FNC_CREATECH MessageSys_msgIdentificator_createClientHandler;

OV_FNCEXTERN OV_FNC_STARTUP MessageSys_msgHandler_startup;
OV_FNCEXTERN OV_FNC_SHUTDOWN MessageSys_msgHandler_shutdown;
OV_FNCEXTERN KSBASE_FNC_HANDLEREQUEST MessageSys_msgHandler_HandleRequest;

#define OV_VTBLBODY_MessageSys_MsgDelivery \
    OV_VTBLBODY_ksbase_ComTask \
    SENDMESSAGE_FNC* m_sendMessage; \
    MSGSYS_FINDSERVICE_FNC* m_findService;

#define OV_VTBLBODY_MessageSys_Message \
    OV_VTBLBODY_ov_object

#define OV_VTBLBODY_MessageSys_MsgSendExtension \
    OV_VTBLBODY_ksbase_DataHandler \
    MSGSYS_SENDMSG* m_sendMessage;

#define OV_VTBLBODY_MessageSys_inbox \
    OV_VTBLBODY_ov_domain

#define OV_VTBLBODY_MessageSys_msgIdentificator \
    OV_VTBLBODY_ksbase_ProtocolIdentificator

#define OV_VTBLBODY_MessageSys_msgHandler \
    OV_VTBLBODY_ksbase_ClientHandler

OV_TYPEDEF_VTABLE(MessageSys_MsgDelivery);
OV_TYPEDEF_VTABLE(MessageSys_Message);
OV_TYPEDEF_VTABLE(MessageSys_MsgSendExtension);
OV_TYPEDEF_VTABLE(MessageSys_inbox);
OV_TYPEDEF_VTABLE(MessageSys_msgIdentificator);
OV_TYPEDEF_VTABLE(MessageSys_msgHandler);

OV_DLLFNCEXPORT OV_RESULT MessageSys_MsgDelivery_retrieveMessage_set(
    OV_INSTPTR_MessageSys_MsgDelivery pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_STRING MessageSys_Message_senderAddress_get(
    OV_INSTPTR_MessageSys_Message pobj
);

OV_DLLFNCEXPORT OV_RESULT MessageSys_Message_senderAddress_set(
    OV_INSTPTR_MessageSys_Message pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_STRING MessageSys_Message_receiverAddress_get(
    OV_INSTPTR_MessageSys_Message pobj
);

OV_DLLFNCEXPORT OV_RESULT MessageSys_Message_receiverAddress_set(
    OV_INSTPTR_MessageSys_Message pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_STRING MessageSys_Message_senderName_get(
    OV_INSTPTR_MessageSys_Message pobj
);

OV_DLLFNCEXPORT OV_RESULT MessageSys_Message_senderName_set(
    OV_INSTPTR_MessageSys_Message pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_STRING MessageSys_Message_receiverName_get(
    OV_INSTPTR_MessageSys_Message pobj
);

OV_DLLFNCEXPORT OV_RESULT MessageSys_Message_receiverName_set(
    OV_INSTPTR_MessageSys_Message pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_STRING MessageSys_Message_senderComponent_get(
    OV_INSTPTR_MessageSys_Message pobj
);

OV_DLLFNCEXPORT OV_RESULT MessageSys_Message_senderComponent_set(
    OV_INSTPTR_MessageSys_Message pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_STRING MessageSys_Message_receiverComponent_get(
    OV_INSTPTR_MessageSys_Message pobj
);

OV_DLLFNCEXPORT OV_RESULT MessageSys_Message_receiverComponent_set(
    OV_INSTPTR_MessageSys_Message pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_INT MessageSys_Message_msgStatus_get(
    OV_INSTPTR_MessageSys_Message pobj
);

OV_DLLFNCEXPORT OV_RESULT MessageSys_Message_msgStatus_set(
    OV_INSTPTR_MessageSys_Message pobj,
    const OV_INT value
);

OV_DLLFNCEXPORT OV_STRING MessageSys_Message_msgID_get(
    OV_INSTPTR_MessageSys_Message pobj
);

OV_DLLFNCEXPORT OV_RESULT MessageSys_Message_msgID_set(
    OV_INSTPTR_MessageSys_Message pobj,
    const OV_STRING value
);

OV_DLLFNCEXPORT OV_STRING MessageSys_Message_msgBody_get(
    OV_INSTPTR_MessageSys_Message pobj
);

OV_DLLFNCEXPORT OV_RESULT MessageSys_Message_msgBody_set(
    OV_INSTPTR_MessageSys_Message pobj,
    const OV_STRING value
);

OV_DECL_LINK(MessageSys_MsgDelivery2CurrentMessage);
OV_DECL_UNLINK(MessageSys_MsgDelivery2CurrentMessage);
OV_DECL_GETACCESS(MessageSys_MsgDelivery2CurrentMessage);

OV_DECL_LINK(MessageSys_MsgDelivery2Message);
OV_DECL_UNLINK(MessageSys_MsgDelivery2Message);
OV_DECL_GETACCESS(MessageSys_MsgDelivery2Message);

OV_DECL_LINK(MessageSys_Message2Channel);
OV_DECL_UNLINK(MessageSys_Message2Channel);
OV_DECL_GETACCESS(MessageSys_Message2Channel);

OV_DECL_LINK(MessageSys_SendExtension2Message);
OV_DECL_UNLINK(MessageSys_SendExtension2Message);
OV_DECL_GETACCESS(MessageSys_SendExtension2Message);

extern OV_CLASS_DEF OV_CLASS_DEF_MessageSys_MsgDelivery;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_MessageSys_MsgDelivery;

extern OV_CLASS_DEF OV_CLASS_DEF_MessageSys_Message;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_MessageSys_Message;

extern OV_CLASS_DEF OV_CLASS_DEF_MessageSys_MsgSendExtension;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_MessageSys_MsgSendExtension;

extern OV_CLASS_DEF OV_CLASS_DEF_MessageSys_inbox;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_MessageSys_inbox;

extern OV_CLASS_DEF OV_CLASS_DEF_MessageSys_msgIdentificator;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_MessageSys_msgIdentificator;

extern OV_CLASS_DEF OV_CLASS_DEF_MessageSys_msgHandler;
OV_VAREXTERN OV_INSTPTR_ov_class pclass_MessageSys_msgHandler;

extern OV_ASSOCIATION_DEF OV_ASSOCIATION_DEF_MessageSys_MsgDelivery2CurrentMessage;
OV_VAREXTERN OV_INSTPTR_ov_association passoc_MessageSys_MsgDelivery2CurrentMessage;

extern OV_ASSOCIATION_DEF OV_ASSOCIATION_DEF_MessageSys_MsgDelivery2Message;
OV_VAREXTERN OV_INSTPTR_ov_association passoc_MessageSys_MsgDelivery2Message;

extern OV_ASSOCIATION_DEF OV_ASSOCIATION_DEF_MessageSys_Message2Channel;
OV_VAREXTERN OV_INSTPTR_ov_association passoc_MessageSys_Message2Channel;

extern OV_ASSOCIATION_DEF OV_ASSOCIATION_DEF_MessageSys_SendExtension2Message;
OV_VAREXTERN OV_INSTPTR_ov_association passoc_MessageSys_SendExtension2Message;

extern OV_LIBRARY_DEF OV_LIBRARY_DEF_MessageSys;

OV_RESULT ov_library_setglobalvars_MessageSys(void);

OV_DLLFNCEXPORT OV_LIBRARY_DEF *ov_library_open_MessageSys(void);

#undef OV_VAREXTERN
#undef OV_FNCEXTERN

#ifdef __cplusplus
}
#endif

#endif

/*
*   End of file
*/
