all: myprog
myprog: main.o
	g++ main.o -o mf
main.o: main.cpp
	g++ -c main.cpp
clean:
	rm -f *o myprog
