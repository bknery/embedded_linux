OBJS = helloworld.o
DEBUG = 
CFLAGS = -c $(DEBUG)
LFLAGS = $(DEBUG)

all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o helloworld

helloworld.o: helloworld.c
	$(CC) $(CFLAGS) helloworld.c

clean:
	rm *.o helloworld
