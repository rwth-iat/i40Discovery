#******************************************************************************
#*
#*   FILE
#*   ----
#*   generic.mk - Makefile for user libs (generic part)
#******************************************************************************
#*
#*   This file is generated by the 'acplt_makmak' command
#*
#******************************************************************************

#	Directories
#	-----------

MODEL_DIR         = ../../model/
SOURCE_DIR        = ../../source/
INCLUDE_DIR       = ../../include/
ROOT_DIR          = /home/ubuntu/AcpltDevelopmentKit/acplt/
BASE_DIR          = $(ROOT_DIR)
BASE_INC_DIR      = $(BASE_DIR)system/sysdevbase/ov/include/
BASE_LIB_DIR      = $(BASE_DIR)system/sysdevbase/ov/lib/
BASE_MODEL_DIR    = $(BASE_DIR)system/sysdevbase/ov/model/
BIN_DIR           = $(ROOT_DIR)system/sysbin/
GIT_DIR           = /home/ubuntu/AcpltDevelopmentKit/acplt/git/
USER_DIR          = /home/ubuntu/AcpltDevelopmentKit/acplt/dev/
USERLIB_DIR       = $(ROOT_DIR)system/addonlibs/
SYS_DIR           = $(BASE_DIR)system/sysdevbase/
SYSLIB_DIR        = $(ROOT_DIR)system/syslibs/
KSBASE_MODEL_DIR           = $(GIT_DIR)rte/syslibs/comm/ksbase/model/
KSBASE_INCLUDE_DIR         = $(GIT_DIR)rte/syslibs/comm/ksbase/include/
KSHTTP_MODEL_DIR           = $(GIT_DIR)rte/syslibs/comm/kshttp/model/
KSHTTP_INCLUDE_DIR         = $(GIT_DIR)rte/syslibs/comm/kshttp/include/
KSAPI_MODEL_DIR           = $(GIT_DIR)rte/addonlibs/commclient/ksapi/model/
KSAPI_INCLUDE_DIR         = $(GIT_DIR)rte/addonlibs/commclient/ksapi/include/
MESSAGESYS_MODEL_DIR           = $(GIT_DIR)rte/addonlibs/comm/MessageSys/model/
MESSAGESYS_INCLUDE_DIR         = $(GIT_DIR)rte/addonlibs/comm/MessageSys/include/
FB_MODEL_DIR           = $(GIT_DIR)rte/syslibs/functionblock/fb/model/
FB_INCLUDE_DIR         = $(GIT_DIR)rte/syslibs/functionblock/fb/include/
IDENTIFICATION_MODEL_DIR           = $(GIT_DIR)rte/addonlibs/administration/identification/model/
IDENTIFICATION_INCLUDE_DIR         = $(GIT_DIR)rte/addonlibs/administration/identification/include/
PROPERTYVALUESTATEMENT_MODEL_DIR           = $(GIT_DIR)rte/addonlibs/administration/propertyValueStatement/model/
PROPERTYVALUESTATEMENT_INCLUDE_DIR         = $(GIT_DIR)rte/addonlibs/administration/propertyValueStatement/include/
LIFECYCLEENTRY_MODEL_DIR           = $(GIT_DIR)rte/addonlibs/administration/lifeCycleEntry/model/
LIFECYCLEENTRY_INCLUDE_DIR         = $(GIT_DIR)rte/addonlibs/administration/lifeCycleEntry/include/
OPENAASDISCOVERYSERVER_MODEL_DIR           = $(GIT_DIR)rte/addonlibs/administration/openAASDiscoveryServer/model/
OPENAASDISCOVERYSERVER_INCLUDE_DIR         = $(GIT_DIR)rte/addonlibs/administration/openAASDiscoveryServer/include/
OPENAAS_MODEL_DIR           = $(GIT_DIR)rte/addonlibs/administration/openaas/model/
OPENAAS_INCLUDE_DIR         = $(GIT_DIR)rte/addonlibs/administration/openaas/include/
#   Rules
#   -----

.SUFFIXES:
.SUFFIXES: $(_C) .h .ovm $(_LIB) $(_DLL) $(_OBJ)

#	Paths and defines
#	-----------------

ifeq ($(COMPILER), MSVC)
INCLUDES  = /I$(BASE_INC_DIR) /I$(BASE_MODEL_DIR) \
			/I$(KSBASE_MODEL_DIR) /I$(KSBASE_INCLUDE_DIR) \
			/I$(KSHTTP_MODEL_DIR) /I$(KSHTTP_INCLUDE_DIR) \
			/I$(KSAPI_MODEL_DIR) /I$(KSAPI_INCLUDE_DIR) \
			/I$(MESSAGESYS_MODEL_DIR) /I$(MESSAGESYS_INCLUDE_DIR) \
			/I$(FB_MODEL_DIR) /I$(FB_INCLUDE_DIR) \
			/I$(IDENTIFICATION_MODEL_DIR) /I$(IDENTIFICATION_INCLUDE_DIR) \
			/I$(PROPERTYVALUESTATEMENT_MODEL_DIR) /I$(PROPERTYVALUESTATEMENT_INCLUDE_DIR) \
			/I$(LIFECYCLEENTRY_MODEL_DIR) /I$(LIFECYCLEENTRY_INCLUDE_DIR) \
			/I$(OPENAASDISCOVERYSERVER_MODEL_DIR) /I$(OPENAASDISCOVERYSERVER_INCLUDE_DIR) \
			/I$(OPENAAS_MODEL_DIR) /I$(OPENAAS_INCLUDE_DIR) \
			/I$(MODEL_DIR) /I$(INCLUDE_DIR)
