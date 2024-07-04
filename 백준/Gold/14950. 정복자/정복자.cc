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

	int N, M, t;
	cin >> N >> M >> t;

	parent.resize(N + 1);
	for (int i = 1; i < N + 1; i++) {
		parent[i] = i;
	}

	vector<tuple<int, int, int>> costs(M); // cost, from, to
	int A, B, C;
	for (int i = 0; i < M; i++) {
		cin >> A >> B >> C;
		costs[i] = { C, A, B };
	}
	sort(costs.begin(), costs.end());

	int answer = 0, count = 0, surcharge = 0;
	for (auto c : costs) {
		int cost = get<0>(c);
		int from = get<1>(c);
		int to = get<2>(c);

		if (Find(from) != Find(to)) {
			answer = answer + cost + surcharge;
			surcharge += t;
			Union(from, to);
			count++;
		}

		if (count == N - 1) break;
	}

	cout << answer;

	return 0;
}