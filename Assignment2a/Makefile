all: main_program

main_program: main.o
	g++ main.o -o  main_program

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -rf *.o  main_program