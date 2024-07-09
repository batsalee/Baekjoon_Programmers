#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<vector<int>> graph(N + 1); // 노드를 1번부터 쓰므로 N + 1
	vector<int> inDegree(N + 1, 0);

	int c;
	for (int i = 0; i < M; i++) {
		cin >> c;
		vector<int> temp;
		int t;
		for (int j = 0; j < c; j++) {
			cin >> t;
			temp.push_back(t);
		}
		for (int j = 0; j < c - 1; j++) {
			graph[temp[j]].push_back(temp[j + 1]);
			inDegree[temp[j + 1]]++;
		}		
	}

	queue<int> q;
	for (int i = 1; i <= N; i++) {
		if (inDegree[i] == 0) q.push(i);
	}

	vector<int> answer;
	for (int i = 0; i < N; i++) { // 1번부터 N번노드까지 N회반복
		if (q.empty()) {
			cout << 0;
			return 0;
		}

		int node = q.front();
		q.pop();
		answer.push_back(node);

		for (int adj : graph[node]) {
			inDegree[adj]--;
			if (inDegree[adj] == 0) q.push(adj);
		}
	}

	for (int a : answer) { cout << a << '\n'; }

	return 0;
}