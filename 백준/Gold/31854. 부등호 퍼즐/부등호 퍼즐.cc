#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<vector<int>> graph(N * N);
	vector<int> inDegree(N * N, 0);

	char c;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			cin >> c;
			if (c == '>') {
				graph[i * N + j + 1].push_back(i * N + j);
				inDegree[i * N + j]++;
			}
			else if (c == '<') {
				graph[i * N + j].push_back(i * N + j + 1);
				inDegree[i * N + j + 1]++;
			}
		}
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N; j++) {
			cin >> c;
			if (c == '>') {
				graph[(i + 1) * N  + j].push_back(i * N + j);
				inDegree[i * N + j]++;
			}
			else if (c == '<') {
				graph[i * N + j].push_back((i + 1) * N + j);
				inDegree[(i + 1) * N + j]++;
			}
		}
	}

	queue<int> q;
	for (int i = 0; i < N * N; i++) {
		if (inDegree[i] == 0) q.push(i);
	}

	vector<vector<int>> answer(N, vector<int>(N));
	for (int i = 1; i <= N * N; i++) {
		int node = q.front();
		q.pop();
		answer[node / N][node % N] = i;

		for (int adj : graph[node]) {
			inDegree[adj]--;
			if (inDegree[adj] == 0) q.push(adj);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << answer[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}