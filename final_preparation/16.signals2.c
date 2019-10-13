/*
 * this is the server side of a "unix domain" socket connection
 */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <errno.h>
#include <signal.h>

void error(const char *);

int main(int argc, char *argv[]) {
   	int sockfd, newsockfd, servlen, n;
   	socklen_t clilen;
   	struct sockaddr_un  cli_addr, serv_addr;
   	char buf[80];

   	if ((sockfd = socket(AF_UNIX,SOCK_STREAM,0)) < 0)
       	error("creating socket");
   
  	bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sun_family = AF_UNIX;
    strcpy(serv_addr.sun_path, argv[1]);
    servlen=strlen(serv_addr.sun_path) + 
                     sizeof(serv_addr.sun_family);
   
  	//TODO - missing code to setup server
  
  
  
   	n=read(newsockfd,buf,80);
   	printf("A connection has been established\n");
   	write(1,buf,n);
   	write(newsockfd,"I got your message\n",19);
   	close(newsockfd);
   	close(sockfd);
   	return 0;
}

void error(const char *msg){
    perror(msg);
    exit(0);
}