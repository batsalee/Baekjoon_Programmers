#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	int result = 5, added = 7;
	for (int i = 2; i <= N; i++) {
		result = ((result % 45678) + (added % 45678)) % 45678;
		added += 3;
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