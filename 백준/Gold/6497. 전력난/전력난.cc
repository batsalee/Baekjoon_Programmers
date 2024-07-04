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

	while (true) {
		int m, n; // m : vertex, n : edge
		cin >> m >> n;
		if (m == 0 && n == 0) break;

		parent.resize(m + 1);
		for (int i = 1; i < m + 1; i++) {
			parent[i] = i;
		}

		int answer = 0;
		vector<tuple<int, int, int>> roads(n);
		int x, y, z;
		for (int i = 0; i < n; i++) {
			cin >> x >> y >> z;
			roads[i] = {z, x, y};
			answer += z;
		}
		sort(roads.begin(), roads.end());

		int count = 0;
		for (auto r : roads) {
			int cost = get<0>(r);
			int from = get<1>(r);
			int to = get<2>(r);

			if (Find(from) != Find(to)) {
				answer -= cost;
				Union(from, to);
				count++;
			}

			if (count == m - 1) break;
		}

		cout << answer << '\n';
	}

	return 0;
}