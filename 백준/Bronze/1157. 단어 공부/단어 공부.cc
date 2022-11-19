#include <iostream>
#include <map>

using namespace std;

int main()
{
	string str;
	cin >> str;

	map<char, int> count;

	for (const char& c : str)
	{
		count[toupper(c)]++;
	}

	bool flag = false;
	int biggest = count.begin()->second;
	char result = count.begin()->first;
	for (auto itr = ++count.begin(); itr != count.end(); itr++)
	{
		if (itr->second > biggest)
		{
			biggest = itr->second;
			result = itr->first;
			flag = false;
		}
		else if (itr->second == biggest)
		{
			flag = true;
		}
	}

	if (flag) cout << "?";
	else cout << result;

	return 0;
}