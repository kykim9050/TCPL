#include <iostream>

int main(void)
{
	char ca[] = "afafoghozgskn1kjbkjabgkjasdbg";
	char* headPtrC = &ca[5];
	char* tailPtrC = &ca[20];
	int charcnt = 0;

	// char�� 1����Ʈ�̱� ������ �������� �ּ� ���� ���� ���̸�ŭ�� char�� ���� �� ����
	// �迭�� �����̱� ������ �ּҰ� ���޾� �Ҵ�
	// �ݺ� ���꺸�� ���귮�� ����
	std::cout << tailPtrC - headPtrC << std::endl;

	for (; headPtrC != tailPtrC; ++headPtrC)
	{
		++charcnt;
	}
	std::cout << charcnt;
	return 0;
}