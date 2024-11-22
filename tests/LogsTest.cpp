#include "../include/Logs.h"
#include <iostream>

int main() {

    std::cout << Logs::LOG_SUCCESS << "Complete!"  << std::endl;
    std::cout << Logs::LOG_FACT    << "Complete!"  << std::endl;
    std::cout << Logs::LOG_ALERT   << "Complete!"  << std::endl;
    std::cout << Logs::LOG_ERROR   << "Complete!"  << std::endl;

    std::cout << "Tests passed!" << std::endl;
    return 0;
}
