include ../libiec61850/make/stack_includes.mk

LIBIEC_HOME = ../libiec61850
LIBIEC = $(LIBIEC_HOME)/build/libiec61850.a
MODELGEN = $(LIBIEC_HOME)/tools/model_generator/genmodel.jar

PUGI_HOME = ../pugixml_src/src
PUGI = $(PUGI_HOME)/pugixml.cpp 

INCLUDES += -I$(PUGI_HOME)
INCLUDES += -I/usr/include/mysql++
INCLUDES += -I/usr/include/mysql


