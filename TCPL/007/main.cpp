#include <iostream>

using namespace std;

int main(void)
{

	for (char i = 'a'; i != 'z' + 1; ++i)
	{
		cout << static_cast<int>(i) << " ";
		cout << static_cast<char>(i) << " ";
		cout << hex << i << " ";
	}
	cout << endl;

	for (int i = 0; i < 10; ++i)
	{
		cout << static_cast<int>(i) << " ";
		cout << static_cast<char>(i) << " ";
		cout << hex << i << " ";
	}

	return 0;
}