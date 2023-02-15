#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> visited;
std::vector<std::vector<int>> graph;

void dfs(int u)
{
	static int order = 1;
	visited[u] = order++;
	for (int v : graph[u]) {
		if (visited[v] == 0) dfs(v);
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int number_of_vertex, number_of_edge, start_vertex;
	std::cin >> number_of_vertex >> number_of_edge >> start_vertex;

	visited.resize(number_of_vertex + 1);
	graph.resize(number_of_vertex + 1);

	for (int i = 0; i < number_of_edge; i++) {
		int v, u;
		std::cin >> v >> u;
		graph[v].push_back(u);
		graph[u].push_back(v);
	}

	for (auto& g : graph) {
		sort(g.rbegin(), g.rend());
	}

	dfs(start_vertex);
	for (int i = 1; i <= number_of_vertex; i++) {
		std::cout << visited[i] << '\n';
	}
	
	return 0;
}