#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int A, B, C, X, Y;
	cin >> A >> B >> C >> X >> Y;

	int min_use_half, max_use_half;
	min_use_half = min(X, Y) * 2 * C;
	min_use_half += (X > Y) ? (X - Y) * A : (Y - X) * B;
	max_use_half = max(X, Y) * 2 * C;

	int unuse_half;
	unuse_half = A * X + B * Y;

	cout << min(min(min_use_half, max_use_half), unuse_half);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}