#include <iostream>

// array, vector를 사용하지 않고 loop로 4, 5, 9 ,17, 12 출력하기
int main(void)
{
	int32_t cnt = 0;

	while (cnt != 5)
	{
		if (0 == cnt)
		{
			std::cout << 4 << std::endl;;
		}
		else if (1 == cnt)
		{
			std::cout << 5 << std::endl;;
		}
		else if (2 == cnt)
		{
			std::cout << 9 << std::endl;;
		}
		else if (3 == cnt)
		{
			std::cout << 17 << std::endl;;
		}
		else if (4 == cnt)
		{
			std::cout << 12 << std::endl;;
		}
		++cnt;
	}
	
	return 0;
}