#include "../include/Logs.h"
#include <iostream>

int main() {
    // Ввести в shell на Windows для цветного вывода:
    // reg add HKCU\Console /v VirtualTerminalLevel /t REG_DWORD /d 1
    std::cout << Logs::LOG_SUCCESS << "Complete!"  << std::endl;
    std::cout << Logs::LOG_FACT    << "Complete!"  << std::endl;
    std::cout << Logs::LOG_ALERT   << "Complete!"  << std::endl;
    std::cout << Logs::LOG_ERROR   << "Complete!"  << std::endl;

    std::cout << "Tests passed!" << std::endl;
    return 0;
}
