#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	cin >> n;

	while (n--) {
		cin >> k;
		cout << string(k, '=') << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}