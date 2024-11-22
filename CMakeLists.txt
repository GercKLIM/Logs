cmake_minimum_required(VERSION 3.14)
project(Logs VERSION 1.0.0 LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17) # Устанавливаем стандарт C++17 в проекте
set(CMAKE_CXX_STANDARD_REQUIRED ON) # Устанавливаем обязательную поддержку стандарта
set(CMAKE_CXX_EXTENSIONS OFF) # Отключаем использование расширений компилятора


include_directories(include) # Указываем пути к заголовкам

# Собираем библиотеку
add_library(Logs
        src/Logs.cpp
        include/Logs.h
)

# Указываем, какие заголовочные файлы будут публичными
target_include_directories(Logs PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# Устанавливаем библиотеку
install(TARGETS Logs            # Указываем, что устанавливаемая цель - библиотека Logs
        EXPORT LogsTargets      # Создаем и экспортируем целевую конфигурацию LogsTargets
        LIBRARY DESTINATION lib # Указываем куда установить файлы динамической библиотеки
        ARCHIVE DESTINATION lib # Указываем куда установить файлы статической библиотеки
        RUNTIME DESTINATION bin # Указываем куда установить файлы исполняемые файлы
)

# Устанавливаем заголовочные файлы библиотеки
install(DIRECTORY include/ DESTINATION include)

# Создаем экспортируемый файл для использования с find_package
install(EXPORT LogsTargets            # Указываем цель для установки
        FILE LogsConfig.cmake         # Имя файла, который будет создан и установлен
        NAMESPACE Logs::              # Добавление префикса ко всем экспортируемым целям
        DESTINATION lib/cmake/Logs    # Указываем куда будет установлен файл конфигурации
)

# Тесты
add_executable(LogsTest tests/LogsTest.cpp)
target_link_libraries(LogsTest PRIVATE Logs)
add_test(NAME LoggerTest COMMAND LoggerTest)

