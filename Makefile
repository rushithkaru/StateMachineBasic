CXX = g++
CXXFLAGS = -std=c++11 -Wall

OBJECTS = state.o Light.o

state: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): Light.h