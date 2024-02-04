#include <bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<vector<int>> adj;

void dfs(int start)
{
	int here = start;
	for (int there : adj[here]) {
		if (parent[there] == -1) {
			parent[there] = here;
			dfs(there);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	adj.resize(N + 1);
	parent.resize(N + 1, -1);
	parent[1] = 1;

	int v, u;
	for (int i = 0; i < N - 1; i++) {
		cin >> v >> u;
		adj[v].push_back(u);
		adj[u].push_back(v);
	}

	dfs(1);

	for (int i = 2; i < N + 1; i++) {
		cout << parent[i] << '\n';
	}

	return 0;
}