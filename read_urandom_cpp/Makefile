OBJS = read_urandom.o
CPP = g++
DEBUG = -g 
CFLAGS = -Wall -c $(DEBUG) -std=c++11
LFLAGS = -Wall $(DEBUG)

read_urandom: $(OBJS)
	$(CPP) $(LFLAGS) $(OBJS) -o read_urandom

read_urandom.o: read_urandom.cpp
	$(CPP) $(CFLAGS) read_urandom.cpp

clean:
	rm *.o read_urandom
