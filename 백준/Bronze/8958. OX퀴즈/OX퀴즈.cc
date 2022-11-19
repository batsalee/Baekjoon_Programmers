#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int count;
	cin >> count;
	
	vector<string> OX_string(count);
	for (int i = 0; i < count; i++)
	{
		cin >> OX_string[i];
	}

	int score, value;
	for (const string& s : OX_string)
	{
		score = 0;
		value = 1;
		for (const char& c : s)
		{
			if (c == 'X') value = 1;
			else
			{
				score += value;
				value++;
			}
		}
		cout << score << endl;
	}
	

	return 0;
}