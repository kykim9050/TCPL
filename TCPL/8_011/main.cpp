#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
const string QuitStr = "Quit";



vector<string> RemoveDup(const vector<string>& _origin)
{
	vector<string> ret;
	// 미리 넉넉하게 capacity 할당
	ret.reserve(_origin.size());
	string prevStr = "";

	int size = static_cast<int>(_origin.size());

	for (int i = 0; i < size; ++i)
	{
		if (prevStr != _origin[i])
		{
			prevStr = _origin[i];
			ret.emplace_back(_origin[i]);
		}
	}
	
	return ret;
}

vector<string> ModifyWords(vector<string>& _origin)
{
	// 단어 정렬
	sort(_origin.begin(), _origin.end());

	// 중복 제거
	// 결과를 우변값으로 활성화 하여 이동 연산을 사용하도록 지정
	return RemoveDup(_origin);
}

int main(void)
{
	string s;
	vector<string> words;

	for (;cin >> s;)
	{
		if (QuitStr == s)
		{
			break;
		}
		words.emplace_back(s);
	}

	vector<string> uniqueWords{ ModifyWords(words) };

	for (size_t i = 0; i < uniqueWords.size(); i++)
	{
		cout << uniqueWords[i] << endl;
	}

	return 0;
}