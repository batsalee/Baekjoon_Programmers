#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

#define INF 2147483647

vector<vector<pair<int, int>>> adj;
vector<int> distances;

int dijkstra(int start, int end)
{
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<> > pq;
	distances[start] = 0;
	pq.push({ 0, start });

	while (pq.size()) {
		int here = pq.top().second;
		int here_cost = pq.top().first;
		pq.pop();

		if (here_cost > distances[here]) continue;

		for (auto& p : adj[here]) {
			int there = p.second;
			int there_cost = here_cost + p.first;

			if (there_cost < distances[there]) {
				distances[there] = there_cost;
				pq.push({ there_cost, there });
			}
		}
	}

	return distances[end];
}

int main()
{
	sync;

	int N, M;
	cin >> N >> M;
	adj.resize(N + 1);
	distances.resize(N + 1, INF);

	int from, to, cost;
	for (int i = 0; i < M; i++) {
		cin >> from >> to >> cost;
		adj[from].push_back({cost, to});
	}

	int start, end;
	cin >> start >> end;

	cout << dijkstra(start, end);

	return 0;
}