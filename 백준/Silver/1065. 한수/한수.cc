#include <iostream>
#include <vector>

using namespace std;

bool is_hansu(int n)
{
	vector<int> check;

	while (n)
	{
		check.push_back(n%10);
		n /= 10;
	}

	for (int i = check.size(); i >= 3; i--)
	{
		if ((check[i-1] - check[i - 2]) == (check[i - 2] - check[i - 3]))
			continue;
		else
			return false;
	}

	return true;
}

int main()
{
	int input;
	cin >> input;

	int count = 0;
	for (int i = 1; i <= input; i++)
	{
		if (is_hansu(i)) count++;
	}

	cout << count;

	return 0;
}