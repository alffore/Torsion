cmake_minimum_required(VERSION 3.14)
project(torsion)

set(CMAKE_CXX_STANDARD 14)

add_executable(torsion main.cpp DBOper.cpp DBOper.h TorsionI.cpp TorsionI.h)

target_link_libraries(torsion -lpqxx -lpq)