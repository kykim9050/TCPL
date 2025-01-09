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

void f(char _c)	// 임시변수를 도입하는 함수
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

Testclass k(Testclass _tc)	// 임시변수 or 객체 생성
{
	cout << "k Function" << endl;
	return _tc;	// 임시 객체 생성
}

int main(void)
{
	// a
	f('a');
	//g('a');	// rValue는 LValue로 변경 필요
	h('a');
	// 49
	f(49);
	//g(49);	// rValue는 LValue로 변경 필요
	h(49);
	// 3300
	f(3300);	// int->char로 변환되기에 축소 변환 (데이터 소실)
	//g(3300);	// rValue는 LValue로 변경 필요
	h(3300);	// int->char로 변환되기에 축소 변환 (데이터 소실)
	// c (char)
	char c = 'c';	// 이름을 할당한 변수를 인자로 집어넣으면 가능
	f(c);
	g(c);
	h(c);
	// uc (unsigned char)
	unsigned char uc = 'c';
	f(uc);
	// char로의 형 변환이 먼저 필요한데, 이때 변환시에 임시객체가 필요하다.
	// 하지만 참조는 임시 객체와 바인딩 할 수가 없다.
	// 그래서 unsigned char -> char로 암시적 형변환이 이루어지지 않는 것
	// 할라면 명시적 형변환이 필요하다.
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