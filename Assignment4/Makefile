PROJECT = main_program
LIBPROJECT = lib$(PROJECT).a
TESTPROJECT = tests

CXX = g++
A = ar
AFLAGS = rsv
CXXFLAGS = -I. -std=c++14 -Wall -pthread -g -fPIC
LXXFLAGS = $(CXXFLAGS) -L. -l:$(LIBPROJECT)
LGTESTFLAGS = $(LXXFLAGS) -lgtest -lgtest_main -lpthread

MAIN_SOURCES = main.cpp Autobot.cpp Decepticon.cpp Neutral.cpp Item.cpp Direction.cpp Transformer.cpp
MAIN_OBJECTS = $(MAIN_SOURCES:.cpp=.o)
TEST_SOURCES = test.cpp Autobot.cpp Decepticon.cpp Neutral.cpp Item.cpp Direction.cpp Transformer.cpp
TEST_OBJECTS = $(TEST_SOURCES:.cpp=.o)
HEADERS = $(wildcard *.h)

.PHONY: default all clean cleanall

default: all

all: $(PROJECT) $(TESTPROJECT)

%.o: %.cpp $(HEADERS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(LIBPROJECT): $(MAIN_OBJECTS)
	$(A) $(AFLAGS) $@ $^

$(PROJECT): main.o $(LIBPROJECT)
	$(CXX) -o $@ main.o $(LXXFLAGS)

$(TESTPROJECT): $(LIBPROJECT) $(TEST_OBJECTS)
	$(CXX) -o $@ $(TEST_OBJECTS) $(LGTESTFLAGS)

test: $(TESTPROJECT)
	./$(TESTPROJECT)

clean:
	rm -f *.o

cleanall: clean
	rm -f $(PROJECT) $(LIBPROJECT) $(TESTPROJECT)
