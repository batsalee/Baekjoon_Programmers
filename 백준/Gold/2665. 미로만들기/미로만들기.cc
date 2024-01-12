#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

#define INF 2500

vector<vector<int>> room;
vector<vector<int>> distances;

const int coo_x[] = { -1, 0, 1, 0 };
const int coo_y[] = { 0, -1, 0, 1 };

void bfs()
{
	queue<pair<int, int>> q;		
	distances[0][0] = 0;
	q.push(make_pair(0, 0));

	while (q.size()) {
		int here_x = q.front().first;
		int here_y = q.front().second;
		q.pop();

		for (int k = 0; k < 4; k++) {
			int there_x = here_x + coo_x[k];
			int there_y = here_y + coo_y[k];

			if (there_x < 0 || there_x >= room.size() || there_y < 0 || there_y >= room.size()) continue;
			if (distances[there_x][there_y] > distances[here_x][here_y] + room[there_x][there_y]) {
				distances[there_x][there_y] = distances[here_x][here_y] + room[there_x][there_y];
				q.push(make_pair(there_x, there_y));
			}
		}
	}
}

int main()
{
	sync;

	int n;
	cin >> n;

	room.resize(n, vector<int>(n));
	distances.resize(n, vector<int>(n, INF));

	char c;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> c;
			if (c == '1') room[i][j] = 0;
			else if (c == '0') room[i][j] = 1;
		}
	}

	bfs();
	cout << distances[distances.size() - 1][distances.size() - 1];

	return 0;
}