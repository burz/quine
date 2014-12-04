CC = gcc
CFLAGS = -c -g

INCL = -I.

replicator: replicator.o
	$(CC) -o replicator $^

clean:
	rm -f *.o

%.o: %.c
	$(CC) $(CFLAGS) $^ $(INCL)
