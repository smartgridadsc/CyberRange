#pwd
IED_HOME = $(shell pwd)

#for external libraries
LIBS_DIR = $(IED_HOME)/libs

LIBIEC_HOME = $(LIBS_DIR)/libiec61850
LIBIEC = $(LIBIEC_HOME)/build/libiec61850.a
MODELGEN = $(LIBIEC_HOME)/tools/model_generator/genmodel.jar

RAPIDXML_HOME = $(LIBS_DIR)/rapidxml-1.13

#includes
include $(LIBIEC_HOME)/make/stack_includes.mk
INCLUDES += -I/usr/include/mysql++
INCLUDES += -I/usr/include/mysql
INCLUDES += -I$(IED_HOME)
INCLUDES += -I$(IED_HOME)/ProtectionLogics
INCLUDES += -I$(IED_HOME)/CommModules
INCLUDES += -I$(IED_HOME)/MMSProtection
INCLUDES += -I/usr/include/nlohmann
INCLUDES += -I$(RAPIDXML_HOME)

export INCLUDES

#flags
FLAGS := -w -pthread -lmysqlclient -lmysqlpp 

export FLAGS

#others
CONFIG_DIR = $(IED_HOME)/config_files
ICDFILE = $(CONFIG_DIR)/$(shell cat $(CONFIG_DIR)/active_icd)
