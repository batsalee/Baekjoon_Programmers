#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;

		vector<int> room(n + 1, 0);
		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= n; j += i) {
				room[j] ^= 1;
			}
		}

		cout << accumulate(room.begin(), room.end(), 0) << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}