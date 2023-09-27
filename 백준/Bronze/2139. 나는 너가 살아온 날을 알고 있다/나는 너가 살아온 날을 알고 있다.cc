#include <bits/stdc++.h>
using namespace std;

void solve()
{
	const int day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	int d, m, y, result;
	while (true) {
		cin >> d >> m >> y;
		if (d == 0 && m == 0 && y == 0) break;

		result = 0;
		for (int i = 0; i < m; i++) {
			result += day[i];
		}
		if (m > 2 && ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))) result += 1;
		result += d;

		cout << result << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}