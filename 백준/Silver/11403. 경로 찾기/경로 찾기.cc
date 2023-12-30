#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

#define INF 2147483647/2

void Floyd_Warshall(int N, vector<vector<int>>& distance)
{
	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j]);
			}
		}
	}
}

int main()
{
	sync;
	
	int N;
	cin >> N;

	int dis;
	vector<vector<int>> distance(N, vector<int>(N, INF));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> dis;
			if (dis == 1) distance[i][j] = 1;
		}
	}
	
	Floyd_Warshall(N, distance);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if(distance[i][j] != INF) cout << 1 << ' ';
			else cout << 0 << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}