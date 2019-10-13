CC = gcc
CFLAGS = -O3 -Wall 
CFLAGS += -fno-exceptions
CFLAGS += -finline-functions
CFLAGS += -funroll-loops
CFLAGS += -std=c99
CFLAGS += -g

# Source files
CODE_SRC=src/names.c test/test_utils.c test/names_test.c 

# Binaries
all: test_all 

test_all: 
	$(CC) $(CFLAGS) $(CODE_SRC) -o test_all

clean:  
	rm test_all 