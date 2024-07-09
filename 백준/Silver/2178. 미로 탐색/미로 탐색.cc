#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> maze;
vector<vector<bool>> visited;
vector<vector<int>> dist;

int N, M;
int dy[] = { 0, 0, 1, -1 };
int dx[] = { 1, -1, 0, 0 };

void bfs(int y, int x)
{
	queue<pair<int, int>> q;

	visited[y][x] = true;	
	q.push({ y, x });
	dist[y][x] = 1;

	while (q.size()) {
		pair<int, int> p = q.front();
		q.pop();
		
		for (int i = 0; i < 4; i++) {
			int ny = p.first + dy[i];
			int nx = p.second + dx[i];

			if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;

			if (maze[ny][nx] == '1' && !visited[ny][nx]) {
				visited[ny][nx] = true;
				q.push({ ny, nx });

				dist[ny][nx] = dist[p.first][p.second] + 1;
			}
		}
	}	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	cin >> N >> M;

	maze.resize(N, vector<char>(M));
	visited.resize(N, vector<bool>(M, false));
	dist.resize(N, vector<int>(M, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> maze[i][j];
		}
	}

	bfs(0, 0);
	cout << dist[N - 1][M - 1];

	return 0;
}
