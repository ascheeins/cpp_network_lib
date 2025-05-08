# Cmake 버전 명시
cmake_minimum_required(VERSION 3.20)

# 프로젝트 정의
project(test_client LANGUAGES CXX)

# 실행파일 정의
add_executable(test_client)

# 실행파일에 포함될 파일들은 아래와 같다( add_executable에서 바로 추가하는 방법도 있음 )
target_sources(test_client
    PRIVATE
        main.cpp
)

# common 의존성 추가
target_link_libraries(test_client PRIVATE common)

# 상대경로 일일이 안태우도록 설정
target_include_directories(test_client PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/../common
)

# C++20 표준 설정
set_target_properties(common PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)