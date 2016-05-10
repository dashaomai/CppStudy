PB_ROOT=~/Libs/CLibs/protobuf/
CC=g++
COMPILE=-c -I$(PB_ROOT)src/ -Wall
LINKAGE=
EXEC=template

all : main.o
	$(CC) $(LINKAGE) -o $(EXEC) *.o

main.o : main.cpp scene_cfg.cpp
	$(CC) $(COMPILE) main.cpp scene_cfg.cpp

.PHONY : clean
clean :
	-rm -rf $(EXEC) *.o *.core
