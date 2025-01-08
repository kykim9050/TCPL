#include <iostream>

int gia[5];

int main(void)
{
	int lia[5];
	int* newia = new int[5];

	const int OverValue = 10;
	const int UnderValue = -10;
	constexpr int OverOverValue = 100;

	// read
	int gi = gia[OverValue];	// 경고 (랜덤)
	int li = lia[OverValue];	// 경고 (랜덤)
	int newi = newia[OverValue];	// 경고 (랜덤)
	int gil = gia[UnderValue];	// 경고 (랜덤)
	int lil = lia[UnderValue];	// 경고 (랜덤)
	int newil = newia[UnderValue];	// 경고 (랜덤)

	//int lgi = gia[OverOverValue];	// 경고 (약 크기 8000까지는 가능)
	//int lli = lia[OverOverValue];	// 경고 (약 크기 300까지는 가능)
	//int lnewi = newia[OverOverValue];	// 경고 (액 크기 2000까지는 가능)

	// write
	gia[OverValue] = 10;	// 경고
	//lia[OverValue] = 10;	// 에러
	newia[OverValue] = 10;	// 경고
	//gia[OverOverValue] = 10;	// 에러(불규칙하게)
	//lia[OverOverValue] = 10;	// 에러
	//newia[OverOverValue] = 10;	// 에러 (불규칙하게)

	gia[UnderValue] = 10;	// 에러 간헐적
	lia[UnderValue] = 10;	// 에러 간헐적
	//newia[UnderValue] = 10;	// 에러 (delete를 안하면 실행되는데 그게 무슨의미가 있겠뉴)


	delete[] newia;
	newia = nullptr;

	return 0;
}