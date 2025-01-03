#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string>

namespace http {
    class TcpServer{
        public:
            TcpServer(std::string ip_address, int port);
            ~TcpServer();
            void startListen();
        private:
        
        int m_port;
        int m_socket;
        int m_new_socket;
        long m_incommingMessage;
        struct sockadd_in m_socketAddress;
        unsigned int m_socketAddress_len;
        std::string m_serverMessage;
        int startServer();
        void closeServer();
        void acceptConnection(int &new_socket);
        std::string buildResposne();
        void sendResponse();
    };
} // namespace http
