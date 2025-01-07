#include <iostream>

int main(void)
{
	char ca[] = "afafoghozgskn1kjbkjabgkjasdbg";
	char* headPtrC = &ca[5];
	char* tailPtrC = &ca[20];
	int charcnt = 0;

	// char는 1바이트이기 때문에 포인터의 주소 값을 빼면 차이만큼의 char를 구할 수 있음
	// 배열의 형태이기 때문에 주소값 연달아 할당
	// 반복 연산보다 연산량이 적음
	std::cout << tailPtrC - headPtrC << std::endl;

	for (; headPtrC != tailPtrC; ++headPtrC)
	{
		++charcnt;
	}
	std::cout << charcnt;
	return 0;
}