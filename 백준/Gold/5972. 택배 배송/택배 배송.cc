#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

#define INF 2147483647

vector<int> distances;
vector<vector<pair<int, int>>> adj;

void dijkstra() {
	std::priority_queue< std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<> > pq;

	distances[1] = 0;
	pq.push(std::make_pair(0, 1));

	while (!pq.empty()) {
		int here = pq.top().second;
		int hereCost = pq.top().first;
		pq.pop();

		for (int i = 0; i < adj[here].size(); i++) {
			int there = adj[here][i].second;
			int thereCost = hereCost + adj[here][i].first;
			if (thereCost < distances[there]) {
				distances[there] = thereCost;
				pq.push(std::make_pair(thereCost, there));			
			}
		}
	}
}

int main()
{
	sync;
	
	int N, M;
	cin >> N >> M;

	distances.resize(N + 1, INF);
	adj.resize(N + 1);

	int from, to, cost;
	for (int i = 0; i < M; i++) {
		cin >> from >> to >> cost;
		adj[from].push_back(make_pair(cost, to));
		adj[to].push_back(make_pair(cost, from));
	}

	dijkstra();
	cout << distances[N];

	return 0;
}