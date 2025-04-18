# common 라이브러리 생성
add_library(common STATIC 
    test_folder/test.cpp
    test_folder/test.h
)

# include 디렉토리 지정
target_include_directories(common PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)