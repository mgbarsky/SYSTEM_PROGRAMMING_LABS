#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>


int main(){
	int i;

	for (i=0; i<3; i++)
		fork();

	printf("Hello");
}