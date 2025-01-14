#include <iostream>
#include <string>

using namespace std;

// string과 const char* 모두 적용될 수 있는 함수
int FindPattern(const char* _Str, const char* _Pattern)
{
	int dupNum = 0;
	int strLen = strlen(_Str);
	int patternLen = strlen(_Pattern);

	for (int i = 0; i < strLen; ++i)
	{
		// 첫 문자가 일치 한다면
		if (_Pattern[0] == _Str[i])
		{
			//반복문 수행
			if (strLen-i >= patternLen)
			{
				int patternIdx = 1;
				
				while (patternIdx < patternLen)
				{
					if (_Pattern[patternIdx] != _Str[i + patternIdx])
					{
						break;
					}
					++patternIdx;
				}

				if (patternIdx == patternLen)
				{
					++dupNum;
				}
			}
		}
	}

	return dupNum;
}

int FindPattern(const string& _Str, const string& _Pattern)
{
	return FindPattern(_Str.c_str(), _Pattern.c_str());
}

// string과 똑같은 구성의 c스타일 string에서 중복되는 문자열의 수를 찾는 함수를 구현
int main(void)
{
	const string pairStr = "aba";
	const string fullStr = "xabaacbaxabbaabaabab";
	const char fullCStr[]{ 'x', 'a', 'b', 'a', 'a', 'b', 'c', 'b', 'a', 'x', 'a', 'b', 'b', '\0'};

	int Value1 = FindPattern(fullStr, pairStr);
	int Value2 = FindPattern(fullCStr, pairStr);

	cout << "Matching string pattern(in string) : " << Value1 << endl;
	cout << "Matching string pattern(in const char*) : " << Value2 << endl;

	return 0;
}