else
INCLUDES  = -I$(BASE_INC_DIR) -I$(BASE_MODEL_DIR)\
			-I$(KSBASE_MODEL_DIR) -I$(KSBASE_INCLUDE_DIR) \
			-I$(KSHTTP_MODEL_DIR) -I$(KSHTTP_INCLUDE_DIR) \
			-I$(KSAPI_MODEL_DIR) -I$(KSAPI_INCLUDE_DIR) \
			-I$(MESSAGESYS_MODEL_DIR) -I$(MESSAGESYS_INCLUDE_DIR) \
			-I$(FB_MODEL_DIR) -I$(FB_INCLUDE_DIR) \
			-I$(IDENTIFICATION_MODEL_DIR) -I$(IDENTIFICATION_INCLUDE_DIR) \
			-I$(PROPERTYVALUESTATEMENT_MODEL_DIR) -I$(PROPERTYVALUESTATEMENT_INCLUDE_DIR) \
			-I$(LIFECYCLEENTRY_MODEL_DIR) -I$(LIFECYCLEENTRY_INCLUDE_DIR) \
			-I$(OPENAASDISCOVERYSERVER_MODEL_DIR) -I$(OPENAASDISCOVERYSERVER_INCLUDE_DIR) \
			-I$(OPENAAS_MODEL_DIR) -I$(OPENAAS_INCLUDE_DIR) \
			-I$(MODEL_DIR) -I$(INCLUDE_DIR)
endif

VPATH     = $(MODEL_DIR) $(SOURCE_DIR) $(INCLUDE_DIR) \
			$(KSBASE_MODEL_DIR) $(KSBASE_INCLUDE_DIR) \
			$(KSHTTP_MODEL_DIR) $(KSHTTP_INCLUDE_DIR) \
			$(KSAPI_MODEL_DIR) $(KSAPI_INCLUDE_DIR) \
			$(MESSAGESYS_MODEL_DIR) $(MESSAGESYS_INCLUDE_DIR) \
			$(FB_MODEL_DIR) $(FB_INCLUDE_DIR) \
			$(IDENTIFICATION_MODEL_DIR) $(IDENTIFICATION_INCLUDE_DIR) \
			$(PROPERTYVALUESTATEMENT_MODEL_DIR) $(PROPERTYVALUESTATEMENT_INCLUDE_DIR) \
			$(LIFECYCLEENTRY_MODEL_DIR) $(LIFECYCLEENTRY_INCLUDE_DIR) \
			$(OPENAASDISCOVERYSERVER_MODEL_DIR) $(OPENAASDISCOVERYSERVER_INCLUDE_DIR) \
			$(OPENAAS_MODEL_DIR) $(OPENAAS_INCLUDE_DIR) \
			$(BASE_INC_DIR) $(BASE_MODEL_DIR)

ifeq ($(COMPILER), MSVC)
DEFINES    = /DOV_SYSTEM_$(SYSTEM)=1 /DPLT_SYSTEM_$(SYSTEM)=1 /Dov_library_open_openaasHTTP=ov_library_open_openaasHTTP_old
else
DEFINES    = -DOV_SYSTEM_$(SYSTEM)=1 -DPLT_SYSTEM_$(SYSTEM)=1 -Dov_library_open_openaasHTTP=ov_library_open_openaasHTTP_old
endif

#	User library
#	------------

LIBRARY        = openaasHTTP
USERLIB_C      = $(LIBRARY)$(_C)
USERLIB_LIB    = $(LIBRARY)$(_LIB)
USERLIB_DLL    = $(LIBRARY)$(_DLL)

#	Targets
#	-------
USERLIB_SRC = $(USERLIB_C) $(wildcard $(SOURCE_DIR)*$(_C))
USERLIB_OBJ = $(foreach source, $(USERLIB_SRC), $(basename $(notdir $(source)))$(_OBJ))

HEADERS = \
	ov.h \
	ksbase.h \
	kshttp.h \
	ksapi.h \
	MessageSys.h \
	fb.h \
	identification.h \
	propertyValueStatement.h \
	lifeCycleEntry.h \
	openAASDiscoveryServer.h \
	openaas.h \
	openaasHTTP.h 

ifndef STATIC_ONLY
TARGETS = \
	$(HEADERS) \
	$(USERLIB_LIB) \
	$(USERLIB_DLL)
else
TARGETS = \
	$(HEADERS) \
	$(USERLIB_LIB)
endif

SOURCES = \
	ov.h \
	ksbase.h \
	kshttp.h \
	ksapi.h \
	MessageSys.h \
	fb.h \
	identification.h \
	propertyValueStatement.h \
	lifeCycleEntry.h \
	openAASDiscoveryServer.h \
	openaas.h \
	$(USERLIB_SRC)

