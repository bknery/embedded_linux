OBJS = helloworld.o
CPP = arm-cortex_a8-linux-gnueabihf-gcc
DEBUG = 
CFLAGS = -c $(DEBUG)
LFLAGS = $(DEBUG)

helloworld: $(OBJS)
	$(CPP) $(LFLAGS) $(OBJS) -o helloworld

helloworld.o: helloworld.c
	$(CPP) $(CFLAGS) helloworld.c

clean:
	rm *.o helloworld
