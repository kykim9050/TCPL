#include <vector>

using namespace std;

class B
{
public:
	B()
	{

	}

	B(int _Value)
		:Value(_Value)
	{

	}

	int Value;
};

enum class C
{
	A,
	B,
	C,
};

struct D
{
	int Value;
};

// 5������ �ٸ� ������ c++ ������ (����x)
// 5������ �ٸ� ������ c++ ������ (����o)
int main(void)
{
	// �⺻������ ���ǵ��� ������ ������ ���� ���ִµ�
	// ���Ƿ� ������ �ϸ� ���� ä�����ų� Ư�� ������ �ʱ�ȭ��


	// int
	int a;
	int da{ 1 };

	// Ŭ����
	B b;
	B db = B{1 };

	// enum class
	C c;
	C dc = C();

	// ����ü
	D d;
	D dd = D{};

	// vector
	vector<int> e;
	vector<int> de = vector<int>{ 1,2,3 };

	return 0;
}