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
		parent[i] =	i;
	}

	vector<bool> isMale(N + 1);
	char c;
	for (int i = 1; i < N + 1; i++) {
		cin >> c;
		if (c == 'M') isMale[i] = true;
		else isMale[i] = false;
	}

	vector<tuple<int, int, int>> costs; // cost, from, to
	int u, v, d;
	for (int i = 0; i < M; i++) {
		cin >> u >> v >> d;
		if(isMale[u] != isMale[v]) costs.push_back({ d, u, v });
	}
	sort(costs.begin(), costs.end());

	int answer = 0, count = 0;
	for (auto t : costs) {
		int cost = get<0>(t);
		int from = get<1>(t);
		int to = get<2>(t);

		if (Find(from) != Find(to)) {
			answer += cost;
			Union(from, to);
			count++;
		}

		if (count == N - 1) break;
	}

	if (count == N - 1) cout << answer;
	else cout << -1;

	return 0;
}