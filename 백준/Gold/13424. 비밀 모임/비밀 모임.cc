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

	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;

		vector<vector<int>> distances(N + 1, vector<int>(N + 1, INF));
		for (int i = 1; i < N + 1; i++) {
			distances[i][i] = 0;
		}

		int from, to, cost;
		while (M--) {
			cin >> from >> to >> cost;
			distances[from][to] = distances[to][from] = cost;
		}

		Floyd_Warshall(distances);

		int K;
		cin >> K;
		vector<int> where(K);
		for (int i = 0; i < K; i++) {
			cin >> where[i];
		}

		vector<int> dis_sum(N + 1, 0);		
		for (int i = 1; i < N + 1; i++) {
			for (int j = 0; j < K; j++) {
				dis_sum[i] += distances[where[j]][i];
			}
		}

		std::cout << min_element(dis_sum.begin() + 1, dis_sum.end()) - dis_sum.begin() << '\n';
	}
	return 0;
}