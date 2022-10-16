CXXFLAGS = -g -Wall
CXX = g++

prototype: main.o game_asset.o grass_asset.o water_asset.o ground_asset.o
	$(CXX) $(CXXFLAGS) -o prototype.exe main.o game_asset.o grass_asset.o water_asset.o ground_asset.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp	

game_asset.o: game_asset.cpp
	$(CXX) $(CXXFLAGS) -c game_asset.cpp

grass_asset.o: grass_asset.cpp
	$(CXX) $(CXXFLAGS) -c grass_asset.cpp

water_asset.o: water_asset.cpp
	$(CXX) $(CXXFLAGS) -c water_asset.cpp

ground_asset.o: ground_asset.cpp
	$(CXX) $(CXXFLAGS) -c ground_asset.cpp

clean:
	rm -f *.o *.exe