#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(){
  	int fd[2];
	int result = fork(); 
  	pipe(fd);
	if (result == 0) { 
		close(fd[0]); 
		write(fd[1], "cmpt242", 8);
	} else {
		close(fd[1]); 
      	char buf[8];
		read(fd[0], buf,8);
		printf("%s\n", buf);
	}
	return 0;
}