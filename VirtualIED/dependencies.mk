#pwd
IED_HOME = $(shell pwd)

#for external libraries
LIBS_DIR = libs

LIBIEC_HOME = $(IED_HOME)/$(LIBS_DIR)/libiec61850
LIBIEC = $(LIBIEC_HOME)/build/libiec61850.a
MODELGEN = $(LIBIEC_HOME)/tools/model_generator/genmodel.jar

#includes
include $(LIBIEC_HOME)/make/stack_includes.mk
INCLUDES += -I/usr/include/mysql
INCLUDES += -I$(IED_HOME)
INCLUDES += -I$(IED_HOME)/ProtectionLogics
INCLUDES += -I$(IED_HOME)/CommModules
INCLUDES += -I/usr/include/nlohmann


export INCLUDES

#flags
FLAGS := -w -pthread -lmysqlclient -lmysqlpp 
export FLAGS

#others
ICDFILE = config_files/ied0scl.icd
