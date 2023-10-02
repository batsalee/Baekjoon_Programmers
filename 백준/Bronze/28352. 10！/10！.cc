#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long fac = 1, week = 60 * 60 * 24 * 7;

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		fac *= i;
	}

	cout << fac / week;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}