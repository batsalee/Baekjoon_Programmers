#include <bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<int> candy_sum;
vector<int> group;

int Find(int x)
{
	if (parent[x] == x) return x;
	return parent[x] = Find(parent[x]);
}

void Union(int x, int y)
{
	x = Find(x);
	y = Find(y);
	if (x < y) {
		parent[y] = x;

		candy_sum[x] += candy_sum[y];
		group[x] += group[y];
	
		candy_sum[y] = 0;
		group[y] = 0;
	}
	else if (x > y) {
		parent[x] = y;

		candy_sum[y] += candy_sum[x];
		group[y] += group[x];

		candy_sum[x] = 0;
		group[x] = 0;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M, K;
	cin >> N >> M >> K;

	vector<int> c(N + 1);
	parent.resize(N + 1);
	candy_sum.resize(N + 1);
	group.resize(N + 1);

	for (int i = 1; i < N + 1; i++) {
		cin >> c[i];
		parent[i] = i;
		candy_sum[i] = c[i];
		group[i] = 1;
	}

	int a, b;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		Union(a, b);
	}

	vector<pair<int, int>> cases;
	cases.push_back({0, 0});
	for (int i = 1; i < N + 1; i++) {
		if (group[i] != 0) cases.push_back({group[i], candy_sum[i]});
	}
		
	// DP
	vector<vector<int>> result(cases.size(), vector<int>(K, 0));
	for (int i = 1; i < cases.size(); i++) {
		for (int j = 0; j < K; j++) {
			int w = cases[i].first;
			int v = cases[i].second;

			if (j >= w) result[i][j] = max(result[i - 1][j], result[i - 1][j - w] + v);
			else result[i][j] = result[i - 1][j];
		}
	}
	
	cout << result.back().back();
	
	return 0;
}