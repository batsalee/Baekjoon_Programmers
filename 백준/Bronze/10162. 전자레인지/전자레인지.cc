#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int T;
	cin >> T;

	int A, B, C;
	A = T / 300; T %= 300;
	B = T / 60; T %= 60;
	C = T / 10; T %= 10;

	if (T) cout << -1;
	else cout << A << ' ' << B << ' ' << C;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}