CC = gcc
CFLAGS = -O3 -Wall 
CFLAGS += -fno-exceptions
CFLAGS += -finline-functions
CFLAGS += -funroll-loops
CFLAGS += -std=c99
MATHFLAG=-lm

# Binaries
all: delta sum sqrt 

delta: 
	$(CC) $(CFLAGS) delta.c -o delta

sum: 
	$(CC) $(CFLAGS) sum.c -o sum
	
sqrt: 
	$(CC) $(CFLAGS) sqrt.c -o sqrt $(MATHFLAG)

clean:  
	rm delta sum sqrt 