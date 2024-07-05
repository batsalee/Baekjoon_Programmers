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

	int N, M, K;
	cin >> N >> M >> K;

	vector<tuple<int, int, int>> costs(M + 1); // cost, from, to
	int x, y;
	for (int i = 1; i < M + 1; i++) {
		cin >> x >> y;
		costs[i] = { i, x, y };
	}
	sort(costs.begin(), costs.end());

	int bannish = 0;
	parent.resize(N + 1);
	while (K--) {		
		for (int i = 1; i < N + 1; i++) {
			parent[i] = i;
		}

		int answer = 0, count = 0;
		for (int i = 1; i < M + 1; i++) {
			auto t = costs[i];
			int cost = get<0>(t);
			int from = get<1>(t);
			int to = get<2>(t);

			if (cost <= bannish) continue;

			if (Find(from) != Find(to)) {
				answer += cost;
				Union(from, to);
				count++;
			}

			if (count == N - 1) break;
		}
		
		if (count == N - 1) cout << answer << ' ';
		else cout << 0 << ' ';
					
		bannish++;
	}

	return 0;
}