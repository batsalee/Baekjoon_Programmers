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

	int N, M;
	cin >> N >> M;

	vector<vector<int>> distances(N + 1, vector<int>(N + 1, INF));
	for (int i = 1; i < N + 1; i++) {
		for (int j = 1; j < N + 1; j++) {
			cin >> distances[i][j];
		}		
	}

	Floyd_Warshall(distances);

	int A, B, C;
	while (M--) {
		cin >> A >> B >> C;
		if (distances[A][B] <= C) cout << "Enjoy other party" << '\n';
		else cout << "Stay here" << '\n';
	}

	return 0;
}