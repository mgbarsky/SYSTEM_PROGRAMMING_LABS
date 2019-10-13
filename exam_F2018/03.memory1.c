/* Program goal: print value in memory location pointed to by p. */
#include <stdio.h>

int main(void) {
	char *p; 
	char c = *p; 
	printf("\n [%c]\n",c); 
	return 0;
}