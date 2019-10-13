CC = gcc
CFLAGS = -O3 -Wall 
CFLAGS += -fno-exceptions
CFLAGS += -finline-functions
CFLAGS += -funroll-loops
CFLAGS += -std=c99

# Source files
CODE_SRC=src/mutated.c test/test_utils.c test/mutated_test.c test/hidden.c

# Binaries
all: test_all 

test_all: 
	$(CC) $(CFLAGS) $(CODE_SRC) -o test_all

clean:  
	rm test_all 