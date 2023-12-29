CXX := g++
CXXFLAGS := -Wall -Wextra
LDFLAGS := -lcurl

OBJ_DIR := obj

SRC := $(wildcard *.cpp)
OBJ := $(SRC:%.cpp=$(OBJ_DIR)/%.o) 

.PHONY: build clean

build: $(OBJ)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CXX) -c $(CXXFLAGS) $< -o $@ $(LDFLAGS)

$(OBJ_DIR):
	@mkdir -p $@

clean:
	rm -rf *.o *.exe core $(BIN_DIR) $(OBJ_DIR)