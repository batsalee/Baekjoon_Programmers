#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	while (T--) {
		int N, M;
		cin >> N >> M;
				
		queue<pair<int, int>> q;
		priority_queue<pair<int, int>> pq;
		int importance;
		for (int i = 0; i < N; i++) {
			cin >> importance;
			q.push({ importance , i });
			pq.push({ importance , i });
		}

		int count = 0;
		while (!pq.empty()) {		
			if (pq.top().first == q.front().first) {
				count++;
				if (q.front().second == M) {
					cout << count << '\n';
					break;
				}
				else {
					q.pop();
					pq.pop();
				}
			}
			else {
				q.push(q.front());
				q.pop();
			}
		}
	}

	return 0;
}