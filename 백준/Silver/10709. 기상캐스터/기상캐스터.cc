#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int H, W;
	cin >> H >> W;

	vector<vector<char>> weather(H, vector<char>(W));
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> weather[i][j];
		}
	}

	for (int i = 0; i < H; i++) {
		int c = -1;
		for (int j = 0; j < W; j++) {
			if (weather[i][j] == 'c') {
				cout << 0 << ' ';
				c = j;
			}
			else if (weather[i][j] == '.') {
				if (c == -1) cout << -1 << ' ';
				else cout << j - c << ' ';
			}
		}
		cout << '\n';
	}

	return 0;
}