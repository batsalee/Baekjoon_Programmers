#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<vector<int>> graph(N + 1); // 노드를 1번부터 쓰므로 N + 1
	vector<int> inDegree(N + 1, 0);

	int u, v;
	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		graph[u].push_back(v);
		inDegree[v]++;
	}

	priority_queue<int, vector<int>, greater<>> pq;
	for (int i = 1; i <= N; i++) {
		if (inDegree[i] == 0) pq.push(i);
	}

	for (int i = 0; i < N; i++) { // 1번부터 N번노드까지 N회반복
		int node = pq.top();
		pq.pop();
		cout << node << ' ';

		for (int adj : graph[node]) {
			inDegree[adj]--;
			if (inDegree[adj] == 0) pq.push(adj);
		}
	}

	return 0;
}