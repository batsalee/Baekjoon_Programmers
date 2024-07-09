#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	while (T--) {
		int N, K;
		cin >> N >> K;

		vector<vector<int>> graph(N + 1); // 노드를 1번부터 쓰므로 N + 1
		vector<vector<int>> pre_work(N + 1);
		vector<int> time(N + 1);
		vector<int> inDegree(N + 1, 0);

		for (int i = 1; i <= N; i++) {
			cin >> time[i];
		}

		int before, after;
		for (int i = 0; i < K; i++) {
			cin >> before >> after;
			graph[before].push_back(after);
			pre_work[after].push_back(before);
			inDegree[after]++;
		}

		int W;
		cin >> W;

		queue<int> q;
		for (int i = 1; i <= N; i++) {
			if (inDegree[i] == 0) q.push(i);
		}

		for (int i = 0; i < N; i++) { // 1번부터 N번노드까지 N회반복
			int node = q.front();
			q.pop();

			int maximum = 0;
			for (int pw : pre_work[node]) {
				maximum = max(maximum, time[pw]);
			}
			time[node] += maximum;

			for (int adj : graph[node]) {
				inDegree[adj]--;
				if (inDegree[adj] == 0) q.push(adj);
			}
		}

		cout << time[W] << '\n';
	}

	return 0;
}