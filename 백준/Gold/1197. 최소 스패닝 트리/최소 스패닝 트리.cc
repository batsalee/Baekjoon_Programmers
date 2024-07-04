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

	int V, E;
	cin >> V >> E;

	parent.resize(V + 1);
	for (int i = 1; i < V + 1; i++) {
		parent[i] = i;
	}

	vector<tuple<int, int, int>> costs(E); // cost, from, to
	int A, B, C;
	for (int i = 0; i < E; i++) {
		cin >> A >> B >> C;
		costs[i] = {C, A, B}; // sort 쉽게하려고 위치 바꿔주고
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

		if (count == V - 1) break;
	}

	cout << answer;

	return 0;
}