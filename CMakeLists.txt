cmake_minimum_required(VERSION 3.10)
project(EricssonIntervju C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(tests)
add_executable(EricssonIntervju main.c primeFactorization.h primeFactorization.c)