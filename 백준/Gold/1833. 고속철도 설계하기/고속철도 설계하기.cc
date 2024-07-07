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

	int N;
	cin >> N;

	parent.resize(N);
	for (int i = 0; i < N; i++) {
		parent[i] = i;
	}

	int input, C = 0, M = 0; // C는 총비용, M은 새로설치한 갯수
	vector<tuple<int, int, int>> costs; // cost, from, to
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> input;
			if (input < 0) {
				C += -input;
				Union(i, j);
			}			
			
			if (input >= 0) costs.push_back({ input, i, j });
		}
	}
	sort(costs.begin(), costs.end());
	C /= 2;

	vector<pair<int, int>> result;
	for (auto t : costs) {
		int cost = get<0>(t);
		int from = get<1>(t);
		int to = get<2>(t);

		if (Find(from) != Find(to)) {
			C += cost;
			Union(from, to);
			M++;
			result.push_back({ from, to });
		}

		if (M == N - 1) break;
	}

	cout << C << ' ' << M << '\n';
	for(auto p : result) { 
		cout << p.first + 1 << ' ' << p.second + 1 << '\n';
	}

	return 0;
}