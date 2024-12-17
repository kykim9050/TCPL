// 플랫폼 의존적인 헤더 (우분투에서 불가능)
#include <WinSock2.h>
#include <Windows.h>

#include <iostream>
#include <filesystem>




// 서로다른 10가지 이식 불가능한 코드를 작성할 것 (호환이 되지 못하게될 코드)
int main(void)
{
	// int (하드웨어에 따라서 바뀜)
	int A = 2147483647;

	// A의 포인터 값  (하드웨어에 따라서 바뀜)
	int* pA = &A;

	// long (하드웨어에 따라서 바뀜)
	long B = 2147483647;
	
	// char (하드웨어에 따라 signed, unsigned 다름
	char C = 200;
	// 절대 경로

	// 파일 경로 형식

	// 엔디안
	int num = 0x12345678;
	unsigned char* p = reinterpret_cast<unsigned char*>(&num);
	std::cout << std::hex << static_cast<int>(p[0]) << std::endl;
	
	return 0;
}