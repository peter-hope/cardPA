CC = gcc
MEMWATCH = -DMEMWATCH -DMW_STDIO
CFLAGS = -Wall -g $(MEMWATCH)

all: cardlist 

run: all start


start:
	./cardlist

cardlist: cardmain.o cardlist.o card.o memwatch.o
	$(CC) $(CFLAGS) -o cardlist cardmain.o cardlist.o card.o memwatch.o

cardlist.o: cardlist.c cardlist.h card.h memwatch.h
	$(CC) $(CFLAGS) -c cardlist.c

cardmain.o: cardmain.c cardlist.h memwatch.h
	$(CC) $(CFLAGS) -c cardmain.c

card.o: card.c card.h
	$(CC) $(CFLAGS) -c card.c

memwatch.o: memwatch.c memwatch.h 
	$(CC) $(CFLAGS) -w -c memwatch.c

memwatch.c:
	ln -s /home/hdbui/shared/cs366/memwatch-2.71/memwatch.c memwatch.c

memwatch.h:
	ln -s /home/hdbui/shared/cs366/memwatch-2.71/memwatch.h memwatch.h

.PHONY: clean
clean:
	@-rm -f *.o cardlist 

