#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	const int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1};
	const int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1};

	int R, C;
	while (true) {
		cin >> R >> C;
		if (R == 0 && C == 0) break;

		vector<vector<char>> mine(R, vector<char>(C));
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				cin >> mine[i][j];
			}
		}

		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				if (mine[i][j] == '*') cout << '*';
				else {
					int count = 0;
					for (int k = 0; k < 8; k++) {
						if (i + dy[k] < 0 || i + dy[k] >= R || j + dx[k] < 0 || j + dx[k] >= C) continue;
						if (mine[i + dy[k]][j + dx[k]] == '*') count++;
					}
					cout << count;
				}
			}
			cout << '\n';
		}
	}

	return 0;
}