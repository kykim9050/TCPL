#include <iostream>


int main(void)
{
	char c = 'a';
	// char �� ������
	char* pc = &c;
	
	// ũ�Ⱑ 10�� int �迭
	int ia[10]{0,1,2,3,4,5,6,7,8,9};
	// ũ�Ⱑ 10�� int �迭 ���۷���
	int(&ria)[10] {ia};
	ria[0] = 10;

	char cs[] = "dafag";
	// char �迭 ������
	char* pcs = cs;
	// char ��������  ������
	char** ppc = &pc;
	**ppc = 'k';

	// ����� ����
	const int ic = 10;
	const int oic = 20;
	// ����� ������ ������
	const int* cpic = &ic;
	//*cpic = 20;
	cpic = &oic;

	int i = 10;
	int oi = 20;
	// int�� ����Ű�� const ������
	int* const cpi = &i;
	*cpi = 20;
	//cpi = &oi

	return 0;
}