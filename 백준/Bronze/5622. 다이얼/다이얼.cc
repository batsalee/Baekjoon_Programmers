#include <iostream>

using namespace std;

int main()
{
	string dial;
	cin >> dial;

	int need_time = 0;
	for (const char& c : dial)
	{
		need_time += (c % 'A' / 3 + 3);
		if (c == 'S' || c=='V' || c=='Y' || c=='Z') need_time--;
	}

	cout << need_time;

	return 0;
}