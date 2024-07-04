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
	int a, b, c;
	long long answer = 0;
	for (int i = 0; i < M; i++) {
		cin >> a >> b >> c;
		costs[i] = { c, a, b };
		answer += c;
	}
	sort(costs.begin(), costs.end());

	int count_of_road = 0;
	for (auto t : costs) {
		int cost = get<0>(t);
		int from = get<1>(t);
		int to = get<2>(t);

		if (Find(from) != Find(to)) {
			answer -= cost;
			Union(from, to);
			count_of_road++;
		}
	}
	if (count_of_road != N - 1) cout << -1;
	else cout << answer;

	return 0;
}