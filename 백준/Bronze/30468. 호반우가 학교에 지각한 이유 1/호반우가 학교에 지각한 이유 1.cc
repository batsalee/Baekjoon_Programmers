#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int STR, DEX, INT, LUK, N;
	cin >> STR >> DEX >> INT >> LUK >> N;
	cout << max(4 * N - STR - DEX - INT - LUK, 0);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}