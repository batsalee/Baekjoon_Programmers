#include <bits/stdc++.h>
using namespace std;

void solve()
{
	map<string, int> resistance = {
		{"black", 0}, {"brown", 1}, {"red", 2}, {"orange", 3}, {"yellow", 4},
		{"green", 5}, {"blue", 6}, {"violet", 7}, {"grey", 8}, {"white", 9}
	};

	string value1, value2, multi;
	cin >> value1 >> value2 >> multi;

	cout << fixed;
	cout.precision(0);
	cout << (10 * resistance[value1] + resistance[value2]) * pow(10, resistance[multi]);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}