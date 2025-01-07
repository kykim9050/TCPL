#include <iostream>

int main(void)
{
	int ia[]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

	int* pi1 = &ia[0];
	int* pi2 = &ia[1];
	
	// int 배열이면 연이어 오는 요소의 주소값은 4바이트씩 차이가 남
	// c++ 컴파일러가 아래의 배열 사이 포인터 연산의 차이를 계산할 때 sizeof(자료형)을 자동으로 나눈 결과를 출력하는 것
	std::cout << pi2 - pi1 << std::endl;



	// 쓰잘데기없는 연산
	int i3 = 10;
	int i4 = 20;

	int* pi3 = &i3;
	int* pi4 = &i4;

	std::cout << pi4 - pi3;

	return 0;
}