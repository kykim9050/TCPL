#include <iostream>

using namespace std;

// �Ϲ����� char�� signed���� unsigned���� �Ǻ��ϴ� �ڵ�
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