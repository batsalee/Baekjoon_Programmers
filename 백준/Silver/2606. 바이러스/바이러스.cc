#include <iostream>
#include <vector>

std::vector<bool> visited(101);
std::vector<std::vector<int>> adj(101);

void dfs(int u, int& a)
{
	visited[u] = true;
	
	for (int v : adj[u]) {
		if (!visited[v]) {
			a++;
			dfs(v, a);
		}
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int number_of_computer;
	std::cin >> number_of_computer; // number of vertex

	int number_of_network;
	std::cin >> number_of_network; // number of edge

	int v, u;
	for (int i = 0; i < number_of_network; i++) {
		std::cin >> v >> u;
		adj[v].push_back(u);
		adj[u].push_back(v);
	}

	int answer = 0;
	dfs(1, answer);
	std::cout << answer;

	return 0;
}