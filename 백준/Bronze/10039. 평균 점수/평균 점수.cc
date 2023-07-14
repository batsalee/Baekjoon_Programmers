#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int input, sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> input;
		sum += max(input, 40);
	}

	cout << sum / 5;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}