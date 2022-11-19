#include <iostream>
#include <vector>

using namespace std;

int d(int n)
{
	int self = n;
	while (n)
	{
		self += n % 10;
		n /= 10;
	}
	if (self > 10000) return 2;
	return self;
}

int main()
{
	vector<bool> self_num(10000, true);

	int index = 0;
	for (int i = 0; i < 10000; i++)
	{
		index = d(i + 1);
		self_num[index-1] = false;
	}

	for (int i = 0; i < 10000; i++)
	{
		if (self_num[i]) cout << i + 1 << endl;
	}

	return 0;
}