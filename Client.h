//
// Created by bvanderlaan on 9/3/19.
//

#ifndef VCVRADIO_CLIENT_H
#define VCVRADIO_CLIENT_H

#include <unistd.h>
#include <cstdio>
#include <sys/socket.h>
#include <netinet/in.h>
#include <cstring>

class Client {

    int server_fd;
    int socket_fd;

    struct sockaddr_in address;

};


#endif //VCVRADIO_CLIENT_H
