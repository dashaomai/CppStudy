CC=g++
COMPILE=-c -Wall
LINKAGE=
EXEC=sizeofarr

all : main.o
	$(CC) $(LINKAGE) -o $(EXEC) *.o

main.o : main.cpp
	$(CC) $(COMPILE) main.cpp

.PHONY : clean
clean :
	-rm -rf $(EXEC) *.o *.core
