#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq; // value, index
	vector<int> arr(N + 1);
	for (int i = 1; i < N + 1; i++) {
		cin >> arr[i];
		pq.push({arr[i], i});
	}

	int M;
	cin >> M;

	int query;
	while (M--) {
		cin >> query;

		if (query == 1) {
			int i, v;
			cin >> i >> v;

			arr[i] = v;
			pq.push({ v, i });
		}
		else if (query == 2) {
			pair<int, int> p;
			while (true) {
				p = pq.top();
				if (arr[p.second] == p.first) break;

				pq.pop();
			}
			cout << p.second << '\n';
		}
	}

	return 0;
}