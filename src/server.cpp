#include <winsock.h>

int serverSocket = socket(AF_INET, SOCK_STREAM, 0);

sockaddr_in serverAddress {
    .sin_family = AF_INET,
    .sin_port = htons(8080),
    .sin_addr = INADDR_ANY 
};


