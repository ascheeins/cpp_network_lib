# Cmake 버전 명시
cmake_minimum_required(VERSION 3.20)

# 프로젝트 정의
project(common LANGUAGES CXX)

# 라이브러리 정의 - STATIC(a, lib), SHARED(so, dll)
add_library(common STATIC)

# 라이브러리에 포함될 파일은 아래와 같다( add_library에서 바로 추가하는 방법도 있음 )
target_sources(common
    PUBLIC
        test_folder/test.cpp
 )

# 상대경로 일일이 안태우도록 설정
target_include_directories(common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# C++20 표준 설정
set_target_properties(common PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)