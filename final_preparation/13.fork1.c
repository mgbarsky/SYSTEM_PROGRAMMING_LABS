#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(void){
    pid_t pid;
    int *status;

    switch(pid = fork()) {
    case -1:
        perror("fork");  
        exit(1);         

    case 0:        
        exit(5);

    default:        
        wait(status);
        printf("PARENT: My child's exit status is: %d\n", 
			WEXITSTATUS(*status));
    }


    return 0;
}