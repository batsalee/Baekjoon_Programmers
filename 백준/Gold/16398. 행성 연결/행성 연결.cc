#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<vector<int>> costs(N, vector<int>(N));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> costs[i][j];
		}
	}

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

	vector<bool> selected(N, false);
	selected[0] = true;
	for (int i = 1; i < costs[0].size(); i++) {
		int adj_vertex = i;
		int distance_to_adj = costs[0][i];
		pq.push({ distance_to_adj, adj_vertex });
	}

	long long answer = 0;
	while (pq.size()) {
		int distance_to_this = pq.top().first;
		int this_vertex = pq.top().second;
		pq.pop();

		if (selected[this_vertex]) continue;

		selected[this_vertex] = true;
		for (int i = 0; i < costs[this_vertex].size(); i++) {
			if (this_vertex == i) continue;

			int adj_vertex = i;
			int distance_to_adj = costs[this_vertex][i];
			if (!selected[adj_vertex]) pq.push({ distance_to_adj, adj_vertex });
		}

		answer += distance_to_this;
	}

	cout << answer;

	return 0;
}