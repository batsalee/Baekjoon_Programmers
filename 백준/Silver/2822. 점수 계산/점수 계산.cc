#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	priority_queue<pair<int, int>> pq;
	int score;
	for (int i = 1; i <= 8; i++) {
		cin >> score;
		pq.push({ score, i });
	}

	set<int> s;
	int total = 0;
	for (int i = 0; i < 5; i++) {
		auto p = pq.top();
		pq.pop();

		total += p.first;
		s.insert(p.second);
	}

	cout << total << '\n';
	for (int i : s) {
		cout << i << ' ';
	}

	return 0;
}