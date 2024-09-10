#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (q.size()) {
		cout << q.front() << ' ';
		q.pop();

		if (q.empty()) break;
		q.push(q.front());
		q.pop();
	}

	return 0;
}