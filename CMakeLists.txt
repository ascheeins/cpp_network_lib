# Cmake 버전 명시
cmake_minimum_required(VERSION 3.20)

# 프로젝트 정의
project(eins_net LANGUAGES CXX)

# 하위 디렉토리의 cmake를 프로젝트에 포함
add_subdirectory(common)
add_subdirectory(test_server)
add_subdirectory(test_client)
add_subdirectory(test_sample)