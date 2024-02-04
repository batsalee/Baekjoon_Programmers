#include <bits/stdc++.h>
using namespace std;

#define INF 2147483647
vector<vector<pair<int, int>>> adj;
vector<int> distances;
vector<int> parent;

vector<int> shortestPath(int v)
{
	vector<int> path;
	path.push_back(v);

	while (parent[v] != -1) {
		v = parent[v];
		path.push_back(v);
	}

	reverse(path.begin(), path.end());
	return path;
}

void dijkstra(int start)
{
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<> > pq;
	pq.push({0, start});
	distances[start] = 0;

	while (pq.size()) {
		int here = pq.top().second;
		int here_cost = pq.top().first;
		pq.pop();		
		if (here_cost > distances[here]) continue;

		for (auto p : adj[here]) {
			int there = p.second;
			int there_cost = p.first + here_cost;
			if (there_cost < distances[there]) {
				parent[there] = here;
				distances[there] = there_cost;				
				pq.push({ there_cost, there });
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	adj.resize(n + 1);
	distances.resize(n + 1, INF);
	parent.resize(n + 1, -1);

	int from, to, cost;
	for (int i = 0; i < m; i++) {
		cin >> from >> to >> cost;
		adj[from].push_back({cost, to});
	}

	int start, end;
	cin >> start >> end;

	dijkstra(start);

	cout << distances[end] << '\n';
	vector<int> path = shortestPath(end);
	cout << path.size() << '\n';
	for (int p : path) {
		cout << p << ' ';
	}
	
	return 0;
}