#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

std::vector<int> visited;
std::vector<std::vector<int>> adj;

void bfs(int u)
{
	static int order = 1;
	visited[u] = order++;

	std::queue<int> q;
	q.push(u);

	while (q.size()) {
		int here = q.front();
		q.pop();
		for (int there : adj[here]) {
			if (visited[there]) continue;

			visited[there] = order++;
			q.push(there);
		}
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int number_of_vertex, number_of_edge, start_vertex;
	std::cin >> number_of_vertex >> number_of_edge >> start_vertex;

	visited.resize(number_of_vertex + 1);
	adj.resize(number_of_vertex + 1);

	for (int i = 0; i < number_of_edge; i++) {
		int v, u;
		std::cin >> v >> u;
		adj[v].push_back(u);
		adj[u].push_back(v);
	}

	for (auto& a : adj) {
		sort(a.rbegin(), a.rend());
	}

	bfs(start_vertex);
	for (int i = 1; i <= number_of_vertex; i++) {
		std::cout << visited[i] << '\n';
	}
	
	return 0;
}