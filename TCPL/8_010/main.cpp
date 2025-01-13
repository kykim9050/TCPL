#include <iostream>

// 월 이름이 기입된 배열
char Months[][8]{ "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

void PrintFunc(const char* _Str)
{
	int lengthStr = strlen(_Str);

	for (int i = 0; i < lengthStr; i++)
	{
		std::cout << *(_Str+i);
	}
	std::cout << std::endl;
}

int main(void)
{
	int numMonths = sizeof(Months) >> 3;
	for (int i = 0; i < numMonths; i++)
	{
		PrintFunc(Months[i]);
	}

	return 0;
}