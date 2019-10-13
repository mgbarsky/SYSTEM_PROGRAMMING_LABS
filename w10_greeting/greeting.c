#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>


//Write the function so that it prints the lines of "Happy Birthday" using person's name provided as command-line argument
void sing(int code) {
	//TO DO
}

void install_sing() {
    struct sigaction newact;
    
    newact.sa_handler = sing;
    newact.sa_flags = 0;
    sigemptyset(&newact.sa_mask);
    sigaddset(&newact.sa_mask, SIGINT);
    sigaction(SIGUSR1, &newact, NULL);
}

int main(int argc, char **argv) {       
	
	
    // struct sigaction newact;
	
    // newact.sa_handler = sing;
    // newact.sa_flags = 0;
    // sigemptyset(&newact.sa_mask);
	
	//uncomment the code above and install signal handler for SIGUSR1
	//TO DO
	
    for (;;) {
       
    }
    return 0;
}










