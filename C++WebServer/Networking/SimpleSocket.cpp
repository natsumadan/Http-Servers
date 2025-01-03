#include "SimpleSocket.hpp"

httpServer::SimpleSocket::SimpleSocket(int domain, int type, int protocol, int port, u_long interface)
{
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);
    // Making the connection Establish
    sock = socket(domain,type, protocol);
    // Binding the Connection
    test_connection(sock);
    
}
// TestConnection Virtual Finctions 
void httpServer::SimpleSocket::test_connection(int item_to_test){
    if(item_to_test < 0){
        perror("Failed To connect.....");
        exit(EXIT_FAILURE);
    }
}
//Getters 
int httpServer::SimpleSocket::get_connection(){
    return connection;
}
int httpServer::SimpleSocket::get_sock(){
    return sock;
}
struct sockaddr_in httpServer::SimpleSocket::get_address(){
    return address;
}
//Setters
 void httpServer::SimpleSocket::set_connection(int con){
    connection = con;
 }
