#include <iostream>

using namespace std;

class Testclass
{
public:
	Testclass()
	{
		cout << "Create Testclass : " << this << endl;
	}

	Testclass(Testclass& _TestClass)
	{
		cout << "Create Copy Testclass : " << this << endl;
	}

	~Testclass()
	{
		cout << "Destroy Testclass : " << this << endl;
	}
};

void f(char _c)	// �ӽú����� �����ϴ� �Լ�
{
	cout << "f Function" << endl;
}

void g(char& _c)
{
	cout << "g Function" << endl;
}

void h(const char& _c)
{
	cout << "h Function" << endl;
}

Testclass k(Testclass _tc)	// �ӽú��� or ��ü ����
{
	cout << "k Function" << endl;
	return _tc;	// �ӽ� ��ü ����
}

int main(void)
{
	// a
	f('a');
	//g('a');	// rValue�� LValue�� ���� �ʿ�
	h('a');
	// 49
	f(49);
	//g(49);	// rValue�� LValue�� ���� �ʿ�
	h(49);
	// 3300
	f(3300);	// int->char�� ��ȯ�Ǳ⿡ ��� ��ȯ (������ �ҽ�)
	//g(3300);	// rValue�� LValue�� ���� �ʿ�
	h(3300);	// int->char�� ��ȯ�Ǳ⿡ ��� ��ȯ (������ �ҽ�)
	// c (char)
	char c = 'c';	// �̸��� �Ҵ��� ������ ���ڷ� ��������� ����
	f(c);
	g(c);
	h(c);
	// uc (unsigned char)
	unsigned char uc = 'c';
	f(uc);
	// char���� �� ��ȯ�� ���� �ʿ��ѵ�, �̶� ��ȯ�ÿ� �ӽð�ü�� �ʿ��ϴ�.
	// ������ ������ �ӽ� ��ü�� ���ε� �� ���� ����.
	// �׷��� unsigned char -> char�� �Ͻ��� ����ȯ�� �̷������ �ʴ� ��
	// �Ҷ�� ����� ����ȯ�� �ʿ��ϴ�.
	//g(uc);	
	h(uc);
	// sc (signed char)
	signed char sc = 'c';
	f(sc);
	//g(sc);
	h(sc);

	Testclass TC;
	k(TC);

	return 0;
}