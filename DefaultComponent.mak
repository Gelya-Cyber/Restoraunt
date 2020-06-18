
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x64$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x64 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files\IBM\Rhapsody\9.0\Share"
RHPROOT="C:\Program Files\IBM\Rhapsody\9.0"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\9.0x64\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=None

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  Main_Form.obj \
  WaiterAdd_Form.obj \
  OrderAdd_Form.obj \
  MenuAdd_Form.obj \
  Reservation_Form.obj \
  Authorization_Form.obj \
  Waiter_Form.obj \
  WaiterEdit_Form.obj \
  WaiterDelete_Form.obj \
  Order_Form.obj \
  OrderEdit_Form.obj \
  OrderDelete_Form.obj \
  Menu_Form.obj \
  CancelReservation_Form.obj \
  Table_Form.obj \
  MenuEdit_Form.obj \
  MenuDelete_Form.obj \
  Database.obj \
  Admin.obj \
  Waiter.obj \
  Client.obj \
  Default.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






Main_Form.obj : Main_Form.cpp Main_Form.h    Default.h Authorization_Form.h Waiter_Form.h Order_Form.h Menu_Form.h Table_Form.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Main_Form.obj" "Main_Form.cpp" 



WaiterAdd_Form.obj : WaiterAdd_Form.cpp WaiterAdd_Form.h    Default.h Waiter_Form.h Database.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WaiterAdd_Form.obj" "WaiterAdd_Form.cpp" 



OrderAdd_Form.obj : OrderAdd_Form.cpp OrderAdd_Form.h    Default.h Order_Form.h Database.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"OrderAdd_Form.obj" "OrderAdd_Form.cpp" 



MenuAdd_Form.obj : MenuAdd_Form.cpp MenuAdd_Form.h    Default.h Menu_Form.h Database.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MenuAdd_Form.obj" "MenuAdd_Form.cpp" 



Reservation_Form.obj : Reservation_Form.cpp Reservation_Form.h    Default.h Table_Form.h Database.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Reservation_Form.obj" "Reservation_Form.cpp" 



Authorization_Form.obj : Authorization_Form.cpp Authorization_Form.h    Default.h Main_Form.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Authorization_Form.obj" "Authorization_Form.cpp" 



Waiter_Form.obj : Waiter_Form.cpp Waiter_Form.h    Default.h Main_Form.h WaiterAdd_Form.h WaiterEdit_Form.h WaiterDelete_Form.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Waiter_Form.obj" "Waiter_Form.cpp" 



WaiterEdit_Form.obj : WaiterEdit_Form.cpp WaiterEdit_Form.h    Default.h Waiter_Form.h Database.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WaiterEdit_Form.obj" "WaiterEdit_Form.cpp" 



WaiterDelete_Form.obj : WaiterDelete_Form.cpp WaiterDelete_Form.h    Default.h Waiter_Form.h Database.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WaiterDelete_Form.obj" "WaiterDelete_Form.cpp" 



Order_Form.obj : Order_Form.cpp Order_Form.h    Default.h Main_Form.h OrderAdd_Form.h OrderDelete_Form.h OrderEdit_Form.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Order_Form.obj" "Order_Form.cpp" 



OrderEdit_Form.obj : OrderEdit_Form.cpp OrderEdit_Form.h    Default.h Order_Form.h Database.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"OrderEdit_Form.obj" "OrderEdit_Form.cpp" 



OrderDelete_Form.obj : OrderDelete_Form.cpp OrderDelete_Form.h    Default.h Order_Form.h Database.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"OrderDelete_Form.obj" "OrderDelete_Form.cpp" 



Menu_Form.obj : Menu_Form.cpp Menu_Form.h    Default.h Main_Form.h MenuAdd_Form.h MenuEdit_Form.h MenuDelete_Form.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Menu_Form.obj" "Menu_Form.cpp" 



CancelReservation_Form.obj : CancelReservation_Form.cpp CancelReservation_Form.h    Default.h Table_Form.h Database.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CancelReservation_Form.obj" "CancelReservation_Form.cpp" 



Table_Form.obj : Table_Form.cpp Table_Form.h    Default.h Main_Form.h Reservation_Form.h CancelReservation_Form.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Table_Form.obj" "Table_Form.cpp" 



MenuEdit_Form.obj : MenuEdit_Form.cpp MenuEdit_Form.h    Default.h Menu_Form.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MenuEdit_Form.obj" "MenuEdit_Form.cpp" 



MenuDelete_Form.obj : MenuDelete_Form.cpp MenuDelete_Form.h    Default.h Menu_Form.h Database.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MenuDelete_Form.obj" "MenuDelete_Form.cpp" 



Database.obj : Database.cpp Database.h    Default.h WaiterAdd_Form.h WaiterEdit_Form.h WaiterDelete_Form.h OrderAdd_Form.h OrderEdit_Form.h OrderDelete_Form.h MenuDelete_Form.h MenuAdd_Form.h Reservation_Form.h CancelReservation_Form.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Database.obj" "Database.cpp" 



Admin.obj : Admin.cpp Admin.h    Default.h Waiter.h Client.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Admin.obj" "Admin.cpp" 



Waiter.obj : Waiter.cpp Waiter.h    Default.h Client.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Waiter.obj" "Waiter.cpp" 



Client.obj : Client.cpp Client.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Client.obj" "Client.cpp" 



Default.obj : Default.cpp Default.h    Main_Form.h WaiterAdd_Form.h OrderAdd_Form.h MenuAdd_Form.h Reservation_Form.h Authorization_Form.h Waiter_Form.h WaiterEdit_Form.h WaiterDelete_Form.h Order_Form.h OrderEdit_Form.h OrderDelete_Form.h Menu_Form.h CancelReservation_Form.h Table_Form.h MenuEdit_Form.h MenuDelete_Form.h Database.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Default.obj" "Default.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist Main_Form.obj erase Main_Form.obj
	if exist WaiterAdd_Form.obj erase WaiterAdd_Form.obj
	if exist OrderAdd_Form.obj erase OrderAdd_Form.obj
	if exist MenuAdd_Form.obj erase MenuAdd_Form.obj
	if exist Reservation_Form.obj erase Reservation_Form.obj
	if exist Authorization_Form.obj erase Authorization_Form.obj
	if exist Waiter_Form.obj erase Waiter_Form.obj
	if exist WaiterEdit_Form.obj erase WaiterEdit_Form.obj
	if exist WaiterDelete_Form.obj erase WaiterDelete_Form.obj
	if exist Order_Form.obj erase Order_Form.obj
	if exist OrderEdit_Form.obj erase OrderEdit_Form.obj
	if exist OrderDelete_Form.obj erase OrderDelete_Form.obj
	if exist Menu_Form.obj erase Menu_Form.obj
	if exist CancelReservation_Form.obj erase CancelReservation_Form.obj
	if exist Table_Form.obj erase Table_Form.obj
	if exist MenuEdit_Form.obj erase MenuEdit_Form.obj
	if exist MenuDelete_Form.obj erase MenuDelete_Form.obj
	if exist Database.obj erase Database.obj
	if exist Admin.obj erase Admin.obj
	if exist Waiter.obj erase Waiter.obj
	if exist Client.obj erase Client.obj
	if exist Default.obj erase Default.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
