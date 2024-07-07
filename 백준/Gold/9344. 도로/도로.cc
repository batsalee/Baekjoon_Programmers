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

	int T;
	cin >> T;

	while (T--) {
		int N, M, p, q;
		cin >> N >> M >> p >> q; // N : 도시수, M : 길의 수, { p, q }는 판단

		parent.resize(N + 1);
		for (int i = 1; i < N + 1; i++) {
			parent[i] = i;
		}

		vector<tuple<int, int, int>> costs(M); // cost, from, to
		int u, v, w;
		for (int i = 0; i < M; i++) {
			cin >> u >> v >> w;
			costs[i] = { w, u, v };
		}
		sort(costs.begin(), costs.end());

		vector<pair<int, int>> result;
		int count = 0;
		for (auto t : costs) {
			int cost = get<0>(t);
			int from = get<1>(t);
			int to = get<2>(t);

			if (Find(from) != Find(to)) {
				Union(from, to);
				count++;
				if (from > to) swap(from, to);
				result.push_back({ from, to });
			}

			if (count == N - 1) break;
		}

		if (p > q) swap(p, q);
		if (find(result.begin(), result.end(), make_pair(p, q)) == result.end()) cout << "NO\n";
		else cout << "YES\n";
	}

	return 0;
}