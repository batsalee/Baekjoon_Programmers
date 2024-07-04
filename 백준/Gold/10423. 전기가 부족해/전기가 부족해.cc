#include <bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<bool> power_plant;

int Find(int x)
{
	if (parent[x] == x) return x;
	return parent[x] = Find(parent[x]);
}

void Union(int x, int y)
{
	x = Find(x);
	y = Find(y);
	if (power_plant[x]) parent[y] = x;
	else if (power_plant[y]) parent[x] = y;
	else {
		if (x < y) parent[y] = x;
		else if (x > y) parent[x] = y;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M, K; // 도시갯수, 케이블수, 발전소수
	cin >> N >> M >> K;

	power_plant.resize(N + 1, false);
	int input;
	for (int i = 0; i < K; i++) {
		cin >> input;
		power_plant[input] = true;
	}

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

	int answer = 0, count = 0;
	for (auto t : costs) {
		int cost = get<0>(t);
		int from = get<1>(t);
		int to = get<2>(t);

		if (Find(from) != Find(to) && !(power_plant[parent[from]] && power_plant[parent[to]])) {
			answer += cost;
			Union(from, to);
			count++;
		}

		if (count == N - 1) break;
	}

	cout << answer;

	return 0;
}