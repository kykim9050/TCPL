#include <string>
#include <vector>
#include <complex>

using namespace std;
const int ii = 1;

struct Date { int d, m, y; };
//struct Date;	// �������ν��� ���Ҹ� ���������� ���ǰ� ���� �ٸ� ����, �Լ����� ��� �Ұ�

//template<typename T> T abs(T a) { return a < 0 ? -a : a; };
template<typename T> T abs(T a);	//������ ���������� ���ǰ� ���� �ʴ´ٴ� ��� �߻�

//constexpr int fac(int n) { return (n < 2) ? 1 : n * fac(n - 1); }
constexpr int fac(int n);	//���� ���������� ����

//namespace NX { int a; }
namespace NX {};	// ������ ���������� ���ο� ���� ���ٸ� ������

//int day(Date* p) { return p->d; }
int day(Date* p);	// �Լ��� ���� ����. ������ ����� ����


// ������ ���ǰ� �ƴϸ� ���Ǹ� �ۼ��ϰ�, ������ ���Ƕ�� ���Ǿ��� �������� ��ȯ�϶�
int main(void)
{
	//char ch;
	char ch = 200;

	//string s;
	string s = "aaa";

	//auto count = 1;
	//auto count;	// auto�� ���� �ÿ� ���ǰ� ������ �߷��� �Ұ��ϱ� ������ ����

	//const double pi{ 3.1415926535897 };
	//const double pi;	// �������� ������ ����� �ʱ�ȭ ���� �� �ο��ؾ߸� ��. �̴ϼȶ���� �ȵǸ� ����

	//extern int error_number;
	//extern int error_number = 10;	// extern ������ ���� ������ �ʱ�ȭ �Ұ���. ���������� �ʱ�ȭ ����

	//const char* name = "Njal";
	const char* name;
	//const char* season[] = { "spring","summer","fall","winter" };
	//const char* season[];	// ũ�Ⱑ �־����� ���� ��쿡�� �迭�� �� ���� ������ �ʿ�

	//vector<string> people{ name, "Skarphedin","Gunnar" };
	vector<string> people;


	//double sqrt(double);	//�ش� �Լ��� ���� �Ǿ��ִ� ����
	//double sqrt(double Value) { return Value * Value; }	// ���Ǹ� ������ ����� ������ �Լ��ν� �ۼ��ؾ� ��

	//constexpr double zz{ ii * fac(7) };
	//constexpr double zz;	// ������ Ÿ�ӿ� �����Ǿ�� �ϱ� ������ �ʱ�ȭ�� �� �ʿ�

	//using Cmplx = std::complex<double>;
	//using Cmplx;	// using�� ��Ī���� ������ ����� �ʱ�ȭ�� �� �ʿ�
	
	//struct User;
	struct User { string name; };

	//enum class Beer{carlsverg, Tuborg, Thor};
	enum class Beer;

	return 0;
}