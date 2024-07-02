#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> arr(N + 1);
	for (int i = 1; i < N + 1; i++) {
		cin >> arr[i];
	}

	// Make DP
	vector<vector<int>> DP(N + 1, vector<int>(N + 1, 0));
	for (int i = 1; i < N + 1; i++) { // 1개일때
		DP[i][i] = 1;
	}

	for (int i = 1; i < N; i++) { // 2개일때
		if (arr[i] == arr[i + 1]) DP[i][i + 1] = 1;
	}

	for (int i = N - 1; i >= 1; i--) { // 3개일때
		for (int j = i + 2; j <= N; j++) {
			if (arr[i] == arr[j] && DP[i + 1][j - 1]) DP[i][j] = 1;
		}
	}

	// query
	int M;
	cin >> M;

	int s, e;
	while (M--) {
		cin >> s >> e;
		cout << DP[s][e] << '\n';
	}

	return 0;
}