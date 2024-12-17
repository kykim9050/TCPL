#include <string>
#include <vector>
#include <complex>

using namespace std;
const int ii = 1;

struct Date { int d, m, y; };
//struct Date;	// 선언으로써의 역할만 가능하지만 정의가 없어 다른 변수, 함수에서 사용 불가

//template<typename T> T abs(T a) { return a < 0 ? -a : a; };
template<typename T> T abs(T a);	//선언은 가능하지만 정의가 되지 않는다는 경고 발생

//constexpr int fac(int n) { return (n < 2) ? 1 : n * fac(n - 1); }
constexpr int fac(int n);	//선언만 가능하지만 경고뜸

//namespace NX { int a; }
namespace NX {};	// 선언만은 가능하지만 내부에 뭐가 없다면 무쓸모

//int day(Date* p) { return p->d; }
int day(Date* p);	// 함수의 선언만 가능. 하지만 기능은 없지


// 선언이 정의가 아니면 정의를 작성하고, 선언이 정의라면 정의없는 선언으로 변환하라
int main(void)
{
	//char ch;
	char ch = 200;

	//string s;
	string s = "aaa";

	//auto count = 1;
	//auto count;	// auto는 선언 시에 정의가 없으면 추론이 불가하기 때문에 에러

	//const double pi{ 3.1415926535897 };
	//const double pi;	// 지역변수 내에서 상수는 초기화 값을 꼭 부여해야만 함. 이니셜라이즈가 안되면 에러

	//extern int error_number;
	//extern int error_number = 10;	// extern 변수의 지역 선언은 초기화 불가능. 전역에서는 초기화 가능

	//const char* name = "Njal";
	const char* name;
	//const char* season[] = { "spring","summer","fall","winter" };
	//const char* season[];	// 크기가 주어지지 않은 경우에는 배열은 꼭 내부 구현이 필요

	//vector<string> people{ name, "Skarphedin","Gunnar" };
	vector<string> people;


	//double sqrt(double);	//해당 함수는 선언만 되어있는 상태
	//double sqrt(double Value) { return Value * Value; }	// 정의를 포함해 쓸라면 전역에 함수로써 작성해야 함

	//constexpr double zz{ ii * fac(7) };
	//constexpr double zz;	// 컴파일 타임에 결정되어야 하기 때문에 초기화가 꼭 필요

	//using Cmplx = std::complex<double>;
	//using Cmplx;	// using이 별칭으로 지정할 대상의 초기화가 꼭 필요
	
	//struct User;
	struct User { string name; };

	//enum class Beer{carlsverg, Tuborg, Thor};
	enum class Beer;

	return 0;
}