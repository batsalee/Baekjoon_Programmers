#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> maps) {
	const int INF = 2147483647;
	const int MAX_X = maps[0].size();
	const int MAX_Y = maps.size();

	vector<vector<int>> dist(MAX_Y, vector<int>(MAX_X, INF));
	queue<pair<int, int>> q;
	dist[0][0] = 0;
	q.push({0, 0});

	const int dy[] = { 0, 0, 1, -1 };
	const int dx[] = { 1, -1, 0, 0 };

	while (q.size()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (nx < 0 || nx >= MAX_X || ny < 0 || ny >= MAX_Y) continue;

			if (maps[ny][nx] == 1 && dist[ny][nx] > dist[y][x] + 1) {
				dist[ny][nx] = dist[y][x] + 1;
				q.push({ny, nx});
			}
		}		
	}
	
	return ((dist.back().back() == INF) ? -1 : dist.back().back() + 1);
}