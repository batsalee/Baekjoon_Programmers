#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int d1, d2;
	cin >> d1 >> d2;

	cout << fixed;
	cout.precision(6);
	cout << 2 * d1 + 2 * 3.141592 * d2;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}