cmake_minimum_required(VERSION 3.12)
project(LR1)

set(CMAKE_CXX_STANDARD 11)

# Включение санитайзеров (AddressSanitizer и UndefinedBehaviorSanitizer)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address,undefined -fno-omit-frame-pointer")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address,undefined")

add_executable(my_program task_3.cpp)
