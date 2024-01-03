#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

#define INF (2147483647 / 2)

void Floyd_Warshall(vector<vector<int>>& dis)
{	
	for (int k = 1; k < dis.size(); k++) {
		for (int i = 1; i < dis.size(); i++) {
			for (int j = 1; j < dis.size(); j++) {
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

	vector<vector<int>> distances(N + 1, vector<int>(N + 1, INF));
	for (int i = 1; i < N + 1; i++) {
		distances[i][i] = 0;
	}

	int from, to;
	while (true) {
		cin >> from >> to;
		if (from == -1 && to == -1) break;

		distances[from][to] = distances[to][from] = 1;
	}

	Floyd_Warshall(distances);

	vector<int> friends(N + 1, 0);
	for (int i = 1; i < N + 1; i++) {
		friends[i] = *max_element(distances[i].begin() + 1, distances[i].end());
	}

	// 가장 낮은 점수
	int min_score = *min_element(friends.begin() + 1, friends.end());
	vector<int> candidate;
	for (int i = 1; i < N + 1; i++) {
		if (friends[i] == min_score) candidate.push_back(i);
	}

	// 출력
	cout << min_score << ' ' << candidate.size() << '\n';
	for (int& c : candidate) {
		cout << c << ' ';
	}

	return 0;
}