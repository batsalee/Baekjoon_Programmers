#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int A, B;
	cin >> A >> B;
	cout << (A > B ? 2 * B + 1 : 2 * A - 1);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}