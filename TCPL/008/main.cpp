#include <iostream>

using namespace std;

int main(void)
{
	cout << "bool MinSize : " << static_cast<int>(std::numeric_limits<bool>::min()) << endl;
	cout << "bool MaxSize : " << static_cast<int>(std::numeric_limits<bool>::max()) << endl;
	cout << "char MinSize : " << static_cast<int>(std::numeric_limits<char>::min()) << endl;
	cout << "char MaxSize : " << static_cast<int>(std::numeric_limits<char>::max()) << endl;
	cout << "short MinSize : " << std::numeric_limits<short>::min() << endl;
	cout << "short MaxSize : " << std::numeric_limits<short>::max() << endl;
	cout << "int MinSize : " << std::numeric_limits<int>::min() << endl;
	cout << "int MaxSize : " << std::numeric_limits<int>::max() << endl;
	cout << "long MinSize : " << std::numeric_limits<long>::min() << endl;
	cout << "long MaxSize : " << std::numeric_limits<long>::max() << endl;
	cout << "longlong MaxSize : " << std::numeric_limits<long long>::max() << endl;
	cout << "longlong MinSize : " << std::numeric_limits<long long>::min() << endl;
	cout << "float MaxSize : " << std::numeric_limits<float>::max() << endl;
	cout << "float MinSize : " << std::numeric_limits<float>::min() << endl;
	cout << "double MaxSize : " << std::numeric_limits<double>::max() << endl;
	cout << "double MinSize : " << std::numeric_limits<double>::min() << endl;
	cout << "long double MaxSize : " << std::numeric_limits<long double>::max() << endl;
	cout << "long double MinSize : " << std::numeric_limits<long double>::min() << endl;

	cout << "unsinged long MaxSize : " << std::numeric_limits<unsigned long>::max() << endl;
	cout << "unsinged long MinSize : " << std::numeric_limits<unsigned long>::min() << endl;
	cout << "unsigned char MinSize : " << static_cast<int>(std::numeric_limits<unsigned char>::min()) << endl;
	cout << "unsigned char MaxSize : " << static_cast<int>(std::numeric_limits<unsigned char>::max()) << endl;
	cout << "unsigned short MinSize : " << std::numeric_limits<unsigned short>::min() << endl;
	cout << "unsigned short MaxSize : " << std::numeric_limits<unsigned short>::max() << endl;
	cout << "unsigned int MinSize : " << std::numeric_limits<unsigned int>::min() << endl;
	cout << "unsigned int MaxSize : " << std::numeric_limits<unsigned int>::max() << endl;
	cout << "unsigned long MinSize : " << std::numeric_limits<unsigned long>::min() << endl;
	cout << "unsigned long MaxSize : " << std::numeric_limits<unsigned long>::max() << endl;
	cout << "unsigned longlong MaxSize : " << std::numeric_limits<unsigned long long>::max() << endl;
	cout << "unsigned longlong MinSize : " << std::numeric_limits<unsigned long long>::min() << endl;

	return 0;
}