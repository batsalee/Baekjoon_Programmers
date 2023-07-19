#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int result, input;
	cin >> result;

	for (int i = 0; i < 9; i++) {
		cin >> input;
		result -= input;
	}

	cout << result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}