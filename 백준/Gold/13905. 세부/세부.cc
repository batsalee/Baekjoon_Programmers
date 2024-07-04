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

	int s, e;
	cin >> s >> e;

	parent.resize(N + 1);
	for (int i = 1; i < N + 1; i++) {
		parent[i] = i;
	}

	vector<tuple<int, int, int>> limits(M); // limit, from, to
	int a, b, c;
	for (int i = 0; i < M; i++) {
		cin >> a >> b >> c;
		limits[i] = { c, a, b };
	}
	sort(limits.begin(), limits.end(), greater<>());

	int min_gold = 1000000;
	int count_of_road = 0;
	for (auto t : limits) {
		int limit = get<0>(t);
		int from = get<1>(t);
		int to = get<2>(t);

		if (Find(from) != Find(to)) {
			min_gold = min(min_gold, limit);
			Union(from, to);
			count_of_road++;
		}

		if (Find(s) == Find(e)) {
			cout << min_gold;
			return 0;
		}

		if (count_of_road == N - 1) break;
	}

	cout << 0;

	return 0;
}