#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> remainder;

	int input;
	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		remainder.insert(input % 42);
	}

	cout << remainder.size();

	return 0;
}