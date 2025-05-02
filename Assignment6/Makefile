CC=g++

CXXFLAGS=-std=c++17 -Wall -I. -I/usr/include/gtest -pthread
LDFLAGS=-lgtest -lgtest_main -pthread

TEST_SOURCES=test.cpp
TEST_EXECUTABLE=tests

HEADERS=Classes.h TemplateClasses.h TemplateClasses.tpp
all: $(TEST_EXECUTABLE)

$(TEST_EXECUTABLE): $(TEST_SOURCES) $(HEADERS)
	$(CC) $(CXXFLAGS) $(TEST_SOURCES) $(LDFLAGS) -o $@
clean:
	rm -rf $(TEST_EXECUTABLE) *.o
