CXX := g++
CXXFLAGS := -g -Wall -Wextra
DLFLAGS := -lcurl
SUBDIRS := src

.PHONY: clean subsystem main

main.exe: main.cpp subsystems
	$(CXX) $(CXXFLAGS) $< $(wildcard $(addsuffix /obj/*.o,$(SUBDIRS))) -o $@ $(DLFLAGS)

subsystems:
	$(MAKE) -C $(SUBDIRS)

clean:
	rm -f *.exe && cd $(SUBDIRS) && make clean