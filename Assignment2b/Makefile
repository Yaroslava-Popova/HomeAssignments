all: main.o operand.o operation.o
	g++ main.o operand.o operation.o -o mf
main.o: main.cpp
	g++ -c main.cpp
operand.o: operand.cpp
	g++ -c operand.cpp
operation.o: operation.cpp
	g++ -c operation.cpp
clean:
	rm -rf *.o prog
