// �÷��� �������� ��� (��������� �Ұ���)
#include <WinSock2.h>
#include <Windows.h>

#include <iostream>
#include <filesystem>




// ���δٸ� 10���� �̽� �Ұ����� �ڵ带 �ۼ��� �� (ȣȯ�� ���� ���ϰԵ� �ڵ�)
int main(void)
{
	// int (�ϵ��� ���� �ٲ�)
	int A = 2147483647;

	// A�� ������ ��  (�ϵ��� ���� �ٲ�)
	int* pA = &A;

	// long (�ϵ��� ���� �ٲ�)
	long B = 2147483647;
	
	// char (�ϵ��� ���� signed, unsigned �ٸ�
	char C = 200;
	// ���� ���

	// ���� ��� ����

	// �����
	int num = 0x12345678;
	unsigned char* p = reinterpret_cast<unsigned char*>(&num);
	std::cout << std::hex << static_cast<int>(p[0]) << std::endl;
	
	return 0;
}