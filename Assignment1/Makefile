myprog: main.o hello.o
	g++ main.o hello.o -o myprog
hello.o: hello.cpp
	g++ -c hello.cpp
clean:
	rm -f *.o myprog
