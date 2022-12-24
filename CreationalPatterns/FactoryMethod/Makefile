CXX := g++
CXXFLAGS := -Wall -Wextra

SUBDIRS := src utils/src

.PHONY: clean subsystem main

main.exe: main.cpp subsystems
	@echo $(wildcard $(addsuffix /obj/*.o,$(SUBDIRS)))
	$(CXX) $(CXXFLAGS) $< $(wildcard $(addsuffix /obj/*.o,$(SUBDIRS))) -o $@

subsystems:
	for dir in $(SUBDIRS); \
		do $(MAKE) -C $$dir; \
	done

clean:
	rm -f *.exe && cd $(SUBDIRS) && make clean
