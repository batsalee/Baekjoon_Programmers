#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<vector<int>> graph(N + 1); // 노드를 1번부터 쓰므로 N + 1
	vector<int> inDegree(N + 1, 0);
	vector<int> time(N + 1), answer(N + 1);

	for (int i = 1; i <= N; i++) {
		cin >> time[i];

		int pre;
		while (true) {
			cin >> pre;
			if (pre == -1) break;
			
			graph[pre].push_back(i);
			inDegree[i]++;
		}
	}
	answer = time;

	queue<int> q;
	for (int i = 1; i <= N; i++) {
		if (inDegree[i] == 0) q.push(i);
	}

	for (int i = 1; i <= N; i++) { // 1번부터 N번노드까지 N회반복
		int node = q.front();
		q.pop();

		for (int adj : graph[node]) {
			inDegree[adj]--;
			if (inDegree[adj] == 0) q.push(adj);

			answer[adj] = max(answer[adj], answer[node] + time[adj]);
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << answer[i] << '\n';
	}

	return 0;
}