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

double getDistance(pair<int, int> A, pair<int, int> B)
{
	return sqrt(pow(A.first - B.first, 2) + pow(A.second - B.second, 2));
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	int x, y;
	vector<pair<int, int>> coordinate(N);
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		coordinate[i] = { x, y };
	}

	parent.resize(N + 1);
	for (int i = 1; i < N + 1; i++) {
		parent[i] = i;
	}

	int count = 0;
	for (int i = 0; i < M; i++) {
		cin >> x >> y;
		if (Find(x) != Find(y)) {
			Union(x, y);
			count++;
		}
	}

	vector<tuple<double, int, int>> costs; // cost, from, to
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			double dist = getDistance(coordinate[i], coordinate[j]);
			costs.push_back({ dist, i + 1, j + 1 });
		}
	}
	sort(costs.begin(), costs.end());

	double answer = 0;
	for (auto t : costs) {
		double cost = get<0>(t);
		int from = get<1>(t);
		int to = get<2>(t);

		if (Find(from) != Find(to)) {
			answer += cost;
			Union(from, to);
			count++;
		}

		if (count == N - 1) break;
	}

	cout.precision(2);
	cout << fixed;
	cout << answer;

	return 0;
}