include ../includesied.mk

IEDINST = 20

PROJECT_BINARY_NAME = ied$(IEDINST)
MODELFILES = static_model.c
PROJECT_SOURCES = ied$(IEDINST).cpp $(MODELFILES)
ICDFILE = ied$(IEDINST)scl.icd

FLAGS = -w -pthread -lmysqlpp -lmysqlclient

all: $(MODELFILES) $(PROJECT_BINARY_NAME)

$(MODELFILES): $(ICDFILE)
	@echo "Generating $@ model..."
	java -jar $(MODELGEN) $(ICDFILE)

$(PROJECT_BINARY_NAME): $(PROJECT_SOURCES) $(LIBIEC) $(PUGI)
	@echo "Compiling $@..."
	$(CXX) -o $@ $(PROJECT_SOURCES) $(LIBIEC) $(PUGI) $(INCLUDES) $(FLAGS)

.PHONY = all