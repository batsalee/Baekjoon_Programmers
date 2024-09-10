#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	while (T--) {
		int J, N;
		cin >> J >> N;

		priority_queue<int> pq;
		int R, C;
		while (N--) {
			cin >> R >> C;
			pq.push(R * C);
		}

		int result = 0;
		while (J > 0) {
			J -= pq.top();
			pq.pop();
			result++;
		}

		cout << result << '\n';
	}

	return 0;
}