#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

#define INF 2147483647

void Floyd_Warshall(int nov, vector<vector<int>>& dis)
{
	for (int k = 1; k < nov; k++) {
		for (int i = 1; i < nov; i++) {
			for (int j = 1; j < nov; j++) {
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

	vector<vector<int>> distances(N + 1, vector<int>(N + 1, INF / 2));
	for (int i = 1; i < N + 1; i++) {
		distances[i][i] = 0;
	}

	int A, B;
	while (M--) {
		cin >> A >> B;
		distances[A][B] = 1;
		distances[B][A] = 1;
	}

	Floyd_Warshall(N + 1, distances);

	vector<int> kevin_bacon(N + 1);
	for (int i = 1; i < N + 1; i++) {
		kevin_bacon[i] = accumulate(distances[i].begin() + 1, distances[i].end(), 0);
	}

	cout << min_element(kevin_bacon.begin() + 1, kevin_bacon.end()) - kevin_bacon.begin();
	
	return 0;
}