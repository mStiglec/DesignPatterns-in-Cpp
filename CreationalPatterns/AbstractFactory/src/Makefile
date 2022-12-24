CXX := g++
CXXFLAGS := -Wall -Wextra

SUBDIRS := door factory roof window
OBJ_DIR := obj

SRC := $(shell find door/*.cpp) \
	   $(shell find factory/*.cpp) \
	   $(shell find roof/*.cpp) \
	   $(shell find window/*.cpp)

OBJ := $(SRC:%.cpp=%.o)
$(info $(OBJ))

.PHONY: build

build: $(OBJ)

door/%.o: door/%.cpp | $(OBJ_DIR)
	$(CXX) -c $(CXXFLAGS) $< -o $(subst door/,,$(OBJ_DIR)/$@)

factory/%.o: factory/%.cpp | $(OBJ_DIR)
	$(CXX) -c $(CXXFLAGS) $< -o $(subst factory/,,$(OBJ_DIR)/$@)

roof/%.o: roof/%.cpp | $(OBJ_DIR)
	$(CXX) -c $(CXXFLAGS) $< -o $(subst roof/,,$(OBJ_DIR)/$@)

window/%.o: window/%.cpp | $(OBJ_DIR)
	$(CXX) -c $(CXXFLAGS) $< -o $(subst window/,,$(OBJ_DIR)/$@)

$(OBJ_DIR):
	@mkdir -p $@

clean:
	rm -rf $(OBJ_DIR)