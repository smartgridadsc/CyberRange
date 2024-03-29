#executable
EXE := VIRTUAL_IED
SHELL := /bin/bash

export BUILD_DIR := $(shell pwd)/build
export DEPENDENCIES := dependencies.mk

include $(DEPENDENCIES)

#################################################

SUBDIRS := CommModules ProtectionLogics MMSProtection

MODEL_SRC := static_model.c
MODEL_OBJ := $(patsubst %.c,$(BUILD_DIR)/%.o, $(MODEL_SRC))

SRCS := $(wildcard *.cpp)
OBJS := $(patsubst %.cpp, $(BUILD_DIR)/%.o, $(SRCS))

#################################################

.PHONY: all thisdir $(SUBDIRS) clean check-all checks

all: $(BUILD_DIR) thisdir $(SUBDIRS) $(EXE)

$(BUILD_DIR):
	@echo "Creating build dir..."
	@mkdir -p $@

$(MODEL_SRC): $(ICDFILE)
	@echo "Generating $@ ..."
	java -jar $(MODELGEN) $(ICDFILE)

thisdir: $(MODEL_OBJ) $(OBJS)

$(MODEL_OBJ): $(MODEL_SRC)
	@echo "Building $@"
	@$(CXX) $(FLAGS) $(INCLUDES) -o $@ -c $< 

$(BUILD_DIR)/%.o: %.cpp
	@echo "Building $@"
	@$(CXX) $(FLAGS) $(INCLUDES) -o $@ -c $< 

$(SUBDIRS): 
	@$(MAKE) -C $@

$(EXE): $(BUILD_DIR) thisdir $(SUBDIRS)
	@echo "Building final executable $@"
	@$(CXX) -o $@ $(wildcard $(BUILD_DIR)/*.o) $(LIBIEC) $(FLAGS) 
	@echo ""
	@echo "Build Complete!"

clean:
	rm -f $(EXE)
	rm -f $(BUILD_DIR)/*
	rm -f $(patsubst %.c,%.*, $(MODEL_SRC))

check-all: checks

checks:
	@echo "Output directory:"
	@echo $(BUILD_DIR)
	@echo "--------------------------------------------"
	@echo "SRCS:"
	@echo $(SRCS)
	@echo $(MODEL_SRC)
	@echo "--------------------------------------------"
	@echo "OBJS"
	@echo $(OBJS)
	@echo $(MODEL_OBJ)
	@echo "--------------------------------------------"
	@echo "INCLUDES"
	@echo $(INCLUDES)
	@echo "--------------------------------------------"
