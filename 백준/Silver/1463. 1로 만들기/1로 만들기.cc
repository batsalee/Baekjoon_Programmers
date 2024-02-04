#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> dp(N + 3);
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	int candi;
	for (int i = 4; i < N + 1; i++) {
		candi = 100000;
		if (i % 3 == 0) candi = min(candi, dp[i / 3] + 1);
		if (i % 2 == 0) candi = min(candi, dp[i / 2] + 1);
		candi = min(candi, dp[i - 1] + 1);
		dp[i] = candi;
	}

	cout << dp[N];

	return 0;
}