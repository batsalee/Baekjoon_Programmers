#include <iostream>
#include <set>

int visited[100001];
std::set<int> graph[100001];

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

	for (int i = 0; i < number_of_edge; i++) {
		int v, u;
		std::cin >> v >> u;
		graph[v].insert(u);
		graph[u].insert(v);
	}

	dfs(start_vertex);
	for (int i = 1; i <= number_of_vertex; i++) {
		std::cout << visited[i] << '\n';
	}
	
	return 0;
}