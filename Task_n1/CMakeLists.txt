# объявляем минимальную версию cmake
cmake_minimum_required(VERSION 3.22.1) 

# устанавливаем имя проекта
project(test) 

# переменной SOURCES присваиваем значение test.cpp
set(SOURCES Task_1.cpp) 

# добавляем переменную SOURCES к исполняемым файлам
add_executable(test ${SOURCES}) 

# Основной исполняемый файл без санитайзеров
add_executable(Task_1 Task_1.cpp)

# Исполняемый файл с адресным санитайзером
add_executable(Task_1_ASan Task_1.cpp)
target_compile_options(Task_1_ASan PRIVATE -fsanitize=address -fno-omit-frame-pointer)
target_link_options(Task_1_ASan PRIVATE -fsanitize=address -fno-omit-frame-pointer)

# Исполняемый файл с потоковым санитайзером
add_executable(Task_1_TSan Task_1.cpp)
target_compile_options(Task_1_TSan PRIVATE -fsanitize=thread -fno-omit-frame-pointer)
target_link_options(Task_1_TSan PRIVATE -fsanitize=thread -fno-omit-frame-pointer)