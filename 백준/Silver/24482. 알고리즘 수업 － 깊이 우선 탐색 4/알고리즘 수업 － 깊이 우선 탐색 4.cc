#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> visited;
std::vector<std::vector<int>> adj;

void fast()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
}

void dfs(int u, int depth)
{
	visited[u] = depth;

	for (int v : adj[u]) {
		if (visited[v] == -1) dfs(v, depth + 1);
	}
}

int main()
{
	fast();

	int N, M, R; // 정점의 수 N, 간선의 수 M, 시작정점 R
	std::cin >> N >> M >> R;
	visited.resize(N + 1, -1);
	adj.resize(N + 1);

	int u, v;
	for (int i = 0; i < M; i++) {
		std::cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	// 내림차순 정렬
	for (int i = 1; i <= N; i++) {
		sort(adj[i].rbegin(), adj[i].rend());
	}

	dfs(R, 0);

	for (int i = 1; i <= N; i++) {
		std::cout << visited[i] << '\n';
	}

	return 0;
}