CXX := g++
CXXFLAGS := -c -Wall -Wextra

OBJ_DIR := obj
SRC_DIR := src
BIN_DIR := bin

SRC := $(wildcard $(SRC_DIR)/*.cpp)
OBJ := $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

EXE := $(BIN_DIR)/main

.PHONY: all

all: $(EXE)

$(EXE) : $(OBJ) | $(BIN_DIR)
	$(CXX) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR) $(BIN_DIR):
	@mkdir -p $@

clean:
	rm -rf *.o *.exe core $(BIN_DIR) $(OBJ_DIR)