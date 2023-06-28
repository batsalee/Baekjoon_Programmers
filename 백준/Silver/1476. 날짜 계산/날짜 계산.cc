#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int E, S, M;
	cin >> E >> S >> M;

	int year = 0;
	while (true) {
		int earth = year % 15;
		int sun = year % 28;
		int month = year % 19;

		year++;
		if (E == earth + 1 && S == sun + 1 && M == month + 1) break;
	}

	cout << year;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}