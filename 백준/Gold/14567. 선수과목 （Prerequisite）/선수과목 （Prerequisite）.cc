#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<vector<int>> graph(N + 1); // 노드를 1번부터 쓰므로 N + 1
	vector<int> inDgree(N + 1, 0);
	vector<int> answer(N + 1);

	int u, v;
	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		graph[u].push_back(v);
		inDgree[v]++;
	}

	queue<int> q;
	for (int i = 1; i <= N; i++) {
		if (inDgree[i] == 0) {
			q.push(i);
			answer[i] = 1;
		}
	}

	for (int i = 0; i < N; i++) { // 1번부터 N번노드까지 N회반복
		int node = q.front();
		q.pop();
		
		for (int adj : graph[node]) {
			inDgree[adj]--;
			if (inDgree[adj] == 0) {
				q.push(adj);
				answer[adj] = answer[node] + 1;
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << answer[i] << ' ';
	}

	return 0;
}