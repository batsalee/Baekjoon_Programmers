#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int x, y;
	cin >> x >> y;

	if (x > y) cout << x + y;
	else cout << y - x;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}