#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	
	int N;
	cin >> N;

	vector<int> dp(N + 2, 0);
	dp[1] = 0, dp[2] = 1;
	for (int i = 3; i <= N; i++) {
		int half_1 = i / 2;
		int half_2 = i & 1 ? i / 2 + 1 : i / 2;
		dp[i] = half_1 * half_2 + dp[half_1] + dp[half_2];
	}

	cout << dp[N];

	return 0;
}