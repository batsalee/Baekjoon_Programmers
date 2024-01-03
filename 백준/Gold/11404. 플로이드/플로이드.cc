#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

#define INF (2147483647 / 2)

void Floyd_Warshall(vector<vector<int>>& dis)
{	
	for (int k = 1; k < dis.size(); k++) {
		for (int i = 1; i < dis.size(); i++) {
			for (int j = 1; j < dis.size(); j++) {
				dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
			}
		}
	}
}

int main()
{
	sync;

	int n, m;
	cin >> n >> m;

	vector<vector<int>> distances(n + 1, vector<int>(n + 1, INF));
	for (int i = 1; i < n + 1; i++) {
		distances[i][i] = 0;
	}

	int from, to, cost;
	while (m--) {		
		cin >> from >> to >> cost;
		distances[from][to] = min(distances[from][to], cost);
	}

	Floyd_Warshall(distances);

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < n + 1; j++) {
			if(distances[i][j] != INF) cout << distances[i][j] << ' ';
			else cout << 0 << ' ';
		}
		cout << '\n';
	}

	return 0;
}