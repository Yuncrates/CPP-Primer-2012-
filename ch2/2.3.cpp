// 2.3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl; //32
	std::cout << u - u2 << std::endl; //wrap around, 4294967264

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl; // 32
	std::cout << i - i2 << std::endl; // -32
	std::cout << i - u << std::endl; // 0
	std::cout << u - i << std::endl; // 0?

    return 0;
}

