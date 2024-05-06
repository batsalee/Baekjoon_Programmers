#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	vector<pair<int, int>> thing(N + 1);
	int W, V;
	for (int i = 1; i < N + 1; i++) {
		cin >> W >> V;
		thing[i].first = W;
		thing[i].second = V;
	}

	vector<vector<int>> result(N + 1, vector<int>(K + 1, 0));
	for (int i = 1; i < N + 1; i++) {
		for (int j = 0; j < K + 1; j++) {
			int w = thing[i].first;
			int v = thing[i].second;

			if (j >= w) result[i][j] = max(result[i - 1][j], result[i - 1][j - w] + v);
			else result[i][j] = result[i - 1][j];
		}
	}

	cout << result[N][K];	

	return 0;
}