cmake_minimum_required(VERSION 3.20)

# 프로젝트 이름 설정
project(eins_net VERSION 1.0 LANGUAGES CXX)

# C++20 표준 설정
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 서브 디렉토리 추가
add_subdirectory(common)
add_subdirectory(test_server)
add_subdirectory(test_client)