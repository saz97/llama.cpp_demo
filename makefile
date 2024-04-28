CXX = g++
CXXFLAGS = -std=c++11
main: main.cpp
	$(CXX) $(CXXFLAGS) -o main main.cpp
