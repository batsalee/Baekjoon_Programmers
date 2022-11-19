#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int standard;
	cin >> standard;
	
	int input;
	for (int i = 0; i < size; i++)
	{
		cin >> input;
		if (input < standard) cout << input << ' ';
	}	

	return 0;
}