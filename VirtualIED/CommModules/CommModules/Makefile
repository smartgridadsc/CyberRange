SRCS := $(wildcard *.cpp)
OBJS := $(patsubst %.cpp, $(BUILD_DIR)/%.o, $(SRCS))

ALL_OBJS += $(OBJS)

#################################################

.PHONY: all checks

all: $(OBJS)

$(BUILD_DIR)/%.o: %.cpp
	@echo "Building $@"
	@$(CXX) $(FLAGS) $(INCLUDES) -o $@ -c $< 

checks:
	@echo "Output directory:"
	@echo $(BUILD_DIR)
	@echo "--------------------------------------------"
	@echo "SRCS:"
	@echo $(SRCS)
	@echo "--------------------------------------------"
	@echo "OBJS"
	@echo $(OBJS)
	@echo "--------------------------------------------"
	@echo "INCLUDES"
	@echo $(INCLUDES)
	@echo "--------------------------------------------"