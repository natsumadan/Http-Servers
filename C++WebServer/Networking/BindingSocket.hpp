#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include <stdio.h>
#include "SimpleSocket.hpp"
namespace httpServer
{
    
    class BindingSocket: public SimpleSocket
    {
        public:
            BindingSocket(int domain, int type, int protocol, int port, u_long interface);
            int connect_to_network(int sock, struct sockaddr_in address);
        private:

    };
}

#endif