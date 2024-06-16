#include<bits/stdc++.h>
using namespace std;

int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };

int N, M, group;

vector<vector<int>> arr;
vector<vector<int>> group_arr;

vector<vector<bool>> visited;

vector<pair<int, int>> group_vec;
vector<int> group_count;

void dfs(int y, int x)
{
    visited[y][x] = true;
    group_vec.push_back({ y, x });

    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;

        if (arr[ny][nx] == 0 && !visited[ny][nx]) {
            dfs(ny, nx);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    cin >> N >> M;
    arr.resize(N, vector<int>(M, 0));
    group_arr.resize(N, vector<int>(M, -1));
    visited.resize(N, vector<bool>(M, false));    

    for (int i = 0; i < N; i++) { // 입력받고
        for (int j = 0; j < M; j++) {
            char c;
            cin >> c;
            arr[i][j] = c - '0';
        }
    }

    for (int i = 0; i < N; i++) { // 0인 그룹 만들기
        for (int j = 0; j < M; j++) {
            if (arr[i][j] == 0 && !visited[i][j]) {
                dfs(i, j);                              
                group_count.push_back(group_vec.size());
                for (auto p : group_vec) {
                    group_arr[p.first][p.second] = group;
                }
                group_vec.clear();

                group++;
            }
        }
    }
    
    vector<vector<int>> result(N, vector<int>(M, 0));
    for (int i = 0; i < N; i++) { // 1인 값들 탐색
        for (int j = 0; j < M; j++) {
            if (arr[i][j] == 1) {
                set<int> check_group;
                for (int k = 0; k < 4; k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
					if (nx >= 0 && ny >= 0 && nx < N && ny < M) {
						if (arr[nx][ny] == 0) {
							if (check_group.find(group_arr[nx][ny]) == check_group.end()) {
								check_group.insert(group_arr[nx][ny]);
								result[i][j] += group_count[group_arr[nx][ny]];
							}
						}
					}
				}	
                result[i][j] += 1; // 본인자리 1 추가
            }
        }
    }
    
    for (int i = 0; i < N; i++) { // 출력
        for (int j = 0; j < M; j++) {
            cout << result[i][j] % 10;
        }
        cout << '\n';
    }
    
    return 0;
}