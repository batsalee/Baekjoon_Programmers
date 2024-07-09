#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<vector<int>> graph(N + 1);
	vector<int> inDegree(N + 1, 0);
	vector<bool> basic(N + 1, true);
	int X, Y, Z;
	for (int i = 0; i < M; i++) {
		cin >> X >> Y >> Z;
		basic[X] = false;
		while (Z--) {
			graph[Y].push_back(X);
			inDegree[X]++;
		}
	}

	vector<vector<int>> ingredient(N + 1, vector<int>(N + 1, 0));
	queue<int> q;
	for (int i = 1; i <= N; i++) {
		if (inDegree[i] == 0) {
			q.push(i);
			ingredient[i][i] = 1;
		}
	}

	for (int i = 0; i < N; i++) {
		int node = q.front();
		q.pop();

		for (int adj : graph[node]) {
			for (int j = 1; j <= N; j++) {
				ingredient[adj][j] += ingredient[node][j];
			}

			inDegree[adj]--;
			if (inDegree[adj] == 0) q.push(adj);
		}
	}
	
	for (int i = 1; i <= N; i++) {
		if (basic[i]) {
			cout << i << ' ' << ingredient[N][i] << '\n';
		}
	}
	
	return 0;
}