# test_client 실행 파일 생성
add_executable(test_client 
    main.cpp
)

# common 및 asio 의존성 추가
target_link_libraries(test_client PRIVATE 
    common
)

# common 라이브러리의 헤더 포함
target_include_directories(test_client PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/../common
)