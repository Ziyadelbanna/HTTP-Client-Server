
#ifndef SOCKET_PROGRAMMING_SERVER_INFO_H
#define SOCKET_PROGRAMMING_SERVER_INFO_H

#include <string>

using namespace std;

/**.
 * a request struct describing any request initiated by the client.
 */
struct server {
    u_long IPaddress;
    u_short port_number;
};

#endif //SOCKET_PROGRAMMING_SERVER_INFO_H
