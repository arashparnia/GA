cmake_minimum_required(VERSION 3.6)
project(Arash_s_GA)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Gene.cpp Gene.h Chromosome.cpp Chromosome.h Population.cpp Population.h)
add_executable(Arash_s_GA ${SOURCE_FILES})