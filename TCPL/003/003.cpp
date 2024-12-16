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

// 5가지의 다른 종류의 c++ 생성자 (정의x)
// 5가지의 다른 종류의 c++ 생성자 (정의o)
int main(void)
{
	// 기본적으로 정의되지 않으면 쓰레기 값이 들어가있는데
	// 정의로 구현을 하면 값이 채워지거나 특정 값으로 초기화됌


	// int
	int a;
	int da{ 1 };

	// 클래스
	B b;
	B db = B{1 };

	// enum class
	C c;
	C dc = C();

	// 구조체
	D d;
	D dd = D{};

	// vector
	vector<int> e;
	vector<int> de = vector<int>{ 1,2,3 };

	return 0;
}