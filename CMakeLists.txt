cmake_minimum_required(VERSION 3.16)
project(blox-fruits-helper CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(bloxfruitshelper
    src/main.cpp
    src/grinder.cpp
    src/quests.cpp
    src/raids.cpp
)

target_include_directories(bloxfruitshelper PRIVATE include)

if(WIN32)
    target_link_libraries(bloxfruitshelper PRIVATE userenv)
endif()
