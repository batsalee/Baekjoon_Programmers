#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<vector<int>> graph(N + 1); // 노드를 1번부터 쓰므로 N + 1
	vector<int> time(N + 1);
	vector<int> inDgree(N + 1, 0);
	vector<vector<int>> pre_work(N + 1);

	int t, c;
	for (int i = 1; i <= N; i++) {
		cin >> t >> c;
		time[i] = t;

		int pre;
		for (int j = 0; j < c; j++) {
			cin >> pre;
			graph[pre].push_back(i);
			pre_work[i].push_back(pre);
			inDgree[i]++;
		}
	}

	queue<int> q;
	for (int i = 1; i <= N; i++) {
		if (inDgree[i] == 0) q.push(i);
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
			inDgree[adj]--;
			if (inDgree[adj] == 0) q.push(adj);
		}
	}

	cout << *max_element(time.begin(), time.end());

	return 0;
}