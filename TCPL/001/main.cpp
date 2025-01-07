#include <iostream>


int main(void)
{
	char c = 'a';
	// char 의 포인터
	char* pc = &c;
	
	// 크기가 10인 int 배열
	int ia[10]{0,1,2,3,4,5,6,7,8,9};
	// 크기가 10인 int 배열 레퍼런스
	int(&ria)[10] {ia};
	ria[0] = 10;

	char cs[] = "dafag";
	// char 배열 포인터
	char* pcs = cs;
	// char 포인터의  포인터
	char** ppc = &pc;
	**ppc = 'k';

	// 상수형 정수
	const int ic = 10;
	const int oic = 20;
	// 상수형 정수의 포인터
	const int* cpic = &ic;
	//*cpic = 20;
	cpic = &oic;

	int i = 10;
	int oi = 20;
	// int를 가르키는 const 포인터
	int* const cpi = &i;
	*cpi = 20;
	//cpi = &oi

	return 0;
}