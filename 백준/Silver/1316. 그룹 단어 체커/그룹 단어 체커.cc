#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_group(string s)
{
	vector<char> alphabet;

	alphabet.push_back(s[0]);
	for (int i = 1; i < s.length(); i++)
	{
		// 이전 문자와 같으면 그냥 continue
		if (s[i] == s[i - 1]) continue;

		// 처음 나오는 알파벳은 저장한다
		auto itr = find(alphabet.begin(), alphabet.end(), s[i]);
		if ( itr == alphabet.end() )
		{
			alphabet.push_back(s[i]);
		}
		// 이미 저장된 알파벳인데 이전 문자와 다르면 return false;
		else if (itr != alphabet.end())
			return false;
	}
	return true;
}

int main()
{
	int count;
	cin >> count;

	vector<string> input_string(count);
	for (int i = 0; i < count; i++)
	{
		cin >> input_string[i];
	}

	int result = 0;
	for (const string& str : input_string)
	{
		if (is_group(str)) result++;
	}

	cout << result;

	return 0;
}