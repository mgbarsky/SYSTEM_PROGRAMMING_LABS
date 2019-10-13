#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>


int main() {
  	int fd = fork();
	int counter = 3;
	while (fd && counter) {
		fd=fork();
		counter --;
	}
  	return 0;
}