#include <bits/stdc++.h>
using namespace std;

vector<int> parent;

int Find(int x)
{
	if (parent[x] == x) return x;
	return parent[x] = Find(parent[x]);
}

void Union(int x, int y)
{
	x = Find(x);
	y = Find(y);
	if (x < y) parent[y] = x;
	else if (x > y) parent[x] = y;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	parent.resize(N + 1);
	for (int i = 1; i < N + 1; i++) {
		parent[i] = i;
	}

	vector<tuple<int, int, int>> costs(M); // cost, from, to
	int u, v, t;
	for (int i = 0; i < M; i++) {
		cin >> u >> v >> t;
		costs[i] = { t, u, v };
	}
	sort(costs.begin(), costs.end());

	vector<int> result(1, 0);
	int count = 0;
	for (auto t : costs) {
		int cost = get<0>(t);
		int from = get<1>(t);
		int to = get<2>(t);

		if (Find(from) != Find(to)) {
			result.push_back(cost);
			Union(from, to);
			count++;
		}

		if (count == N - 1) break;
	}
	
	for (int i = 1; i < result.size(); i++) {
		if (result[i] != i) {
			cout << i;
			return 0;
		}
	}
	
	cout << result.back() + 1;
	return 0;
}