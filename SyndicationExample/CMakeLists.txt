cmake_minimum_required(VERSION 3.10)

# set the project name
project(SyndicationExample)

add_executable(syndication main.cpp)

target_compile_options(syndication PRIVATE /await)
target_compile_features(syndication PRIVATE cxx_std_17)
