#pragma once

#include <string>
#include <fstream>


namespace Logs { // Пространство имен библиотеки для разграничения имен

    /* ### ЛОГИ ВЫВОДА ### */

    // ЛОГ успешного выполнения
    const std::string LOG_SUCCESS = "\033[32m[LOG]: \033[0m";

    // ЛОГ некоторого события
    const std::string LOG_FACT = "\033[34m[LOG]: \033[0m";

    // ЛОГ оповещения, предупреждения
    const std::string LOG_ALERT = "\033[33m[LOG]: \033[0m";

    // ЛОГ неудачного выполнения
    const std::string LOG_ERROR = "\033[31m[LOG]: \033[0m";

    // Продолжение следует...

}
