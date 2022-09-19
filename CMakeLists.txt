cmake_minimum_required(VERSION 3.23)
project(csapp)

set(CMAKE_CXX_STANDARD 14)

add_executable(csapp
        c_programming_language/1_introduction/1.1_helloWorld/1_helloWorld.cpp)

add_executable(train_1_1 c_programming_language/1_introduction/1.1_helloWorld/train_1_1.cpp)
add_executable(train_1_2 c_programming_language/1_introduction/1.1_helloWorld/train_1_2.cpp)
add_executable(1_fcTable c_programming_language/1_introduction/1.2_fcTable/1_fcTable.cpp)
add_executable(test_1_3 c_programming_language/1_introduction/1.2_fcTable/test_1_3.cpp)
add_executable(test_1_4 c_programming_language/1_introduction/1.2_fcTable/test_1_4.cpp)
add_executable(test_1_5 c_programming_language/1_introduction/1.3_for/test_1_5.cpp)
add_executable(1_define c_programming_language/1_introduction/1.4_define/1_define.cpp)
add_executable(1_copyInToOut c_programming_language/1_introduction/1.5_getchar/1_copyInToOut.cpp)
add_executable(test_1_6 c_programming_language/1_introduction/1.5_getchar/test_1_6.cpp)
add_executable(2_countChar c_programming_language/1_introduction/1.5_getchar/2_countChar.cpp)
add_executable(3_countLines c_programming_language/1_introduction/1.5_getchar/3_countLines.cpp)