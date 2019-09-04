//
// Created by bvanderlaan on 9/3/19.
//

#ifndef VCVRADIO_SERVER_H
#define VCVRADIO_SERVER_H

#include <unistd.h>
#include <cstdio>
#include <sys/socket.h>
#include <netinet/in.h>
#include <cstring>


class Server {

    int server_fd;
    int socket_fd;

    struct sockaddr_in address;

    char description[1024] = {0};
    char name[512] = {0};





};


#endif //VCVRADIO_SERVER_H
