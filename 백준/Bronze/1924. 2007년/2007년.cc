#include <bits/stdc++.h>
using namespace std;

void solve()
{
	const string days[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	const int end_day[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int m, d;
	cin >> m >> d;

	int gap = 0;
	for (int i = 1; i < m; i++) { gap += end_day[i]; }
	gap += d - 1;

	cout << days[gap % 7];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}