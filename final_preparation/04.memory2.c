/*Program goal: copy value from memory location pointed to by p into char variable c */
#include <stdio.h>

int main(void) {
	char *p = (char*)malloc(1);
	*p = 'a'; 
	char c = *p;
	printf("\n [%c]\n",c);
	free(p);
	free(p);
	return 0;
}