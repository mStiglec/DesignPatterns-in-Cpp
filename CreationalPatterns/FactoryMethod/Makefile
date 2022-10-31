SRC_DIR := src
UTILS_DIR := utils
OBJ_DIR := obj
BIN_DIR := bin


EXE := $(BIN_DIR)/main

SRC := $(wildcard $(SRC_DIR)/*.cpp)
UTILS_SRC := $(wildcard $(UTILS_DIR)/$(SRC_DIR)/*.cpp)

OBJ := $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o) \
	   $(UTILS_SRC:$(UTILS_DIR)/$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CXXFLAGS = -c -Wall -Wextra
CXX = g++

.PHONY: all

all: $(EXE)

$(EXE): $(OBJ) | $(BIN_DIR)
	$(CXX) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(OBJ_DIR)/%.o: $(UTILS_DIR)/$(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR) $(OBJ_DIR):
	@mkdir -p $@

clean:
	@$(RM) -rv $(BIN_DIR) $(OBJ_DIR)

-include $(OBJ:.o=.d)