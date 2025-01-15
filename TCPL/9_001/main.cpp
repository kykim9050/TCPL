#include <iostream>
using namespace std;

struct LargestS
{
	bool b;
	long double ld;
	char c;
	double d;
	int i;
	long l;
};

struct SmallestS
{
	long double ld;
	double d;
	long l;
	int i;
	char c;
	bool b;
};

// 필드는 정수 타입만 가능
struct FieldS
{
	bool b : 1;
	char c : 1;
	int i : 3;
	long l : 3;
	long double ld;
	double d;
};

int main(void)
{
	cout << "Largest Struct sizeof : " << sizeof(LargestS) << endl;
	cout << "Smallest Struct sizeof : " << sizeof(SmallestS) << endl;
	cout << "Field Struct sizeof : " << sizeof(FieldS) << endl;

	return 0;
}