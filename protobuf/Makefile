PB_ROOT=~/Libs/CLibs/protobuf/
CC=g++
COMPILE=-c -I$(PB_ROOT)src/ -Wall
LINKAGE=
EXEC=pb

all : main.o
	$(CC) $(LINKAGE) -o $(EXEC) *.o

main.o : main.cpp
	$(CC) $(COMPILE) main.cpp

.PHONY : clean
clean :
	-rm -rf $(EXEC) *.o *.core
