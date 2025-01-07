#include <iostream>

using uchar_t = unsigned char;
using cuchar_t = const unsigned char;
using pint_t = int*;
using ppchar_t = char**;
// pointer to array of char
using pachar_t = char(*)[10];
//  array of 7 pointers to int
using apint_t = int(*[7]);
// pointer to an array of 7 pointers to int
using papint_t = apint_t*;
// array of 8 arrays of 7 pointers to int
using aapint_t = int(*[8][7]);

using namespace std;

int main(void)
{
	uchar_t uc = 'a';
	cout << uc << endl;

	cuchar_t cuc = 'b';
	cout << cuc << endl;

	int i = 10;
	pint_t pi = &i;
	cout << *pi << endl;

	char c = 'c';
	char* pc = &c;
	ppchar_t ppc = &pc;
	cout << **ppc << endl;

	char ac[10] = "afasd";
	pachar_t pac = &ac;
	cout << *pac << endl;

	int ia[7] = { 0, 1, 2, 3, 4, 5, 6 };
	int* pia[7]{ &ia[0], &ia[1], &ia[2], &ia[3], &ia[4], &ia[5], &ia[6] };
	apint_t api{ &ia[0], &ia[1], &ia[2], &ia[3], &ia[4], &ia[5], &ia[6] };
	cout << *api[0] << *api[1] << *api[5] << endl;

	papint_t papi = &api;
	cout << papi+1 << endl;

	aapint_t aapi{
	{&ia[0],&ia[1],&ia[2],&ia[3],&ia[4],&ia[5],&ia[6]},
	 {&ia[0],&ia[1],&ia[2],&ia[3],&ia[4],&ia[5],&ia[6]},
	 {&ia[0],&ia[1],&ia[2],&ia[3],&ia[4],&ia[5],&ia[6]},
	 {&ia[0],&ia[1],&ia[2],&ia[3],&ia[4],&ia[5],&ia[6]},
	 {&ia[0],&ia[1],&ia[2],&ia[3],&ia[4],&ia[5],&ia[6]},
	 {&ia[0],&ia[1],&ia[2],&ia[3],&ia[4],&ia[5],&ia[6]},
	 {&ia[0],&ia[1],&ia[2],&ia[3],&ia[4],&ia[5],&ia[6]},
	 {&ia[0],&ia[1],&ia[2],&ia[3],&ia[4],&ia[5],&ia[6]} };

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cout << *aapi[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}