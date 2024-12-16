#include <iostream>

using namespace std;

// 일반적인 char가 signed인지 unsigned인지 판별하는 코드
int main(void)
{
	char ochar = 230;
	signed char schar = ochar;
	unsigned char uschar = ochar;

	if (ochar == schar)
	{
		cout << "signed" << endl;
	}
	else if (ochar == uschar)
	{
		cout << "unsigned" << endl;
	}

	return 0;
}