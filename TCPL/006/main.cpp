#include <iostream>

using namespace std;

class TestClass
{
public:
	
private:
	int a = 0;
	char d = 'a';
	int c = 0;
	char b = 'a';
};

struct TestStruct
{
public:

private:
	int a = 0;
	char d = 'a';
	int c = 0;
	char b = 'a';
};

enum TestEnum
{
	First,
	Second,
	Thrid,
};

enum class TestEnumClass
{
	First,
	Second,
	Thrid,
};

int main(void)
{
	cout << "TestClass Size : " << sizeof(TestClass) << endl;
	cout << "TestStruct Size : " << sizeof(TestStruct) << endl;
	cout << "int Size : " << sizeof(int) << endl;
	cout << "uint16_t Size : " << sizeof(uint16_t) << endl;
	cout << "int16_t Size : " << sizeof(int16_t) << endl;
	cout << "uint32_t Size : " << sizeof(uint32_t) << endl;
	cout << "int32_t Size : " << sizeof(int32_t) << endl;
	cout << "uint64_t Size : " << sizeof(uint64_t) << endl;
	cout << "int64_t Size : " << sizeof(int64_t) << endl;
	cout << "short Size : " << sizeof(short) << endl;
	cout << "long Size : " << sizeof(long) << endl;
	cout << "long long Size : " << sizeof(long long) << endl;
	cout << "char Size : " << sizeof(char) << endl;
	cout << "bool Size : " << sizeof(bool) << endl;
	cout << "float Size : " << sizeof(float) << endl;
	cout << "double Size : " << sizeof(double) << endl;

	cout << "int Max Size : " << numeric_limits<int>::max() << endl;
	cout << "int Min Size : " << numeric_limits<int>::min() << endl;
	cout << "long Max Size : " << numeric_limits<long>::max() << endl;
	cout << "long long Max Size : " << numeric_limits<long long>::max() << endl;
	cout << "int64_t Max Size : " << numeric_limits<int64_t>::max() << endl;
	cout << "uint64_t Max Size : " << numeric_limits<uint64_t>::max() << endl;
	cout << "float Max Size : " << numeric_limits<float>::max() << endl;
	cout << "double Max Size : " << numeric_limits<double>::max() << endl;
	
	cout << endl;
	int a = 0;
	int* pa = &a;
	char c = 'a';
	char* pc = &c;
	TestClass TC;
	TestClass* pTC = &TC;
	cout << "(int)pointer Size : " << sizeof(pa) << endl;
	cout << "(char)pointer Size : " << sizeof(pc) << endl;
	cout << "(TestClass)pointer Size : " << sizeof(pTC) << endl;

	cout << endl;
	cout << "TestEnum Size : " << sizeof(TestEnum) << endl;
	cout << "TestEnumClass Size : " << sizeof(TestEnumClass) << endl;

	return 0;
}