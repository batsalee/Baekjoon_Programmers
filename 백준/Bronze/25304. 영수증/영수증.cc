#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int total;
	cin >> total;

	int kind;
	cin >> kind;

	vector<int> price_count(2*kind);
	for (int i = 0; i < kind*2; i++)
	{
		cin >> price_count[i];
	}

	int check_sum = 0;
	for (int i = 0; i < kind*2; i+=2)
	{
		check_sum += price_count[i+0] * price_count[i+1];
	}

	(check_sum == total) ? cout << "Yes" : cout << "No";

	return 0;
}