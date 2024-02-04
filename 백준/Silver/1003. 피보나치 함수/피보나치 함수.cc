#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	vector<pair<int, int>> dp(41, {-1, -1});
	dp[0] = { 1, 0 }; dp[1] = { 0, 1 };

	int N;
	while (T--) {
		cin >> N;
		for (int i = 2; i <= N; i++) {
			if (dp[i].first != -1) continue;
			else dp[i] = { dp[i - 1].first + dp[i - 2].first, dp[i - 1].second + dp[i - 2].second };
		}

		cout << dp[N].first << ' ' << dp[N].second << '\n';
	}

	return 0;
}