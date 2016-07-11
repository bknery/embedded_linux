OBJS = read_urandom.o
CPP = gcc
DEBUG = 
CFLAGS = -c $(DEBUG)
LFLAGS = $(DEBUG)

read_urandom: $(OBJS)
	$(CPP) $(LFLAGS) $(OBJS) -o read_urandom

read_urandom.o: read_urandom.c
	$(CPP) $(CFLAGS) read_urandom.c

clean:
	rm *.o read_urandom
