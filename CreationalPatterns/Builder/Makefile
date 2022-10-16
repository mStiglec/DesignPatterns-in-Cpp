CXXFLAGS = -g -Wall
CXX = g++

builder: main.o computer.o gaming_computer_builder.o workstation_computer_builder.o director.o
	$(CXX) $(CXXFLAGS) -o builder.exe main.o computer.o gaming_computer_builder.o workstation_computer_builder.o director.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

computer.o: computer.cpp
	$(CXX) $(CXXFLAGS) -c computer.cpp

gaming_computer_builder.o: gaming_computer_builder.cpp
	$(CXX) $(CXXFLAGS) -c gaming_computer_builder.cpp

workstation_computer_builder.o: workstation_computer_builder.cpp
	$(CXX) $(CXXFLAGS) -c workstation_computer_builder.cpp

director.o: director.cpp
	$(CXX) $(CXXFLAGS) -c director.cpp

clean:
	-rm -f core *.o *.gch *.exe