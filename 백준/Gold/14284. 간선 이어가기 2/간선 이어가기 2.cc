#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

#define INF 2147483647

vector<int> distances;
vector<vector<pair<int, int>>> adj;

int dijkstra(int start, int end) {
	std::priority_queue< std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<> > pq;
	distances[start] = 0;
	pq.push(make_pair(0, start));

	while (pq.size()) {
		int here = pq.top().second;
		int here_cost = pq.top().first;
		pq.pop();

		for (auto& p : adj[here]) {
			int there = p.second;
			int there_cost = here_cost + p.first;

			if (there_cost < distances[there]) {
				distances[there] = there_cost;
				pq.push(make_pair(there_cost, there));
			}
		}
	}

	return distances[end];
}

int main()
{
	sync;

	int n, m;
	cin >> n >> m;

	adj.resize(n + 1);
	distances.resize(n + 1, INF);	

	int a, b, c;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		adj[a].push_back(make_pair(c, b));
		adj[b].push_back(make_pair(c, a));
	}

	int s, t;
	cin >> s >> t;
	cout << dijkstra(s, t);
	
	return 0;
}