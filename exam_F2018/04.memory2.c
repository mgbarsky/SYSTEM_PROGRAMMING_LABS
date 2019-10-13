/*Program goal: have char *p store string "a", and print zero next to it*/
#include <stdio.h>

int main(void) {
	char *p = malloc(1);
	*p = 'a'; 

	char c = *(p+1); 
	printf("\n [%d]\n",c); 
	free(p);
	return 0;
}