#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

std::vector<bool> visited;
std::vector<std::vector<int>> adj;

void dfs(int u)
{
	visited[u] = true;
	std::cout << u << ' ';

	for (int v : adj[u]) {
		if (!visited[v]) dfs(v);
	}
}

void bfs(int u)
{
	visited[u] = true;
	std::cout << u << ' ';
	
	std::queue<int> q;
	q.push(u);

	while (q.size()) {
		int here = q.front();
		q.pop();
		for (int there : adj[here]) {
			if (visited[there]) continue;

			visited[there] = true;
			std::cout << there << ' ';
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

	int u, v;
	for (int i = 0; i < number_of_edge; i++) {
		std::cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (auto& a : adj) {
		sort(a.begin(), a.end());
	}

	dfs(start_vertex);

	fill(visited.begin(), visited.end(), false);
	std::cout << '\n';
	bfs(start_vertex);

	return 0;
}