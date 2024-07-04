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

double getDistance(pair<double, double> A, pair<double, double> B)
{
	return sqrt(pow(A.first - B.first, 2) + pow(A.second - B.second, 2));
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n;
	cin >> n;

	vector<pair<double, double>> coordinate(n);
	double x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		coordinate[i] = { x, y };
	}

	vector<tuple<double, int, int>> costs; // cost, from, to
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			double dist = getDistance(coordinate[i], coordinate[j]);			
			costs.push_back({ dist, i, j });
		}
	}
	sort(costs.begin(), costs.end());

	parent.resize(n);
	for (int i = 0; i < n; i++) {
		parent[i] = i;
	}

	int count = 0;
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

		if (count == n - 1) break;
	}

	cout.precision(2);
	cout << fixed;
	cout << answer;

	return 0;
}