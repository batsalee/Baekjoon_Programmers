#include <iostream>

using namespace std;

int main()
{
	string input;
	cin >> input;

	int index = 0;
	for (char c = 'a'; c <= 'z'; c++)
	{
		index = input.find(c);
		cout << index << ' ';
	}

	return 0;
}