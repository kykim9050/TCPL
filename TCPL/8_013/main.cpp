#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void fi(const char* _v)
{
	long long sum = 0;

	for (int i = 0; 0 != _v[i]; ++i)
	{
		sum += _v[i];
	}
}

void fp(const char* _v)
{
	long long sum = 0;

	for (const char* p = _v; 0 != *p; ++p)
	{
		sum += *p;
	}
}

int main(void)
{
	const long long size = 1000000;
	char arr[size + 1] = { 0, };
	for (int i = 0; i < size; i++)
	{
		arr[i] = 1;
	}

	auto ti1 = high_resolution_clock::now();
	fi(arr);
	auto ti2 = high_resolution_clock::now();
	long long delti = duration_cast<microseconds>(ti2 - ti1).count();
	cout << "fi time : " << delti << "usec" << endl;

	auto tp1 = high_resolution_clock::now();
	fp(arr);
	auto tp2 = high_resolution_clock::now();
	long long deltp = duration_cast<microseconds>(tp2 - tp1).count();
	cout << "fp time : " << deltp << "usec" << endl;

	return 0;
}