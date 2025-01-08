#include <iostream>

// 인자로 주어진 두 int 값을 바꾸는 함수 구현
// 포인터 인자
void SwapInt(int* _first, int* _second)
{
	int temp = *_first;
	*_first = *_second;
	*_second = temp;
}

// 레퍼런스 인자
void SwapInt(int& _first, int& _second)
{
	int temp{ std::move(_first) };
	_first = std::move(_second);
	_second = std::move(temp);
}

int main(void)
{
	int first = 10;
	int second = 20;

	std::cout << first << " " << second << std::endl;

	SwapInt(&first, &second);
	std::cout << first << " " << second << std::endl;

	SwapInt(first, second);
	std::cout << first << " " << second << std::endl;

	char str[] = "a short string";
	std::cout << sizeof(str) << std::endl;
	std::cout << strlen(str) << std::endl;

	return 0;
}