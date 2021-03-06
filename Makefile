CC = gcc
CFLAGS = -c -g

INCL = -I.

all: replicator replicator.min

replicator: replicator.o
	$(CC) -o replicator $^

replicator.min: replicator.min.o
	$(CC) -o replicator.min $^

clean:
	rm -f *.o

%.o: %.c
	$(CC) $(CFLAGS) $^ $(INCL)
