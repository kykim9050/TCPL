#include <iostream>

using namespace std;

int main(void)
{
	char c = 'a';
	int i = 10;
	short s = 10;

	char* pc = &c;
	int* pi = &i;
	void* pv = &s;

	cout << "alignof(pc) : " << alignof(char*) << endl;
	cout << "alignof(pi) : " << alignof(int*) << endl;
	cout << "alignof(pv) : " << alignof(void*) << endl;

	return 0;
}