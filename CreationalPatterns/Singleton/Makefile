CXXFLAGS = -g -Wall
CXX = g++

singleton: main.o random.o
	   $(CXX) $(CXXFLAGS) -o singleton.exe main.o random.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

random.o: random.cpp
	$(CXX) $(CXXFLAGS) -c random.cpp

clean:
	-rm -f core *.o *.exe
