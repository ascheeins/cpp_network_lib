#include <iostream>
#include "test_folder/test.h"

void main()
{
    std::cout << "hello client" << std::endl;

    //common의 함수 호출
    test();
}