#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace httpServer{
    class SimpleSocket{
        public:
            SimpleSocket(int domain, int type, int protocol, int port, u_long interface);
            virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
            void test_connection(int connection);
            struct sockaddr_in get_address();
            int get_connection();
            int get_sock();
            void set_connection(int connection);
        private:
            struct sockaddr_in address;
            int sock;
            int connection;
        

    };
}

#endif