CXX := g++
CXXFLAGS := -Wall -Wextra

SUBDIRS := src

.PHONY: clean subsystem main

main.exe: main.cpp subsystems
	$(CXX) $(CXXFLAGS) $< $(wildcard $(addsuffix /obj/*.o,$(SUBDIRS))) -o $@

subsystems:
	$(MAKE) -C $(SUBDIRS)

clean:
	rm -f *.exe && cd $(SUBDIRS) && make clean