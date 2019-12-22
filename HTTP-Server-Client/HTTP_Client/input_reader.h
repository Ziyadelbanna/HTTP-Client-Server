
#ifndef SOCKET_PROGRAMMING_INPUT_READER_H
#define SOCKET_PROGRAMMING_INPUT_READER_H

#include <string>
#include <vector>
#include "request.h"

vector<vector<request>> read_requests_from_file(string file_path);

#endif //SOCKET_PROGRAMMING_INPUT_READER_H
