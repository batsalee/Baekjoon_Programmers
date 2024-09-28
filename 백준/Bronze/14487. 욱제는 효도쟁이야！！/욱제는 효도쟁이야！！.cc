#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0, max = 0, input;
	while (n--) {
		cin >> input;
		sum += input;
		if (input > max) max = input;
	}

	cout << sum - max;

	return 0;
}