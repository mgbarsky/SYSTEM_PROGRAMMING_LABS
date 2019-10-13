CC = gcc
CFLAGS = -O3 -Wall 
CFLAGS += -fno-exceptions
CFLAGS += -finline-functions
CFLAGS += -funroll-loops
CFLAGS += -std=c99
MATHFLAG=-lm

# Binaries
all: discriminant roots 

discriminant: 
	$(CC) $(CFLAGS) discriminant.c -o discriminant

roots: 
	$(CC) $(CFLAGS) roots.c -o roots $(MATHFLAG)
	
clean:  
	rm discriminant roots