#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

#define INF (2147483647 / 2)

void Floyd_Warshall(vector<vector<int>>& dis)
{	
	for (int k = 0; k < dis.size(); k++) {
		for (int i = 0; i < dis.size(); i++) {
			for (int j = 0; j < dis.size(); j++) {
				dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
			}
		}
	}
}

int main()
{
	sync;

	int N;
	cin >> N;

	vector<vector<int>> distances(N, vector<int>(N, 0));
	char input;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> input;
			if (input == 'N') distances[i][j] = (i == j) ? 0 : INF;
			else if (input == 'Y') distances[i][j] = 1;
		}
	}

	Floyd_Warshall(distances);

	int max = 0;
	for (int i = 0; i < N; i++) {
		int now = 0;
		for (int j = 0; j < N; j++) {
			if (distances[i][j] == 1 || distances[i][j] == 2) now += 1;
		}
		if (max < now) max = now;
	}

	cout << max;

	return 0;
}