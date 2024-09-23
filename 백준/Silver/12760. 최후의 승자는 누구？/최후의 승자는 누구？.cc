#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<priority_queue<int>> pq(N);
	int input;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> input;
			pq[i].push(input);
		}
	}

	vector<int> score(N, 0);
	for (int i = 0; i < M; i++) {
		int now_max = 0;
		for (int j = 0; j < N; j++) {
			now_max = max(now_max, pq[j].top());
		}
		
		for (int j = 0; j < N; j++) {
			if (pq[j].top() == now_max) score[j]++;
			pq[j].pop();
		}
	}

	int highest = *max_element(score.begin(), score.end());
	for (int i = 0; i < N; i++) {
		if (score[i] == highest) cout << i + 1 << ' ';
	}

	return 0;
}