#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> arr;
vector<vector<bool>> visited;
int M, N, K;

int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };

void dfs(int y, int x) 
{
	visited[y][x] = true;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
		if (arr[ny][nx] == 1 && !visited[ny][nx]) {
			dfs(ny, nx);
		}
	}
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	while (T--) {
		cin >> M >> N >> K;

		arr.assign(N, vector<int>(M, 0));
		visited.assign(N, vector<bool>(M, false));

		int x, y;
		while (K--) {
			cin >> x >> y;
			arr[y][x] = 1;
		}

		int result = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (arr[i][j] == 1 && !visited[i][j]) {
					result++;
					dfs(i, j);
				}
			}
		}
		cout << result << '\n';
	}

    return 0;
}