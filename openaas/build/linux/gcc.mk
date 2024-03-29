#******************************************************************************
#*
#*   FILE
#*   ----
#*   Makefile - Makefile fuer die Anwender-Bibliothek
#******************************************************************************
#*
#*   This file is generated by the 'acplt_makmak' command
#*
#******************************************************************************

#   Plattform
#   ---------
SYSTEM = LINUX
SYSDIR = linux

COMPILER = GNU

#	Filename conventions
#	--------------------

_C   = .c
_OBJ = .o
_LIB = .a
_EXE =

_DLL = .so
#	Include generic part
#	--------------------
include ../generic.mk

# Libraries
# ---------

# Swithces for additional libraries needed for dynamic linkage in Linux
ADD_LIBS_SWITCHES = ksbase$(_DLL) ksapi$(_DLL) identification$(_DLL) propertyValueStatement$(_DLL) lifeCycleEntry$(_DLL) MessageSys$(_DLL) openAASDiscoveryServer$(_DLL) fb$(_DLL)
ADD_LIBS += $(foreach lib, $(EXTRA_LIBS),$(lib))

#	Compiler
#	--------
OV_CODEGEN_EXE = $(BIN_DIR)ov_codegen$(_EXE)

ifneq "$(origin GCC_BIN_PREFIX)" "undefined"
CC = $(GCC_BIN_PREFIX)gcc
else
GCC_BIN_PREFIX		= 
endif

CC		?= $(GCC_BIN_PREFIX)gcc
ifneq ($(TARGET), debug)
	OPT = -O2 -fno-strict-aliasing
endif
CC_FLAGS	= -g -std=c99 -m32 -fPIC -Wall -Wno-attributes $(OPT) $(EXTRA_CC_FLAGS)
GCCVERSIONGTEQ4 := $(shell expr `$(CC) -dumpversion | cut -f1 -d.` \>= 4)
ifeq "$(GCCVERSIONGTEQ4)" "1"
    CC_FLAGS += -fvisibility=hidden
endif
CC_DEFINES	= $(DEFINES)
CC_INCLUDES	= $(INCLUDES) -I.
COMPILE_C	= $(CC) $(CC_FLAGS) $(CC_DEFINES) $(CC_INCLUDES) -c
LD		= $(CC) -shared -m32
AR			= $(GCC_BIN_PREFIX)ar
RANLIB		= $(GCC_BIN_PREFIX)ranlib
STRIP		= $(GCC_BIN_PREFIX)strip

templates: 
	-@rm ../../source/sourcetemplates/*$(_C)
	acplt_builder -l $(LIBRARY) $(MAKMAKOPTIONS)
	sed -i -e 's///' $(MODEL_DIR)$(LIBRARY).ovm
	$(OV_CODEGEN_EXE) -I $(BASE_MODEL_DIR) -I $(KSBASE_MODEL_DIR) -I $(KSAPI_MODEL_DIR) -I $(IDENTIFICATION_MODEL_DIR) -I $(PROPERTYVALUESTATEMENT_MODEL_DIR) -I $(LIFECYCLEENTRY_MODEL_DIR) -I $(MESSAGESYS_MODEL_DIR) -I $(OPENAASDISCOVERYSERVER_MODEL_DIR) -I $(FB_MODEL_DIR) -f $(MODEL_DIR)$(LIBRARY).ovm -l $(LIBRARY)

	-@echo  ==== New templates have been created! ====

all: $(TARGETS)
ifndef STATIC_ONLY
	$(STRIP) --strip-debug $(USERLIB_LIB)
	$(STRIP) --strip-debug $(USERLIB_DLL)
	cp $(USERLIB_DLL) $(USERLIB_DIR)
endif


debug: $(TARGETS)
ifndef STATIC_ONLY
	cp $(USERLIB_DLL) $(USERLIB_DIR)
endif


#   Rules
#   -----
$(LIBRARY).c $(LIBRARY).h: $(wildcard $(MODEL_DIR)$(LIBRARY).ov?) Makefile
	sed -i -e 's///' $(MODEL_DIR)$(LIBRARY).ovm
	$(OV_CODEGEN_EXE) -I $(BASE_MODEL_DIR) -I $(KSBASE_MODEL_DIR) -I $(KSAPI_MODEL_DIR) -I $(IDENTIFICATION_MODEL_DIR) -I $(PROPERTYVALUESTATEMENT_MODEL_DIR) -I $(LIFECYCLEENTRY_MODEL_DIR) -I $(MESSAGESYS_MODEL_DIR) -I $(OPENAASDISCOVERYSERVER_MODEL_DIR) -I $(FB_MODEL_DIR) -I $(MODEL_DIR) -f $(MODEL_DIR)$(LIBRARY).ovm -l $(notdir $(basename $<))

%.c %.h: %.ovm Makefile
	sed -i -e 's///' $<
	$(OV_CODEGEN_EXE) -I $(BASE_MODEL_DIR) -I $(KSBASE_MODEL_DIR) -I $(KSAPI_MODEL_DIR) -I $(IDENTIFICATION_MODEL_DIR) -I $(PROPERTYVALUESTATEMENT_MODEL_DIR) -I $(LIFECYCLEENTRY_MODEL_DIR) -I $(MESSAGESYS_MODEL_DIR) -I $(OPENAASDISCOVERYSERVER_MODEL_DIR) -I $(FB_MODEL_DIR) -I $(MODEL_DIR) -f $< -l $(notdir $(basename $<))


%.o: %.c
%.o: %.c $(HEADERS)
	$(COMPILE_C) -o $@ $<

$(USERLIB_LIB) : $(USERLIB_OBJ) $(ADD_LIBS)
	$(AR) rv $@ $^
	$(RANLIB) $@

$(USERLIB_DLL) : $(USERLIB_OBJ) $(ADD_LIBS)
	cp $(USERLIB_DIR)/ksbase$(_DLL) ksbase$(_DLL)
	cp $(USERLIB_DIR)/ksapi$(_DLL) ksapi$(_DLL)
	cp $(USERLIB_DIR)/identification$(_DLL) identification$(_DLL)
	cp $(USERLIB_DIR)/propertyValueStatement$(_DLL) propertyValueStatement$(_DLL)
	cp $(USERLIB_DIR)/lifeCycleEntry$(_DLL) lifeCycleEntry$(_DLL)
	cp $(USERLIB_DIR)/MessageSys$(_DLL) MessageSys$(_DLL)
	cp $(USERLIB_DIR)/openAASDiscoveryServer$(_DLL) openAASDiscoveryServer$(_DLL)
	cp $(SYSLIB_DIR)/fb$(_DLL) fb$(_DLL)
	$(LD) -o $@ $^ $(ADD_LIBS_SWITCHES) $(LD_FLAGS)

#	Aufraeumen
#	----------

clean:
	-@rm *$(_C) *.h *$(_LIB) *$(_DLL) *$(_OBJ)
