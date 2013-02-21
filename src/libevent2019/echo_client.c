/*
 * echo_client.c
 *
 *  Created on: Nov 19, 2012
 *      Author: caoj7
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include <arpa/inet.h>

#define oops(msg) { perror(msg); exit(EXIT_FAILURE); }
#define SIZE 256

#define LISTEN_PORT 9999

int main(){
        int socket_fd = socket(PF_INET, SOCK_STREAM, 0);
        if(socket_fd == -1) oops("socket initiating error...");


        struct sockaddr_in address;
        bzero(&address, sizeof(address));
        address.sin_family = AF_INET;
        address.sin_addr.s_addr = inet_addr("172.16.166.129");
//        address.sin_addr.s_addr = 0;
        address.sin_port =  htons(LISTEN_PORT);

        int connect_result = connect(socket_fd, (struct sockaddr*)&address, sizeof(address));
        if(connect_result == -1) oops("connect error...");

        char buffer[] = "hello world";
        ssize_t write_length = write(socket_fd, buffer, strlen(buffer)+1); //write to socket_fd
		if(write_length != (strlen(buffer)+1)) oops("error: write ...");


        ssize_t read_length = read(socket_fd, buffer, strlen(buffer)+1);
        if(read_length == -1) oops("error: read data from socket...");

        printf("the ret msg is: %s\n", buffer);

        close(socket_fd);
        return EXIT_SUCCESS;
}

