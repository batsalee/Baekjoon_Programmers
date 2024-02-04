#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	int dp[11] = { 0, 1, 2, 4 };
	int n;
	while (T--) {
		cin >> n;
		for (int i = 4; i < 11; i++) {
			if (dp[i] != 0) continue;
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}

		cout << dp[n] << '\n';
	}

	return 0;
}