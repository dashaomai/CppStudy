all : main.o
	g++ -o type main.o

main.o : main.cpp
	g++ -g -c main.cpp

.PHONY : clean
clean :
	-rm -rf type *.o *.core
