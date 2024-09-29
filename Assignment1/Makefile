myprog: main.o hello.o
	g++ main.o hello.o -o myprog
main.o: headers.h main.cpp	# указывать заголовочный не нужно, он подставится в код main.cpp на этапе препроцессинга
	g++ -c main.cpp
hello.o: hello.cpp
	g++ -c hello.cpp
clean:
	rm -f *.o myprog
