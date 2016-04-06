all : main.o config.o
	g++ -o singleton *.o

config.o : config.cpp
	g++ -g -c config.cpp

main.o : main.cpp config.cpp
	g++ -g -c main.cpp

.PHONY : clean
clean :
	-rm -rf *.o *.core
