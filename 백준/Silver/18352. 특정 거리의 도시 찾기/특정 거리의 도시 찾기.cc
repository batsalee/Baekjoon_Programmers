#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void BFS(vector<vector<int>>& adj, vector<int>& distances, int X)
{
	queue<int> q;
	distances[X] = 0;
	q.push(X);

	while (q.size()) {
		int here = q.front();
		q.pop();

		for (int there : adj[here]) {
			if (distances[there] == -1) {
				distances[there] = distances[here] + 1;
				q.push(there);
			}
		}
	}
}

int main()
{
	sync;

	int N, M, K, X;
	cin >> N >> M >> K >> X;

	vector<vector<int>> adj(N + 1);
	vector<int> distances(N + 1, -1);

	int A, B;
	for (int i = 0; i < M; i++) {
		cin >> A >> B;
		adj[A].push_back(B);
	}

	BFS(adj, distances, X);

	bool flag = true;
	for (int i = 1; i < N + 1; i++) {
		if (distances[i] == K) {
			cout << i << '\n';
			flag = false;
		}
	}
	if (flag) cout << -1;

	return 0;
}