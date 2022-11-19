#include <iostream>

using namespace std;

int main()
{
	int count;
	cin >> count;
	
	for (int i = 0; i < count; i++)
	{
		int repeat;
		cin >> repeat;

		string str;
		cin >> str;

		for (const char& c : str)
		{
			cout << string(repeat, c);
		}
		cout << endl;
	}

	return 0;
}