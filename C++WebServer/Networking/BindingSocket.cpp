#include "BindingSocket.hpp"


httpServer::BindingSocket::BindingSocket(int domain, int type, int protocol, int port, u_long interface): SimpleSocket(domain, type, protocol, port, interface)
{

    set_connection( connect_to_network(get_sock(), get_address()));
    test_connection(get_connection());
}

// Binding Socket Connection
int httpServer::BindingSocket::connect_to_network(int sock, struct sockaddr_in address)
{
    return bind(sock, (struct sockaddr *) &address , sizeof(address));
}