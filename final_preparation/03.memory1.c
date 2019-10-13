/* Program goal: copy value from memory location pointed to by p into char variable c */  
#include <stdio.h>



int main(void) {
	char *p = malloc(1);
	*p = 'a';

	free(p);
	char c = *p;
	printf("\n [%c]\n",c); 
	return 0;
}