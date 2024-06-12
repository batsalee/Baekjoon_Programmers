#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string num;
	cin >> num;

	int result = 0;
	for (char n : num) {
		result += pow(n - '0', 5);
	}

	cout << result;

	return 0;
}