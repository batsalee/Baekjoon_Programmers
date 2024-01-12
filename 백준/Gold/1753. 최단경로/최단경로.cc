#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

#define INF 2147483647

vector<vector<pair<int, int>>> adj;
vector<int> distances;

void dijkstra(int start)
{
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<> > pq;
	distances[start] = 0;
	pq.push(make_pair(0, start));

	while (pq.size()) {
		int here = pq.top().second;
		int here_cost = pq.top().first;
		pq.pop();

		for (auto& p : adj[here]) {
			int there = p.second;
			int there_cost = p.first + here_cost;

			if (there_cost < distances[there]) {
				distances[there] = there_cost;
				pq.push(make_pair(there_cost, there));
			}
		}
	}
}

int main()
{
	sync;

	int V, E;
	cin >> V >> E;

	adj.resize(V + 1);
	distances.resize(V + 1, INF);

	int K; // start
	cin >> K;

	int u, v, w;
	for (int i = 0; i < E; i++) {
		cin >> u >> v >> w;
		adj[u].push_back(make_pair(w, v));
	}

	dijkstra(K);

	for (int i = 1; i < V + 1; i++) {
		if (distances[i] == INF) cout << "INF\n";
		else cout << distances[i] << '\n';
	}

	return 0;
}