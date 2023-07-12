#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int T;
	cin >> T;

	while (T--) {
		int a, b, c, ans = 0;
		cin >> a >> b >> c;

		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				for (int k = 1; k <= c; k++) {
					if (i % j == j % k && j % k == k % i) ans++;
				}
			}
		}
		cout << ans << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}