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
	int gi = gia[OverValue];	// ��� (����)
	int li = lia[OverValue];	// ��� (����)
	int newi = newia[OverValue];	// ��� (����)
	int gil = gia[UnderValue];	// ��� (����)
	int lil = lia[UnderValue];	// ��� (����)
	int newil = newia[UnderValue];	// ��� (����)

	//int lgi = gia[OverOverValue];	// ��� (�� ũ�� 8000������ ����)
	//int lli = lia[OverOverValue];	// ��� (�� ũ�� 300������ ����)
	//int lnewi = newia[OverOverValue];	// ��� (�� ũ�� 2000������ ����)

	// write
	gia[OverValue] = 10;	// ���
	//lia[OverValue] = 10;	// ����
	newia[OverValue] = 10;	// ���
	//gia[OverOverValue] = 10;	// ����(�ұ�Ģ�ϰ�)
	//lia[OverOverValue] = 10;	// ����
	//newia[OverOverValue] = 10;	// ���� (�ұ�Ģ�ϰ�)

	gia[UnderValue] = 10;	// ���� ������
	lia[UnderValue] = 10;	// ���� ������
	//newia[UnderValue] = 10;	// ���� (delete�� ���ϸ� ����Ǵµ� �װ� �����ǹ̰� �ְڴ�)


	delete[] newia;
	newia = nullptr;

	return 0;
}