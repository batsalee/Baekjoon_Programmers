#include <iostream>

using namespace std;

int main()
{
	int length;
	cin >> length;

	string num;
	cin >> num;

	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += (num[i]-'0');
	}

	cout << sum;

	return 0;
}