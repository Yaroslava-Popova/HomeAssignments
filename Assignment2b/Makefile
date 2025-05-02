CXX = g++
CXXFLAGS = -std=c++11 -Wall

TARGET = main
OBJS = main.o rpncalc.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

main.o: main.cpp rpncalc.h
	$(CXX) $(CXXFLAGS) -c main.cpp

rpncalc.o: rpncalc.cpp rpncalc.h
	$(CXX) $(CXXFLAGS) -c rpncalc.cpp

clean:
	rm -f $(TARGET) $(OBJS)
