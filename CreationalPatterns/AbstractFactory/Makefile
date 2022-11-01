CXX := g++
CXXFLAGS := -c -Wall -Wextra

DOOR_DIR := door
WINDOW_DIR := window
ROOF_DIR := roof
FACTORY_DIR := factory
SRC_DIR := src
INC_DIR := inc
BIN_DIR := bin
OBJ_DIR := obj

EXE := $(BIN_DIR)/main

DOOR_SRC := $(wildcard $(SRC_DIR)/$(DOOR_DIR)/*.cpp)
WINDOW_SRC := $(wildcard $(SRC_DIR)/$(WINDOW_DIR)/*.cpp)
ROOF_SRC :=	$(wildcard $(SRC_DIR)/$(ROOF_DIR)/*.cpp)
FACTORY_SRC :=	$(wildcard $(SRC_DIR)/$(FACTORY_DIR)/*.cpp)

DOOR_OBJ := $(DOOR_SRC:$(SRC_DIR)/$(DOOR_DIR)/%.cpp=$(OBJ_DIR)/%.o)
WINDOW_OBJ := $(WINDOW_SRC:$(SRC_DIR)/$(WINDOW_DIR)/%.cpp=$(OBJ_DIR)/%.o)
ROOF_OBJ := $(ROOF_SRC:$(SRC_DIR)/$(ROOF_DIR)/%.cpp=$(OBJ_DIR)/%.o)
FACTORY_OBJ := $(FACTORY_SRC:$(SRC_DIR)/$(FACTORY_DIR)/%.cpp=$(OBJ_DIR)/%.o)
OBJ := $(DOOR_OBJ) $(WINDOW_OBJ) $(ROOF_OBJ) $(FACTORY_OBJ) obj/main.o

.PHONY: all

all: $(EXE)

$(EXE): $(OBJ) | $(BIN_DIR)
	$(CXX) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/$(DOOR_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/$(WINDOW_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/$(ROOF_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/$(FACTORY_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR) $(OBJ_DIR):
	@mkdir -p $@

clean:
	@$(RM) -rv $(BIN_DIR) $(OBJ_DIR)