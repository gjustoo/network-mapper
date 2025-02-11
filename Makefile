flags=-O3 -Wall -std=c2x
ldflags=

all: clean netmap-naive


netmap-naive: netmap-naive.o
	cc ${flags} $^ -o $@ ${ldflags}

netmap-naive.o: netmap-naive.c
	cc ${flags} -c $^



clean:
	rm -f *.o netmap-naive