#include <stdio.h>

struct book {
	char *title;
	int year;
	char **tags;
};

int main() {
	// Declare a struct book variable (stack-allocated).


	//Initialize the book title to the read-only string "How cats work",
	//and year to 2015


	//Allocate tags on the heap to hold 5 strings


	// Set the first two tags to refer to 
	//the heap-allocated strings "Pets" and "Engineering"




	// Free all dynamically-allocated memory 




	return 0;
 }