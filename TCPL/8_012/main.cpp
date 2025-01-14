#include <iostream>
#include <string>

using namespace std;

// string�� const char* ��� ����� �� �ִ� �Լ�
int FindPattern(const char* _Str, const char* _Pattern)
{
	int dupNum = 0;
	int strLen = strlen(_Str);
	int patternLen = strlen(_Pattern);

	for (int i = 0; i < strLen; ++i)
	{
		// ù ���ڰ� ��ġ �Ѵٸ�
		if (_Pattern[0] == _Str[i])
		{
			//�ݺ��� ����
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

// string�� �Ȱ��� ������ c��Ÿ�� string���� �ߺ��Ǵ� ���ڿ��� ���� ã�� �Լ��� ����
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