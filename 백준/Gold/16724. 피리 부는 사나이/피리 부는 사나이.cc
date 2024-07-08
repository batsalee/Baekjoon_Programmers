#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> graph;
vector<vector<int>> visited;

int answer;

void dfs(int y, int x)
{
	visited[y][x] = 1;

	int ny = y, nx = x;
	if (graph[y][x] == 'U') ny--;
	else if (graph[y][x] == 'D') ny++;
	else if (graph[y][x] == 'L') nx--;
	else if (graph[y][x] == 'R') nx++;

	if (visited[ny][nx] == 0) dfs(ny, nx);
	else if (visited[ny][nx] == 1) answer++;
	visited[y][x] = -1;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	graph.resize(N, vector<char>(M));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> graph[i][j];
		}
	}

	visited.resize(N, vector<int>(M, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if(visited[i][j] == 0) dfs(i, j);
		}
	}

	cout << answer;

	return 0;
}